
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AI;

public class CTRL_Rider : MonoBehaviour
{
    public enum RiderState
    {
        Idle,
        WalkToShelf,
        Collect,
        WalkToExit,
        Delivering,
        Return
    }

    public RiderState CurrentState = RiderState.Idle;

    [Header("Rider")]
    [SerializeField] private NavMeshAgent riderNavMeshAgent;
    [SerializeField] private Transform riderTransform;

    private Renderer[] riderRenderers;
    private Coroutine deliveryRoutine;

    [Header("Timing")]
    [SerializeField] private float collectPause = 1f;
    [SerializeField] private float deliveryPause = 15f;

    [Header("Stuck Safety")]
    [Tooltip("Seconds without getting closer to the target before the rider is moved there.")]
    [SerializeField] private float stuckTimeout = 3f;
    [Tooltip("Maximum seconds for one walk before the rider is moved to its target.")]
    [SerializeField] private float maxMoveTime = 25f;

    [Header("Navigation")]
    [SerializeField] private Transform exitLocation;

    private Vector3 returnPosition;

    [Header("Walking Bob")]
    [SerializeField] private float bobHeight = 0.05f;
    [SerializeField] private float bobFrequency = 8f;

    private Vector3 originalLocalPosition;
    private Transform riderBagTransform;
    private Vector3 bagOriginalLocalPosition;

    private OrderData currentOrder;
    private List<string> currentShelfIDs;
    private bool isRegistered;

    private void Awake()
    {
        if (riderNavMeshAgent == null)
        {
            riderNavMeshAgent = GetComponent<NavMeshAgent>();
        }

        if (riderTransform == null)
        {
            riderTransform = transform;
        }

        if (riderNavMeshAgent != null)
        {
            riderNavMeshAgent.speed = 3f;
            riderNavMeshAgent.updatePosition = true;
            riderNavMeshAgent.enabled = false;
        }

        returnPosition = transform.position;
        originalLocalPosition = riderTransform.localPosition;
        riderBagTransform = transform.Find("SM_Rider_Bag");
        if (riderBagTransform != null)
            bagOriginalLocalPosition = riderBagTransform.localPosition;

        riderRenderers = GetComponentsInChildren<Renderer>(true);
    }

    private void OnEnable()
    {
        MGR_Delivery.OnRiderDispatched += HandleRiderDispatched;
    }

    private bool PlaceOnNavMesh()
    {
        if (riderNavMeshAgent == null)
        {
            Debug.LogError("CTRL_Rider: NavMeshAgent is missing.");
            return false;
        }

        // The agent must be disabled before moving it to a valid position.
        if (riderNavMeshAgent.enabled)
        {
            riderNavMeshAgent.enabled = false;
        }

        Vector3 requestedPosition = transform.position;

        if (!NavMesh.SamplePosition(requestedPosition, out NavMeshHit hit, 10f, NavMesh.AllAreas))
        {
            Debug.LogError($"CTRL_Rider: No NavMesh found within 10m of {requestedPosition}. " + "Check the rider spawn position and baked NavMesh.");
            return false;
        }

        // Move the rider onto the sampled NavMesh position first.
        transform.position = hit.position;

        riderNavMeshAgent.enabled = true;

        if (!riderNavMeshAgent.isOnNavMesh)
        {
            Debug.LogError($"CTRL_Rider: Agent is not on NavMesh at {hit.position}.");

            riderNavMeshAgent.enabled = false;
            return false;
        }

        riderNavMeshAgent.ResetPath();
        riderNavMeshAgent.isStopped = true;

        return true;
    }

    private void OnDisable()
    {
        MGR_Delivery.OnRiderDispatched -= HandleRiderDispatched;

        // A rider switched off mid-delivery must not keep its order reserved.
        if (currentOrder != null && MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.NotifyRiderReturned(this);
        }

        currentOrder = null;
        currentShelfIDs = null;
        deliveryRoutine = null;
        CurrentState = RiderState.Idle;

        if (isRegistered && MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.UnregisterRider(this);
            isRegistered = false;
        }
    }

    private void HandleRiderDispatched(CTRL_Rider rider, OrderData order, List<string> shelvesToVisit)
    {
        if (rider != this)
        {
            return;
        }

        if (CurrentState != RiderState.Idle || riderNavMeshAgent == null)
        {
            // The order was already reserved for this rider: give it back
            // so it does not stay reserved forever.
            Debug.LogWarning(
                $"CTRL_Rider: {name} got Order #{order?.OrderID} while {CurrentState}. Returning the order to the queue."
            );

            if (MGR_Delivery.Instance != null)
            {
                MGR_Delivery.Instance.ReleaseDispatchedOrder(this);
            }

            return;
        }

        if (!PlaceOnNavMesh())
        {
            Debug.LogError(
                "CTRL_Rider: Dispatch aborted because the rider could not be placed on the NavMesh."
            );

            CancelDelivery("Rider could not be placed on the NavMesh.");
            return;
        }

        returnPosition = transform.position;
        currentOrder = order;
        currentShelfIDs = new List<string>(shelvesToVisit);

        deliveryRoutine = StartCoroutine(DeliverOrder());
    }

    private Transform FindShelf(string shelfID)
    {
        if (MGR_Inventory.Instance == null)
        {
            Debug.LogWarning("CTRL_Rider: MGR_Inventory instance is missing.");
            return null;
        }

        return MGR_Inventory.Instance.GetAccessPoint(shelfID);
    }




    private IEnumerator MoveTo(Vector3 destination)
    {
        // Stop if the delivery has already been cancelled.
        if (currentOrder == null)
        {
            yield break;
        }

        // Check whether the NavMeshAgent exists.
        if (riderNavMeshAgent == null)
        {
            CancelDelivery("NavMeshAgent is missing.");
            yield break;
        }

        // Restore the agent if it is disabled or not on the NavMesh.
        if (!riderNavMeshAgent.enabled || !riderNavMeshAgent.isOnNavMesh)
        {
            if (!PlaceOnNavMesh())
            {
                CancelDelivery("Rider could not be placed on NavMesh before movement.");
                yield break;
            }
        }

        riderNavMeshAgent.isStopped = false;
        riderNavMeshAgent.speed = 3f;

        // Try to set the destination.
        if (!riderNavMeshAgent.SetDestination(destination))
        {
            Debug.LogWarning(
                $"CTRL_Rider: {name} could not set destination {destination}. Using fallback."
            );

            WarpTo(destination);
            yield break;
        }

        float elapsed = 0f;
        float lastProgressTime = 0f;
        float bestDistance = float.MaxValue;

        while (true)
        {
            // Stop movement if the delivery was cancelled.
            if (currentOrder == null)
            {
                yield break;
            }

            // Ensure the agent remains valid during movement.
            if (riderNavMeshAgent == null ||
                !riderNavMeshAgent.enabled ||
                !riderNavMeshAgent.isOnNavMesh)
            {
                CancelDelivery("Rider lost its NavMesh during movement.");
                yield break;
            }


            if (!riderNavMeshAgent.pathPending)
            {
                // Check whether Unity's calculated path actually reaches
                // the requested destination.
                float pathEndDistance = FlatDistance(
                    riderNavMeshAgent.pathEndPosition,
                    destination
                );

                float destinationTolerance =
                    Mathf.Max(riderNavMeshAgent.stoppingDistance, 0.5f) + 0.05f;

                if (riderNavMeshAgent.pathStatus != NavMeshPathStatus.PathComplete ||
                    pathEndDistance > destinationTolerance)
                {
                    Debug.LogWarning(
                        $"CTRL_Rider: {name} could not reach the exact destination. " +
                        $"Path Status: {riderNavMeshAgent.pathStatus}, " +
                        $"Path End Distance: {pathEndDistance:F2}m. Using fallback."
                    );

                    WarpTo(destination);
                    break;
                }

                float remaining = riderNavMeshAgent.remainingDistance;
                float arriveDistance = riderNavMeshAgent.stoppingDistance + 0.05f;

                if (!riderNavMeshAgent.hasPath || float.IsInfinity(remaining))
                {
                    remaining = FlatDistance(transform.position, destination);
                    arriveDistance =
                        Mathf.Max(riderNavMeshAgent.stoppingDistance, 0.5f) + 0.05f;
                }

                // Destination reached.
                if (remaining <= arriveDistance)
                {
                    break;
                }

                // Track movement progress.
                if (remaining < bestDistance - 0.1f)
                {
                    bestDistance = remaining;
                    lastProgressTime = elapsed;
                }
            }

            // Rider is stuck or has exceeded the maximum movement time.
            if (elapsed - lastProgressTime > stuckTimeout ||
                elapsed > maxMoveTime)
            {
                Debug.LogWarning(
                    $"CTRL_Rider: {name} stopped getting closer while {CurrentState} " +
                    $"({elapsed:F1}s). Moving it to its target."
                );

                WarpTo(destination);
                break;
            }

            elapsed += Time.deltaTime;
            yield return null;
        }

        // Stop the agent only when it is enabled and on the NavMesh.
        if (riderNavMeshAgent != null &&
            riderNavMeshAgent.enabled &&
            riderNavMeshAgent.isOnNavMesh)
        {
            riderNavMeshAgent.isStopped = true;
        }
    }

    private void WarpTo(Vector3 destination)
    {
        if (!NavMesh.SamplePosition(
            destination,
            out NavMeshHit hit,
            2f,
            NavMesh.AllAreas))
        {
            Debug.LogWarning(
                $"CTRL_Rider: Could not find NavMesh near destination {destination}. Moving rider directly to target."
            );

            if (riderNavMeshAgent != null &&
                riderNavMeshAgent.enabled)
            {
                riderNavMeshAgent.enabled = false;
            }

            transform.position = destination;
            return;
        }

        if (riderNavMeshAgent != null &&
            riderNavMeshAgent.enabled &&
            riderNavMeshAgent.isOnNavMesh)
        {
            bool warped = riderNavMeshAgent.Warp(hit.position);

            if (!warped)
            {
                Debug.LogWarning(
                    $"CTRL_Rider: Warp failed for {name} at {hit.position}. Moving rider directly to target."
                );

                riderNavMeshAgent.enabled = false;
                transform.position = hit.position;
                return;
            }

            riderNavMeshAgent.ResetPath();
            riderNavMeshAgent.isStopped = true;
        }
        else
        {
            if (riderNavMeshAgent != null &&
                riderNavMeshAgent.enabled)
            {
                riderNavMeshAgent.enabled = false;
            }

            transform.position = hit.position;
        }
    }

    private static float FlatDistance(Vector3 a, Vector3 b)
    {
        a.y = 0f;
        b.y = 0f;
        return Vector3.Distance(a, b);
    }

    private IEnumerator DeliverOrder()
    {
        foreach (string shelfID in currentShelfIDs)
        {
            Transform shelf = FindShelf(shelfID);

            if (shelf == null)
            {
                CancelDelivery($"No access point found for {shelfID}.");
                yield break;
            }

            CurrentState = RiderState.WalkToShelf;
            yield return MoveTo(shelf.position);

            if (currentOrder == null)
            {
                yield break;
            }

            CurrentState = RiderState.Collect;
            yield return new WaitForSeconds(collectPause);
        }

        CurrentState = RiderState.WalkToExit;

        if (exitLocation == null)
        {
            GameObject exitObject = GameObject.Find("SPW_RiderExit");

            if (exitObject != null)
            {
                exitLocation = exitObject.transform;
            }
        }

        if (exitLocation == null)
        {
            CancelDelivery("SPW_RiderExit was not found.");
            yield break;
        }

        yield return MoveTo(exitLocation.position);

        if (currentOrder == null)
        {
            yield break;
        }

        if (MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.NotifyRiderLeft(this);
        }

        CurrentState = RiderState.Delivering;
        if (riderNavMeshAgent != null &&
            riderNavMeshAgent.enabled &&
            riderNavMeshAgent.isOnNavMesh)
        {
            riderNavMeshAgent.isStopped = true;
        }

        SetRiderVisible(false);

        yield return new WaitForSeconds(deliveryPause);

        SetRiderVisible(true);

        CurrentState = RiderState.Return;
        yield return MoveTo(returnPosition);

        if (currentOrder == null)
        {
            yield break;
        }

        if (riderNavMeshAgent != null &&
            riderNavMeshAgent.enabled &&
            riderNavMeshAgent.isOnNavMesh)
        {
            riderNavMeshAgent.isStopped = true;
        }

        if (MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.NotifyRiderReturned(this);
        }

        currentOrder = null;
        currentShelfIDs = null;
        CurrentState = RiderState.Idle;
        deliveryRoutine = null;
    }

    public void ReturnAfterDeliveryTimeout()
    {
        if (deliveryRoutine != null)
        {
            StopCoroutine(deliveryRoutine);
            deliveryRoutine = null;
        }

        SetRiderVisible(true);

        if (riderNavMeshAgent != null &&
            riderNavMeshAgent.enabled &&
            riderNavMeshAgent.isOnNavMesh)
        {
            riderNavMeshAgent.isStopped = true;
            riderNavMeshAgent.ResetPath();
        }

        StartCoroutine(ReturnAfterTimeout());
    }

    private IEnumerator ReturnAfterTimeout()
    {
        CurrentState = RiderState.Return;

        yield return MoveTo(returnPosition);

        if (currentOrder == null)
        {
            yield break;
        }

        if (riderNavMeshAgent != null &&
            riderNavMeshAgent.enabled &&
            riderNavMeshAgent.isOnNavMesh)
        {
            riderNavMeshAgent.isStopped = true;
        }

        currentOrder = null;
        currentShelfIDs = null;
        CurrentState = RiderState.Idle;
    }

    private void CancelDelivery(string reason)
    {
        Debug.LogWarning($"CTRL_Rider: {reason} Cancelling delivery.");

        if (riderNavMeshAgent != null && riderNavMeshAgent.enabled && riderNavMeshAgent.isOnNavMesh)
        {
            riderNavMeshAgent.isStopped = true;
            riderNavMeshAgent.ResetPath();
        }

        SetRiderVisible(true);

        currentOrder = null;
        currentShelfIDs = null;

        CurrentState = RiderState.Idle;
        deliveryRoutine = null;

        // Release the order so it can be dispatched again.
        if (MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.NotifyRiderReturned(this);
        }
    }

    private void SetRiderVisible(bool visible)
    {
        if (riderRenderers == null)
        {
            return;
        }

        foreach (Renderer riderRenderer in riderRenderers)
        {
            if (riderRenderer != null)
            {
                riderRenderer.enabled = visible;
            }
        }
    }

    private void UpdateWalkingBob()
    {
        if (riderTransform == null)
            return;

        bool walking =
            CurrentState == RiderState.WalkToShelf ||
            CurrentState == RiderState.WalkToExit ||
            CurrentState == RiderState.Return;

        float bob = walking
            ? Mathf.Abs(Mathf.Sin(Time.time * bobFrequency)) * bobHeight
            : 0f;

        if (riderTransform != transform)
            riderTransform.localPosition = originalLocalPosition + Vector3.up * bob;
        if (riderBagTransform != null)
            riderBagTransform.localPosition = bagOriginalLocalPosition + Vector3.up * bob;
    }

    private void Update()
    {
        UpdateWalkingBob();
    }
}
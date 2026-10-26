
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

    [Header("Navigation")]
    [SerializeField] private Transform exitLocation;

    private Vector3 returnPosition;

    [Header("Walking Bob")]
    [SerializeField] private float bobHeight = 0.05f;
    [SerializeField] private float bobFrequency = 8f;

    private Vector3 originalLocalPosition;

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

        riderRenderers = riderTransform.GetComponentsInChildren<Renderer>(true);
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

        returnPosition = hit.position;

        Debug.Log($"CTRL_Rider: Placed on NavMesh at {hit.position}");

        return true;
    }

    private void OnDisable()
    {
        MGR_Delivery.OnRiderDispatched -= HandleRiderDispatched;

        if (isRegistered && MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.UnregisterRider(this);
            isRegistered = false;
        }
    }

    private void HandleRiderDispatched(CTRL_Rider rider, OrderData order, List<string> shelvesToVisit)
    {
        if (rider != this || CurrentState != RiderState.Idle || riderNavMeshAgent == null)
        {
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
        riderNavMeshAgent.isStopped = false;
        riderNavMeshAgent.speed = 3f;
        riderNavMeshAgent.SetDestination(destination);

        while (riderNavMeshAgent.pathPending)
        {
            yield return null;
        }

        while (riderNavMeshAgent.remainingDistance > riderNavMeshAgent.stoppingDistance + 0.05f)
        {
            if (!riderNavMeshAgent.hasPath)
            {
                break;
            }

            yield return null;
        }

        riderNavMeshAgent.isStopped = true;
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

        if (MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.NotifyRiderLeft(this);
        }

        CurrentState = RiderState.Delivering;
        riderNavMeshAgent.isStopped = true;
        SetRiderVisible(false);

        yield return new WaitForSeconds(deliveryPause);

        SetRiderVisible(true);

        CurrentState = RiderState.Return;
        yield return MoveTo(returnPosition);

        riderNavMeshAgent.isStopped = true;

        if (MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.NotifyRiderReturned(this);
        }

        currentOrder = null;
        currentShelfIDs = null;
        CurrentState = RiderState.Idle;
        deliveryRoutine = null;
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
        if (riderTransform == null || riderTransform == transform)
        {
            return;
        }

        bool walking =
            CurrentState == RiderState.WalkToShelf ||
            CurrentState == RiderState.WalkToExit ||
            CurrentState == RiderState.Return;

        float bob = walking
            ? Mathf.Abs(Mathf.Sin(Time.time * bobFrequency)) * bobHeight
            : 0f;

        riderTransform.localPosition = originalLocalPosition + Vector3.up * bob;
    }

    private void Update()
    {
        UpdateWalkingBob();
    }
}

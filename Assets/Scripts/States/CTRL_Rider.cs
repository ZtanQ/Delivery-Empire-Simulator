using System.Collections;
using System.Collections.Generic;
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
    [SerializeField] private Transform[] shelfLocations = new Transform[6];
    [SerializeField] private string[] shelfIDs = new string[6];
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

        riderNavMeshAgent.speed = 3f;
        riderNavMeshAgent.isStopped = true;
        riderNavMeshAgent.updatePosition = true;

        returnPosition = transform.position;

        originalLocalPosition = riderTransform.localPosition;

        riderRenderers = riderTransform.GetComponentsInChildren<Renderer>(true);
    }

    private void OnEnable()
    {
        MGR_Delivery.OnRiderDispatched += HandleRiderDispatched;
    }

    private void OnDisable()
    {
        MGR_Delivery.OnRiderDispatched -= HandleRiderDispatched;
    }

    private void Start()
    {
        MGR_Delivery.Instance.RegisterRider(this);
        isRegistered = true;
    }

    private void OnDestroy()
    {
        if (isRegistered && MGR_Delivery.Instance != null)
        {
            MGR_Delivery.Instance.UnregisterRider(this);
        }
    }

    private void HandleRiderDispatched(CTRL_Rider rider, OrderData order, List<string> shelvesToVisit)
    {
        if (rider == this && CurrentState == RiderState.Idle)
        {
            currentOrder = order;
            currentShelfIDs = new List<string>(shelvesToVisit);
            deliveryRoutine = StartCoroutine(DeliverOrder());
        }
    }

    private Transform FindShelf(string shelfID)
    {
        for (int i = 0; i < shelfIDs.Length; i++)
        {
            if (shelfIDs[i] == shelfID && shelfLocations[i] != null)
            {
                return shelfLocations[i];
            }
        }

        return null;
    }

    private IEnumerator MoveTo(Vector3 destination)
    {
        riderNavMeshAgent.isStopped = false;
        riderNavMeshAgent.speed = 3f;

        riderNavMeshAgent.SetDestination(destination);

        //necessary to wait until the path is calculated and the agent has reached the destination
        while (riderNavMeshAgent.pathPending || riderNavMeshAgent.remainingDistance > riderNavMeshAgent.stoppingDistance + 0.05f)
        {
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
                Debug.LogError($"CTRL_Rider: Shelf '{shelfID}' is missing.", this); 
                yield break;
            }

            CurrentState = RiderState.WalkToShelf;
            yield return MoveTo(shelf.position);

            CurrentState = RiderState.Collect;
            yield return new WaitForSeconds(collectPause);
        }

        CurrentState = RiderState.WalkToExit;
        yield return MoveTo(exitLocation.position);

        // Notify the manager when the rider reaches the door.
        MGR_Delivery.Instance.NotifyRiderLeft(this);

        CurrentState = RiderState.Delivering;
        riderNavMeshAgent.isStopped = true;
        SetRiderVisible(false);
        yield return new WaitForSeconds(deliveryPause);

        SetRiderVisible(true);
        CurrentState = RiderState.Return;
        yield return MoveTo(returnPosition);
        riderNavMeshAgent.isStopped = true;

        // Notify the manager after returning.
        MGR_Delivery.Instance.NotifyRiderReturned(this);

        currentOrder = null;
        currentShelfIDs = null;
        CurrentState = RiderState.Idle;
        deliveryRoutine = null;
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
        // Never apply bobbing to the NavMeshAgent root.
        if (riderTransform == null || riderTransform == transform)
        {
            return;
        }

        bool walking =
            CurrentState == RiderState.WalkToShelf ||
            CurrentState == RiderState.WalkToExit ||
            CurrentState == RiderState.Return;

        float bob = walking? Mathf.Abs(Mathf.Sin(Time.time * bobFrequency)) * bobHeight: 0f;

        riderTransform.localPosition = originalLocalPosition + Vector3.up * bob;
    }

    private void Update()
    {
        UpdateWalkingBob();
    }
}
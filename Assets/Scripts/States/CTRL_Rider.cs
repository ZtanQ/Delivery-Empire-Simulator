using System.Collections;
using UnityEngine.InputSystem;
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

    [SerializeField] private NavMeshAgent riderNavMeshAgent;
    [SerializeField] private Transform riderTransform;

    [SerializeField] private float collectPause = 1f;
    [SerializeField] private float deliveryPause = 15f;

    private Vector3 returnPosition;

    [SerializeField] private Transform[] shelfLocations = new Transform[6]; 
    [SerializeField] private Transform exitLocation;

    public RiderState CurrentState = RiderState.Idle;

    //bobbing effect parameters
    [SerializeField] private float bobHeight = 0.05f;
    [SerializeField] private float bobFrequency = 8f;

    private Vector3 originalLocalPosition; // to store the original local position of the rider for bobbing effect

    [SerializeField] private KeyCode dispatchKey = KeyCode.D;

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
    }



    private IEnumerator MoveTo(Vector3 destination)
    {
        if (!riderNavMeshAgent.isOnNavMesh)
        {
            Debug.LogError("Rider is not on the NavMesh!");
            yield break;
        }

        riderNavMeshAgent.isStopped = false;
        riderNavMeshAgent.speed = 3f;

        if (!riderNavMeshAgent.SetDestination(destination))
        {
            Debug.LogError("Could not set destination!");
            riderNavMeshAgent.isStopped = true;
            yield break;
        }

        while (riderNavMeshAgent.pathPending)
        {
            yield return null;
        }

        if (riderNavMeshAgent.pathStatus != NavMeshPathStatus.PathComplete)
        {
            Debug.LogError("Destination is unreachable!");
            riderNavMeshAgent.isStopped = true;
            yield break;
        }

        while (riderNavMeshAgent.remainingDistance >
               riderNavMeshAgent.stoppingDistance + 0.05f)
        {
            if (!riderNavMeshAgent.isOnNavMesh ||
                !riderNavMeshAgent.hasPath)
            {
                Debug.LogError("Rider lost its path!");
                riderNavMeshAgent.isStopped = true;
                yield break;
            }

            yield return null;
        }

        riderNavMeshAgent.isStopped = true;
    }



    void Dispatch()
    {
        if (shelfLocations.Length != 6 || exitLocation == null)
        {
            Debug.LogError("Assign all 6 shelf points and the exit!");
            return;
        }

        foreach (Transform shelf in shelfLocations)
        {
            if (shelf == null)
            {
                Debug.LogError("One or more shelf points are missing!");
                return;
            }
        }

        if (CurrentState == RiderState.Idle)
        {
            CurrentState = RiderState.WalkToShelf;
            StartCoroutine(MoveToShelf());
        }
    }

    private IEnumerator MoveToShelf()
    {
        CurrentState = RiderState.WalkToShelf;

        foreach (Transform shelf in shelfLocations)
        {
            if (shelf == null)
            {
                Debug.LogWarning("A shelf point is missing!");
                continue;
            }

            yield return MoveTo(shelf.position);

            // Pause briefly at each shelf
            CurrentState = RiderState.Collect;
            yield return new WaitForSeconds(collectPause);
            CurrentState = RiderState.WalkToShelf;
        }

        StartCoroutine(Deliver());
    }


    private IEnumerator Deliver() 
    { 
        CurrentState = RiderState.WalkToExit;
        yield return MoveTo(exitLocation.position);

        CurrentState = RiderState.Delivering;
        riderNavMeshAgent.isStopped = true;
        riderTransform.gameObject.SetActive(false);
        yield return new WaitForSeconds(deliveryPause);
        riderTransform.gameObject.SetActive(true);

        StartCoroutine(ReturnFromDelivery());
    }

    private IEnumerator ReturnFromDelivery()
    {
        CurrentState = RiderState.Return;
        yield return MoveTo(returnPosition);

        CurrentState = RiderState.Idle;
        riderNavMeshAgent.isStopped = true;
        riderTransform.gameObject.SetActive(true);
    }

    private void UpdateWalkingBob()
    {
        float bob = Mathf.Abs(Mathf.Sin(Time.time * bobFrequency)) * bobHeight; // formula for bobbing effect

        riderTransform.localPosition = originalLocalPosition + Vector3.up * bob;
    }

    void Update()
    {
        if (Keyboard.current != null &&
            Keyboard.current.dKey.wasPressedThisFrame)
        {
            Dispatch();
        }

        UpdateWalkingBob();
    }
}

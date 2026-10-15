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

    public RiderState CurrentState = RiderState.Idle;

    [Header("Rider")]
    [SerializeField] private NavMeshAgent riderNavMeshAgent;
    [SerializeField] private Transform riderTransform;
    private Renderer[] riderRenderers;

    [Header("Timing")]
    [SerializeField] private float collectPause = 1f;
    [SerializeField] private float deliveryPause = 15f;

    [Header("Navigation")]
    private Vector3 returnPosition;
    [SerializeField] private Transform[] shelfLocations = new Transform[6];
    [SerializeField] private Transform exitLocation;

    [Header("Walking Bob")]
    [SerializeField] private float bobHeight = 0.05f;
    [SerializeField] private float bobFrequency = 8f;
    private Vector3 originalLocalPosition;

    [Header("Debug")]
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

        riderRenderers = riderTransform.GetComponentsInChildren<Renderer>(true);
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
        SetRiderVisible(false); 
        yield return new WaitForSeconds(deliveryPause);
        SetRiderVisible(true);

        StartCoroutine(ReturnFromDelivery());
    }

    private IEnumerator ReturnFromDelivery()
    {
        CurrentState = RiderState.Return;
        yield return MoveTo(returnPosition);

        riderNavMeshAgent.isStopped = true;
        CurrentState = RiderState.Idle;
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
        bool walking =
            CurrentState == RiderState.WalkToShelf ||
            CurrentState == RiderState.WalkToExit ||
            CurrentState == RiderState.Return;

        float bob = walking
            ? Mathf.Abs(Mathf.Sin(Time.time * bobFrequency)) * bobHeight
            : 0f;

        riderTransform.localPosition =
            originalLocalPosition + Vector3.up * bob;
    }

    private void Update()
    {
        if (Keyboard.current != null && System.Enum.TryParse(dispatchKey.ToString(), out Key keyboardKey) && Keyboard.current[keyboardKey].wasPressedThisFrame)
        {
            Dispatch();
        }

        UpdateWalkingBob();
    }
}

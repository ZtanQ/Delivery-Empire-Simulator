using UnityEngine;
using UnityEngine.AI;

public class RiderNavMeshTester : MonoBehaviour
{
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private Transform destination;

    private void Start()
    {
        if (agent == null)
        {
            Debug.LogError("RiderNavMeshTester: NavMeshAgent is not assigned.");
            return;
        }

        if (destination == null)
        {
            Debug.LogError("RiderNavMeshTester: Destination is not assigned.");
            return;
        }

        agent.SetDestination(destination.position);
    }
}
using UnityEngine;

public class MGR_Delivery : Manager<MGR_Delivery>
{
    [Header("Rider Salary")]
    [SerializeField] private float riderSalaryPerDay = 20f;

    [Header("Rider Capacity")]
    [SerializeField] private int startingRiderCount = 1;
    [SerializeField] private int maximumRiderCount = 1;

    private int activeRiderCount;

    public int ActiveRiderCount => activeRiderCount;
    public int MaximumRiderCount => maximumRiderCount;

    private void OnEnable()
    {
        MGR_Game.OnDayTick += HandleDayTick;
    }

    private void OnDisable()
    {
        MGR_Game.OnDayTick -= HandleDayTick;
    }

    protected override void OnInitialise()
    {
        activeRiderCount = startingRiderCount;

        Debug.Log("7. MGR_Delivery initialised.");
        Debug.Log($"Starting riders: {activeRiderCount}");
        Debug.Log($"Maximum riders: {maximumRiderCount}");
        Debug.Log($"Rider salary per day: ${riderSalaryPerDay:F2}");
    }

    /// <summary>
    /// Adds a hired rider if the warehouse capacity allows it.
    /// </summary>
    public bool RegisterRider()
    {
        if (activeRiderCount >= maximumRiderCount)
        {
            Debug.Log(
                $"Cannot add rider. " +
                $"Maximum rider capacity reached: " +
                $"{activeRiderCount}/{maximumRiderCount}"
            );

            return false;
        }

        activeRiderCount++;

        Debug.Log(
            $"Rider added. " +
            $"Active riders: {activeRiderCount}/{maximumRiderCount}"
        );

        return true;
    }

    /// <summary>
    /// Removes a rider from the hired/active rider count.
    /// </summary>
    public bool UnregisterRider()
    {
        // Always keep the starting rider.
        if (activeRiderCount <= startingRiderCount)
        {
            Debug.Log(
                $"Cannot remove rider. " +
                $"Minimum riders: {startingRiderCount}"
            );

            return false;
        }

        activeRiderCount--;

        Debug.Log(
            $"Rider removed. " +
            $"Active riders: {activeRiderCount}/{maximumRiderCount}"
        );

        return true;
    }

    private void HandleDayTick()
    {
        if (activeRiderCount <= 0)
        {
            Debug.Log("Day tick: No active riders. No salary deducted.");
            return;
        }

        float totalSalary = riderSalaryPerDay * activeRiderCount;

        bool salaryPaid = MGR_Game.Instance.TrySpendCash(totalSalary);

        if (salaryPaid)
        {
            Debug.Log(
                $"Daily rider salary deducted. " +
                $"Riders: {activeRiderCount}, " +
                $"Cost: ${totalSalary:F2}"
            );
        }
        else
        {
            Debug.Log(
                $"Unable to pay rider salary. " +
                $"Riders: {activeRiderCount}, " +
                $"Required: ${totalSalary:F2}"
            );
        }
    }
}
using UnityEngine;

public class MGR_Delivery : Manager<MGR_Delivery>
{
    [Header("Rider Salary")]
    [SerializeField] private float riderSalaryPerDay = 20f;

    [Header("Rider Capacity")]
    [SerializeField] private int startingRiderCount = 1;
    [SerializeField] private int maximumRiderCount = 1;

    private int activeRiderCount;

    private bool hiringLocked;

    public int ActiveRiderCount => activeRiderCount;
    public int MaximumRiderCount => maximumRiderCount;
    public bool IsHiringLocked => hiringLocked;
    public int ActiveRiderCount => activeRiderCount;
    public int MaximumRiderCount => maximumRiderCount;

    private void OnEnable()
    {
        MGR_Game.OnDayTick += HandleDayTick;
        MGR_Game.OnRatingChanged += HandleRatingChanged;
    }

    private void OnDisable()
    {
        MGR_Game.OnDayTick -= HandleDayTick;

        MGR_Game.OnRatingChanged -= HandleRatingChanged;
    }

    protected override void OnInitialise()
    {
        activeRiderCount = startingRiderCount;
        // Starting rating is 4.0, so hiring is initially allowed.
        hiringLocked = false;
        Debug.Log("7. MGR_Delivery initialised.");
        Debug.Log($"Starting riders: {activeRiderCount}");
        Debug.Log($"Maximum riders: {maximumRiderCount}");
        Debug.Log($"Rider salary per day: ${riderSalaryPerDay:F2}");
        Debug.Log($"Rider hiring locked: {hiringLocked}");
    }

    // =========================================================
    // RATING / HIRING LOCK
    // =========================================================

    private void HandleRatingChanged(float rating)
    {
        // Lock hiring when rating drops below 2.0.
        if (!hiringLocked && rating < 2.0f)
        {
            hiringLocked = true;

            Debug.Log(
                $"Rider hiring locked. " +
                $"Rating: {rating:F2}"
            );

            return;
        }

        // Unlock hiring only after rating rises above 2.5.
        if (hiringLocked && rating > 2.5f)
        {
            hiringLocked = false;

            Debug.Log(
                $"Rider hiring unlocked. " +
                $"Rating: {rating:F2}"
            );
        }
    }

    // =========================================================
    // RIDER MANAGEMENT
    // =========================================================

    /// <summary>
    /// Adds a hired rider if the warehouse capacity allows it
    /// and rider hiring is not locked by low rating.
    /// </summary>
    public bool RegisterRider()
    {
        if (hiringLocked)
        {
            float rating = 0f;

            if (MGR_Game.Instance != null)
            {
                rating = MGR_Game.Instance.CurrentRating;
            }

            Debug.Log(
                $"Cannot add rider. " +
                $"Hiring is locked because rating is too low: " +
                $"{rating:F2}"
            );

            return false;
        }

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
            $"Active riders: " +
            $"{activeRiderCount}/{maximumRiderCount}"
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

    // =========================================================
    // RIDER SALARY
    // =========================================================

    private void HandleDayTick()
    {
        if (activeRiderCount <= 0)
        {
            Debug.Log(
                "Day tick: No active riders. " +
                "No salary deducted."
            );

            return;
        }

        float totalSalary =
            riderSalaryPerDay * activeRiderCount;

        if (MGR_Game.Instance == null)
        {
            Debug.LogWarning(
                "Unable to pay rider salary. " +
                "MGR_Game instance is missing."
            );

            return;
        }

        bool salaryPaid =
            MGR_Game.Instance.TrySpendCash(totalSalary);
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
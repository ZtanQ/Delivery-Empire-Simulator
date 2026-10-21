using System;
using System.Collections.Generic;
using UnityEngine;

public class MGR_Delivery : Manager<MGR_Delivery>
{
    public static event Action<
    CTRL_Rider,
    OrderData,
    List<string>> OnRiderDispatched;

    public static event Action<
        CTRL_Rider,
        OrderData> OnRiderLeft;

    public static event Action<
        CTRL_Rider,
        OrderData> OnRiderReturned;

    [Header("Rider Salary")]
    [SerializeField] private float riderSalaryPerDay = 20f;

    [Header("Rider Capacity")]
    [SerializeField] private int startingRiderCount = 1;
    [SerializeField] private int stage0MaximumRiders = 1;
    [SerializeField] private int stage1MaximumRiders = 3;

    private int currentStage = 0;
    private int maximumRiderCount;

    private int activeRiderCount;
    private bool hiringLocked;

    private readonly List<CTRL_Rider> riders =
    new List<CTRL_Rider>();

    private readonly Dictionary<CTRL_Rider, OrderData>
    dispatchedOrders =
        new Dictionary<CTRL_Rider, OrderData>();

    public IReadOnlyList<CTRL_Rider> Riders => riders;
    public int ActiveRiderCount => activeRiderCount;
    public int MaximumRiderCount => maximumRiderCount;
    public bool IsHiringLocked => hiringLocked;
    public int CurrentStage => currentStage;

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

    public void SetStage(int stage)
    {
        if (stage < 0 || stage > 1)
        {
            Debug.LogWarning(
                $"MGR_Delivery: Invalid stage {stage}. " +
                "Only Stage 0 and Stage 1 are supported."
            );

            return;
        }

        currentStage = stage;

        maximumRiderCount =
            currentStage == 0
                ? stage0MaximumRiders
                : stage1MaximumRiders;

        Debug.Log(
            $"MGR_Delivery: Stage {currentStage} active. " +
            $"Maximum riders: {maximumRiderCount}"
        );
    }

    public void LoadDeliveryState(
    int stage,
    int riderCount)
    {
        SetStage(stage);

        activeRiderCount =
            Mathf.Clamp(
                riderCount,
                startingRiderCount,
                maximumRiderCount
            );

        Debug.Log(
            $"MGR_Delivery: Delivery state loaded. " +
            $"Stage: {currentStage}, " +
            $"Riders: {activeRiderCount}/{maximumRiderCount}"
        );
    }

    protected override void OnInitialise()
    {
        currentStage = 0;
        activeRiderCount = startingRiderCount;
        maximumRiderCount = stage0MaximumRiders;
        hiringLocked = false;

        Debug.Log("7. MGR_Delivery initialised.");
        Debug.Log($"Current stage: {currentStage}");
        Debug.Log($"Starting riders: {activeRiderCount}");
        Debug.Log($"Maximum riders: {maximumRiderCount}");
        Debug.Log($"Rider salary per day: ${riderSalaryPerDay:F2}");
        Debug.Log($"Rider hiring locked: {hiringLocked}");
    }

    private void HandleRatingChanged(float rating)
    {
        // Lock hiring when rating falls below 2.0.
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

    public bool UnregisterRider()
    {
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
            Debug.Log(
                "Day tick: No active riders. No salary deducted."
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

    public void RegisterRider(CTRL_Rider rider)
    {
        if (rider == null || riders.Contains(rider))
        {
            return;
        }

        riders.Add(rider);

        Debug.Log(
            $"MGR_Delivery: Rider registered: {rider.name}. " +
            $"Registered riders: {riders.Count}"
        );
    }

    public void UnregisterRider(CTRL_Rider rider)
    {
        if (rider == null)
        {
            return;
        }

        if (riders.Remove(rider))
        {
            Debug.Log(
                $"MGR_Delivery: Rider unregistered: {rider.name}. " +
                $"Registered riders: {riders.Count}"
            );
        }
    }

    private CTRL_Rider GetIdleRider()
    {
        foreach (CTRL_Rider rider in riders)
        {
            if (rider != null &&
                rider.CurrentState == CTRL_Rider.RiderState.Idle)
            {
                return rider;
            }
        }

        return null;
    }

    private CTRL_Rider GetOrActivateRider()
    {
        CTRL_Rider rider = GetIdleRider();

        if (rider != null)
        {
            return rider;
        }

        if (MGR_Pool.Instance == null)
        {
            Debug.LogWarning(
                "MGR_Delivery: MGR_Pool is not available."
            );

            return null;
        }

        GameObject riderObject =
            MGR_Pool.Instance.GetRider();

        if (riderObject == null)
        {
            Debug.LogWarning(
                "MGR_Delivery: No pooled rider is available."
            );

            return null;
        }

        rider =
            riderObject.GetComponent<CTRL_Rider>();

        if (rider == null)
        {
            Debug.LogError(
                "MGR_Delivery: Pooled rider does not contain CTRL_Rider."
            );

            MGR_Pool.Instance.Release(riderObject);
            return null;
        }

        RegisterRider(rider);

        return rider;
    }

    private void Update()
    {
        TryDispatchWaitingOrder();
    }

    private void TryDispatchWaitingOrder()
    {
        if (MGR_Order.Instance == null ||
            MGR_Inventory.Instance == null)
        {
            return;
        }

        IReadOnlyList<OrderData> activeOrders =
            MGR_Order.Instance.ActiveOrders;

        if (activeOrders == null ||
            activeOrders.Count == 0)
        {
            return;
        }

        // First find an order that is actually ready for dispatch.
        OrderData waitingOrder = null;

        foreach (OrderData order in activeOrders)
        {
            if (order == null || !order.IsActive)
            {
                continue;
            }

            if (IsOrderAlreadyDispatched(order))
            {
                continue;
            }

            if (!CanFillOrderFromShelves(order))
            {
                continue;
            }

            waitingOrder = order;
            break;
        }

        // Do not activate a pooled rider unless an order is waiting.
        if (waitingOrder == null)
        {
            return;
        }

        CTRL_Rider rider = GetOrActivateRider();

        if (rider == null)
        {
            return;
        }

        if (dispatchedOrders.ContainsKey(rider))
        {
            return;
        }

        DispatchOrder(rider, waitingOrder);
    }

    private bool CanFillOrderFromShelves(OrderData order)
    {
        if (order == null ||
            order.Items == null ||
            order.Items.Count == 0 ||
            MGR_Inventory.Instance == null)
        {
            return false;
        }

        Dictionary<DATA_ProductSO, int> required =
            new Dictionary<DATA_ProductSO, int>();

        foreach (OrderItem item in order.Items)
        {
            if (item == null ||
                item.Product == null ||
                item.Quantity <= 0)
            {
                return false;
            }

            if (!required.ContainsKey(item.Product))
            {
                required[item.Product] = 0;
            }

            required[item.Product] += item.Quantity;
        }

        foreach (KeyValuePair<DATA_ProductSO, int> requirement
            in required)
        {
            int available =
                MGR_Inventory.Instance.GetTotalShelfStock(
                    requirement.Key
                );

            if (available < requirement.Value)
            {
                return false;
            }
        }

        return true;
    }

    private bool IsOrderAlreadyDispatched(
    OrderData order)
    {
        foreach (KeyValuePair<CTRL_Rider, OrderData> pair
            in dispatchedOrders)
        {
            if (pair.Value == order)
            {
                return true;
            }
        }

        return false;
    }

    private void DispatchOrder(
    CTRL_Rider rider,
    OrderData order)
    {
        if (rider == null ||
            order == null ||
            MGR_Inventory.Instance == null)
        {
            return;
        }

        if (!MGR_Inventory.Instance.TryReserveOrder(
                order,
                out List<ShelfReservation> reservations))
        {
            return;
        }

        List<string> shelvesToVisit =
            new List<string>();

        foreach (ShelfReservation reservation in reservations)
        {
            if (!shelvesToVisit.Contains(
                    reservation.ShelfID))
            {
                shelvesToVisit.Add(
                    reservation.ShelfID
                );
            }
        }

        MGR_Order.Instance.MarkOrderReserved(order);
        dispatchedOrders[rider] = order;

        Debug.Log(
            $"MGR_Delivery: Rider {rider.name} dispatched " +
            $"for Order #{order.OrderID}. " +
            $"Shelves: {string.Join(", ", shelvesToVisit)}"
        );

        OnRiderDispatched?.Invoke(
            rider,
            order,
            shelvesToVisit
        );
    }

    public void NotifyRiderLeft(CTRL_Rider rider)
    {
        if (rider == null)
        {
            return;
        }

        if (!dispatchedOrders.TryGetValue(
                rider,
                out OrderData order))
        {
            Debug.LogWarning(
                $"MGR_Delivery: Rider {rider.name} left " +
                "without a dispatched order."
            );

            return;
        }

        Debug.Log(
            $"MGR_Delivery: Rider {rider.name} left " +
            $"with Order #{order.OrderID}."
        );

        OnRiderLeft?.Invoke(
            rider,
            order
        );

        if (MGR_Order.Instance != null)
        {
            MGR_Order.Instance.CompleteReservedOrder(
                order
            );
        }
    }

    public void NotifyRiderReturned(CTRL_Rider rider)
    {
        if (rider == null)
        {
            return;
        }

        if (!dispatchedOrders.TryGetValue(
                rider,
                out OrderData order))
        {
            Debug.LogWarning(
                $"MGR_Delivery: Rider {rider.name} returned " +
                "without a dispatched order."
            );

            return;
        }

        Debug.Log(
            $"MGR_Delivery: Rider {rider.name} returned " +
            $"from Order #{order.OrderID}."
        );

        OnRiderReturned?.Invoke(
            rider,
            order
        );

        dispatchedOrders.Remove(rider);
    }
}
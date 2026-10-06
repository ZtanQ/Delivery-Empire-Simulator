using System;
using System.Collections.Generic;
using UnityEngine;

public class MGR_Order : Manager<MGR_Order>
{
    private const float OrderInterval = 30f;
    private const float OrderDuration = 90f;
    private const int MaxActiveOrders = 3;

    private float orderTimer;
    private int nextOrderID = 1;

    private readonly List<OrderData> activeOrders =
        new List<OrderData>();

    public static event Action<OrderData> OnOrderCreated;
    public static event Action<OrderData> OnOrderFulfilled;
    public static event Action<OrderData> OnOrderExpired;

    public IReadOnlyList<OrderData> ActiveOrders => activeOrders;

    [SerializeField]
    private List<DATA_ProductSO> availableProducts =
        new List<DATA_ProductSO>();

    protected override void OnInitialise()
    {
        Debug.Log("6. MGR_Order initialised.");

        orderTimer = OrderInterval;
    }

    private void Update()
    {
        UpdateOrderGeneration();
        UpdateOrderTimers();
    }

    private void UpdateOrderGeneration()
    {
        if (activeOrders.Count >= MaxActiveOrders)
        {
            return;
        }

        orderTimer -= Time.deltaTime;

        if (orderTimer > 0f)
        {
            return;
        }

        GenerateLevel1Order();

        orderTimer = OrderInterval;
    }

    private void UpdateOrderTimers()
    {
        for (int i = activeOrders.Count - 1; i >= 0; i--)
        {
            OrderData order = activeOrders[i];

            if (!order.IsActive)
            {
                activeOrders.RemoveAt(i);
                continue;
            }

            order.TimerRemaining -= Time.deltaTime;

            if (order.TimerRemaining <= 0f)
            {
                order.TimerRemaining = 0f;
                order.IsActive = false;

                Debug.Log($"Order {order.OrderID} expired.");

                OnOrderExpired?.Invoke(order);

                activeOrders.RemoveAt(i);
            }
        }
    }

    private void GenerateLevel1Order()
    {
        if (activeOrders.Count >= MaxActiveOrders)
        {
            return;
        }

        List<ProductCategory> availableCategories =
            GetAvailableCategories();

        if (availableCategories.Count == 0)
        {
            Debug.LogWarning(
                "MGR_Order could not create an order because no valid product categories were found."
            );

            return;
        }

        int totalUnits = UnityEngine.Random.Range(1, 4);

        int categoryCount = Mathf.Min(
            UnityEngine.Random.Range(1, 3),
            totalUnits,
            availableCategories.Count
        );

        List<ProductCategory> selectedCategories =
            GetRandomCategories(
                availableCategories,
                categoryCount
            );

        OrderData order = new OrderData
        {
            OrderID = nextOrderID++,
            Items = new List<OrderItem>(),
            TimerRemaining = OrderDuration,
            TimerTotal = OrderDuration,
            XPReward = 0,
            CashReward = 0f,
            IsActive = true
        };

        GenerateItems(
            order,
            selectedCategories,
            totalUnits
        );

        if (order.Items.Count == 0)
        {
            Debug.LogWarning(
                "MGR_Order generated an empty order."
            );

            return;
        }

        CalculateRewards(order);

        activeOrders.Add(order);

        Debug.Log(
            $"Order {order.OrderID} created. " +
            $"Units: {GetOrderSize(order)}, " +
            $"Categories: {order.Items.Count}, " +
            $"XP: {order.XPReward}, " +
            $"Cash: {order.CashReward:F2}, " +
            $"Timer: {order.TimerTotal}s"
        );

        foreach (OrderItem item in order.Items)
        {
            Debug.Log(
                $"Order {order.OrderID}: " +
                $"{item.Category} x {item.Quantity}"
            );
        }

        OnOrderCreated?.Invoke(order);
    }

    private void GenerateItems(
        OrderData order,
        List<ProductCategory> categories,
        int totalUnits)
    {
        if (categories == null || categories.Count == 0)
        {
            return;
        }

        // Make sure every selected category appears at least once.
        for (int i = 0; i < categories.Count; i++)
        {
            AddCategoryToOrder(
                order,
                categories[i],
                1
            );
        }

        int remainingUnits =
            totalUnits - categories.Count;

        for (int i = 0; i < remainingUnits; i++)
        {
            ProductCategory category =
                categories[
                    UnityEngine.Random.Range(
                        0,
                        categories.Count
                    )
                ];

            AddCategoryToOrder(
                order,
                category,
                1
            );
        }
    }

    private void AddCategoryToOrder(
        OrderData order,
        ProductCategory category,
        int quantity)
    {
        foreach (OrderItem item in order.Items)
        {
            if (item.Category == category)
            {
                item.Quantity += quantity;
                return;
            }
        }

        order.Items.Add(
            new OrderItem
            {
                Category = category,
                Quantity = quantity
            }
        );
    }

    private List<ProductCategory> GetAvailableCategories()
    {
        List<ProductCategory> categories =
            new List<ProductCategory>();

        foreach (DATA_ProductSO product in availableProducts)
        {
            if (product == null)
            {
                continue;
            }

            if (!categories.Contains(product.Category))
            {
                categories.Add(product.Category);
            }
        }

        return categories;
    }

    private List<ProductCategory> GetRandomCategories(
        List<ProductCategory> availableCategories,
        int count)
    {
        List<ProductCategory> remaining =
            new List<ProductCategory>(
                availableCategories
            );

        List<ProductCategory> selected =
            new List<ProductCategory>();

        while (
            selected.Count < count &&
            remaining.Count > 0)
        {
            int index = UnityEngine.Random.Range(
                0,
                remaining.Count
            );

            selected.Add(remaining[index]);
            remaining.RemoveAt(index);
        }

        return selected;
    }

    private void CalculateRewards(OrderData order)
    {
        int orderSize = GetOrderSize(order);

        order.XPReward =
            10 + (orderSize * 2);

        // Cash is calculated when the order is fulfilled,
        // because the order requests categories rather than
        // specific products.
        order.CashReward = 0f;
    }

    private int GetOrderSize(OrderData order)
    {
        int totalUnits = 0;

        foreach (OrderItem item in order.Items)
        {
            if (item == null || item.Quantity <= 0)
            {
                continue;
            }

            totalUnits += item.Quantity;
        }

        return totalUnits;
    }

    public bool TryFulfillOrder(OrderData order)
    {
        if (order == null || !order.IsActive)
            return false;

        if (MGR_Inventory.Instance == null || MGR_Game.Instance == null)
            return false;

        // Check all required categories first.
        foreach (OrderItem item in order.Items)
        {
            if (item == null || item.Quantity <= 0)
                continue;

            if (GetCategoryStock(item.Category) < item.Quantity)
            {
                Debug.Log(
                    $"Order {order.OrderID} cannot be fulfilled. " +
                    $"Not enough {item.Category} stock."
                );
                return false;
            }
        }

        float cashReward = 0f;

        // Deduct stock only after the entire order is confirmed possible.
        foreach (OrderItem item in order.Items)
        {
            if (item == null || item.Quantity <= 0)
                continue;

            int remaining = item.Quantity;

            foreach (DATA_ProductSO product in availableProducts)
            {
                if (product == null || product.Category != item.Category)
                    continue;

                if (remaining <= 0)
                    break;

                int stock = MGR_Inventory.Instance.GetStock(product);

                if (stock <= 0)
                    continue;

                int amount = Mathf.Min(stock, remaining);

                if (!MGR_Inventory.Instance.TryRemoveStock(product, amount))
                    return false;

                remaining -= amount;

                float salePrice = product.BaseCost * 1.5f;
                cashReward += salePrice * amount;
            }
        }

        order.CashReward = cashReward;
        order.IsActive = false;

        MGR_Game.Instance.AddCash(order.CashReward);
        MGR_Game.Instance.AddXP(order.XPReward);

        Debug.Log(
            $"Order {order.OrderID} fulfilled. " +
            $"Cash: {order.CashReward:F2}, XP: {order.XPReward}"
        );

        OnOrderFulfilled?.Invoke(order);
        activeOrders.Remove(order);

        return true;
    }

    private int GetCategoryStock(ProductCategory category)
    {
        if (MGR_Inventory.Instance == null)
            return 0;

        int totalStock = 0;

        foreach (DATA_ProductSO product in availableProducts)
        {
            if (product == null || product.Category != category)
                continue;

            totalStock += MGR_Inventory.Instance.GetStock(product);
        }

        return totalStock;
    }
}
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

    [SerializeField, Range(0f, 1f)]
    private float stockedProductChance = 0.7f;

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
            $"Products: {order.Items.Count}, " +
            $"XP: {order.XPReward}, " +
            $"Cash: {order.CashReward:F2}, " +
            $"Timer: {order.TimerTotal}s"
        );

        foreach (OrderItem item in order.Items)
        {
            if (item == null ||
                item.Product == null ||
                item.Quantity <= 0)
            {
                continue;
            }

            Debug.Log(
                $"Order {order.OrderID}: " +
                $"{item.Product.DisplayName} x {item.Quantity}"
            );
        }

        OnOrderCreated?.Invoke(order);
    }

    private void GenerateItems(
    OrderData order,
    List<ProductCategory> selectedCategories,
    int totalUnits)
    {
        if (order == null || selectedCategories == null ||
            selectedCategories.Count == 0)
        {
            return;
        }

        int guaranteedUnits = Mathf.Min(
            selectedCategories.Count,
            totalUnits
        );

        // Guarantee one unit from each selected category.
        for (int i = 0; i < guaranteedUnits; i++)
        {
            DATA_ProductSO product =
                PickProductForOrder(selectedCategories[i]);

            if (product != null)
            {
                AddProductToOrder(order, product, 1);
            }
        }

        // Randomly distribute the remaining units.
        for (int i = guaranteedUnits; i < totalUnits; i++)
        {
            ProductCategory category =
                selectedCategories[
                    UnityEngine.Random.Range(
                        0,
                        selectedCategories.Count
                    )
                ];

            DATA_ProductSO product =
                PickProductForOrder(category);

            if (product != null)
            {
                AddProductToOrder(order, product, 1);
            }
        }
    }

    private DATA_ProductSO PickProductForOrder(ProductCategory category)
    {
        List<DATA_ProductSO> categoryProducts =
            new List<DATA_ProductSO>();

        List<DATA_ProductSO> stockedProducts =
            new List<DATA_ProductSO>();

        foreach (DATA_ProductSO product in availableProducts)
        {
            if (product == null || product.Category != category)
                continue;

            categoryProducts.Add(product);

            if (MGR_Inventory.Instance != null &&
                MGR_Inventory.Instance.GetStock(product) > 0)
            {
                stockedProducts.Add(product);
            }
        }

        if (categoryProducts.Count == 0)
            return null;

        bool chooseStocked =
        stockedProducts.Count > 0 &&
        UnityEngine.Random.value < stockedProductChance;

        List<DATA_ProductSO> candidates =
            chooseStocked
                ? stockedProducts
                : categoryProducts;

        DATA_ProductSO selectedProduct =
            candidates[
                UnityEngine.Random.Range(
                    0,
                    candidates.Count
                )
            ];

        return selectedProduct;
    }

    private void AddProductToOrder(
        OrderData order,
        DATA_ProductSO product,
        int quantity)
    {
        if (order == null ||
            product == null ||
            quantity <= 0)
        {
            return;
        }

        foreach (OrderItem item in order.Items)
        {
            if (item == null)
            {
                continue;
            }

            if (item.Product == product)
            {
                item.Quantity += quantity;
                return;
            }
        }

        order.Items.Add(
            new OrderItem
            {
                Product = product,
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
            int index =
                UnityEngine.Random.Range(
                    0,
                    remaining.Count
                );

            selected.Add(
                remaining[index]
            );

            remaining.RemoveAt(index);
        }

        return selected;
    }

    private void CalculateRewards(OrderData order)
    {
        int orderSize =
            GetOrderSize(order);

        order.XPReward =
            10 + (orderSize * 2);

        float cashReward = 0f;

        foreach (OrderItem item in order.Items)
        {
            if (item == null ||
                item.Product == null ||
                item.Quantity <= 0)
            {
                continue;
            }

            float salePrice =
                item.Product.BaseCost *
                item.Product.SalePriceMultiplier;

            cashReward +=
                salePrice * item.Quantity;
        }

        order.CashReward = cashReward;
    }

    private int GetOrderSize(OrderData order)
    {
        int totalUnits = 0;

        foreach (OrderItem item in order.Items)
        {
            if (item == null ||
                item.Product == null ||
                item.Quantity <= 0)
            {
                continue;
            }

            totalUnits += item.Quantity;
        }

        return totalUnits;
    }

    public bool TryFulfillOrder(OrderData order)
    {
        if (order == null ||
            !order.IsActive)
        {
            return false;
        }

        if (MGR_Inventory.Instance == null ||
            MGR_Game.Instance == null)
        {
            return false;
        }

        // Check all required products first.
        foreach (OrderItem item in order.Items)
        {
            if (item == null ||
                item.Product == null ||
                item.Quantity <= 0)
            {
                continue;
            }

            int stock =
                MGR_Inventory.Instance.GetStock(
                    item.Product
                );

            if (stock < item.Quantity)
            {
                Debug.Log(
                    $"Order {order.OrderID} cannot be fulfilled. " +
                    $"Not enough {item.Product.DisplayName} stock."
                );

                return false;
            }
        }

        // Deduct the exact requested products.
        foreach (OrderItem item in order.Items)
        {
            if (item == null ||
                item.Product == null ||
                item.Quantity <= 0)
            {
                continue;
            }

            if (!MGR_Inventory.Instance.TryRemoveStock(
                    item.Product,
                    item.Quantity))
            {
                return false;
            }
        }

        order.IsActive = false;

        // Reward was fixed when the order was created.
        MGR_Game.Instance.AddCash(
            order.CashReward
        );

        MGR_Game.Instance.AddXP(
            order.XPReward
        );

        Debug.Log(
            $"Order {order.OrderID} fulfilled. " +
            $"Cash: {order.CashReward:F2}, " +
            $"XP: {order.XPReward}"
        );

        OnOrderFulfilled?.Invoke(order);

        activeOrders.Remove(order);

        return true;
    }
}
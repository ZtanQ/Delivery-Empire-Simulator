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

    public IReadOnlyList<OrderData> ActiveOrders => activeOrders;

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

        List<DATA_ProductSO> products = GetAvailableProducts();

        if (products.Count == 0)
        {
            Debug.LogWarning(
                "MGR_Order could not create an order because no DATA_ProductSO products were found."
            );

            return;
        }

        OrderData order = new OrderData
        {
            OrderID = nextOrderID++,
            Items = new List<OrderItem>(),
            TimerRemaining = OrderDuration,
            TimerTotal = OrderDuration,
            XPReward = 0,
            CashReward = 0,
            IsActive = true
        };

        GenerateItems(order, products);

        if (order.Items.Count == 0)
        {
            Debug.LogWarning("MGR_Order generated an empty order.");
            return;
        }

        CalculateRewards(order);

        activeOrders.Add(order);

        Debug.Log(
            $"Order {order.OrderID} created. " +
            $"Units: {GetOrderSize(order)}, " +
            $"XP: {order.XPReward}, " +
            $"Cash: {order.CashReward}, " +
            $"Timer: {order.TimerTotal}s"
        );

        OnOrderCreated?.Invoke(order);
    }

    private void GenerateItems(
        OrderData order,
        List<DATA_ProductSO> products)
    {
        int totalUnits = UnityEngine.Random.Range(1, 4);
        int categoryCount = UnityEngine.Random.Range(1, 3);

        List<ProductCategory> categories =
            GetRandomCategories(categoryCount);

        for (int i = 0; i < totalUnits; i++)
        {
            ProductCategory category =
                categories[UnityEngine.Random.Range(0, categories.Count)];

            List<DATA_ProductSO> categoryProducts =
                GetProductsForCategory(products, category);

            if (categoryProducts.Count == 0)
            {
                continue;
            }

            DATA_ProductSO product =
                categoryProducts[
                    UnityEngine.Random.Range(
                        0,
                        categoryProducts.Count)
                ];

            AddProductToOrder(order, product);
        }
    }

    private void AddProductToOrder(
        OrderData order,
        DATA_ProductSO product)
    {
        foreach (OrderItem item in order.Items)
        {
            if (item.Product == product)
            {
                item.Quantity++;
                return;
            }
        }

        order.Items.Add(new OrderItem
        {
            Product = product,
            Quantity = 1
        });
    }

    private List<ProductCategory> GetRandomCategories(int count)
    {
        List<ProductCategory> availableCategories =
            new List<ProductCategory>
            {
                ProductCategory.Snacks,
                ProductCategory.Dairy,
                ProductCategory.Drinks,
                ProductCategory.Bakery
            };

        List<ProductCategory> selectedCategories =
            new List<ProductCategory>();

        while (selectedCategories.Count < count &&
               availableCategories.Count > 0)
        {
            int index = UnityEngine.Random.Range(
                0,
                availableCategories.Count
            );

            selectedCategories.Add(
                availableCategories[index]
            );

            availableCategories.RemoveAt(index);
        }

        return selectedCategories;
    }

    [SerializeField]
    private List<DATA_ProductSO> availableProducts =
        new List<DATA_ProductSO>();

    private List<DATA_ProductSO> GetAvailableProducts()
    {
        List<DATA_ProductSO> validProducts =
            new List<DATA_ProductSO>();

        foreach (DATA_ProductSO product in availableProducts)
        {
            if (product != null)
            {
                validProducts.Add(product);
            }
        }

        return validProducts;
    }

    private List<DATA_ProductSO> GetProductsForCategory(
        List<DATA_ProductSO> products,
        ProductCategory category)
    {
        List<DATA_ProductSO> result =
            new List<DATA_ProductSO>();

        foreach (DATA_ProductSO product in products)
        {
            if (product.Category == category)
            {
                result.Add(product);
            }
        }

        return result;
    }

    private void CalculateRewards(OrderData order)
    {
        int orderSize = GetOrderSize(order);

        order.XPReward = 10 + (orderSize * 2);

        int cashReward = 0;

        foreach (OrderItem item in order.Items)
        {
            if (item.Product == null)
            {
                continue;
            }

            int salePrice =
                Mathf.RoundToInt(item.Product.BaseCost * 1.5f);

            cashReward += salePrice * item.Quantity;
        }

        order.CashReward = cashReward;
    }

    private int GetOrderSize(OrderData order)
    {
        int totalUnits = 0;

        foreach (OrderItem item in order.Items)
        {
            if (item == null || item.Product == null)
            {
                continue;
            }

            totalUnits += item.Quantity;
        }

        return totalUnits;
    }
}
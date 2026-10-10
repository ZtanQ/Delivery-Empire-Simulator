using System.Collections.Generic;
using UnityEngine;

public class OrderQueueUI : MonoBehaviour
{
    [SerializeField] private List<OrderCardUI> orderCards = new List<OrderCardUI>();
    [SerializeField] private OutOfStockWarning outOfStockWarning;

    private readonly Dictionary<int, OrderCardUI> activeCards =
        new Dictionary<int, OrderCardUI>();

    private readonly Dictionary<int, OrderData> activeOrders =
        new Dictionary<int, OrderData>();

    private void OnEnable()
    {
        MGR_Order.OnOrderCreated += HandleOrderCreated;
        MGR_Order.OnOrderFulfilled += HandleOrderCompleted;
        MGR_Order.OnOrderExpired += HandleOrderCompleted;
        MGR_Inventory.OnInventoryChanged += HandleInventoryChanged;
    }

    private void OnDisable()
    {
        MGR_Order.OnOrderCreated -= HandleOrderCreated;
        MGR_Order.OnOrderFulfilled -= HandleOrderCompleted;
        MGR_Order.OnOrderExpired -= HandleOrderCompleted;
        MGR_Inventory.OnInventoryChanged -= HandleInventoryChanged;
    }

    private void HandleOrderCreated(OrderData order)
    {
        if (order == null)
            return;

        if (activeCards.ContainsKey(order.OrderID))
            return;

        foreach (OrderCardUI card in orderCards)
        {
            if (card == null || card.gameObject.activeSelf)
                continue;

            card.gameObject.SetActive(true);
            card.Setup(order);

            activeCards.Add(order.OrderID, card);
            activeOrders.Add(order.OrderID, order);

            UpdateOutOfStockWarning();
            return;
        }

        Debug.LogWarning("OrderQueueUI: no available card for the new order.");
    }

    private void HandleOrderCompleted(OrderData order)
    {
        if (order == null)
            return;

        if (!activeCards.TryGetValue(order.OrderID, out OrderCardUI card))
            return;

        activeCards.Remove(order.OrderID);
        activeOrders.Remove(order.OrderID);

        if (card != null)
            card.gameObject.SetActive(false);

        UpdateOutOfStockWarning();
    }

    private void HandleInventoryChanged(DATA_ProductSO product, int quantity)
    {
        UpdateOutOfStockWarning();
    }

    private void UpdateOutOfStockWarning()
    {
        if (outOfStockWarning == null)
            return;

        foreach (OrderData order in activeOrders.Values)
        {
            if (order == null)
                continue;

            if (outOfStockWarning.IsOutOfStock(order))
            {
                outOfStockWarning.Show();
                return;
            }
        }

        outOfStockWarning.Hide();
    }
}
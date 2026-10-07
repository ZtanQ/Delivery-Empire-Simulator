using System.Collections.Generic;
using UnityEngine;

public class OrderQueueUI : MonoBehaviour
{
    [SerializeField] private List<OrderCardUI> orderCards = new List<OrderCardUI>();

    private readonly Dictionary<int, OrderCardUI> activeCards =
        new Dictionary<int, OrderCardUI>();

    private void OnEnable()
    {
        MGR_Order.OnOrderCreated += HandleOrderCreated;
        MGR_Order.OnOrderFulfilled += HandleOrderCompleted;
        MGR_Order.OnOrderExpired += HandleOrderCompleted;
    }

    private void OnDisable()
    {
        MGR_Order.OnOrderCreated -= HandleOrderCreated;
        MGR_Order.OnOrderFulfilled -= HandleOrderCompleted;
        MGR_Order.OnOrderExpired -= HandleOrderCompleted;
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

        if (card != null)
            card.gameObject.SetActive(false);
    }
}
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
        MGR_Inventory.OnInventoryChanged += HandleInventoryChanged;
        MGR_Order.OnOrderRemoved += HandleOrderCompleted;
        MGR_Order.OnOrderReservationChanged += HandleOrderReservationChanged;

        // The HUD is turned off while the terminal is open, so events fired
        // in that time are missed. Rebuild the cards from the real orders.
        SyncWithActiveOrders();
    }

    private void SyncWithActiveOrders()
    {
        if (MGR_Order.Instance == null)
            return;

        IReadOnlyList<OrderData> current = MGR_Order.Instance.ActiveOrders;

        List<int> stale = new List<int>();

        foreach (KeyValuePair<int, OrderData> pair in activeOrders)
        {
            OrderData order = pair.Value;
            bool stillActive = false;

            if (order != null && order.IsActive)
            {
                foreach (OrderData active in current)
                {
                    if (active == order)
                    {
                        stillActive = true;
                        break;
                    }
                }
            }

            if (!stillActive)
                stale.Add(pair.Key);
        }

        foreach (int orderId in stale)
        {
            if (activeCards.TryGetValue(orderId, out OrderCardUI card) &&
                card != null)
            {
                card.gameObject.SetActive(false);
            }

            activeCards.Remove(orderId);
            activeOrders.Remove(orderId);
        }

        foreach (OrderData order in current)
        {
            if (order != null && order.IsActive)
                HandleOrderCreated(order);
        }

        UpdateOutOfStockWarning();
    }

    private void OnDisable()
    {
        HideClosingCards();

        MGR_Order.OnOrderCreated -= HandleOrderCreated;
        MGR_Inventory.OnInventoryChanged -= HandleInventoryChanged;
        MGR_Order.OnOrderRemoved -= HandleOrderCompleted;
        MGR_Order.OnOrderReservationChanged -= HandleOrderReservationChanged;
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
        {
            Debug.LogWarning(
                "OrderQueueUI: Cannot remove card for a null order."
            );
            return;
        }

        if (!activeCards.TryGetValue(
                order.OrderID,
                out OrderCardUI card))
        {
            return;
        }

        activeCards.Remove(order.OrderID);
        activeOrders.Remove(order.OrderID);

        if (card != null)
        {
            if (isActiveAndEnabled && resultSeconds > 0f)
            {
                // Expired orders reach 0 on their timer; delivered ones do not.
                card.ShowResult(order, order.TimerRemaining > 0f);
                closingCards.Add(card);
                StartCoroutine(HideCardAfterResult(card));
            }
            else
            {
                card.gameObject.SetActive(false);
            }
        }

        UpdateOutOfStockWarning();
    }

    [SerializeField] private float resultSeconds = 1.5f;

    private readonly List<OrderCardUI> closingCards = new List<OrderCardUI>();

    private System.Collections.IEnumerator HideCardAfterResult(OrderCardUI card)
    {
        yield return new WaitForSecondsRealtime(resultSeconds);

        closingCards.Remove(card);

        if (card != null)
            card.gameObject.SetActive(false);
    }

    // Cards still showing a result when the HUD turns off would stay on.
    private void HideClosingCards()
    {
        foreach (OrderCardUI card in closingCards)
        {
            if (card != null)
                card.gameObject.SetActive(false);
        }

        closingCards.Clear();
    }

    private void HandleInventoryChanged(DATA_ProductSO product, int quantity)
    {
        UpdateOutOfStockWarning();
    }

    private void HandleOrderReservationChanged(OrderData order)
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

            if (MGR_Order.Instance != null &&
                MGR_Order.Instance.IsOrderReserved(order))
            {
                continue;
            }

            if (outOfStockWarning.IsOutOfStock(order))
            {
                outOfStockWarning.Show();
                return;
            }
        }

        outOfStockWarning.Hide();
    }
}
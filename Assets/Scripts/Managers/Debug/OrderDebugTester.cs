using UnityEngine;

public class OrderDebugTester : MonoBehaviour
{
    private OrderData latestOrder;

    private void OnEnable()
    {
        MGR_Order.OnOrderCreated += HandleOrderCreated;
    }

    private void OnDisable()
    {
        MGR_Order.OnOrderCreated -= HandleOrderCreated;
    }

    private void HandleOrderCreated(OrderData order)
    {
        if (order == null)
        {
            Debug.LogWarning("OrderDebugTester received a null order.");
            return;
        }
        
        latestOrder = order;
        Debug.Log(
            $"[OrderDebugTester] OnOrderCreated received. " +
            $"Order ID: {order.OrderID}, " +
            $"Items: {order.Items.Count}, " +
            $"XP: {order.XPReward}, " +
            $"Cash: {order.CashReward}, " +
            $"Timer: {order.TimerRemaining}s"
        );

        foreach (OrderItem item in order.Items)
        {
            if (item == null)
                continue;

            Debug.Log(
                $"[OrderDebugTester] " +
                $"{item.Product.DisplayName} x {item.Quantity}"
            );
        }
    }

    [ContextMenu("Test Fulfill Latest Order")]
    private void TestFulfillLatestOrder()
    {
        if (latestOrder == null)
        {
            Debug.LogWarning(
                "[OrderDebugTester] No order available to fulfill."
            );
            return;
        }

        if (MGR_Order.Instance == null)
        {
            Debug.LogError(
                "[OrderDebugTester] MGR_Order instance not found."
            );
            return;
        }

        bool success = MGR_Order.Instance.TryFulfillOrder(latestOrder);

        Debug.Log(
            $"[OrderDebugTester] Fulfillment result: {success}"
        );
    }
}
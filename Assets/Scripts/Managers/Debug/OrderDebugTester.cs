using UnityEngine;

public class OrderDebugTester : MonoBehaviour
{
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
            if (item == null || item.Product == null)
                continue;

            Debug.Log(
                $"[OrderDebugTester] " +
                $"{item.Product.DisplayName} x {item.Quantity}"
            );
        }
    }
}
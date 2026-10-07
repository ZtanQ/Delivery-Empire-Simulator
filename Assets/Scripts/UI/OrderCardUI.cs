using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class OrderCardUI : MonoBehaviour
{
    [SerializeField] private List<OrderItemUI> itemSlots =
        new List<OrderItemUI>();

    [SerializeField] private TMP_Text rewardText;
    [SerializeField] private OrderCardTimer timer;

    public void Setup(OrderData order)
    {
        if (order == null)
            return;

        UpdateItems(order);
        UpdateReward(order);

        if (timer != null)
            timer.Setup(order.TimerTotal);
    }

    private void UpdateItems(OrderData order)
    {
        for (int i = 0; i < itemSlots.Count; i++)
        {
            if (itemSlots[i] == null)
                continue;

            if (
                order.Items != null &&
                i < order.Items.Count)
            {
                itemSlots[i].Setup(order.Items[i]);
            }
            else
            {
                itemSlots[i].Clear();
            }
        }
    }

    private void UpdateReward(OrderData order)
    {
        if (rewardText == null)
            return;

        rewardText.text =
            $"${order.CashReward:0}";
    }
}
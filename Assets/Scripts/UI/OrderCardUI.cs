using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Order card on the HUD. Besides the items and the reward, the card shows
// one of two kinds of order at a glance (Gabriel's playtest 20 Nov):
//   - Needs stock: some item is not on the shelves; the card is tinted red
//     and the missing items are red (OrderItemUI). The player must buy.
//   - Ready / rider out: everything is on the shelves; the card is tinted
//     green, then blue with "Rider out" once a rider takes it.
// Before it goes away it shows "+$N" (delivered) or "Expired".
public class OrderCardUI : MonoBehaviour
{
    [SerializeField] private List<OrderItemUI> itemSlots =
        new List<OrderItemUI>();

    [SerializeField] private TMP_Text rewardText;
    [SerializeField] private OrderCardTimer timer;

    [Header("Order state tint")]
    [SerializeField] private Color needsStockTint = new Color(1f, 0.82f, 0.8f, 1f);
    [SerializeField] private Color readyTint = new Color(0.82f, 1f, 0.84f, 1f);
    [SerializeField] private Color riderOutTint = new Color(0.8f, 0.93f, 1f, 1f);

    private const string RiderOutText = "Rider out";

    private static readonly Color DeliveredColour = new Color(0.3f, 0.85f, 0.35f, 1f);
    private static readonly Color ExpiredColour = new Color(0.95f, 0.25f, 0.2f, 1f);
    private static readonly Color RiderOutColour = new Color(0.2f, 0.6f, 1f, 1f);

    private OrderData currentOrder;
    private bool showingResult;

    private Image background;
    private bool coloursCached;
    private Color backgroundColour = Color.white;
    private Color rewardColour = Color.white;

    public void Setup(OrderData order)
    {
        if (order == null)
            return;

        CacheColours();

        currentOrder = order;
        showingResult = false;

        UpdateItems(order);
        RefreshState();

        if (timer != null)
            timer.Setup(order);
    }

    private void OnEnable()
    {
        MGR_Inventory.OnShelfUpdated += HandleShelfUpdated;
        MGR_Order.OnOrderReservationChanged += HandleReservationChanged;
    }

    private void OnDisable()
    {
        MGR_Inventory.OnShelfUpdated -= HandleShelfUpdated;
        MGR_Order.OnOrderReservationChanged -= HandleReservationChanged;
        currentOrder = null;
        showingResult = false;
    }

    private void HandleShelfUpdated(string shelfId, ProductCategory category, int units)
    {
        RefreshState();
    }

    private void HandleReservationChanged(OrderData order)
    {
        if (order == currentOrder)
            RefreshState();
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
                itemSlots[i].Setup(order.Items[i], order);
            }
            else
            {
                itemSlots[i].Clear();
            }
        }
    }

    private void RefreshState()
    {
        if (currentOrder == null || showingResult)
            return;

        bool reserved =
            MGR_Order.Instance != null &&
            MGR_Order.Instance.IsOrderReserved(currentOrder);

        if (reserved)
        {
            SetBackground(riderOutTint);
            SetReward(RiderOutText, RiderOutColour);
            return;
        }

        SetBackground(HasAllOnShelves(currentOrder) ? readyTint : needsStockTint);
        SetReward($"${currentOrder.CashReward:0}", rewardColour);
    }

    private static bool HasAllOnShelves(OrderData order)
    {
        if (order.Items == null || MGR_Inventory.Instance == null)
            return false;

        foreach (OrderItem item in order.Items)
        {
            if (item == null || item.Product == null)
                continue;

            if (MGR_Inventory.Instance.GetTotalShelfStock(item.Product) < item.Quantity)
                return false;
        }

        return true;
    }

    // Short end state before the card goes away, so the player sees what
    // happened to the order.
    public void ShowResult(OrderData order, bool delivered)
    {
        if (order == null)
            return;

        CacheColours();
        showingResult = true;

        SetBackground(delivered ? readyTint : needsStockTint);
        SetReward(
            delivered ? $"+${order.CashReward:0}" : "Expired",
            delivered ? DeliveredColour : ExpiredColour
        );
    }

    private void SetBackground(Color tint)
    {
        if (background == null)
            return;

        background.color = backgroundColour * tint;
    }

    private void SetReward(string text, Color colour)
    {
        if (rewardText == null)
            return;

        if (rewardText.text != text)
            rewardText.text = text;

        rewardText.color = colour;
    }

    private void CacheColours()
    {
        if (coloursCached)
            return;

        coloursCached = true;

        background = GetComponent<Image>();

        if (background != null)
            backgroundColour = background.color;

        if (rewardText != null)
        {
            rewardColour = rewardText.color;

            // Longer status words must fit inside the reward box.
            float size = rewardText.fontSize;
            rewardText.enableAutoSizing = true;
            rewardText.fontSizeMax = size;
            rewardText.fontSizeMin = Mathf.Min(18f, size);
            rewardText.textWrappingMode = TextWrappingModes.NoWrap;
        }
    }
}

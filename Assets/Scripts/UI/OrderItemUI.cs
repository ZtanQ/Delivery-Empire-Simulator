using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class OrderItemUI : MonoBehaviour
{
    [SerializeField] private Image icon;
    [SerializeField] private TMP_Text productName;
    [SerializeField] private TMP_Text quantity;

    [Header("Missing on the shelves")]
    [SerializeField] private Color missingTextColour = new Color(0.95f, 0.25f, 0.2f, 1f);
    [SerializeField, Range(0f, 1f)] private float missingIconAlpha = 0.35f;

    private OrderItem currentItem;
    private OrderData currentOrder;

    private bool coloursCached;
    private Color iconColour;
    private Color nameColour;
    private Color quantityColour;

    public void Setup(OrderItem item)
    {
        Setup(item, null);
    }

    public void Setup(OrderItem item, OrderData order)
    {
        CacheColours();

        if (item == null || item.Product == null)
        {
            currentItem = null;
            currentOrder = null;
            gameObject.SetActive(false);
            return;
        }

        currentItem = item;
        currentOrder = order;

        gameObject.SetActive(true);

        if (icon != null)
        {
            icon.sprite = item.Product.Icon;
            icon.enabled = item.Product.Icon != null;
        }

        if (productName != null)
        {
            productName.text = item.Product.DisplayName;
        }

        if (quantity != null)
        {
            quantity.text = $"x{item.Quantity}";
        }

        RefreshMissingState();
    }

    public void Clear()
    {
        currentItem = null;
        currentOrder = null;
        gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        MGR_Inventory.OnShelfUpdated += HandleShelfUpdated;
        MGR_Order.OnOrderReservationChanged += HandleReservationChanged;
        RefreshMissingState();
    }

    private void OnDisable()
    {
        MGR_Inventory.OnShelfUpdated -= HandleShelfUpdated;
        MGR_Order.OnOrderReservationChanged -= HandleReservationChanged;
    }

    private void HandleShelfUpdated(string shelfId, ProductCategory category, int units)
    {
        RefreshMissingState();
    }

    private void HandleReservationChanged(OrderData order)
    {
        if (order == currentOrder)
            RefreshMissingState();
    }

    // Missing = the shelves hold fewer units than this item needs and no
    // rider has taken the order yet. The player sees what to restock without
    // opening the terminal.
    private void RefreshMissingState()
    {
        if (currentItem == null || currentItem.Product == null)
            return;

        bool missing = false;

        if (MGR_Inventory.Instance != null)
        {
            bool reserved =
                currentOrder != null &&
                MGR_Order.Instance != null &&
                MGR_Order.Instance.IsOrderReserved(currentOrder);

            missing =
                !reserved &&
                MGR_Inventory.Instance.GetTotalShelfStock(currentItem.Product) <
                currentItem.Quantity;
        }

        ApplyMissingState(missing);
    }

    private void ApplyMissingState(bool missing)
    {
        CacheColours();

        if (icon != null)
        {
            Color c = iconColour;
            if (missing)
                c.a *= missingIconAlpha;
            icon.color = c;
        }

        if (productName != null)
            productName.color = missing ? missingTextColour : nameColour;

        if (quantity != null)
            quantity.color = missing ? missingTextColour : quantityColour;
    }

    private void CacheColours()
    {
        if (coloursCached)
            return;

        coloursCached = true;

        if (icon != null) iconColour = icon.color;
        if (productName != null) nameColour = productName.color;
        if (quantity != null) quantityColour = quantity.color;
    }
}

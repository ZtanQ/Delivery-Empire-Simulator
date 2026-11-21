using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Inventory and order information inside the terminal Buy tab, so the player
// decides what to buy on one screen (Gabriel's playtest 20 Nov):
//   - each product card: product icon, category colour strip and
//     "On shelves: N" (red with "need N" when an order is short of it);
//   - a strip above the grid: "Orders need: Cola x2, Bread x1" with an
//     "Add missing" button that fills the cart, and how many orders riders
//     are delivering;
//   - "Boxes N/6" next to the total, so the truck limit is visible before
//     pressing Buy.
// Everything is built at runtime from the existing cards: no prefab change.
public class TerminalStockInfoUI : MonoBehaviour
{
    private const int UnitsPerBox = 5;
    private const int MaxBoxesPerTruck = 6;
    private const float StripHeight = 120f;
    private const float RefreshInterval = 0.25f;

    private static readonly Color ShortColour = new Color(0.95f, 0.3f, 0.25f, 1f);
    private static readonly Color OkColour = new Color(0.85f, 0.85f, 0.85f, 1f);
    private static readonly Color RiderColour = new Color(0.45f, 0.85f, 1f, 1f);
    private static readonly Color NeededCardTint = new Color(1f, 0.85f, 0.83f, 1f);
    private static readonly Color StripColour = new Color(0f, 0f, 0f, 0.35f);

    private TerminalBuyUI buy;
    private bool built;
    private float refreshTimer;

    private TMP_Text[] stockTexts;
    private Image[] cardImages;
    private Color[] cardColours;

    private TMP_Text needText;
    private TMP_Text riderText;
    private TMP_Text boxesText;
    private Button addMissingButton;

    private readonly Dictionary<DATA_ProductSO, int> needed =
        new Dictionary<DATA_ProductSO, int>();

    public void Build(TerminalBuyUI owner)
    {
        if (built || owner == null || owner.ProductGrid == null)
            return;

        buy = owner;
        built = true;

        BuildCards();
        BuildOrderStrip();
        BuildBoxCounter();
        Refresh();
    }

    private void Update()
    {
        if (!built || buy.TerminalPanel == null || !buy.TerminalPanel.activeInHierarchy)
            return;

        refreshTimer -= Time.unscaledDeltaTime;

        if (refreshTimer > 0f)
            return;

        refreshTimer = RefreshInterval;
        Refresh();
    }

    // ---------------------------------------------------------
    // BUILD
    // ---------------------------------------------------------

    private void BuildCards()
    {
        int count = buy.CardCount;

        stockTexts = new TMP_Text[count];
        cardImages = new Image[count];
        cardColours = new Color[count];

        for (int i = 0; i < count; i++)
        {
            Transform card = buy.ProductGrid.GetChild(i);
            DATA_ProductSO product = buy.GetProduct(i);

            cardImages[i] = card.GetComponent<Image>();
            if (cardImages[i] != null)
                cardColours[i] = cardImages[i].color;

            if (product == null)
                continue;

            // Category colour strip along the top edge of the card.
            RectTransform strip = NewRect("CategoryStrip", card);
            strip.anchorMin = new Vector2(0f, 1f);
            strip.anchorMax = new Vector2(1f, 1f);
            strip.pivot = new Vector2(0.5f, 1f);
            strip.sizeDelta = new Vector2(0f, 12f);
            strip.anchoredPosition = Vector2.zero;
            Image stripImage = strip.gameObject.AddComponent<Image>();
            stripImage.color = product.ColourCode;
            stripImage.raycastTarget = false;

            // Product icon above the name.
            if (product.Icon != null)
            {
                RectTransform icon = NewRect("ProductIcon", card);
                icon.anchorMin = icon.anchorMax = new Vector2(0.5f, 0.5f);
                icon.sizeDelta = new Vector2(48f, 48f);
                icon.anchoredPosition = new Vector2(0f, 142f);
                Image iconImage = icon.gameObject.AddComponent<Image>();
                iconImage.sprite = product.Icon;
                iconImage.preserveAspect = true;
                iconImage.raycastTarget = false;
            }

            // "On shelves: N" between the price and the quantity row.
            TMP_Text price = buy.GetPriceText(i);
            if (price != null)
            {
                TMP_Text stock = Instantiate(price, card);
                stock.name = "Product_Stock";
                RectTransform rt = stock.rectTransform;
                rt.anchorMin = rt.anchorMax = new Vector2(0.5f, 0.5f);
                rt.sizeDelta = new Vector2(330f, 36f);
                rt.anchoredPosition = new Vector2(0f, -45f);
                SetAutoSize(stock, price.fontSize * 0.75f);
                stock.raycastTarget = false;
                stockTexts[i] = stock;
            }
        }
    }

    private void BuildOrderStrip()
    {
        ScrollRect scroll = buy.ProductGrid.GetComponentInParent<ScrollRect>();

        if (scroll == null || buy.TotalText == null)
            return;

        RectTransform scrollRect = (RectTransform)scroll.transform;
        scrollRect.offsetMax = new Vector2(
            scrollRect.offsetMax.x,
            scrollRect.offsetMax.y - StripHeight
        );

        RectTransform strip = NewRect("Orders_Strip", scrollRect.parent);
        strip.anchorMin = new Vector2(0f, 1f);
        strip.anchorMax = new Vector2(1f, 1f);
        strip.pivot = new Vector2(0.5f, 1f);
        strip.sizeDelta = new Vector2(0f, StripHeight);
        strip.anchoredPosition = Vector2.zero;
        Image background = strip.gameObject.AddComponent<Image>();
        background.color = StripColour;
        background.raycastTarget = false;

        needText = CloneText(buy.TotalText, strip, "Orders_Need",
            new Vector2(20f, -12f), new Vector2(-320f, 50f));
        riderText = CloneText(buy.TotalText, strip, "Orders_Rider",
            new Vector2(20f, -64f), new Vector2(-320f, 44f));

        if (buy.OrderButton != null)
        {
            Button button = Instantiate(buy.OrderButton, strip);
            button.name = "AddMissing_Button";
            button.onClick.RemoveAllListeners();
            button.onClick.AddListener(AddMissingToCart);
            button.interactable = true;

            RectTransform rt = (RectTransform)button.transform;
            rt.anchorMin = rt.anchorMax = new Vector2(1f, 0.5f);
            rt.pivot = new Vector2(1f, 0.5f);
            rt.sizeDelta = new Vector2(280f, 80f);
            rt.anchoredPosition = new Vector2(-20f, 0f);

            TMP_Text label = button.GetComponentInChildren<TMP_Text>();
            if (label != null)
            {
                label.text = "Add missing";
                SetAutoSize(label, label.fontSize);
            }

            addMissingButton = button;
        }
    }

    private void BuildBoxCounter()
    {
        if (buy.TotalText == null)
            return;

        boxesText = Instantiate(buy.TotalText, buy.TotalText.transform.parent);
        boxesText.name = "Boxes_Text";
        RectTransform source = buy.TotalText.rectTransform;
        RectTransform rt = boxesText.rectTransform;
        rt.anchorMin = source.anchorMin;
        rt.anchorMax = source.anchorMax;
        rt.pivot = source.pivot;
        rt.sizeDelta = new Vector2(260f, source.sizeDelta.y);
        rt.anchoredPosition = source.anchoredPosition + new Vector2(0f, -48f);
        boxesText.raycastTarget = false;
    }

    // ---------------------------------------------------------
    // REFRESH
    // ---------------------------------------------------------

    private void Refresh()
    {
        CollectNeeded(out int ridersOut);

        MGR_Inventory inventory = MGR_Inventory.Instance;

        for (int i = 0; i < buy.CardCount; i++)
        {
            DATA_ProductSO product = buy.GetProduct(i);

            if (product == null)
                continue;

            int onShelves = inventory != null ? inventory.GetStock(product) : 0;
            needed.TryGetValue(product, out int need);
            bool isShort = need > onShelves;

            if (stockTexts[i] != null)
            {
                stockTexts[i].text = isShort
                    ? $"On shelves: {onShelves}  -  need {need}"
                    : $"On shelves: {onShelves}";
                stockTexts[i].color = isShort ? ShortColour : OkColour;
            }

            if (cardImages[i] != null)
                cardImages[i].color = isShort
                    ? cardColours[i] * NeededCardTint
                    : cardColours[i];
        }

        if (needText != null)
            needText.text = BuildNeedLine(inventory);

        if (riderText != null)
        {
            riderText.text = ridersOut == 1
                ? "Riders delivering: 1 order"
                : $"Riders delivering: {ridersOut} orders";
            riderText.color = ridersOut > 0 ? RiderColour : OkColour;
        }

        if (addMissingButton != null)
            addMissingButton.interactable = HasMissing(inventory);

        if (boxesText != null)
        {
            int boxes = CountCartBoxes();
            boxesText.text = $"Boxes: {boxes}/{MaxBoxesPerTruck}";
            boxesText.color = boxes > MaxBoxesPerTruck ? ShortColour : OkColour;
        }
    }

    // Units each product is needed for by orders a rider has not taken yet.
    private void CollectNeeded(out int ridersOut)
    {
        needed.Clear();
        ridersOut = 0;

        MGR_Order orders = MGR_Order.Instance;

        if (orders == null)
            return;

        foreach (OrderData order in orders.ActiveOrders)
        {
            if (order == null || !order.IsActive || order.Items == null)
                continue;

            if (orders.IsOrderReserved(order))
            {
                ridersOut++;
                continue;
            }

            foreach (OrderItem item in order.Items)
            {
                if (item == null || item.Product == null || item.Quantity <= 0)
                    continue;

                needed.TryGetValue(item.Product, out int current);
                needed[item.Product] = current + item.Quantity;
            }
        }
    }

    private string BuildNeedLine(MGR_Inventory inventory)
    {
        List<string> parts = new List<string>();

        foreach (KeyValuePair<DATA_ProductSO, int> pair in needed)
        {
            int have = inventory != null ? inventory.GetStock(pair.Key) : 0;
            int missing = pair.Value - have;

            if (missing > 0)
                parts.Add($"{pair.Key.DisplayName} x{missing}");
        }

        if (parts.Count == 0)
        {
            needText.color = OkColour;
            return needed.Count == 0
                ? "No orders waiting"
                : "Orders need: nothing, your shelves have it all";
        }

        needText.color = ShortColour;
        return "Orders need: " + string.Join(", ", parts);
    }

    private bool HasMissing(MGR_Inventory inventory)
    {
        foreach (KeyValuePair<DATA_ProductSO, int> pair in needed)
        {
            int have = inventory != null ? inventory.GetStock(pair.Key) : 0;

            if (pair.Value > have)
                return true;
        }

        return false;
    }

    private void AddMissingToCart()
    {
        CollectNeeded(out _);

        MGR_Inventory inventory = MGR_Inventory.Instance;

        for (int i = 0; i < buy.CardCount; i++)
        {
            DATA_ProductSO product = buy.GetProduct(i);

            if (product == null || !needed.TryGetValue(product, out int need))
                continue;

            int have = inventory != null ? inventory.GetStock(product) : 0;
            int missing = need - have;

            if (missing > buy.GetQuantity(i))
                buy.SetQuantity(i, missing);
        }

        Refresh();
    }

    private int CountCartBoxes()
    {
        int boxes = 0;

        for (int i = 0; i < buy.CardCount; i++)
        {
            int units = buy.GetQuantity(i);

            if (units > 0)
                boxes += (units - 1) / UnitsPerBox + 1;
        }

        return boxes;
    }

    // ---------------------------------------------------------
    // HELPERS
    // ---------------------------------------------------------

    private static RectTransform NewRect(string name, Transform parent)
    {
        GameObject go = new GameObject(name, typeof(RectTransform));
        go.transform.SetParent(parent, false);
        return (RectTransform)go.transform;
    }

    private static TMP_Text CloneText(
        TMP_Text source,
        Transform parent,
        string name,
        Vector2 topLeft,
        Vector2 size)
    {
        TMP_Text text = Instantiate(source, parent);
        text.name = name;
        RectTransform rt = text.rectTransform;
        rt.anchorMin = new Vector2(0f, 1f);
        rt.anchorMax = new Vector2(1f, 1f);
        rt.pivot = new Vector2(0f, 1f);
        rt.sizeDelta = size;
        rt.anchoredPosition = topLeft;
        text.alignment = TextAlignmentOptions.MidlineLeft;
        SetAutoSize(text, source.fontSize);
        text.raycastTarget = false;
        return text;
    }

    private static void SetAutoSize(TMP_Text text, float maxSize)
    {
        text.enableAutoSizing = true;
        text.fontSizeMax = maxSize;
        text.fontSizeMin = Mathf.Min(16f, maxSize);
        text.textWrappingMode = TextWrappingModes.NoWrap;
    }
}


using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;

public class TerminalBuyUI : MonoBehaviour
{
    // Status messages that are not errors (light blue, atlas v3 cyan).
    private static readonly Color InfoColour = new Color(0.45f, 0.85f, 1f, 1f);

    [SerializeField] private Transform productGrid;
    [SerializeField] private TMP_Text totalText;
    [SerializeField] private Button orderButton;
    [SerializeField] private DATA_ProductSO[] products;
    [SerializeField] private GameObject terminalPanel;
    [SerializeField] private TMP_Text purchaseFeedbackText;

    private Coroutine feedbackCoroutine;
    private TMP_Text[] quantityTexts;
    private TMP_Text[] nameTexts;
    private TMP_Text[] priceTexts;
    private Button[] minusButtons;
    private Button[] plusButtons;
    private int[] quantities;
    private bool dockBusyFeedbackActive;

    // Read by TerminalStockInfoUI (stock, needed products, box counter).
    public int CardCount => quantities != null ? quantities.Length : 0;
    public Transform ProductGrid => productGrid;
    public TMP_Text TotalText => totalText;
    public Button OrderButton => orderButton;
    public GameObject TerminalPanel => terminalPanel;

    public DATA_ProductSO GetProduct(int index)
    {
        return products != null && index >= 0 && index < products.Length
            ? products[index]
            : null;
    }

    public TMP_Text GetPriceText(int index)
    {
        return priceTexts != null && index >= 0 && index < priceTexts.Length
            ? priceTexts[index]
            : null;
    }

    public int GetQuantity(int index)
    {
        return quantities != null && index >= 0 && index < quantities.Length
            ? quantities[index]
            : 0;
    }

    // Sets the cart quantity of one product (used by "Add missing").
    public void SetQuantity(int index, int value)
    {
        if (quantities == null || index < 0 || index >= quantities.Length)
            return;

        ChangeQuantity(index, Mathf.Max(0, value) - quantities[index]);
    }

    public void Open()
    {
        terminalPanel.SetActive(true);
        MGR_Audio.PlayUIOpen();
    }

    public void Close()
    {
        MGR_Audio.PlayUIClose();
        terminalPanel.SetActive(false);
    }

    private void Start()
    {
        int count = productGrid.childCount;

        quantityTexts = new TMP_Text[count];
        minusButtons = new Button[count];
        plusButtons = new Button[count];
        quantities = new int[count];
        nameTexts = new TMP_Text[count];
        priceTexts = new TMP_Text[count];

        for (int i = 0; i < count; i++)
        {
            Transform card = productGrid.GetChild(i);

            nameTexts[i] = card
                .Find("Product_Name")
                .GetComponent<TMP_Text>();

            priceTexts[i] = card
                .Find("Product_Price")
                .GetComponent<TMP_Text>();

            quantityTexts[i] = card
                .Find("Quantity_Row/Product_Quantity")
                .GetComponent<TMP_Text>();

            minusButtons[i] = card
                .Find("Quantity_Row/Button_Minus")
                .GetComponent<Button>();

            plusButtons[i] = card
                .Find("Quantity_Row/Button_Plus")
                .GetComponent<Button>();

            int index = i;

            plusButtons[i].onClick.AddListener(() => ChangeQuantity(index, 1));
            minusButtons[i].onClick.AddListener(() => ChangeQuantity(index, -1));

            quantityTexts[i].text = "0";
            minusButtons[i].interactable = false;

            if (products != null && i < products.Length)
            {
                nameTexts[i].text = products[i].DisplayName;
                priceTexts[i].text = $"${products[i].BaseCost}";
            }
        }

        totalText.text = "Total: $0";

        if (orderButton != null)
        {
            orderButton.onClick.AddListener(PlaceOrder);

            // Customer orders and supplier purchases both said "Order";
            // the purchase button now says "Buy".
            TMP_Text label = orderButton.GetComponentInChildren<TMP_Text>();
            if (label != null)
                label.text = "Buy";
        }

        if (GetComponent<TerminalStockInfoUI>() == null)
            gameObject.AddComponent<TerminalStockInfoUI>().Build(this);
    }

    private void ChangeQuantity(int index, int amount)
    {
        int previousQuantity = quantities[index];
        quantities[index] = Mathf.Max(0, previousQuantity + amount);

        if (quantities[index] != previousQuantity)
        {
            MGR_Audio.PlayUITap();
        }

        quantityTexts[index].text = quantities[index].ToString();
        minusButtons[index].interactable = quantities[index] > 0;

        UpdateTotal();
    }

    private void UpdateTotal()
    {
        float total = 0f;

        for (int i = 0; i < quantities.Length; i++)
        {
            if (products != null && i < products.Length)
            {
                total += quantities[i] * products[i].BaseCost;
            }
        }

        totalText.text = $"Total: ${total:0}";
    }

    private void ShowPurchaseFeedback(string message)
    {
        if (purchaseFeedbackText == null)
            return;

        if (dockBusyFeedbackActive)
        {
            return;
        }

        if (feedbackCoroutine != null)
            StopCoroutine(feedbackCoroutine);

        purchaseFeedbackText.text = message;

        if (message == "Order placed")
        {
            purchaseFeedbackText.color = Color.green;
        }
        else if (message == "Not enough cash")
        {
            purchaseFeedbackText.color = Color.red;
        }
        else if (message == "Unload the truck first")
        {
            // Not an error: the truck is waiting at the dock.
            purchaseFeedbackText.color = InfoColour;
        }
        else if (message == "Select products first")
        {
            purchaseFeedbackText.color = Color.yellow;
        }

        purchaseFeedbackText.gameObject.SetActive(true);

        feedbackCoroutine = StartCoroutine(HidePurchaseFeedback());
    }

    private IEnumerator HidePurchaseFeedback()
    {
        yield return new WaitForSeconds(2f);

        purchaseFeedbackText.gameObject.SetActive(false);
        feedbackCoroutine = null;
    }

    private void OnEnable()
    {
        MGR_Game.OnPurchaseRejected += HandlePurchaseRejected;
        CTRL_TruckDelivery.OnDockStateChanged += HandleDockStateChanged;

        // Force: the message was hidden in OnDisable, so show it again when
        // the terminal reopens with the truck still at the dock.
        RefreshDockAvailability(true);
    }

    private void OnDisable()
    {
        MGR_Game.OnPurchaseRejected -= HandlePurchaseRejected;
        CTRL_TruckDelivery.OnDockStateChanged -= HandleDockStateChanged;

        if (feedbackCoroutine != null)
        {
            StopCoroutine(feedbackCoroutine);
            feedbackCoroutine = null;
        }

        if (purchaseFeedbackText != null)
        {
            purchaseFeedbackText.gameObject.SetActive(false);
        }

        // The text is hidden now; without this, reopening the terminal with
        // the same truck kept the Buy button grey and showed no reason.
        dockBusyFeedbackActive = false;
    }

    private void HandlePurchaseRejected(PurchaseResult result)
    {
        if (result == PurchaseResult.NotEnoughCash)
        {
            ShowPurchaseFeedback("Not enough cash");
        }
        else if (result == PurchaseResult.DockBusy)
        {
            RefreshDockAvailability(true);
        }
        else if (result == PurchaseResult.TooManyBoxes)
        {
            ShowPurchaseFeedback("Order exceeds the 6 box truck limit");
        }
    }

    private void HandleDockStateChanged(bool isBusy, int boxesLeft)
    {
        RefreshDockAvailability(isBusy, boxesLeft);
    }

    private void RefreshDockAvailability(bool forceRefresh = false)
    {
        CTRL_TruckDelivery truckDelivery = CTRL_TruckDelivery.Instance;
        bool isBusy = truckDelivery != null && truckDelivery.IsDockBusy;
        int boxesLeft = truckDelivery != null ? truckDelivery.BoxesLeftAtDock : 0;
        RefreshDockAvailability(isBusy, boxesLeft, forceRefresh);
    }

    private void RefreshDockAvailability(
        bool isBusy,
        int boxesLeft,
        bool forceRefresh = false)
    {
        if (orderButton != null)
        {
            orderButton.interactable = !isBusy;
        }

        if (isBusy)
        {
            if (purchaseFeedbackText == null)
            {
                return;
            }

            string boxLabel = boxesLeft == 1 ? "box" : "boxes";
            string message = $"Your truck is at the dock: unload {boxesLeft} {boxLabel} first";
            if (!forceRefresh && dockBusyFeedbackActive && purchaseFeedbackText.text == message)
            {
                return;
            }

            if (feedbackCoroutine != null)
            {
                StopCoroutine(feedbackCoroutine);
                feedbackCoroutine = null;
            }

            dockBusyFeedbackActive = true;
            purchaseFeedbackText.text = message;
            purchaseFeedbackText.color = InfoColour;
            purchaseFeedbackText.gameObject.SetActive(true);
            return;
        }

        if (dockBusyFeedbackActive)
        {
            dockBusyFeedbackActive = false;
            if (purchaseFeedbackText != null)
            {
                purchaseFeedbackText.gameObject.SetActive(false);
            }
        }
    }

    private void PlaceOrder()
    {
        if (CTRL_TruckDelivery.Instance != null &&
            CTRL_TruckDelivery.Instance.IsDockBusy)
        {
            RefreshDockAvailability(true);
            return;
        }

        if (MGR_Game.Instance == null)
        {
            Debug.LogWarning("TerminalBuyUI: MGR_Game is not available.");
            return;
        }

        List<PurchaseItem> lines = new List<PurchaseItem>();

        for (int i = 0; i < quantities.Length; i++)
        {
            if (products == null || i >= products.Length)
                continue;

            if (products[i] == null || quantities[i] <= 0)
                continue;

            lines.Add(new PurchaseItem
            {
                Product = products[i],
                Quantity = quantities[i]
            });
        }

        if (lines.Count == 0)
        {
            ShowPurchaseFeedback("Select products first");
            return;
        }

        PurchaseResult result = MGR_Game.Instance.TryPurchase(lines);

        Debug.Log($"Purchase result: {result}");

        if (result != PurchaseResult.Success)
            return;

        if (CTRL_TruckDelivery.Instance != null &&
            CTRL_TruckDelivery.Instance.IsDockBusy)
        {
            RefreshDockAvailability(true);
        }
        else
        {
            ShowPurchaseFeedback("Order placed");
        }

        for (int i = 0; i < quantities.Length; i++)
        {
            quantities[i] = 0;

            if (quantityTexts[i] != null)
                quantityTexts[i].text = "0";

            if (minusButtons[i] != null)
                minusButtons[i].interactable = false;
        }

        UpdateTotal();
    }
}

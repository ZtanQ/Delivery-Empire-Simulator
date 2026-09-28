using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TerminalBuyUI : MonoBehaviour
{
    [SerializeField] private Transform productGrid;
    [SerializeField] private TMP_Text totalText;
    [SerializeField] private Button orderButton;
    [SerializeField] private float unitPrice = 10f;

    private TMP_Text[] quantityTexts;
    private Button[] minusButtons;
    private Button[] plusButtons;
    private int[] quantities;

    private void Start()
    {
        int count = productGrid.childCount;

        quantityTexts = new TMP_Text[count];
        minusButtons = new Button[count];
        plusButtons = new Button[count];
        quantities = new int[count];

        for (int i = 0; i < count; i++)
        {
            Transform card = productGrid.GetChild(i);

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
        }

        totalText.text = "Total: $0";

        if (orderButton != null)
            orderButton.onClick.AddListener(PlaceOrder);
    }

    private void ChangeQuantity(int index, int amount)
    {
        quantities[index] += amount;

        if (quantities[index] < 0)
            quantities[index] = 0;

        quantityTexts[index].text = quantities[index].ToString();
        minusButtons[index].interactable = quantities[index] > 0;

        UpdateTotal();
    }

    private void UpdateTotal()
    {
        float total = 0f;

        for (int i = 0; i < quantities.Length; i++)
        {
            total += quantities[i] * unitPrice;
        }

        totalText.text = $"Total: ${total:0}";
    }

    private void PlaceOrder()
    {
        Debug.Log($"Order placed. Total: {totalText.text}");
    }
}
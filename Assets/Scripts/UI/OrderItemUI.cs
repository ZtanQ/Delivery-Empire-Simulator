using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class OrderItemUI : MonoBehaviour
{
    [SerializeField] private Image icon;
    [SerializeField] private TMP_Text productName;
    [SerializeField] private TMP_Text quantity;

    public void Setup(OrderItem item)
    {
        if (item == null || item.Product == null)
        {
            gameObject.SetActive(false);
            return;
        }

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
    }

    public void Clear()
    {
        gameObject.SetActive(false);
    }
}
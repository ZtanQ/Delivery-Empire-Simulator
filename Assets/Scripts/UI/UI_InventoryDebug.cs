using UnityEngine;
using TMPro;

public class UI_InventoryDebug : MonoBehaviour
{
    [SerializeField] private TMP_Text stockLabel;
    [SerializeField] private DATA_ProductSO product;

    private void OnEnable()
    {
        MGR_Inventory.OnInventoryChanged += HandleInventoryChanged;
    }

    private void OnDisable()
    {
        MGR_Inventory.OnInventoryChanged -= HandleInventoryChanged;
    }

    private void Start()
    {
        if (product != null)
        {
            UpdateLabel(MGR_Inventory.Instance.GetStock(product));
        }
    }

    private void HandleInventoryChanged(DATA_ProductSO changedProduct, int newQuantity)
    {
        if (changedProduct != product)
            return;
            UpdateLabel(newQuantity);
    }

    private void UpdateLabel(int quantity)
    {
        stockLabel.text = $"{product.DisplayName}: {quantity}";
    }
}

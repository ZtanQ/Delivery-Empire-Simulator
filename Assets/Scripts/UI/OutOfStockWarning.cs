using UnityEngine;

public class OutOfStockWarning : MonoBehaviour
{
    private void Start()
    {
        gameObject.SetActive(false);
    }

    public void Show()
    {
        gameObject.SetActive(true);
    }

    public void Hide()
    {
        gameObject.SetActive(false);
    }

    public bool IsOutOfStock(OrderData order)
    {
        if (order == null || order.Items == null)
            return false;

        foreach (OrderItem item in order.Items)
        {
            if (item == null || item.Product == null)
                continue;

            int stock = MGR_Inventory.Instance.GetStock(item.Product);

            if (stock < item.Quantity)
                return true;
        }

        return false;
    }
}
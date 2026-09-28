using UnityEngine;
using UnityEngine.InputSystem;

public class InventoryDebugTester : MonoBehaviour
{
    [SerializeField] private DATA_ProductSO product;

    private void Update()
    {
        if (Keyboard.current == null)
            return;

        if (Keyboard.current.iKey.wasPressedThisFrame)
        {
            MGR_Inventory.Instance.DebugAddStock(product, 1);
        }

        if (Keyboard.current.oKey.wasPressedThisFrame)
        {
            MGR_Inventory.Instance.DebugRemoveStock(product, 1);
        }
    }
}
using System.Collections.Generic;
using UnityEngine;

public class PurchaseDebugTester : MonoBehaviour
{
    [SerializeField] private DATA_ProductSO testProduct;

    [ContextMenu("Test Purchase")]
    private void TestPurchase()
    {
        if (MGR_Game.Instance == null)
        {
            Debug.LogError("MGR_Game is not available.");
            return;
        }

        if (testProduct == null)
        {
            Debug.LogError("Assign a test ProductSO.");
            return;
        }

        List<PurchaseItem> lines = new List<PurchaseItem>
        {
            new PurchaseItem
            {
                Product = testProduct,
                Quantity = 2
            }
        };

        int total = MGR_Game.Instance.GetTotalCost(lines);

        Debug.Log($"Purchase total: {total}");
        Debug.Log($"Cash before purchase: {MGR_Game.Instance.CurrentCash}");

        PurchaseResult result = MGR_Game.Instance.TryPurchase(lines);

        Debug.Log($"Purchase result: {result}");
        Debug.Log($"Cash after purchase: {MGR_Game.Instance.CurrentCash}");
    }
}
using UnityEngine;

public class ShelfPlacementDebugTester : MonoBehaviour
{
    [SerializeField] private ShelfSlot shelf;

    [SerializeField] private DATA_ProductSO correctProduct;

    [SerializeField] private DATA_ProductSO wrongProduct;

    [ContextMenu("Test 1 - Correct Category")]
    private void TestCorrectCategory()
    {
        ShelfBoxData box = new ShelfBoxData
        {
            Product = correctProduct,
            Units = 5
        };

        ShelfPlacementResult result = shelf.TryPlaceBox(box);

        Debug.Log($"Test 1 - Correct Category: {result}");
    }

    [ContextMenu("Test 2 - Wrong Category")]
    private void TestWrongCategory()
    {
        ShelfBoxData box = new ShelfBoxData
        {
            Product = wrongProduct,
            Units = 5
        };

        ShelfPlacementResult result = shelf.TryPlaceBox(box);

        Debug.Log($"Test 2 - Wrong Category: {result}");
    }

    [ContextMenu("Test 3 - Over Capacity")]
    private void TestOverCapacity()
    {
        ShelfBoxData box = new ShelfBoxData
        {
            Product = correctProduct,
            Units = shelf.Capacity + 1
        };

        ShelfPlacementResult result = shelf.TryPlaceBox(box);

        Debug.Log($"Test 3 - Over Capacity: {result}");
    }

    [ContextMenu("Test 4 - Invalid Box")]
    private void TestInvalidBox()
    {
        ShelfBoxData box = new ShelfBoxData
        {
            Product = null,
            Units = 5
        };

        ShelfPlacementResult result = shelf.TryPlaceBox(box);

        Debug.Log($"Test 4 - Invalid Box: {result}");
    }
}
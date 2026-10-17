using UnityEngine;

public class ShelfSlot : MonoBehaviour
{
    [SerializeField] private string shelfID;
    [SerializeField] private ProductCategory category;
    [SerializeField] private int capacity = 20;

    public string ShelfID => shelfID;
    public ProductCategory Category => category;
    public int Capacity => capacity;

    public int CurrentUnits
    {
        get
        {
            if (MGR_Inventory.Instance == null)
            {
                return 0;
            }

            return MGR_Inventory.Instance.GetShelfUnits(
                shelfID
            );
        }
    }

    public ShelfPlacementResult TryPlaceBox(
        ShelfBoxData box)
    {
        if (box == null)
        {
            return ShelfPlacementResult.InvalidBox;
        }

        if (box.Product == null ||
            box.Units <= 0)
        {
            return ShelfPlacementResult.InvalidBox;
        }

        if (box.Product.Category != category)
        {
            return ShelfPlacementResult.WrongCategory;
        }

        if (MGR_Inventory.Instance == null)
        {
            Debug.LogError(
                "MGR_Inventory is not available."
            );

            return ShelfPlacementResult.InvalidShelf;
        }

        int currentUnits =
            MGR_Inventory.Instance.GetShelfUnits(
                shelfID
            );

        if (currentUnits + box.Units > capacity)
        {
            return ShelfPlacementResult.OverCapacity;
        }

        // Increase the total stock of this product.
        MGR_Inventory.Instance.AddStock(
            box.Product,
            box.Units
        );

        // Record the exact product on this shelf.
        // This also updates the shelf's total unit count.
        MGR_Inventory.Instance.AddProductToShelf(
            shelfID,
            category,
            box.Product,
            box.Units
        );

        return ShelfPlacementResult.Success;
    }
}
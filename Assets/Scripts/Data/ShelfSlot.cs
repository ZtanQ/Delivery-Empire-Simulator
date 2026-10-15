using UnityEngine;

public class ShelfSlot : MonoBehaviour
{
    [SerializeField] private string shelfID;
    [SerializeField] private ProductCategory category;
    [SerializeField] private int capacity = 20;

    private int currentUnits;

    public string ShelfID => shelfID;
    public ProductCategory Category => category;
    public int Capacity => capacity;
    public int CurrentUnits => currentUnits;

    public ShelfPlacementResult TryPlaceBox(ShelfBoxData box)
    {
        if (box == null)
        {
            return ShelfPlacementResult.InvalidBox;
        }

        if (box.Product == null || box.Units <= 0)
        {
            return ShelfPlacementResult.InvalidBox;
        }

        if (box.Product.Category != category)
        {
            return ShelfPlacementResult.WrongCategory;
        }

        if (currentUnits + box.Units > capacity)
        {
            return ShelfPlacementResult.OverCapacity;
        }

        currentUnits += box.Units;

        if (MGR_Inventory.Instance == null)
        {
            Debug.LogError("MGR_Inventory is not available.");
            return ShelfPlacementResult.InvalidShelf;
        }

        MGR_Inventory.Instance.AddStock(box.Product, box.Units);

        MGR_Inventory.Instance.UpdateShelf(
            shelfID,
            category,
            currentUnits
        );

        return ShelfPlacementResult.Success;
    }
}
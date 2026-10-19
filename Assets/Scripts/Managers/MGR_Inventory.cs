using System;
using System.Collections.Generic;
using UnityEngine;

public class MGR_Inventory : Manager<MGR_Inventory>
{
    public static event Action<DATA_ProductSO, int> OnInventoryChanged;
    public static event Action<string, ProductCategory, int> OnShelfUpdated;

    [Header("Starting Stock")]
    [SerializeField] private DATA_ProductSO potatoChips;
    [SerializeField] private DATA_ProductSO pretzels;
    [SerializeField] private DATA_ProductSO chocolateBar;
    [SerializeField] private DATA_ProductSO gummyBears;

    [SerializeField] private DATA_ProductSO colaCan;
    [SerializeField] private DATA_ProductSO bottledWater;
    [SerializeField] private DATA_ProductSO orangeJuice;
    [SerializeField] private DATA_ProductSO energyDrink;

    [SerializeField] private DATA_ProductSO wholeMilk;
    [SerializeField] private DATA_ProductSO cheddarCheese;

    [SerializeField] private DATA_ProductSO slicedBread;
    [SerializeField] private DATA_ProductSO bagels;

    // Total stock for each exact product.
    private readonly Dictionary<DATA_ProductSO, int> stock =
        new Dictionary<DATA_ProductSO, int>();

    // Total number of units stored on each shelf.
    private readonly Dictionary<string, int> shelfContents =
        new Dictionary<string, int>();

    // Exact products stored on each shelf.
    private readonly Dictionary<string, Dictionary<DATA_ProductSO, int>>
        shelfProductContents =
            new Dictionary<string, Dictionary<DATA_ProductSO, int>>();

    private readonly Dictionary<string, ProductCategory>
    shelfCategories =
        new Dictionary<string, ProductCategory>();

    protected override void OnInitialise()
    {
        stock.Clear();
        shelfContents.Clear();
        shelfProductContents.Clear();
        shelfCategories.Clear();

        InitialiseStartingStock();

        Debug.Log("MGR_Inventory initialised.");
    }

    private void InitialiseStartingStock()
    {
        // Global product stock.
        AddStartingStock(potatoChips, 2);
        AddStartingStock(pretzels, 1);

        AddStartingStock(chocolateBar, 2);
        AddStartingStock(gummyBears, 1);

        AddStartingStock(colaCan, 2);
        AddStartingStock(bottledWater, 1);

        AddStartingStock(orangeJuice, 2);
        AddStartingStock(energyDrink, 1);

        AddStartingStock(wholeMilk, 2);
        AddStartingStock(cheddarCheese, 1);

        AddStartingStock(slicedBread, 2);
        AddStartingStock(bagels, 1);

        // Exact products stored on each shelf.
        AddStartingShelfStock(
            "SHL_01",
            ProductCategory.Snacks,
            potatoChips,
            2
        );

        AddStartingShelfStock(
            "SHL_01",
            ProductCategory.Snacks,
            pretzels,
            1
        );

        AddStartingShelfStock(
            "SHL_02",
            ProductCategory.Snacks,
            chocolateBar,
            2
        );

        AddStartingShelfStock(
            "SHL_02",
            ProductCategory.Snacks,
            gummyBears,
            1
        );

        AddStartingShelfStock(
            "SHL_03",
            ProductCategory.Drinks,
            colaCan,
            2
        );

        AddStartingShelfStock(
            "SHL_03",
            ProductCategory.Drinks,
            bottledWater,
            1
        );

        AddStartingShelfStock(
            "SHL_04",
            ProductCategory.Drinks,
            orangeJuice,
            2
        );

        AddStartingShelfStock(
            "SHL_04",
            ProductCategory.Drinks,
            energyDrink,
            1
        );

        AddStartingShelfStock(
            "SHL_05",
            ProductCategory.Dairy,
            wholeMilk,
            2
        );

        AddStartingShelfStock(
            "SHL_05",
            ProductCategory.Dairy,
            cheddarCheese,
            1
        );

        AddStartingShelfStock(
            "SHL_06",
            ProductCategory.Bakery,
            slicedBread,
            2
        );

        AddStartingShelfStock(
            "SHL_06",
            ProductCategory.Bakery,
            bagels,
            1
        );

        // Stage 1 shelf slots start empty.
        UpdateShelf("SHL_07", ProductCategory.Snacks, 0);
        UpdateShelf("SHL_08", ProductCategory.Snacks, 0);

        UpdateShelf("SHL_09", ProductCategory.Drinks, 0);
        UpdateShelf("SHL_10", ProductCategory.Drinks, 0);

        UpdateShelf("SHL_11", ProductCategory.Dairy, 0);
        UpdateShelf("SHL_12", ProductCategory.Bakery, 0);

        UpdateShelf("SHL_13", ProductCategory.Dairy, 0);
        UpdateShelf("SHL_14", ProductCategory.Bakery, 0);

        UpdateShelf("SHL_15", ProductCategory.Drinks, 0);
        UpdateShelf("SHL_16", ProductCategory.Drinks, 0);

        UpdateShelf("SHL_17", ProductCategory.Snacks, 0);
        UpdateShelf("SHL_18", ProductCategory.Snacks, 0);

        Debug.Log(
            "MGR_Inventory: Starting stock initialised with 18 units."
        );
    }

    private void AddStartingStock(
        DATA_ProductSO product,
        int amount)
    {
        if (product == null)
        {
            Debug.LogWarning(
                "MGR_Inventory: A starting stock product has not been assigned."
            );

            return;
        }

        stock[product] = amount;

        OnInventoryChanged?.Invoke(
            product,
            amount
        );
    }

    private void AddStartingShelfStock(
        string shelfId,
        ProductCategory category,
        DATA_ProductSO product,
        int amount)
    {
        if (product == null || amount <= 0)
        {
            return;
        }

        AddProductToShelf(
            shelfId,
            category,
            product,
            amount
        );
    }

    public int GetStock(DATA_ProductSO product)
    {
        if (product == null)
        {
            return 0;
        }

        return stock.TryGetValue(
            product,
            out int quantity
        )
            ? quantity
            : 0;
    }

    public void DebugAddStock(
        DATA_ProductSO product,
        int amount)
    {
        if (product == null || amount <= 0)
        {
            return;
        }

        int newQuantity =
            GetStock(product) + amount;

        stock[product] = newQuantity;

        OnInventoryChanged?.Invoke(
            product,
            newQuantity
        );
    }

    public void AddStock(
        DATA_ProductSO product,
        int amount)
    {
        if (product == null || amount <= 0)
        {
            return;
        }

        int newQuantity =
            GetStock(product) + amount;

        stock[product] = newQuantity;

        OnInventoryChanged?.Invoke(
            product,
            newQuantity
        );
    }

    public void DebugRemoveStock(
        DATA_ProductSO product,
        int amount)
    {
        if (product == null || amount <= 0)
        {
            return;
        }

        int currentQuantity =
            GetStock(product);

        int newQuantity =
            Mathf.Max(
                0,
                currentQuantity - amount
            );

        stock[product] = newQuantity;

        OnInventoryChanged?.Invoke(
            product,
            newQuantity
        );
    }

    public bool TryRemoveStock(
        DATA_ProductSO product,
        int amount)
    {
        if (product == null || amount <= 0)
        {
            return false;
        }

        int currentQuantity =
            GetStock(product);

        if (currentQuantity < amount)
        {
            return false;
        }

        int newQuantity =
            currentQuantity - amount;

        stock[product] = newQuantity;

        OnInventoryChanged?.Invoke(
            product,
            newQuantity
        );

        return true;
    }

    public int GetShelfUnits(string shelfId)
    {
        if (string.IsNullOrEmpty(shelfId))
        {
            return 0;
        }

        return shelfContents.TryGetValue(
            shelfId,
            out int quantity
        )
            ? quantity
            : 0;
    }

    public int GetShelfProductUnits(
        string shelfId,
        DATA_ProductSO product)
    {
        if (string.IsNullOrEmpty(shelfId) ||
            product == null)
        {
            return 0;
        }

        if (!shelfProductContents.TryGetValue(
            shelfId,
            out Dictionary<DATA_ProductSO, int> products))
        {
            return 0;
        }

        return products.TryGetValue(
            product,
            out int quantity
        )
            ? quantity
            : 0;
    }

    public List<string> GetShelvesContainingProduct(
    DATA_ProductSO product)
    {
        List<string> result = new List<string>();

        if (product == null)
        {
            return result;
        }

        foreach (KeyValuePair<
            string,
            Dictionary<DATA_ProductSO, int>> shelf
            in shelfProductContents)
        {
            if (shelf.Value.TryGetValue(
                    product,
                    out int quantity) &&
                quantity > 0)
            {
                result.Add(shelf.Key);
            }
        }

        return result;
    }

    public int GetTotalShelfStock(
        DATA_ProductSO product)
    {
        if (product == null)
        {
            return 0;
        }

        int total = 0;

        foreach (KeyValuePair<
            string,
            Dictionary<DATA_ProductSO, int>> shelf
            in shelfProductContents)
        {
            if (shelf.Value.TryGetValue(
                    product,
                    out int quantity))
            {
                total += quantity;
            }
        }

        return total;
    }

    public bool TryRemoveProductFromShelf(
    string shelfId,
    ProductCategory category,
    DATA_ProductSO product,
    int amount)
    {
        if (string.IsNullOrEmpty(shelfId) ||
            product == null ||
            amount <= 0)
        {
            return false;
        }

        if (!shelfProductContents.TryGetValue(
                shelfId,
                out Dictionary<DATA_ProductSO, int> products))
        {
            return false;
        }

        if (!products.TryGetValue(
                product,
                out int currentProductUnits))
        {
            return false;
        }

        if (currentProductUnits < amount)
        {
            return false;
        }

        int currentShelfUnits =
            GetShelfUnits(shelfId);

        if (currentShelfUnits < amount)
        {
            return false;
        }

        int remainingProductUnits =
            currentProductUnits - amount;

        if (remainingProductUnits == 0)
        {
            products.Remove(product);
        }
        else
        {
            products[product] =
                remainingProductUnits;
        }

        UpdateShelf(
            shelfId,
            category,
            currentShelfUnits - amount
        );

        return true;
    }

    public bool TryReserveOrder(
    OrderData order,
    out List<ShelfReservation> reservations)
    {
        reservations = new List<ShelfReservation>();

        if (order == null ||
            !order.IsActive ||
            order.Items == null ||
            order.Items.Count == 0)
        {
            return false;
        }

        // -------------------------------------------------
        // PASS 1:
        // Build the complete reservation plan.
        // Nothing is removed yet.
        // -------------------------------------------------

        foreach (OrderItem item in order.Items)
        {
            if (item == null ||
                item.Product == null ||
                item.Quantity <= 0)
            {
                reservations.Clear();
                return false;
            }

            int remaining = item.Quantity;

            foreach (KeyValuePair<
                string,
                Dictionary<DATA_ProductSO, int>> shelf
                in shelfProductContents)
            {
                if (remaining <= 0)
                {
                    break;
                }

                if (!shelf.Value.TryGetValue(
                        item.Product,
                        out int available))
                {
                    continue;
                }

                if (available <= 0)
                {
                    continue;
                }

                int amountToTake =
                    Mathf.Min(available, remaining);

                if (!shelfCategories.TryGetValue(
                        shelf.Key,
                        out ProductCategory category))
                {
                    reservations.Clear();
                    return false;
                }

                reservations.Add(
                    new ShelfReservation(
                        shelf.Key,
                        category,
                        item.Product,
                        amountToTake
                    )
                );

                remaining -= amountToTake;
            }

            // Could not find enough shelf stock for this item.
            if (remaining > 0)
            {
                reservations.Clear();
                return false;
            }
        }

        // -------------------------------------------------
        // PASS 2:
        // Validate global stock too.
        // Still nothing has been removed.
        // -------------------------------------------------

        foreach (OrderItem item in order.Items)
        {
            if (GetStock(item.Product) < item.Quantity)
            {
                reservations.Clear();
                return false;
            }
        }

        // -------------------------------------------------
        // PASS 3:
        // Entire order is valid.
        // Remove the reserved shelf units.
        // -------------------------------------------------

        foreach (ShelfReservation reservation in reservations)
        {
            bool removedFromShelf =
                TryRemoveProductFromShelf(
                    reservation.ShelfID,
                    reservation.Category,
                    reservation.Product,
                    reservation.Quantity
                );

            if (!removedFromShelf)
            {
                Debug.LogError(
                    $"MGR_Inventory: Failed to remove reserved stock " +
                    $"from shelf {reservation.ShelfID}."
                );

                return false;
            }
        }

        // -------------------------------------------------
        // PASS 4:
        // Remove the same quantities from global stock.
        // -------------------------------------------------

        foreach (OrderItem item in order.Items)
        {
            bool removedFromStock =
                TryRemoveStock(
                    item.Product,
                    item.Quantity
                );

            if (!removedFromStock)
            {
                Debug.LogError(
                    $"MGR_Inventory: Failed to remove reserved global stock " +
                    $"for {item.Product.name}."
                );

                return false;
            }
        }

        return true;
    }

    public void AddProductToShelf(
        string shelfId,
        ProductCategory category,
        DATA_ProductSO product,
        int amount)
    {
        if (string.IsNullOrEmpty(shelfId) ||
            product == null ||
            amount <= 0)
        {
            return;
        }

        if (!shelfProductContents.TryGetValue(
            shelfId,
            out Dictionary<DATA_ProductSO, int> products))
        {
            products =
                new Dictionary<DATA_ProductSO, int>();

            shelfProductContents[shelfId] =
                products;
        }

        int currentProductUnits =
            GetShelfProductUnits(
                shelfId,
                product
            );

        products[product] =
            currentProductUnits + amount;

        int currentShelfUnits =
            GetShelfUnits(shelfId);

        UpdateShelf(
            shelfId,
            category,
            currentShelfUnits + amount
        );
    }

    public void UpdateShelf(
    string shelfId,
    ProductCategory category,
    int quantity)
    {
        if (string.IsNullOrEmpty(shelfId))
        {
            return;
        }

        shelfContents[shelfId] =
            Mathf.Max(0, quantity);

        shelfCategories[shelfId] = category;

        OnShelfUpdated?.Invoke(
            shelfId,
            category,
            shelfContents[shelfId]
        );
    }
}
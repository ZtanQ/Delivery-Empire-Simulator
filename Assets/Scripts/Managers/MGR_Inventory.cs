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

    private Dictionary<DATA_ProductSO, int> stock =
        new Dictionary<DATA_ProductSO, int>();

    private Dictionary<string, int> shelfContents =
        new Dictionary<string, int>();

    protected override void OnInitialise()
    {
        stock.Clear();
        shelfContents.Clear();

        InitialiseStartingStock();

        Debug.Log("MGR_Inventory initialised.");
    }

    private void InitialiseStartingStock()
    {
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

        UpdateShelf("SHL_01", ProductCategory.Snacks, 3);
        UpdateShelf("SHL_02", ProductCategory.Snacks, 3);
        UpdateShelf("SHL_03", ProductCategory.Drinks, 3);
        UpdateShelf("SHL_04", ProductCategory.Drinks, 3);
        UpdateShelf("SHL_05", ProductCategory.Dairy, 3);
        UpdateShelf("SHL_06", ProductCategory.Bakery, 3);

        Debug.Log("MGR_Inventory: Starting stock initialised with 18 units.");
    }

    private void AddStartingStock(DATA_ProductSO product, int amount)
    {
        if (product == null)
        {
            Debug.LogWarning(
                "MGR_Inventory: A starting stock product has not been assigned."
            );
            return;
        }

        stock[product] = amount;

        OnInventoryChanged?.Invoke(product, amount);
    }

    public int GetStock(DATA_ProductSO product)
    {
        if (product == null)
            return 0;

        return stock.TryGetValue(product, out int quantity)
            ? quantity
            : 0;
    }

    public void DebugAddStock(DATA_ProductSO product, int amount)
    {
        if (product == null || amount <= 0)
            return;

        int newQuantity = GetStock(product) + amount;

        stock[product] = newQuantity;

        OnInventoryChanged?.Invoke(product, newQuantity);
    }

    public void AddStock(DATA_ProductSO product, int amount)
    {
        if (product == null || amount <= 0)
            return;

        int newQuantity = GetStock(product) + amount;

        stock[product] = newQuantity;

        OnInventoryChanged?.Invoke(product, newQuantity);
    }

    public void DebugRemoveStock(DATA_ProductSO product, int amount)
    {
        if (product == null || amount <= 0)
            return;

        int currentQuantity = GetStock(product);
        int newQuantity = Mathf.Max(0, currentQuantity - amount);

        stock[product] = newQuantity;

        OnInventoryChanged?.Invoke(product, newQuantity);
    }

    public bool TryRemoveStock(DATA_ProductSO product, int amount)
    {
        if (product == null || amount <= 0)
            return false;

        int currentQuantity = GetStock(product);

        if (currentQuantity < amount)
            return false;

        int newQuantity = currentQuantity - amount;

        stock[product] = newQuantity;

        OnInventoryChanged?.Invoke(product, newQuantity);

        return true;
    }

    public void UpdateShelf(string shelfId, ProductCategory category, int quantity)
    {
        shelfContents[shelfId] = quantity;

        OnShelfUpdated?.Invoke(shelfId, category, quantity);
    }
}
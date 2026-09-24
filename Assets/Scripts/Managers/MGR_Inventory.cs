using System;
using System.Collections.Generic;
using UnityEngine;

public class MGR_Inventory : Manager<MGR_Inventory>
{
    public static event Action<DATA_ProductSO, int> OnInventoryChanged;
    public static event Action<string, ProductCategory, int> OnShelfUpdated;

    private Dictionary<DATA_ProductSO, int> stock =
        new Dictionary<DATA_ProductSO, int>();

    private Dictionary<string, int> shelfContents =
        new Dictionary<string, int>();

    protected override void OnInitialise()
    {
        stock.Clear();
        shelfContents.Clear();

        Debug.Log("MGR_Inventory initialised.");
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
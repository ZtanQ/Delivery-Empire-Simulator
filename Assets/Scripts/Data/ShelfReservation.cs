using UnityEngine;
using System;

[Serializable]
public class ShelfReservation
{
    public string ShelfID;
    public ProductCategory Category;
    public DATA_ProductSO Product;
    public int Quantity;

    public ShelfReservation(
        string shelfID,
        ProductCategory category,
        DATA_ProductSO product,
        int quantity)
    {
        ShelfID = shelfID;
        Category = category;
        Product = product;
        Quantity = quantity;
    }
}

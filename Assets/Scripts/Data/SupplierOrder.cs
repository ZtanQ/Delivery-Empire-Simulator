using UnityEngine;
using System.Collections.Generic;

public class SupplierOrder
{
    public List<PurchaseItem> Items { get; }

    public SupplierOrder(List<PurchaseItem> items)
    {
        Items = items;
    }
}

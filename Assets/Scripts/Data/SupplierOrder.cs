using System.Collections.Generic;

public class SupplierOrder
{
    public List<PurchaseItem> Items { get; }

    public SupplierOrder(List<PurchaseItem> lines)
    {
        Items = new List<PurchaseItem>();

        if (lines == null)
        {
            return;
        }

        foreach (PurchaseItem line in lines)
        {
            if (line == null || line.Product == null || line.Quantity <= 0)
            {
                continue;
            }

            Items.Add(new PurchaseItem
            {
                Product = line.Product,
                Quantity = line.Quantity
            });
        }
    }
}
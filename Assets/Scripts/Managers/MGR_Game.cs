using System;
using UnityEngine;
using System.Collections.Generic;

public class MGR_Game : Manager<MGR_Game>
{
    [SerializeField]
    private int currentCash = 500;

    public int CurrentCash => currentCash;

    public static event Action<int, int> OnCashChanged;
    public static event Action<SupplierOrder> OnSupplierOrderCreated;
    public static event Action<PurchaseResult> OnPurchaseRejected;
    protected override void OnInitialise()
    {
        Debug.Log("5. MGR_Game initialised.");
        Debug.Log($"Current cash: {CurrentCash}");
    }

    public bool TrySpendCash(int amount)
    {
        if (amount <= 0)
        {
            return false;
        }

        if (amount > currentCash)
        {
            return false;
        }

        currentCash -= amount;

        OnCashChanged?.Invoke(currentCash, -amount);

        return true;
    }

    public int GetTotalCost(List<PurchaseItem> lines)
    {
        if (lines == null)
        {
            return 0;
        }

        int totalCost = 0;

        foreach (PurchaseItem line in lines)
        {
            if (line == null || line.Product == null || line.Quantity <= 0)
            {
                continue;
            }

            totalCost += line.Product.BaseCost * line.Quantity;
        }

        return totalCost;
    }

    public PurchaseResult TryPurchase(List<PurchaseItem> lines)
    {
        if (lines == null || lines.Count == 0)
        {
            OnPurchaseRejected?.Invoke(PurchaseResult.EmptyOrder);
            return PurchaseResult.EmptyOrder;
        }

        int totalCost = GetTotalCost(lines);

        if (totalCost <= 0)
        {
            OnPurchaseRejected?.Invoke(PurchaseResult.EmptyOrder);
            return PurchaseResult.EmptyOrder;
        }

        if (totalCost > CurrentCash)
        {
            OnPurchaseRejected?.Invoke(PurchaseResult.NotEnoughCash);
            return PurchaseResult.NotEnoughCash;
        }

        if (!TrySpendCash(totalCost))
        {
            OnPurchaseRejected?.Invoke(PurchaseResult.NotEnoughCash);
            return PurchaseResult.NotEnoughCash;
        }

        SupplierOrder order = new SupplierOrder(lines);

        OnSupplierOrderCreated?.Invoke(order);

        return PurchaseResult.Success;
    }
}
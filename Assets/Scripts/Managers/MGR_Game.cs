using System;
using UnityEngine;
using System.Collections.Generic;

public class MGR_Game : Manager<MGR_Game>
{
    [SerializeField] 
    private DATA_GameBalanceSO gameBalance;

    private int currentCash = 500;
    private int currentXP;
    private int currentLevel;

    public int CurrentCash => currentCash;
    public int CurrentXP => currentXP;
    public int CurrentLevel => currentLevel;

    public static event Action<int, int> OnCashChanged;
    public static event Action<int, int> OnXPChanged;

    public static event Action<SupplierOrder> OnSupplierOrderCreated;
    public static event Action<PurchaseResult> OnPurchaseRejected;
    protected override void OnInitialise()
    {
        currentCash = gameBalance.StartingCash;
        currentXP = gameBalance.StartingXP;
        currentLevel = gameBalance.StartingLevel;

        Debug.Log("5. MGR_Game initialised.");
        Debug.Log($"Current cash: {CurrentCash}");
        Debug.Log($"XP: {CurrentXP}");
        Debug.Log($"Level: {CurrentLevel}");
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

    public void AddCash(int amount)
    {
        if (amount <= 0)
        {
            return;
        }

        currentCash += amount;

        OnCashChanged?.Invoke(currentCash, amount);
    }

    public void AddXP(int amount)
    {
        if (amount <= 0)
        {
            return;
        }

        currentXP += amount;

        OnXPChanged?.Invoke(currentXP, currentLevel);
    }
}
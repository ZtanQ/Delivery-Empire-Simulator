using System;
using System.Collections.Generic;

using UnityEngine;

public class MGR_Game : Manager<MGR_Game>
{
    [Header("Starting Values")]
    [SerializeField] private int startingCash = 500;
    [SerializeField] private int startingXP = 0;
    [SerializeField] private int startingLevel = 1;

    private int currentCash;
    private int currentXP;
    private int currentLevel;

    public int CurrentCash => currentCash;
    public int CurrentXP => currentXP;
    public int CurrentLevel => currentLevel;

    // Cash event:
    // new balance, delta
    public static event Action<int, int> OnCashChanged;

    // XP event:
    // new XP, current level
    public static event Action<int, int> OnXPChanged;

    // Purchase events
    public static event Action<SupplierOrder> OnSupplierOrderCreated;
    public static event Action<PurchaseResult> OnPurchaseRejected;

    protected override void OnInitialise()
    {
        currentCash = startingCash;
        currentXP = startingXP;
        currentLevel = startingLevel;

        Debug.Log("5. MGR_Game initialised.");

        Debug.Log($"Starting cash: {CurrentCash}");
        Debug.Log($"Starting XP: {CurrentXP}");
        Debug.Log($"Starting level: {CurrentLevel}");
    }

    // =========================================================
    // CASH
    // =========================================================

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

    public void AddCash(int amount)
    {
        if (amount <= 0)
        {
            return;
        }

        currentCash += amount;

        OnCashChanged?.Invoke(currentCash, amount);

        Debug.Log($"Added {amount} cash. Current cash: {currentCash}");
    }

    // =========================================================
    // XP
    // =========================================================

    public void AddXP(int amount)
    {
        if (amount <= 0)
        {
            return;
        }

        currentXP += amount;

        // The XP curve / level-up calculation should be added
        // once the confirmed XP curve is provided.
        OnXPChanged?.Invoke(currentXP, currentLevel);

        Debug.Log($"Added {amount} XP. Current XP: {currentXP}");
    }

    // =========================================================
    // PURCHASE
    // =========================================================

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

        Debug.Log($"Purchase successful. Total cost: {totalCost}");

        return PurchaseResult.Success;
    }
}
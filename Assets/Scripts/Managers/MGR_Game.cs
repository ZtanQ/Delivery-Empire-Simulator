using System;
using System.Collections.Generic;

using UnityEngine;

public class MGR_Game : Manager<MGR_Game>
{
    [Header("Starting Values")]
    [SerializeField] private int startingCash = 50000; // $500.00
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

        Debug.Log($"Starting cash: ${CurrentCash / 100f:F2}");
        Debug.Log($"Starting XP: {CurrentXP}");
        Debug.Log($"Starting level: {CurrentLevel}");
    }

    // =========================================================
    // CASH
    // =========================================================

    public bool TrySpendCash(float amount)
    {
        int amountCents = Mathf.RoundToInt(amount * 100f);

        if (amountCents <= 0)
            return false;

        if (currentCash < amountCents)
            return false;

        currentCash -= amountCents;

        OnCashChanged?.Invoke(currentCash, -amountCents);

        Debug.Log(
            $"Spent ${amountCents / 100f:F2}. " +
            $"Current cash: ${currentCash / 100f:F2}"
        );

        return true;
    }

    public void AddCash(float amount)
    {
        int amountCents = Mathf.RoundToInt(amount * 100f);

        if (amountCents <= 0)
            return;

        currentCash += amountCents;

        OnCashChanged?.Invoke(currentCash, amountCents);

        Debug.Log(
            $"Added ${amountCents / 100f:F2} cash. " +
            $"Current cash: ${currentCash / 100f:F2}"
        );
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
        int totalCents = 0;

        if (lines == null)
            return 0;

        foreach (PurchaseItem line in lines)
        {
            if (line == null || line.Product == null || line.Quantity <= 0)
                continue;

            totalCents += Mathf.RoundToInt(
                line.Product.BaseCost * 100f
            ) * line.Quantity;
        }

        return totalCents;
    }

    public PurchaseResult TryPurchase(List<PurchaseItem> lines)
    {
        if (lines == null || lines.Count == 0)
        {
            OnPurchaseRejected?.Invoke(PurchaseResult.EmptyOrder);
            return PurchaseResult.EmptyOrder;
        }

        int totalCostCents = GetTotalCost(lines);

        if (totalCostCents <= 0)
        {
            OnPurchaseRejected?.Invoke(PurchaseResult.EmptyOrder);
            return PurchaseResult.EmptyOrder;
        }

        if (currentCash < totalCostCents)
        {
            OnPurchaseRejected?.Invoke(PurchaseResult.NotEnoughCash);
            return PurchaseResult.NotEnoughCash;
        }

        currentCash -= totalCostCents;

        OnCashChanged?.Invoke(
            currentCash,
            -totalCostCents
        );

        SupplierOrder order = new SupplierOrder(lines);

        OnSupplierOrderCreated?.Invoke(order);

        Debug.Log(
            $"Purchase successful. " +
            $"Total cost: ${totalCostCents / 100f:F2}. " +
            $"Remaining cash: ${currentCash / 100f:F2}"
        );

        return PurchaseResult.Success;
    }
}
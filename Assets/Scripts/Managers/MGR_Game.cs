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
    private bool stage1Purchasable;

    public int CurrentCash => currentCash;
    public int CurrentXP => currentXP;
    public int CurrentLevel => currentLevel;
    public bool IsStage1Purchasable => stage1Purchasable;

    // Cash event:
    // new balance, delta
    public static event Action<int, int> OnCashChanged;

    // XP event:
    // new XP, current level
    public static event Action<int, int> OnXPChanged;
    public static event Action<int> OnLevelUp;

    // Purchase events
    public static event Action<SupplierOrder> OnSupplierOrderCreated;
    public static event Action<PurchaseResult> OnPurchaseRejected;

    protected override void OnInitialise()
    {
        currentCash = startingCash;
        currentXP = startingXP;
        currentLevel = startingLevel;
        stage1Purchasable = currentLevel >= 5;

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
            return;

        currentXP += amount;

        int previousLevel = currentLevel;

        while (currentXP >= GetRequiredXPForLevel(currentLevel + 1))
        {
            currentLevel++;

            ApplyLevelUnlocks();

            OnLevelUp?.Invoke(currentLevel);

            Debug.Log(
                $"Level up! New level: {currentLevel}"
            );
        }

        OnXPChanged?.Invoke(
            currentXP,
            currentLevel
        );

        if (currentLevel != previousLevel)
        {
            Debug.Log(
                $"XP progression updated. " +
                $"XP: {currentXP}, " +
                $"Level: {currentLevel}"
            );
        }
    }

    private int GetRequiredXPForLevel(int level)
    {
        if (level <= 1)
            return 0;

        return Mathf.RoundToInt(
            100f * Mathf.Pow(level, 1.2f)
        );
    }

    private void ApplyLevelUnlocks()
    {
        if (currentLevel >= 5 && !stage1Purchasable)
        {
            stage1Purchasable = true;

            Debug.Log(
                "Level 5 reached. Stage 1 expansion is now purchasable."
            );
        }
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
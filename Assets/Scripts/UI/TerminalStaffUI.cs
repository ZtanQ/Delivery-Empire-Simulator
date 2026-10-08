using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TerminalStaffUI : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] private Button hireButton;
    [SerializeField] private TMP_Text costText;
    [SerializeField] private TMP_Text capText;

    [Header("Hiring")]
    [SerializeField] private float riderHireCost = 100f;

    private void OnEnable()
    {
        RefreshUI();

        MGR_Game.OnCashChanged += HandleGameChanged;
        MGR_Game.OnRatingChanged += HandleRatingChanged;
        MGR_Game.OnLevelUp += HandleLevelUp;
    }

    private void OnDisable()
    {
        MGR_Game.OnCashChanged -= HandleGameChanged;
        MGR_Game.OnRatingChanged -= HandleRatingChanged;
        MGR_Game.OnLevelUp -= HandleLevelUp;
    }

    private void Start()
    {
        RefreshUI();
    }

    public void HireRider()
    {
        if (MGR_Game.Instance == null || MGR_Delivery.Instance == null)
        {
            Debug.LogWarning("Unable to hire rider. Required manager is missing.");
            return;
        }

        if (MGR_Delivery.Instance.IsHiringLocked)
        {
            Debug.Log("Unable to hire rider. Hiring is currently locked.");
            RefreshUI();
            return;
        }

        if (MGR_Delivery.Instance.ActiveRiderCount >=
            MGR_Delivery.Instance.MaximumRiderCount)
        {
            Debug.Log("Unable to hire rider. Maximum rider capacity reached.");
            RefreshUI();
            return;
        }

        if (!MGR_Game.Instance.TrySpendCash(riderHireCost))
        {
            Debug.Log("Unable to hire rider. Not enough cash.");
            RefreshUI();
            return;
        }

        if (!MGR_Delivery.Instance.RegisterRider())
        {
            // Refund if the rider could not be registered.
            MGR_Game.Instance.AddCash(riderHireCost);
            RefreshUI();
            return;
        }

        Debug.Log("Rider hired successfully.");

        RefreshUI();
    }

    private void RefreshUI()
    {
        if (MGR_Delivery.Instance != null)
        {
            int current = MGR_Delivery.Instance.ActiveRiderCount;
            int maximum = MGR_Delivery.Instance.MaximumRiderCount;

            if (capText != null)
                capText.text = $"Riders: {current} / {maximum}";

            if (hireButton != null)
            {
                bool atCap = current >= maximum;
                bool hiringLocked = MGR_Delivery.Instance.IsHiringLocked;

                hireButton.interactable = !atCap && !hiringLocked;
            }
        }

        if (costText != null)
            costText.text = $"Cost: ${riderHireCost:F2}";
    }

    private void HandleGameChanged(int currentCash, int change)
    {
        RefreshUI();
    }

    private void HandleRatingChanged(float rating)
    {
        RefreshUI();
    }

    private void HandleLevelUp(int level)
    {
        RefreshUI();
    }
}
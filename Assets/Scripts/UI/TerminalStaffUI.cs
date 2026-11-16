
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TerminalStaffUI : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] private Button hireButton;
    [SerializeField] private TMP_Text costText;
    [SerializeField] private TMP_Text capText;
    [SerializeField] private TMP_Text staffFeedbackText;

    [Header("Hiring")]
    [SerializeField] private float riderHireCost = 100f;

    private Coroutine feedbackCoroutine;

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

        if (feedbackCoroutine != null)
        {
            StopCoroutine(feedbackCoroutine);
            feedbackCoroutine = null;
        }

        if (staffFeedbackText != null)
            staffFeedbackText.gameObject.SetActive(false);
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
            ShowStaffFeedback("Rating too low");
            RefreshUI();
            return;
        }

        if (MGR_Delivery.Instance.ActiveRiderCount >=
            MGR_Delivery.Instance.MaximumRiderCount)
        {
            ShowStaffFeedback("Maximum riders reached");
            RefreshUI();
            return;
        }

        if (MGR_Game.Instance.CurrentCash <
            Mathf.RoundToInt(riderHireCost * 100f))
        {
            ShowStaffFeedback("Not enough cash");
            RefreshUI();
            return;
        }

        if (!MGR_Game.Instance.TrySpendCash(riderHireCost))
        {
            RefreshUI();
            return;
        }

        if (!MGR_Delivery.Instance.RegisterRider())
        {
            MGR_Game.Instance.AddCash(riderHireCost);
            RefreshUI();
            return;
        }

        Debug.Log("Rider hired successfully.");

        RefreshUI();
    }

    private void ShowStaffFeedback(string message)
    {
        if (staffFeedbackText == null)
            return;

        if (feedbackCoroutine != null)
            StopCoroutine(feedbackCoroutine);

        staffFeedbackText.text = message;
        staffFeedbackText.color = Color.red;
        staffFeedbackText.gameObject.SetActive(true);

        feedbackCoroutine = StartCoroutine(HideStaffFeedback());
    }

    private IEnumerator HideStaffFeedback()
    {
        yield return new WaitForSeconds(2f);

        if (staffFeedbackText != null)
            staffFeedbackText.gameObject.SetActive(false);

        feedbackCoroutine = null;
    }

    private void RefreshUI()
    {
        string blockMessage = "";

        if (MGR_Delivery.Instance != null)
        {
            int current = MGR_Delivery.Instance.ActiveRiderCount;
            int maximum = MGR_Delivery.Instance.MaximumRiderCount;

            if (capText != null)
                capText.text = $"Riders: {current} / {maximum}";

            if (current >= maximum)
            {
                blockMessage = "Maximum riders reached";
            }
            else if (MGR_Delivery.Instance.IsHiringLocked)
            {
                blockMessage = "Rating too low";
            }
            else if (MGR_Game.Instance == null ||
                MGR_Game.Instance.CurrentCash < Mathf.RoundToInt(riderHireCost * 100f))
            {
                blockMessage = "Not enough cash";
            }


            if (hireButton != null)
                hireButton.interactable = blockMessage == "";
        }

        if (costText != null)
            costText.text = $"Cost: ${riderHireCost:F2}";

        if (staffFeedbackText != null)
        {
            bool blocked = !string.IsNullOrEmpty(blockMessage);

            staffFeedbackText.text = blockMessage;
            staffFeedbackText.color = Color.red;
            staffFeedbackText.gameObject.SetActive(blocked);
        }
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
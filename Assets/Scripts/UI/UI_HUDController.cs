
using System.Collections;
using System.Globalization;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class UI_HUDController : MonoBehaviour
{
    [Header("Level & XP")]
    public TMP_Text levelText;
    public TMP_Text xpText;
    public Image xpBar;

    [Header("Cash & Rating")]
    public TMP_Text cashText;
    public TMP_Text ratingText;

    [Header("Order Result Feedback")]
    public TMP_Text cashOrderFeedbackText;
    public TMP_Text ratingOrderFeedbackText;

    [SerializeField]
    private float feedbackDuration = 1.5f;

    private readonly Queue<int> pendingCashRewards =
        new Queue<int>();

    private int pendingFulfilledOrders;
    private int pendingExpiredOrders;

    private float lastKnownRating;

    private Coroutine cashFeedbackRoutine;
    private Coroutine ratingFeedbackRoutine;

    private void Awake()
    {
        if (cashOrderFeedbackText != null)
            cashOrderFeedbackText.gameObject.SetActive(false);

        if (ratingOrderFeedbackText != null)
            ratingOrderFeedbackText.gameObject.SetActive(false);
    }

    public void SetLevel(int level)
    {
        if (levelText != null)
            levelText.text = level.ToString();
    }

    public void SetXP(int currentXP, int requiredXP)
    {
        if (xpText != null)
            xpText.text = $"{currentXP} / {requiredXP} XP";

        if (xpBar != null)
        {
            xpBar.fillAmount = requiredXP > 0
                ? Mathf.Clamp01((float)currentXP / requiredXP)
                : 0f;
        }
    }

    public void SetCash(int cash)
    {
        if (cashText != null)
        {
            cashText.text = "$" +
                (cash / 100f).ToString(
                    "N2",
                    CultureInfo.InvariantCulture
                );
        }
    }

    public void SetRating(float rating)
    {
        if (ratingText != null)
        {
            ratingText.text = rating.ToString(
                "0.0",
                CultureInfo.InvariantCulture
            );
        }
    }

    private void OnEnable()
    {
        MGR_Game.OnCashChanged += HandleCashChanged;
        MGR_Game.OnXPChanged += HandleXPChanged;
        MGR_Game.OnRatingChanged += HandleRatingChanged;

        MGR_Order.OnOrderFulfilled += HandleOrderFulfilled;
        MGR_Order.OnOrderExpired += HandleOrderExpired;

        if (MGR_Game.Instance == null)
            return;

        int currentLevel = MGR_Game.Instance.CurrentLevel;
        int currentXP = MGR_Game.Instance.CurrentXP;

        lastKnownRating = MGR_Game.Instance.CurrentRating;

        SetLevel(currentLevel);
        UpdateXPDisplay(currentXP, currentLevel);
        SetCash(MGR_Game.Instance.CurrentCash);
        SetRating(lastKnownRating);
    }

    private void OnDisable()
    {
        MGR_Game.OnCashChanged -= HandleCashChanged;
        MGR_Game.OnXPChanged -= HandleXPChanged;
        MGR_Game.OnRatingChanged -= HandleRatingChanged;

        MGR_Order.OnOrderFulfilled -= HandleOrderFulfilled;
        MGR_Order.OnOrderExpired -= HandleOrderExpired;

        if (cashFeedbackRoutine != null)
            StopCoroutine(cashFeedbackRoutine);

        if (ratingFeedbackRoutine != null)
            StopCoroutine(ratingFeedbackRoutine);

        pendingCashRewards.Clear();
        pendingFulfilledOrders = 0;
        pendingExpiredOrders = 0;
    }

    private void LateUpdate()
    {
        while (
            pendingFulfilledOrders > 0 &&
            pendingCashRewards.Count > 0
        )
        {
            int cashDelta = pendingCashRewards.Dequeue();

            ShowCashFeedback(cashDelta);

            pendingFulfilledOrders--;
        }

        if (pendingExpiredOrders > 0)
        {
            for (int i = 0; i < pendingExpiredOrders; i++)
            {
                ShowRatingFeedback(0.15f);
            }

            pendingExpiredOrders = 0;
        }
    }

    private void HandleCashChanged(int newCash, int delta)
    {
        SetCash(newCash);

        if (delta > 0)
            pendingCashRewards.Enqueue(delta);
    }

    private void HandleXPChanged(int newXP, int currentLevel)
    {
        SetLevel(currentLevel);
        UpdateXPDisplay(newXP, currentLevel);
    }

    private void HandleRatingChanged(float newRating)
    {
        float ratingDelta = newRating - lastKnownRating;

        lastKnownRating = newRating;

        SetRating(newRating);

        // Rating feedback is handled by order events.
        // This event updates the actual rating display.
    }

    private void HandleOrderFulfilled(OrderData order)
    {
        if (order == null)
            return;

        pendingFulfilledOrders++;
    }

    private void HandleOrderExpired(OrderData order)
    {
        if (order == null)
            return;

        pendingExpiredOrders++;
    }

    private void ShowCashFeedback(int amountCents)
    {
        if (cashOrderFeedbackText == null)
            return;

        float amount = amountCents / 100f;

        string amountText = amount.ToString(
            "0.##",
            CultureInfo.InvariantCulture
        );

        cashOrderFeedbackText.text = $"+${amountText}";
        cashOrderFeedbackText.color = Color.green;

        if (cashFeedbackRoutine != null)
            StopCoroutine(cashFeedbackRoutine);

        cashFeedbackRoutine =
            StartCoroutine(FadeFeedback(cashOrderFeedbackText));
    }

    private void ShowRatingFeedback(float amount)
    {
        if (ratingOrderFeedbackText == null)
            return;

        ratingOrderFeedbackText.text =
            $"-{amount.ToString("0.00", CultureInfo.InvariantCulture)}";

        ratingOrderFeedbackText.color = Color.red;

        if (ratingFeedbackRoutine != null)
            StopCoroutine(ratingFeedbackRoutine);

        ratingFeedbackRoutine =
            StartCoroutine(FadeFeedback(ratingOrderFeedbackText));
    }

    private IEnumerator FadeFeedback(TMP_Text feedbackText)
    {
        feedbackText.gameObject.SetActive(true);

        Color originalColor = feedbackText.color;
        originalColor.a = 1f;
        feedbackText.color = originalColor;

        float elapsed = 0f;

        while (elapsed < feedbackDuration)
        {
            elapsed += Time.deltaTime;

            float alpha = 1f -
                Mathf.Clamp01(elapsed / feedbackDuration);

            Color color = feedbackText.color;
            color.a = alpha;
            feedbackText.color = color;

            yield return null;
        }

        feedbackText.gameObject.SetActive(false);
    }

    private void UpdateXPDisplay(int totalXP, int currentLevel)
    {
        if (MGR_Game.Instance == null)
            return;

        int currentLevelXP =
            MGR_Game.Instance.GetRequiredXPForLevel(currentLevel);

        int nextLevelXP =
            MGR_Game.Instance.GetRequiredXPForLevel(currentLevel + 1);

        int xpIntoLevel = Mathf.Max(0, totalXP - currentLevelXP);
        int xpNeeded = Mathf.Max(1, nextLevelXP - currentLevelXP);

        SetXP(xpIntoLevel, xpNeeded);
    }
}

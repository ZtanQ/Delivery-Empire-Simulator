
using System.Collections;
using System.Globalization;
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
    [SerializeField] private TMP_Text cashOrderHikeText;
    [SerializeField] private TMP_Text ratingOrderDropText;

    [Header("Feedback Animation")]
    [SerializeField] private float feedbackDuration = 1.5f;
    [SerializeField] private float feedbackMoveDistance = 30f;
    [SerializeField] private int feedbackPoolSize = 3;

    private FeedbackItem[] cashFeedbackPool;
    private FeedbackItem[] ratingFeedbackPool;

    private int nextCashFeedbackIndex;
    private int nextRatingFeedbackIndex;

    private float lastKnownRating;

    private bool pendingRatingFeedback;
    private float pendingRatingDelta;

    private class FeedbackItem
    {
        public TMP_Text text;
        public RectTransform rectTransform;
        public Vector2 startPosition;
        public Coroutine routine;
    }

    private void Awake()
    {
        cashFeedbackPool = CreateFeedbackPool(
            cashOrderHikeText,
            feedbackPoolSize
        );

        ratingFeedbackPool = CreateFeedbackPool(
            ratingOrderDropText,
            feedbackPoolSize
        );
    }

    private FeedbackItem[] CreateFeedbackPool(
        TMP_Text template,
        int poolSize)
    {
        if (template == null)
            return null;

        FeedbackItem[] pool = new FeedbackItem[poolSize];

        RectTransform parent =
            template.transform.parent as RectTransform;

        for (int i = 0; i < poolSize; i++)
        {
            TMP_Text text;

            if (i == 0)
            {
                text = template;
            }
            else
            {
                text = Instantiate(template, parent);
                text.name = template.name + "_Pool_" + i;
            }

            RectTransform rect =
                text.GetComponent<RectTransform>();

            pool[i] = new FeedbackItem
            {
                text = text,
                rectTransform = rect,
                startPosition = rect.anchoredPosition
            };

            text.gameObject.SetActive(false);
        }

        return pool;
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

        StopFeedbackPool(cashFeedbackPool);
        StopFeedbackPool(ratingFeedbackPool);

        pendingRatingFeedback = false;
        pendingRatingDelta = 0f;
    }

    private void StopFeedbackPool(FeedbackItem[] pool)
    {
        if (pool == null)
            return;

        foreach (FeedbackItem item in pool)
        {
            if (item == null)
                continue;

            if (item.routine != null)
            {
                StopCoroutine(item.routine);
                item.routine = null;
            }

            item.text.gameObject.SetActive(false);
            item.rectTransform.anchoredPosition =
                item.startPosition;
        }
    }

    private void HandleCashChanged(int newCash, int delta)
    {
        SetCash(newCash);
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

        if (ratingDelta < 0f)
        {
            pendingRatingDelta = ratingDelta;
            pendingRatingFeedback = true;
        }
    }

    private void HandleOrderFulfilled(OrderData order)
    {
        if (order == null)
            return;

        string amountText = order.CashReward.ToString(
            "0.##",
            CultureInfo.InvariantCulture
        );

        ShowFeedback(
            cashFeedbackPool,
            ref nextCashFeedbackIndex,
            $"+${amountText}",
            Color.green
        );
    }

    private void HandleOrderExpired(OrderData order)
    {
        if (order == null)
            return;

        if (!pendingRatingFeedback)
            return;

        string ratingTextValue = pendingRatingDelta.ToString(
            "+0.00;-0.00",
            CultureInfo.InvariantCulture
        );

        ShowFeedback(
            ratingFeedbackPool,
            ref nextRatingFeedbackIndex,
            ratingTextValue,
            Color.red
        );

        pendingRatingFeedback = false;
        pendingRatingDelta = 0f;
    }

    private void ShowFeedback(
        FeedbackItem[] pool,
        ref int nextIndex,
        string message,
        Color color)
    {
        if (pool == null || pool.Length == 0)
            return;

        FeedbackItem item = pool[nextIndex];

        nextIndex = (nextIndex + 1) % pool.Length;

        if (item.routine != null)
            StopCoroutine(item.routine);

        item.text.text = message;
        item.text.color = color;
        item.rectTransform.anchoredPosition =
            item.startPosition;

        item.text.gameObject.SetActive(true);

        item.routine = StartCoroutine(
            AnimateFeedback(item)
        );
    }

    private IEnumerator AnimateFeedback(FeedbackItem item)
    {
        float elapsed = 0f;

        Color originalColor = item.text.color;

        while (elapsed < feedbackDuration)
        {
            elapsed += Time.deltaTime;

            float progress = Mathf.Clamp01(
                elapsed / feedbackDuration
            );

            item.rectTransform.anchoredPosition =
                item.startPosition +
                Vector2.up * feedbackMoveDistance * progress;

            Color color = originalColor;
            color.a = 1f - progress;
            item.text.color = color;

            yield return null;
        }

        item.text.gameObject.SetActive(false);

        item.rectTransform.anchoredPosition =
            item.startPosition;

        item.text.color = originalColor;
        item.routine = null;
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
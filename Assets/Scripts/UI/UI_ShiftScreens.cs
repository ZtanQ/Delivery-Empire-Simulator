
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class UI_ShiftScreens : MonoBehaviour
{
    [Header("Panels")]
    [SerializeField] private GameObject panelShiftBriefing;
    [SerializeField] private GameObject panelShiftSummary;
    [SerializeField] private GameObject panelContractWon;
    [SerializeField] private GameObject panelShiftFailed;

    [Header("Screen Background")]
    [SerializeField] private GameObject backgroundDark;
    [SerializeField] private GameObject panelContainer;

    [Header("Briefing")]
    [SerializeField] private TMP_Text briefingMessage;
    [SerializeField] private TMP_Text wonMessage;
    [SerializeField] private TMP_Text failedMessage;

    [Header("Summary")]
    [SerializeField] private TMP_Text ordersDeliveredText;
    [SerializeField] private TMP_Text ordersExpiredText;
    [SerializeField] private TMP_Text cashEarnedText;
    [SerializeField] private TMP_Text finalRatingText;
    [SerializeField] private TMP_Text summaryTitle;

    [Header("Stars")]
    [SerializeField] private Image star1;
    [SerializeField] private Image star2;
    [SerializeField] private Image star3;

    [SerializeField] private Sprite starFilled;
    [SerializeField] private Sprite starEmpty;

    [Header("Notifications")]
    [SerializeField] private float notificationDuration = 2.5f;

    [SerializeField] private TMP_Text notificationText;
    private float notificationTimer;

    private void Awake()
    {
        HideAllPanels();
    }

    private void OnEnable()
    {
        MGR_Shift.OnShiftBriefing += HandleShiftBriefing;
        MGR_Shift.OnShiftEnded += HandleShiftEnded;
        MGR_Shift.OnContractWon += HandleContractWon;
        MGR_Shift.OnShiftStarted += HandleShiftStarted;
        MGR_Shift.OnTargetReached += HandleTargetReached;
        MGR_Shift.OnEmergencyBox += HandleEmergencyBox;
    }

    private void OnDisable()
    {
        MGR_Shift.OnShiftBriefing -= HandleShiftBriefing;
        MGR_Shift.OnShiftEnded -= HandleShiftEnded;
        MGR_Shift.OnContractWon -= HandleContractWon;
        MGR_Shift.OnShiftStarted -= HandleShiftStarted;
        MGR_Shift.OnTargetReached -= HandleTargetReached;
        MGR_Shift.OnEmergencyBox -= HandleEmergencyBox;
    }

    private void HandleShiftBriefing(MGR_Shift shift)
    {
        if (shift == null || shift.CurrentTarget == null)
            return;

        int minutes = Mathf.CeilToInt(shift.Contract.shiftSeconds / 60f);
        int amount = shift.CurrentTarget.amount;

        string goalText;

        switch (shift.CurrentTarget.goal)
        {
            case ShiftGoalType.DeliverOrders:
                goalText = $"Deliver {amount} orders in {minutes} min.";
                break;

            case ShiftGoalType.EarnCash:
                goalText = $"Earn ${amount} in {minutes} min.";
                break;

            default:
                goalText = $"Complete the goal in {minutes} min.";
                break;
        }

        string message = shift.IsNewGameIntro
            ? $"Welcome to your warehouse!\n{goalText}"
            : $"Get ready for Shift {shift.ShiftIndex + 1}!\n{goalText}";

        ShowBriefing(message);
    }

    private void HandleShiftEnded(MGR_Shift.ShiftResult result)
    {
        if (result.Success)
        {
            UpdateSummary(result);
            ShowSummary();
        }
        else
        {
            if (failedMessage != null)
            {
                if (result.Reason == MGR_Shift.EndReason.TimeUp)
                    failedMessage.text = "Time is up! Shift failed.";
                else if (result.Reason == MGR_Shift.EndReason.CustomersLeft)
                    failedMessage.text = "Too many customers left!";
                else
                    failedMessage.text = "Shift goal not reached.";
            }

            ShowShiftFailed();
        }
    }

    private void HandleContractWon(MGR_Shift shift)
    {
        if (wonMessage != null)
            wonMessage.text = "Congratulations! You completed all shifts!";

        ShowContractWon();
    }

    private void UpdateSummary(MGR_Shift.ShiftResult result)
    {
        if (result == null)
            return;

        if (summaryTitle != null)
            summaryTitle.text = "SHIFT SUMMARY";

        if (ordersDeliveredText != null)
            ordersDeliveredText.text = $"Orders Delivered: {result.Delivered}";

        if (ordersExpiredText != null)
            ordersExpiredText.text = $"Orders Expired: {result.Expired}";

        if (cashEarnedText != null)
            cashEarnedText.text = $"Cash Earned: ${result.CashEarned:0.00}";

        if (finalRatingText != null)
            finalRatingText.text = $"Final Rating: {result.RatingEnd:0.0}";

        if (starFilled != null && starEmpty != null)
        {
            if (star1 != null)
                star1.sprite = result.Stars >= 1 ? starFilled : starEmpty;

            if (star2 != null)
                star2.sprite = result.Stars >= 2 ? starFilled : starEmpty;

            if (star3 != null)
                star3.sprite = result.Stars >= 3 ? starFilled : starEmpty;
        }
    }

    private void HandleTargetReached(MGR_Shift shift)
{
    ShowNotification("Goal reached!", notificationDuration);
}

private void HandleEmergencyBox()
{
    ShowNotification(
        "Out of cash and stock: a free box is at the dock",
        5f
    );
}

    private void ShowNotification(string message, float duration)
    {
        if (notificationText == null)
        {
            GameObject notificationObject = new GameObject(
                "Shift_Notification",
                typeof(RectTransform),
                typeof(TextMeshProUGUI)
            );

            notificationObject.transform.SetParent(transform, false);

            RectTransform rect = notificationObject.GetComponent<RectTransform>();
            rect.anchorMin = new Vector2(0.5f, 0.8f);
            rect.anchorMax = new Vector2(0.5f, 0.8f);
            rect.pivot = new Vector2(0.5f, 0.5f);
            rect.anchoredPosition = Vector2.zero;
            rect.sizeDelta = new Vector2(900f, 100f);

            notificationText = notificationObject.GetComponent<TextMeshProUGUI>();
            notificationText.alignment = TextAlignmentOptions.Center;
            notificationText.fontSize = 30f;
            notificationText.font = briefingMessage != null
                ? briefingMessage.font
                : TMP_Settings.defaultFontAsset;
            notificationText.raycastTarget = false;
        }

        notificationText.text = message;
        notificationText.gameObject.SetActive(true);
        notificationTimer = duration;
    }

    private void Update()
    {
        if (notificationText == null || !notificationText.gameObject.activeSelf)
            return;

        notificationTimer -= Time.deltaTime;

        if (notificationTimer <= 0f)
            notificationText.gameObject.SetActive(false);
    }

    private void HandleShiftStarted(MGR_Shift shift)
    {
        HideAllPanels();

        if (backgroundDark != null)
            backgroundDark.SetActive(false);

        if (panelContainer != null)
            panelContainer.SetActive(false);
    }

    private void ActivateScreen()
    {
        if (backgroundDark != null)
            backgroundDark.SetActive(true);

        if (panelContainer != null)
            panelContainer.SetActive(true);
    }
    private void HideAllPanels()
    {
        panelShiftBriefing.SetActive(false);
        panelShiftSummary.SetActive(false);
        panelContractWon.SetActive(false);
        panelShiftFailed.SetActive(false);
    }

    public void ShowBriefing(string message)
    {
        HideAllPanels();
        ActivateScreen();

        if (briefingMessage != null)
            briefingMessage.text = message;

        panelShiftBriefing.SetActive(true);
    }

    public void StartShift()
    {
        if (MGR_Shift.Instance == null)
            return;

        MGR_Shift.Instance.StartShift();
    }

    public void NextShift()
    {
        if (MGR_Shift.Instance == null)
            return;

        MGR_Shift.Instance.NextShift();
    }

    public void StartFreePlay()
    {
        if (MGR_Shift.Instance == null)
            return;

        MGR_Shift.Instance.StartFreePlay();
    }

    public void RetryShift()
    {
        if (MGR_Shift.Instance == null)
            return;

        MGR_Shift.Instance.RetryShift();
    }

    public void ShowSummary()
    {
        HideAllPanels();
        ActivateScreen();
        panelShiftSummary.SetActive(true);
    }

    public void ShowContractWon()
    {
        HideAllPanels();
        ActivateScreen();
        panelContractWon.SetActive(true);
    }

    public void ShowShiftFailed()
    {
        HideAllPanels();
        ActivateScreen();
        panelShiftFailed.SetActive(true);
    }

    public void HideScreens()
    {
        HideAllPanels();
    }
}
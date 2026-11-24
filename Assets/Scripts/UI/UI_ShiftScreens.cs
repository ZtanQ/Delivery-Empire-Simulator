
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
    }

    private void OnDisable()
    {
        MGR_Shift.OnShiftBriefing -= HandleShiftBriefing;
        MGR_Shift.OnShiftEnded -= HandleShiftEnded;
        MGR_Shift.OnContractWon -= HandleContractWon;
        MGR_Shift.OnShiftStarted -= HandleShiftStarted;
    }

    private void HandleShiftBriefing(MGR_Shift shift)
    {
        if (shift == null)
            return;

        string message = shift.IsNewGameIntro
            ? "Welcome to your warehouse!"
            : $"Get ready for Shift {shift.ShiftIndex + 1}!";

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

using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UI_ShiftHUDController : MonoBehaviour
{
    [Header("Shift HUD References")]
    [SerializeField] private TMP_Text shiftNumberText;
    [SerializeField] private TMP_Text shiftTimerText;
    [SerializeField] private Image goalIcon;
    [SerializeField] private TMP_Text goalCounterText;
    [SerializeField] private Image goalProgressFill;

    [Header("Goal Icons")]
    [SerializeField] private Sprite deliverOrdersIcon;
    [SerializeField] private Sprite earnCashIcon;

    [Header("Timer Colors")]
    [SerializeField] private Color normalTimerColor = Color.white;
    [SerializeField] private Color urgentTimerColor = Color.red;
    [SerializeField] private float urgentTimeThreshold = 30f;

    [Header("Progress Animation")]
    [SerializeField] private float bounceScale = 1.15f;
    [SerializeField] private float bounceSpeed = 8f;

    [Header("Goal Reached Highlight")]
    [SerializeField] private Color completedColor = Color.green;
    [SerializeField] private float highlightSpeed = 3f;

    private Vector3 counterOriginalScale;
    private Vector3 iconOriginalScale;

    private int previousProgress = -1;

    private bool isBouncing;
    private bool isGoalReached;

    private float bounceTimer;
    private float highlightTimer;

    private Color originalCounterColor;
    private Color originalFillColor;
    private Color originalIconColor;

    private void Awake()
    {
        if (goalCounterText != null)
        {
            counterOriginalScale = goalCounterText.transform.localScale;
            originalCounterColor = goalCounterText.color;
        }

        if (goalIcon != null)
        {
            iconOriginalScale = goalIcon.transform.localScale;
            originalIconColor = goalIcon.color;
        }

        if (goalProgressFill != null)
            originalFillColor = goalProgressFill.color;
    }

    private void OnEnable()
    {
        MGR_Shift.OnShiftBriefing += HandleShiftUpdate;
        MGR_Shift.OnShiftStarted += HandleShiftUpdate;
        MGR_Shift.OnShiftProgress += HandleShiftUpdate;
        MGR_Shift.OnTargetReached += HandleTargetReached;

        if (MGR_Shift.Instance != null)
            UpdateHUD(MGR_Shift.Instance);
    }

    private void OnDisable()
    {
        MGR_Shift.OnShiftBriefing -= HandleShiftUpdate;
        MGR_Shift.OnShiftStarted -= HandleShiftUpdate;
        MGR_Shift.OnShiftProgress -= HandleShiftUpdate;
        MGR_Shift.OnTargetReached -= HandleTargetReached;
    }

    private void Update()
    {
        UpdateBounceAnimation();
        UpdateGoalHighlight();
    }

    private void HandleShiftUpdate(MGR_Shift shift)
    {
        UpdateHUD(shift);
    }

    private void HandleTargetReached(MGR_Shift shift)
    {
        isGoalReached = true;
    }

    private void UpdateHUD(MGR_Shift shift)
    {
        if (shift == null)
            return;

        UpdateShiftNumber(shift);
        UpdateTimer(shift);
        UpdateGoal(shift);
    }

    private void UpdateShiftNumber(MGR_Shift shift)
    {
        if (shiftNumberText == null)
            return;

        shiftNumberText.text =
            $"Shift {shift.ShiftIndex + 1}/{shift.ShiftCount}";
    }

    private void UpdateTimer(MGR_Shift shift)
    {
        if (shiftTimerText == null)
            return;

        int totalSeconds = Mathf.Max(0, Mathf.CeilToInt(shift.TimeLeft));

        int minutes = totalSeconds / 60;
        int seconds = totalSeconds % 60;

        shiftTimerText.text = $"{minutes}:{seconds:00}";

        shiftTimerText.color =
            shift.TimeLeft <= urgentTimeThreshold
                ? urgentTimerColor
                : normalTimerColor;
    }

    private void UpdateGoal(MGR_Shift shift)
    {
        if (shift.CurrentTarget == null)
            return;

        int progress = shift.GoalProgress;
        int target = Mathf.Max(1, shift.CurrentTarget.amount);

        if (goalCounterText != null)
            goalCounterText.text = $"{progress} / {target}";

        if (goalProgressFill != null)
            goalProgressFill.fillAmount =
                Mathf.Clamp01((float)progress / target);

        UpdateGoalIcon(shift);

        if (previousProgress >= 0 && progress > previousProgress)
            StartBounce();

        previousProgress = progress;
    }

    private void UpdateGoalIcon(MGR_Shift shift)
    {
        if (goalIcon == null)
            return;

        switch (shift.CurrentTarget.goal)
        {
            case ShiftGoalType.DeliverOrders:
                if (deliverOrdersIcon != null)
                    goalIcon.sprite = deliverOrdersIcon;
                break;

            case ShiftGoalType.EarnCash:
                if (earnCashIcon != null)
                    goalIcon.sprite = earnCashIcon;
                break;
        }
    }

    private void StartBounce()
    {
        isBouncing = true;
        bounceTimer = 0f;
    }

    private void UpdateBounceAnimation()
    {
        if (!isBouncing || goalCounterText == null)
            return;

        bounceTimer += Time.unscaledDeltaTime * bounceSpeed;

        float scale = Mathf.Lerp(
            bounceScale,
            1f,
            Mathf.Clamp01(bounceTimer)
        );

        goalCounterText.transform.localScale =
            counterOriginalScale * scale;

        if (bounceTimer >= 1f)
        {
            isBouncing = false;
            goalCounterText.transform.localScale = counterOriginalScale;
        }
    }

    private void UpdateGoalHighlight()
    {
        if (!isGoalReached)
            return;

        highlightTimer += Time.unscaledDeltaTime * highlightSpeed;

        float pulse = (Mathf.Sin(highlightTimer) + 1f) * 0.5f;

        Color highlight = Color.Lerp(
            originalCounterColor,
            completedColor,
            pulse
        );

        if (goalCounterText != null)
            goalCounterText.color = highlight;

        if (goalProgressFill != null)
            goalProgressFill.color = Color.Lerp(
                originalFillColor,
                completedColor,
                pulse
            );

        if (goalIcon != null)
            goalIcon.color = Color.Lerp(
                originalIconColor,
                completedColor,
                pulse
            );
    }
}
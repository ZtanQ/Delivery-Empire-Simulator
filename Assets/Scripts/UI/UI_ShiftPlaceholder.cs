using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// PLACEHOLDER screens for the shift contract (MGR_Shift), built at runtime
// so the contract can be played and tuned in Build B0. Willyans replaces
// them with the final screens in 1121-UI (same MGR_Shift events); then this
// component is removed from MGR_Shift.HandleSceneLoaded.
//   - goal widget at the top: shift, goal with live progress, time left
//   - briefing card (intro text on a new game), shift summary with stars,
//     contract won, and a toast for the emergency box
// Uses atlas v3 sprites (panel_order_card_128, star_gold_filled_64,
// star_grey_disabled_64, ui_white_pixel); no new art.
public class UI_ShiftPlaceholder : MonoBehaviour
{
    private const string AtlasPath = "Atlas/T_UI_Atlas_v3";

    private static readonly Color PanelColour = new Color(0.12f, 0.14f, 0.18f, 0.96f);
    private static readonly Color DimColour = new Color(0f, 0f, 0f, 0.6f);
    private static readonly Color ButtonColour = new Color(0.2f, 0.55f, 0.95f, 1f);
    private static readonly Color SecondaryButtonColour = new Color(0.35f, 0.38f, 0.45f, 1f);
    private static readonly Color GoodColour = new Color(0.4f, 0.9f, 0.45f, 1f);
    private static readonly Color BadColour = new Color(0.95f, 0.35f, 0.3f, 1f);
    private static readonly Color TextColour = Color.white;

    private Sprite panelSprite;
    private Sprite starOn;
    private Sprite starOff;
    private TMP_FontAsset font;

    private RectTransform root;
    private RectTransform goalWidget;
    private TMP_Text goalText;
    private RectTransform modal;
    private TMP_Text modalTitle;
    private TMP_Text modalBody;
    private RectTransform starRow;
    private readonly List<Image> stars = new List<Image>();
    private Button primaryButton;
    private Button secondaryButton;
    private TMP_Text toastText;
    private float toastTimer;

    private TerminalBuyUI terminal;

    private void Awake()
    {
        LoadAssets();
        Build();
        HideModal();
    }

    private void OnEnable()
    {
        MGR_Shift.OnShiftBriefing += ShowBriefing;
        MGR_Shift.OnShiftStarted += HandleShiftStarted;
        MGR_Shift.OnShiftProgress += UpdateGoal;
        MGR_Shift.OnShiftEnded += ShowSummary;
        MGR_Shift.OnContractWon += ShowContractWon;
        MGR_Shift.OnEmergencyBox += ShowEmergencyToast;
    }

    private void OnDisable()
    {
        MGR_Shift.OnShiftBriefing -= ShowBriefing;
        MGR_Shift.OnShiftStarted -= HandleShiftStarted;
        MGR_Shift.OnShiftProgress -= UpdateGoal;
        MGR_Shift.OnShiftEnded -= ShowSummary;
        MGR_Shift.OnContractWon -= ShowContractWon;
        MGR_Shift.OnEmergencyBox -= ShowEmergencyToast;
    }

    private void Update()
    {
        if (toastTimer > 0f)
        {
            toastTimer -= Time.unscaledDeltaTime;

            if (toastTimer <= 0f)
                toastText.gameObject.SetActive(false);
        }

        // The terminal covers the screen; hide the goal widget while it is open.
        if (terminal == null)
            terminal = FindAnyObjectByType<TerminalBuyUI>();

        bool terminalOpen =
            terminal != null &&
            terminal.TerminalPanel != null &&
            terminal.TerminalPanel.activeInHierarchy;

        MGR_Shift shift = MGR_Shift.Instance;
        bool showGoal =
            !terminalOpen &&
            shift != null &&
            (shift.CurrentPhase == MGR_Shift.Phase.Running ||
             shift.CurrentPhase == MGR_Shift.Phase.FreePlay);

        if (goalWidget.gameObject.activeSelf != showGoal)
            goalWidget.gameObject.SetActive(showGoal);
    }

    // ---------------------------------------------------------
    // EVENTS
    // ---------------------------------------------------------

    private void ShowBriefing(MGR_Shift shift)
    {
        string title = $"Shift {shift.ShiftIndex + 1} of {shift.ShiftCount}";
        string body = shift.CurrentTarget.Describe() +
                      $"\nTime: {Mathf.RoundToInt(shift.Contract.shiftSeconds / 60f)} minutes";

        if (shift.IsNewGameIntro)
        {
            title = "Your first warehouse";
            body = shift.Contract.introText +
                   $"\n\nShift 1 of {shift.ShiftCount}: " + shift.CurrentTarget.Describe();
        }

        ShowModal(title, body, -1,
            $"Start shift {shift.ShiftIndex + 1}", shift.StartShift,
            null, null);
    }

    private void HandleShiftStarted(MGR_Shift shift)
    {
        HideModal();
        UpdateGoal(shift);
    }

    private void UpdateGoal(MGR_Shift shift)
    {
        if (goalText == null || shift == null)
            return;

        if (shift.CurrentPhase == MGR_Shift.Phase.FreePlay)
        {
            goalText.text = "Free play - the warehouse is yours";
            goalText.color = TextColour;
            return;
        }

        ShiftTarget target = shift.CurrentTarget;
        int seconds = Mathf.CeilToInt(shift.TimeLeft);
        string time = $"{seconds / 60}:{seconds % 60:00}";

        string progress = target.goal == ShiftGoalType.EarnCash
            ? $"Earn ${target.amount}: ${shift.GoalProgress}/{target.amount}"
            : $"Deliver {target.amount}: {shift.GoalProgress}/{target.amount}";

        if (target.maxExpired >= 0)
            progress += $"  Expired {shift.Expired}/{target.maxExpired}";

        if (target.minRating > 0f)
            progress += $"  Rating {target.minRating:0.0}+";

        goalText.text = $"Shift {shift.ShiftIndex + 1}/{shift.ShiftCount}  -  {progress}  -  {time}";

        float rating = MGR_Game.Instance != null ? MGR_Game.Instance.CurrentRating : 5f;
        goalText.color = shift.IsTargetMet(rating) ? GoodColour : TextColour;
    }

    private void ShowSummary(MGR_Shift.ShiftResult result)
    {
        MGR_Shift shift = MGR_Shift.Instance;

        if (shift == null || result == null)
            return;

        string title;

        if (result.Success)
            title = $"Shift {result.ShiftIndex + 1} complete!";
        else if (result.Reason == MGR_Shift.EndReason.CustomersLeft)
            title = "Customers left";
        else
            title = $"Shift {result.ShiftIndex + 1} failed";

        float ratingChange = result.RatingEnd - result.RatingStart;
        string sign = ratingChange >= 0f ? "+" : "";

        string body =
            $"Goal: {shift.CurrentTarget.Describe()}\n" +
            $"Delivered: {result.Delivered}    Expired: {result.Expired}\n" +
            $"Cash earned: ${result.CashEarned:0}    Rating: {result.RatingEnd:0.0} ({sign}{ratingChange:0.0})";

        if (result.Success)
        {
            string next = result.IsLastShift ? "Finish contract" : "Next shift";
            ShowModal(title, body, result.Stars,
                next, shift.NextShift,
                "Retry shift", shift.RetryShift);
        }
        else
        {
            ShowModal(title, body, 0,
                "Retry shift", shift.RetryShift,
                null, null);
        }
    }

    private void ShowContractWon(MGR_Shift shift)
    {
        int total = shift.TotalStars();

        string body =
            $"The warehouse is yours.\n" +
            $"Stars: {total} / {shift.ShiftCount * 3}";

        if (MGR_Game.Instance != null)
            body += $"\nFinal rating: {MGR_Game.Instance.CurrentRating:0.0}";

        ShowModal("Contract won!", body, -1,
            "Free play", shift.StartFreePlay,
            "Save and exit", shift.SaveAndExit);
    }

    private void ShowEmergencyToast()
    {
        toastText.text = "Out of cash and stock: a free box is at the dock";
        toastText.gameObject.SetActive(true);
        toastTimer = 5f;
    }

    // ---------------------------------------------------------
    // MODAL
    // ---------------------------------------------------------

    private void ShowModal(
        string title,
        string body,
        int starCount,
        string primaryLabel,
        UnityAction primaryAction,
        string secondaryLabel,
        UnityAction secondaryAction)
    {
        modal.gameObject.SetActive(true);
        modalTitle.text = title;
        modalBody.text = body;

        starRow.gameObject.SetActive(starCount >= 0);

        for (int i = 0; i < stars.Count; i++)
            stars[i].sprite = i < starCount ? starOn : starOff;

        SetButton(primaryButton, primaryLabel, primaryAction);
        SetButton(secondaryButton, secondaryLabel, secondaryAction);

        // One button: centred. Two: primary on the right.
        bool two = secondaryButton.gameObject.activeSelf;
        ((RectTransform)primaryButton.transform).anchoredPosition =
            new Vector2(two ? 190f : 0f, 40f);
        ((RectTransform)secondaryButton.transform).anchoredPosition =
            new Vector2(-190f, 40f);
    }

    private void HideModal()
    {
        if (modal != null)
            modal.gameObject.SetActive(false);
    }

    private void SetButton(Button button, string label, UnityAction action)
    {
        bool show = !string.IsNullOrEmpty(label) && action != null;
        button.gameObject.SetActive(show);

        if (!show)
            return;

        button.GetComponentInChildren<TMP_Text>().text = label;
        button.onClick.RemoveAllListeners();
        button.onClick.AddListener(() =>
        {
            MGR_Audio.PlayUITap();
            HideModal();
            action();
        });
    }

    // ---------------------------------------------------------
    // BUILD
    // ---------------------------------------------------------

    private void LoadAssets()
    {
        foreach (Sprite sprite in Resources.LoadAll<Sprite>(AtlasPath))
        {
            if (sprite == null) continue;
            if (sprite.name == "panel_order_card_128") panelSprite = sprite;
            else if (sprite.name == "star_gold_filled_64") starOn = sprite;
            else if (sprite.name == "star_grey_disabled_64") starOff = sprite;
        }

        TMP_Text anyText = FindAnyObjectByType<TMP_Text>(FindObjectsInactive.Include);
        font = anyText != null ? anyText.font : TMP_Settings.defaultFontAsset;
    }

    private void Build()
    {
        GameObject canvasObject = new GameObject("Shift_Canvas",
            typeof(Canvas), typeof(CanvasScaler), typeof(GraphicRaycaster));
        canvasObject.transform.SetParent(transform, false);

        Canvas canvas = canvasObject.GetComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = 50;

        CanvasScaler scaler = canvasObject.GetComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1920f, 1080f);
        scaler.matchWidthOrHeight = 0.5f;

        root = (RectTransform)canvasObject.transform;

        // Goal widget, top centre.
        goalWidget = NewPanel("Goal_Widget", root, PanelColour);
        Anchor(goalWidget, new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f),
            new Vector2(0f, -16f), new Vector2(1000f, 70f));
        goalWidget.GetComponent<Image>().raycastTarget = false;
        goalText = NewText("Goal_Text", goalWidget, 32f, TextAlignmentOptions.Center);
        Stretch(goalText.rectTransform, 16f);

        // Toast, under the goal widget.
        toastText = NewText("Toast_Text", root, 30f, TextAlignmentOptions.Center);
        Anchor(toastText.rectTransform, new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f),
            new Vector2(0f, -100f), new Vector2(1100f, 50f));
        toastText.color = GoodColour;
        toastText.gameObject.SetActive(false);

        // Modal with a dim background that blocks the game.
        modal = NewPanel("Shift_Modal", root, DimColour, false);
        Anchor(modal, Vector2.zero, Vector2.one, new Vector2(0.5f, 0.5f), Vector2.zero, Vector2.zero);

        RectTransform card = NewPanel("Card", modal, PanelColour);
        Anchor(card, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f),
            Vector2.zero, new Vector2(1000f, 620f));

        modalTitle = NewText("Title", card, 52f, TextAlignmentOptions.Center);
        Anchor(modalTitle.rectTransform, new Vector2(0f, 1f), new Vector2(1f, 1f), new Vector2(0.5f, 1f),
            new Vector2(0f, -30f), new Vector2(-60f, 70f));

        starRow = NewRect("Stars", card);
        Anchor(starRow, new Vector2(0.5f, 1f), new Vector2(0.5f, 1f), new Vector2(0.5f, 1f),
            new Vector2(0f, -110f), new Vector2(300f, 90f));

        for (int i = 0; i < 3; i++)
        {
            RectTransform star = NewRect("Star_" + (i + 1), starRow);
            Anchor(star, new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f),
                new Vector2((i - 1) * 95f, 0f), new Vector2(80f, 80f));
            Image image = star.gameObject.AddComponent<Image>();
            image.preserveAspect = true;
            image.raycastTarget = false;
            image.sprite = starOff;
            stars.Add(image);
        }

        modalBody = NewText("Body", card, 34f, TextAlignmentOptions.Center);
        modalBody.textWrappingMode = TextWrappingModes.Normal;
        Anchor(modalBody.rectTransform, new Vector2(0f, 0f), new Vector2(1f, 1f), new Vector2(0.5f, 0.5f),
            new Vector2(0f, 10f), new Vector2(-80f, -360f));
        modalBody.rectTransform.offsetMin = new Vector2(40f, 150f);
        modalBody.rectTransform.offsetMax = new Vector2(-40f, -210f);

        primaryButton = NewButton("Primary_Button", card, ButtonColour,
            new Vector2(150f, 40f));
        secondaryButton = NewButton("Secondary_Button", card, SecondaryButtonColour,
            new Vector2(-230f, 40f));
    }

    private Button NewButton(string name, RectTransform parent, Color colour, Vector2 position)
    {
        RectTransform rect = NewPanel(name, parent, colour);
        Anchor(rect, new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0.5f, 0f),
            position, new Vector2(340f, 100f));

        Button button = rect.gameObject.AddComponent<Button>();
        button.targetGraphic = rect.GetComponent<Image>();

        TMP_Text label = NewText("Label", rect, 36f, TextAlignmentOptions.Center);
        Stretch(label.rectTransform, 10f);
        label.raycastTarget = false;

        return button;
    }

    private RectTransform NewPanel(string name, Transform parent, Color colour, bool useSprite = true)
    {
        RectTransform rect = NewRect(name, parent);
        Image image = rect.gameObject.AddComponent<Image>();
        image.color = colour;

        if (useSprite && panelSprite != null)
        {
            image.sprite = panelSprite;
            image.type = Image.Type.Sliced;
        }

        return rect;
    }

    private TMP_Text NewText(string name, Transform parent, float size, TextAlignmentOptions alignment)
    {
        RectTransform rect = NewRect(name, parent);
        TextMeshProUGUI text = rect.gameObject.AddComponent<TextMeshProUGUI>();

        if (font != null)
            text.font = font;

        text.fontSize = size;
        text.enableAutoSizing = true;
        text.fontSizeMax = size;
        text.fontSizeMin = Mathf.Min(18f, size);
        text.alignment = alignment;
        text.color = TextColour;
        text.textWrappingMode = TextWrappingModes.NoWrap;
        text.raycastTarget = false;
        return text;
    }

    private static RectTransform NewRect(string name, Transform parent)
    {
        GameObject go = new GameObject(name, typeof(RectTransform));
        go.transform.SetParent(parent, false);
        return (RectTransform)go.transform;
    }

    private static void Anchor(
        RectTransform rect,
        Vector2 min,
        Vector2 max,
        Vector2 pivot,
        Vector2 position,
        Vector2 size)
    {
        rect.anchorMin = min;
        rect.anchorMax = max;
        rect.pivot = pivot;
        rect.anchoredPosition = position;
        rect.sizeDelta = size;
    }

    private static void Stretch(RectTransform rect, float padding)
    {
        rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;
        rect.offsetMin = new Vector2(padding, padding);
        rect.offsetMax = new Vector2(-padding, -padding);
    }
}

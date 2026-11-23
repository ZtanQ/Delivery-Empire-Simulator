using TMPro;
using UnityEngine;
using UnityEngine.UI;

// Level-up banner (1123-LEAD-2, pair with Willyans on 1121-UI).
// "Level 3!" slides down from the top, stays about 1.5 s and slides back,
// with the level-up sound. Built at runtime by MGR_Shift.HandleSceneLoaded,
// in its own canvas, so it does not touch HUD_Canvas.prefab. Unscaled time,
// so it also plays while a shift card pauses the game.
public class UI_LevelUpBanner : MonoBehaviour
{
    private const string AtlasPath = "Atlas/T_UI_Atlas_v3";
    private const float SlideSeconds = 0.25f;
    private const float HoldSeconds = 1.5f;
    private const float HiddenY = 140f;
    private const float ShownY = -190f;

    private static readonly Color PanelColour = new Color(0.12f, 0.14f, 0.18f, 0.96f);
    private static readonly Color LevelColour = new Color(1f, 0.82f, 0.25f, 1f);

    private RectTransform banner;
    private TMP_Text label;
    private float timer = -1f;

    private void Awake()
    {
        Build();
        banner.gameObject.SetActive(false);
    }

    private void OnEnable() => MGR_Game.OnLevelUp += Show;

    private void OnDisable() => MGR_Game.OnLevelUp -= Show;

    private void Show(int level)
    {
        // Several levels in one XP gain: show the last one once.
        bool alreadyShowing = timer >= 0f;
        label.text = $"Level {level}!";

        if (alreadyShowing)
        {
            // Restart the hold without sliding out and in again.
            timer = Mathf.Min(timer, SlideSeconds);
            return;
        }

        timer = 0f;
        banner.gameObject.SetActive(true);
        SetY(HiddenY);
        MGR_Audio.PlayLevelUp();
    }

    private void Update()
    {
        if (timer < 0f)
            return;

        timer += Time.unscaledDeltaTime;
        float total = SlideSeconds * 2f + HoldSeconds;

        if (timer < SlideSeconds)
            SetY(Mathf.Lerp(HiddenY, ShownY, EaseOut(timer / SlideSeconds)));
        else if (timer < SlideSeconds + HoldSeconds)
            SetY(ShownY);
        else if (timer < total)
            SetY(Mathf.Lerp(ShownY, HiddenY, EaseIn((timer - SlideSeconds - HoldSeconds) / SlideSeconds)));
        else
        {
            timer = -1f;
            banner.gameObject.SetActive(false);
        }
    }

    private void SetY(float y) => banner.anchoredPosition = new Vector2(0f, y);

    private static float EaseOut(float t) => 1f - (1f - t) * (1f - t);

    private static float EaseIn(float t) => t * t;

    private void Build()
    {
        GameObject canvasObject = new GameObject("LevelUp_Canvas",
            typeof(Canvas), typeof(CanvasScaler));
        canvasObject.transform.SetParent(transform, false);

        Canvas canvas = canvasObject.GetComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = 55;

        CanvasScaler scaler = canvasObject.GetComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1920f, 1080f);
        scaler.matchWidthOrHeight = 0.5f;

        banner = new GameObject("LevelUp_Banner", typeof(RectTransform)).GetComponent<RectTransform>();
        banner.SetParent(canvasObject.transform, false);
        banner.anchorMin = banner.anchorMax = new Vector2(0.5f, 1f);
        banner.pivot = new Vector2(0.5f, 0.5f);
        banner.sizeDelta = new Vector2(520f, 110f);

        Image image = banner.gameObject.AddComponent<Image>();
        image.color = PanelColour;
        image.raycastTarget = false;

        foreach (Sprite sprite in Resources.LoadAll<Sprite>(AtlasPath))
        {
            if (sprite != null && sprite.name == "panel_order_card_128")
            {
                image.sprite = sprite;
                image.type = Image.Type.Sliced;
                break;
            }
        }

        label = new GameObject("Label", typeof(RectTransform)).AddComponent<TextMeshProUGUI>();
        label.rectTransform.SetParent(banner, false);
        label.rectTransform.anchorMin = Vector2.zero;
        label.rectTransform.anchorMax = Vector2.one;
        label.rectTransform.offsetMin = new Vector2(16f, 8f);
        label.rectTransform.offsetMax = new Vector2(-16f, -8f);

        TMP_Text anyText = FindAnyObjectByType<TMP_Text>(FindObjectsInactive.Include);
        if (anyText != null && anyText != label)
            label.font = anyText.font;

        label.fontSize = 60f;
        label.fontStyle = FontStyles.Bold;
        label.alignment = TextAlignmentOptions.Center;
        label.color = LevelColour;
        label.textWrappingMode = TextWrappingModes.NoWrap;
        label.raycastTarget = false;
    }
}

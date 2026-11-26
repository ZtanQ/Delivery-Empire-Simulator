using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Big "Wrong shelf" warning when the player tries to put a box on a shelf of
// another category: pops in the middle of the screen with a small shake,
// names the right shelf in its category colour and plays the error sound.
// The right shelf's title pulses at the same time (ShelfStockVisual).
// Built at runtime in its own canvas, so no scene or HUD prefab changes.
public class UI_WrongShelfWarning : MonoBehaviour
{
    private const string GameplayScene = "Main_level";
    private const string AtlasPath = "Atlas/T_UI_Atlas_v3";

    private const float PopSeconds = 0.18f;
    private const float ShakeSeconds = 0.35f;
    private const float HoldSeconds = 1.6f;
    private const float FadeSeconds = 0.25f;
    private const float ShakePixels = 14f;
    private const float ShownY = 170f;

    private static readonly Color PanelColour = new Color(0.55f, 0.08f, 0.08f, 0.95f);
    private static readonly Color TitleColour = Color.white;

    private RectTransform panel;
    private CanvasGroup group;
    private TMP_Text title;
    private TMP_Text detail;
    private float timer = -1f;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void InstallSceneHook()
    {
        SceneManager.sceneLoaded -= HandleSceneLoaded;
        SceneManager.sceneLoaded += HandleSceneLoaded;
        HandleSceneLoaded(SceneManager.GetActiveScene(), LoadSceneMode.Single);
    }

    private static void HandleSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name != GameplayScene || FindAnyObjectByType<UI_WrongShelfWarning>() != null)
            return;

        GameObject go = new GameObject("UI_WrongShelfWarning");
        SceneManager.MoveGameObjectToScene(go, scene);
        go.AddComponent<UI_WrongShelfWarning>();
    }

    private void Awake()
    {
        Build();
        panel.gameObject.SetActive(false);
    }

    private void OnEnable() => CTRL_InteractionRaycast.OnWrongShelf += Show;

    private void OnDisable() => CTRL_InteractionRaycast.OnWrongShelf -= Show;

    private void Show(ProductCategory boxCategory, ShelfSlot shelf)
    {
        string colour = ColorUtility.ToHtmlStringRGB(CategoryColour(boxCategory));
        title.text = "WRONG SHELF";
        detail.text = $"This box goes on <b><color=#{colour}>{boxCategory}</color></b>";

        timer = 0f;
        panel.gameObject.SetActive(true);
        MGR_Audio.PlayWrongShelf();
    }

    private void Update()
    {
        if (timer < 0f)
            return;

        timer += Time.unscaledDeltaTime;
        float total = HoldSeconds + FadeSeconds;

        // Pop: 0.6 -> 1.08 -> 1.
        float scale = 1f;
        if (timer < PopSeconds)
            scale = Mathf.Lerp(0.6f, 1.08f, timer / PopSeconds);
        else if (timer < PopSeconds * 2f)
            scale = Mathf.Lerp(1.08f, 1f, (timer - PopSeconds) / PopSeconds);
        panel.localScale = Vector3.one * scale;

        // Shake left-right, fading out.
        float x = 0f;
        if (timer < ShakeSeconds)
        {
            float k = 1f - timer / ShakeSeconds;
            x = Mathf.Sin(timer * 60f) * ShakePixels * k;
        }
        panel.anchoredPosition = new Vector2(x, ShownY);

        if (timer < HoldSeconds)
            group.alpha = 1f;
        else if (timer < total)
            group.alpha = 1f - (timer - HoldSeconds) / FadeSeconds;
        else
        {
            timer = -1f;
            panel.gameObject.SetActive(false);
        }
    }

    private static Color CategoryColour(ProductCategory category)
    {
        foreach (DATA_ProductSO product in Resources.FindObjectsOfTypeAll<DATA_ProductSO>())
        {
            if (product != null && product.Category == category)
                return product.ColourCode;
        }

        return Color.white;
    }

    private void Build()
    {
        GameObject canvasObject = new GameObject("WrongShelf_Canvas",
            typeof(Canvas), typeof(CanvasScaler));
        canvasObject.transform.SetParent(transform, false);

        Canvas canvas = canvasObject.GetComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = 56;

        CanvasScaler scaler = canvasObject.GetComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1920f, 1080f);
        scaler.matchWidthOrHeight = 0.5f;

        panel = new GameObject("WrongShelf_Panel", typeof(RectTransform)).GetComponent<RectTransform>();
        panel.SetParent(canvasObject.transform, false);
        panel.anchorMin = panel.anchorMax = new Vector2(0.5f, 0.5f);
        panel.pivot = new Vector2(0.5f, 0.5f);
        panel.sizeDelta = new Vector2(760f, 150f);
        group = panel.gameObject.AddComponent<CanvasGroup>();
        group.blocksRaycasts = false;
        group.interactable = false;

        Image image = panel.gameObject.AddComponent<Image>();
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

        TMP_Text anyText = FindAnyObjectByType<TMP_Text>(FindObjectsInactive.Include);
        TMP_FontAsset font = anyText != null ? anyText.font : null;

        title = MakeText("Title", font, 58f, new Vector2(0f, 0.5f), new Vector2(1f, 1f));
        title.color = TitleColour;

        detail = MakeText("Detail", font, 40f, new Vector2(0f, 0f), new Vector2(1f, 0.5f));
        detail.color = new Color(1f, 0.92f, 0.9f, 1f);
    }

    private TMP_Text MakeText(string name, TMP_FontAsset font, float size, Vector2 anchorMin, Vector2 anchorMax)
    {
        TMP_Text text = new GameObject(name, typeof(RectTransform)).AddComponent<TextMeshProUGUI>();
        text.rectTransform.SetParent(panel, false);
        text.rectTransform.anchorMin = anchorMin;
        text.rectTransform.anchorMax = anchorMax;
        text.rectTransform.offsetMin = new Vector2(20f, 4f);
        text.rectTransform.offsetMax = new Vector2(-20f, -4f);

        if (font != null)
            text.font = font;

        text.fontSize = size;
        text.fontStyle = FontStyles.Bold;
        text.alignment = TextAlignmentOptions.Center;
        text.textWrappingMode = TextWrappingModes.NoWrap;
        text.richText = true;
        text.raycastTarget = false;
        text.outlineColor = Color.black;
        text.outlineWidth = 0.15f;
        return text;
    }
}

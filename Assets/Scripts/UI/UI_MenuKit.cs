using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Small builder for the menus made in code (title screen and settings).
// One look for every menu: atlas v3 panel, LiberationSans bold, and three
// colours with one meaning each: yellow = go / main action, cyan = settings,
// red = deletes something.
public static class UI_MenuKit
{
    public const string AtlasPath = "Atlas/T_UI_Atlas_v3";

    public static readonly Color Yellow = new Color(0.98f, 0.80f, 0.20f, 1f);
    public static readonly Color YellowDark = new Color(0.78f, 0.52f, 0.08f, 1f);
    public static readonly Color Cyan = new Color(0.22f, 0.74f, 0.96f, 1f);
    public static readonly Color Red = new Color(0.86f, 0.22f, 0.20f, 1f);
    public static readonly Color Navy = new Color(0.07f, 0.09f, 0.15f, 0.97f);
    public static readonly Color NavyRow = new Color(0.12f, 0.15f, 0.23f, 1f);
    public static readonly Color Ink = new Color(0.08f, 0.08f, 0.10f, 1f);
    public static readonly Color TextMain = Color.white;
    public static readonly Color TextHelp = new Color(0.72f, 0.78f, 0.88f, 1f);

    private static Dictionary<string, Sprite> atlas;
    private static TMP_FontAsset font;
    private static Sprite rounded;

    // White rounded rectangle (9-slice) made in code, so buttons and rows take
    // their colour exactly (the atlas card is dark and darkens any tint).
    public static Sprite Rounded()
    {
        if (rounded != null)
            return rounded;

        const int size = 64;
        const float radius = 20f;
        Texture2D texture = new Texture2D(size, size, TextureFormat.RGBA32, false);
        texture.wrapMode = TextureWrapMode.Clamp;
        texture.filterMode = FilterMode.Bilinear;

        for (int y = 0; y < size; y++)
        {
            for (int x = 0; x < size; x++)
            {
                float cx = Mathf.Clamp(x + 0.5f, radius, size - radius);
                float cy = Mathf.Clamp(y + 0.5f, radius, size - radius);
                float d = Vector2.Distance(new Vector2(x + 0.5f, y + 0.5f), new Vector2(cx, cy));
                float a = Mathf.Clamp01(radius - d + 0.5f);
                texture.SetPixel(x, y, new Color(1f, 1f, 1f, a));
            }
        }

        texture.Apply(false, true);
        rounded = UnityEngine.Sprite.Create(texture, new Rect(0, 0, size, size), new Vector2(0.5f, 0.5f),
            100f, 0, SpriteMeshType.FullRect, new Vector4(radius + 2f, radius + 2f, radius + 2f, radius + 2f));
        rounded.name = "ui_rounded_white";
        return rounded;
    }

    public static Sprite Sprite(string name)
    {
        if (atlas == null)
        {
            atlas = new Dictionary<string, Sprite>();
            foreach (Sprite s in Resources.LoadAll<Sprite>(AtlasPath))
            {
                if (s != null && !atlas.ContainsKey(s.name))
                    atlas.Add(s.name, s);
            }
        }

        return atlas.TryGetValue(name, out Sprite sprite) ? sprite : null;
    }

    public static TMP_FontAsset Font()
    {
        if (font != null)
            return font;

        TMP_Text any = Object.FindAnyObjectByType<TMP_Text>(FindObjectsInactive.Include);
        font = any != null ? any.font : TMP_Settings.defaultFontAsset;
        return font;
    }

    public static Canvas MakeCanvas(string name, int sortingOrder, Transform parent = null)
    {
        GameObject go = new GameObject(name, typeof(Canvas), typeof(CanvasScaler), typeof(GraphicRaycaster));
        if (parent != null)
            go.transform.SetParent(parent, false);

        Canvas canvas = go.GetComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = sortingOrder;

        CanvasScaler scaler = go.GetComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1920f, 1080f);
        scaler.matchWidthOrHeight = 0.5f;
        return canvas;
    }

    public static RectTransform Rect(string name, Transform parent)
    {
        RectTransform rect = new GameObject(name, typeof(RectTransform)).GetComponent<RectTransform>();
        rect.SetParent(parent, false);
        return rect;
    }

    public static RectTransform Place(RectTransform rect, Vector2 anchor, Vector2 position, Vector2 size)
    {
        rect.anchorMin = rect.anchorMax = anchor;
        rect.pivot = new Vector2(0.5f, 0.5f);
        rect.anchoredPosition = position;
        rect.sizeDelta = size;
        return rect;
    }

    public static RectTransform Stretch(RectTransform rect, float padding = 0f)
    {
        rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;
        rect.offsetMin = new Vector2(padding, padding);
        rect.offsetMax = new Vector2(-padding, -padding);
        return rect;
    }

    public static Image Panel(string name, Transform parent, Color colour, bool blocksTouches = false)
    {
        RectTransform rect = Rect(name, parent);
        Image image = rect.gameObject.AddComponent<Image>();
        image.sprite = Rounded();
        image.type = Image.Type.Sliced;
        image.color = colour;
        image.raycastTarget = blocksTouches;
        return image;
    }

    public static Image Icon(string spriteName, Transform parent, Color tint)
    {
        RectTransform rect = Rect(spriteName, parent);
        Image image = rect.gameObject.AddComponent<Image>();
        image.sprite = Sprite(spriteName);
        image.preserveAspect = true;
        image.color = tint;
        image.raycastTarget = false;
        return image;
    }

    public static TMP_Text Text(string name, Transform parent, string value, float size, Color colour,
        TextAlignmentOptions align = TextAlignmentOptions.Center, bool bold = true)
    {
        TextMeshProUGUI text = Rect(name, parent).gameObject.AddComponent<TextMeshProUGUI>();
        if (Font() != null)
            text.font = Font();
        text.text = value;
        text.fontSize = size;
        text.fontStyle = bold ? FontStyles.Bold : FontStyles.Normal;
        text.color = colour;
        text.alignment = align;
        text.textWrappingMode = TextWrappingModes.NoWrap;
        text.overflowMode = TextOverflowModes.Ellipsis;
        text.raycastTarget = false;
        return text;
    }

    // Button with a coloured 9-slice body and a centred label. Plays the UI tap sound.
    public static Button Button(string name, Transform parent, string label, float fontSize,
        Color body, Color labelColour, UnityAction onClick)
    {
        Image image = Panel(name, parent, body, true);
        Button button = image.gameObject.AddComponent<Button>();
        button.targetGraphic = image;

        ColorBlock colours = button.colors;
        colours.normalColor = Color.white;
        colours.highlightedColor = new Color(1f, 1f, 1f, 1f);
        colours.pressedColor = new Color(0.78f, 0.78f, 0.78f, 1f);
        colours.selectedColor = Color.white;
        colours.fadeDuration = 0.05f;
        button.colors = colours;

        if (!string.IsNullOrEmpty(label))
        {
            TMP_Text text = Text("Label", image.transform, label, fontSize, labelColour);
            Stretch(text.rectTransform, 8f);
        }

        button.onClick.AddListener(() => MGR_Audio.PlayUITap());
        if (onClick != null)
            button.onClick.AddListener(onClick);
        return button;
    }
}

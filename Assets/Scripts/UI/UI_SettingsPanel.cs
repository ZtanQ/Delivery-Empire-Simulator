using System;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Settings panel (R2), the same on the title screen and in the pause menu.
// Sound: master, music and effects, each with its percentage and a help line.
// Performance: battery saver (30 FPS). Changes apply at once (you hear the new
// volume while you drag) and are saved on the phone when the panel closes.
// Built in code in its own canvas: no scene or prefab changes. On Main_level a
// "Settings" button is added to the existing pause menu.
public class UI_SettingsPanel : MonoBehaviour
{
    private const int SortingOrder = 90;

    private static UI_SettingsPanel instance;

    private GameObject root;
    private Action onClosed;
    private bool building;

    private Slider masterSlider;
    private Slider musicSlider;
    private Slider sfxSlider;
    private TMP_Text masterValue;
    private TMP_Text musicValue;
    private TMP_Text sfxValue;
    private Image batteryToggleImage;
    private TMP_Text batteryState;
    private Button doneButton;

    public static bool IsOpen => instance != null && instance.root != null && instance.root.activeSelf;

    public static void Open(Action closed = null)
    {
        if (instance == null)
            instance = new GameObject("UI_SettingsPanel").AddComponent<UI_SettingsPanel>();

        instance.Show(closed);
    }

    // ---------------------------------------------------------
    // Pause menu: add a Settings button under Resume.
    // ---------------------------------------------------------

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void InstallSceneHook()
    {
        SceneManager.sceneLoaded -= HandleSceneLoaded;
        SceneManager.sceneLoaded += HandleSceneLoaded;
        HandleSceneLoaded(SceneManager.GetActiveScene(), LoadSceneMode.Single);
    }

    private static void HandleSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name != "Main_level")
            return;

        foreach (PauseMenuController pause in Resources.FindObjectsOfTypeAll<PauseMenuController>())
        {
            if (pause != null && pause.gameObject.scene == scene)
                AddPauseButton(pause);
        }
    }

    private static void AddPauseButton(PauseMenuController pause)
    {
        Transform resume = null;
        Transform save = null;
        Transform exit = null;

        foreach (Transform t in pause.GetComponentsInChildren<Transform>(true))
        {
            if (t.name == "ResumeButton") resume = t;
            else if (t.name == "SaveButton") save = t;
            else if (t.name == "QuitToTitleButton") exit = t;
            else if (t.name == "SettingsButton") return; // already added
        }

        if (resume == null || save == null)
            return;

        GameObject copy = Instantiate(save.gameObject, save.parent);
        copy.name = "SettingsButton";
        copy.transform.SetSiblingIndex(resume.GetSiblingIndex() + 1);

        Button button = copy.GetComponent<Button>();
        if (button != null)
        {
            for (int i = 0; i < button.onClick.GetPersistentEventCount(); i++)
                button.onClick.SetPersistentListenerState(i, UnityEngine.Events.UnityEventCallState.Off);
            button.onClick.RemoveAllListeners();
            button.onClick.AddListener(() =>
            {
                MGR_Audio.PlayUITap();
                Open();
            });
        }

        // The pause buttons have their text drawn in the image, so the copy gets
        // its own look: cyan pill with the gear, the word and a short help line.
        foreach (Transform child in copy.transform)
            Destroy(child.gameObject);

        Image body = copy.GetComponent<Image>();
        if (body != null)
        {
            body.sprite = UI_MenuKit.Rounded();
            body.type = Image.Type.Sliced;
            body.color = UI_MenuKit.Cyan;
            Outline outline = copy.GetComponent<Outline>() ?? copy.AddComponent<Outline>();
            outline.effectColor = UI_MenuKit.Ink;
            outline.effectDistance = new Vector2(3f, -3f);
        }

        if (button != null)
        {
            button.transition = Selectable.Transition.ColorTint;
            ColorBlock colours = button.colors;
            colours.normalColor = Color.white;
            colours.highlightedColor = Color.white;
            colours.selectedColor = Color.white;
            colours.pressedColor = new Color(0.78f, 0.78f, 0.78f, 1f);
            button.colors = colours;
        }

        Image gear = UI_MenuKit.Icon("icon_pause_gear", copy.transform, UI_MenuKit.Ink);
        UI_MenuKit.Place(gear.rectTransform, new Vector2(0f, 0.5f), new Vector2(42f, 0f), new Vector2(48f, 48f));
        TMP_Text title = UI_MenuKit.Text("Label", copy.transform, "SETTINGS", 30f, UI_MenuKit.Ink, TextAlignmentOptions.Left);
        UI_MenuKit.Place(title.rectTransform, new Vector2(0f, 0.5f), new Vector2(240f, 10f), new Vector2(300f, 36f));
        TMP_Text help = UI_MenuKit.Text("Help", copy.transform, "Sound and battery", 18f, UI_MenuKit.Ink,
            TextAlignmentOptions.Left, false);
        UI_MenuKit.Place(help.rectTransform, new Vector2(0f, 0.5f), new Vector2(240f, -18f), new Vector2(300f, 24f));

        // Four buttons, same spacing as before: Resume, Settings, Save, Save and Exit.
        SetY(resume, 150f);
        SetY(copy.transform, 50f);
        SetY(save, -50f);
        if (exit != null) SetY(exit, -150f);
    }

    private static void SetY(Transform t, float y)
    {
        if (t is RectTransform rect)
            rect.anchoredPosition = new Vector2(rect.anchoredPosition.x, y);
    }

    // ---------------------------------------------------------
    // Panel
    // ---------------------------------------------------------

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
            return;
        }

        instance = this;
    }

    private void OnDestroy()
    {
        if (instance == this)
            instance = null;
    }

    private void Show(Action closed)
    {
        onClosed = closed;

        if (root == null)
            Build();

        RefreshFromSettings();
        root.SetActive(true);

        if (EventSystem.current != null && doneButton != null)
            EventSystem.current.SetSelectedGameObject(doneButton.gameObject);
    }

    private void Close()
    {
        GameSettings.Save();
        if (root != null)
            root.SetActive(false);

        Action callback = onClosed;
        onClosed = null;
        callback?.Invoke();
    }

    private void Update()
    {
        // Android back button (Escape) closes the panel.
        if (IsOpen && Keyboard.current != null && Keyboard.current.escapeKey.wasPressedThisFrame)
            Close();
    }

    private void RefreshFromSettings()
    {
        building = true;
        masterSlider.value = GameSettings.Master;
        musicSlider.value = GameSettings.Music;
        sfxSlider.value = GameSettings.Sfx;
        building = false;

        UpdateValues();
        UpdateBatteryToggle();
    }

    private void UpdateValues()
    {
        masterValue.text = Percent(GameSettings.Master);
        musicValue.text = Percent(GameSettings.Music);
        sfxValue.text = Percent(GameSettings.Sfx);
    }

    private static string Percent(float value) => $"{Mathf.RoundToInt(value * 100f)}%";

    private void UpdateBatteryToggle()
    {
        bool on = GameSettings.BatterySaver;
        Sprite sprite = UI_MenuKit.Sprite(on ? "toggle_switch_on" : "toggle_switch_off");
        if (sprite != null)
            batteryToggleImage.sprite = sprite;
        batteryState.text = on ? "On - 30 FPS" : "Off - 60 FPS";
    }

    private void Build()
    {
        Canvas canvas = UI_MenuKit.MakeCanvas("Settings_Canvas", SortingOrder, transform);
        root = canvas.gameObject;

        // Dim the screen and block touches behind the panel.
        Image dim = UI_MenuKit.Rect("Dim", root.transform).gameObject.AddComponent<Image>();
        UI_MenuKit.Stretch(dim.rectTransform);
        dim.color = new Color(0f, 0f, 0f, 0.72f);
        dim.raycastTarget = true;

        Image panel = UI_MenuKit.Panel("Panel", root.transform, UI_MenuKit.Navy, true);
        UI_MenuKit.Place(panel.rectTransform, new Vector2(0.5f, 0.5f), Vector2.zero, new Vector2(980f, 900f));
        Transform p = panel.transform;

        // Header: gear + title, close button on the right.
        Image gear = UI_MenuKit.Icon("icon_pause_gear", p, UI_MenuKit.Cyan);
        UI_MenuKit.Place(gear.rectTransform, new Vector2(0f, 1f), new Vector2(70f, -62f), new Vector2(56f, 56f));
        TMP_Text title = UI_MenuKit.Text("Title", p, "SETTINGS", 52f, UI_MenuKit.TextMain, TextAlignmentOptions.Left);
        UI_MenuKit.Place(title.rectTransform, new Vector2(0f, 1f), new Vector2(330f, -62f), new Vector2(420f, 70f));

        Button close = UI_MenuKit.Button("CloseButton", p, "X", 40f, UI_MenuKit.NavyRow, UI_MenuKit.TextMain, Close);
        UI_MenuKit.Place((RectTransform)close.transform, new Vector2(1f, 1f), new Vector2(-62f, -62f), new Vector2(88f, 88f));

        Image line = UI_MenuKit.Rect("HeaderLine", p).gameObject.AddComponent<Image>();
        line.color = UI_MenuKit.Cyan;
        line.raycastTarget = false;
        UI_MenuKit.Place(line.rectTransform, new Vector2(0.5f, 1f), new Vector2(0f, -122f), new Vector2(900f, 4f));

        // Sound
        SectionTitle(p, "SOUND", -170f, UI_MenuKit.Yellow);
        masterSlider = VolumeRow(p, -250f, "icon_audio_volume", "Master volume",
            "Everything you hear", out masterValue,
            v => { if (!building) { GameSettings.Master = v; UpdateValues(); } });
        musicSlider = VolumeRow(p, -370f, "icon_audio_music", "Music",
            "Menu and warehouse songs", out musicValue,
            v => { if (!building) { GameSettings.Music = v; UpdateValues(); } });
        sfxSlider = VolumeRow(p, -490f, "icon_audio_sfx", "Sound effects",
            "Boxes, orders, truck and buttons", out sfxValue,
            v => { if (!building) { GameSettings.Sfx = v; UpdateValues(); } });

        // Hear the new effects volume when the finger is lifted.
        AddReleaseSound(sfxSlider);

        // Performance
        SectionTitle(p, "PHONE", -580f, UI_MenuKit.Cyan);
        BatteryRow(p, -660f);

        // Footer: reset (small, left) and the main action (big, yellow).
        Button reset = UI_MenuKit.Button("ResetButton", p, "Reset", 30f, UI_MenuKit.NavyRow, UI_MenuKit.TextHelp,
            () => { GameSettings.ResetToDefaults(); RefreshFromSettings(); });
        UI_MenuKit.Place((RectTransform)reset.transform, new Vector2(0f, 0f), new Vector2(150f, 82f), new Vector2(200f, 84f));

        doneButton = UI_MenuKit.Button("DoneButton", p, "DONE", 44f, UI_MenuKit.Yellow, UI_MenuKit.Ink, Close);
        UI_MenuKit.Place((RectTransform)doneButton.transform, new Vector2(0.5f, 0f), new Vector2(110f, 82f), new Vector2(560f, 104f));

        root.SetActive(false);
    }

    private static void SectionTitle(Transform parent, string text, float y, Color colour)
    {
        TMP_Text label = UI_MenuKit.Text("Section_" + text, parent, text, 30f, colour, TextAlignmentOptions.Left);
        UI_MenuKit.Place(label.rectTransform, new Vector2(0.5f, 1f), new Vector2(0f, y), new Vector2(880f, 40f));
    }

    private Slider VolumeRow(Transform parent, float y, string icon, string label, string help,
        out TMP_Text valueText, Action<float> changed)
    {
        Image row = UI_MenuKit.Panel("Row_" + label, parent, UI_MenuKit.NavyRow);
        UI_MenuKit.Place(row.rectTransform, new Vector2(0.5f, 1f), new Vector2(0f, y), new Vector2(900f, 104f));
        Transform r = row.transform;

        Image iconImage = UI_MenuKit.Icon(icon, r, Color.white);
        UI_MenuKit.Place(iconImage.rectTransform, new Vector2(0f, 0.5f), new Vector2(52f, 0f), new Vector2(52f, 52f));

        TMP_Text name = UI_MenuKit.Text("Label", r, label, 32f, UI_MenuKit.TextMain, TextAlignmentOptions.Left);
        UI_MenuKit.Place(name.rectTransform, new Vector2(0f, 0.5f), new Vector2(250f, 18f), new Vector2(320f, 40f));
        TMP_Text helpText = UI_MenuKit.Text("Help", r, help, 21f, UI_MenuKit.TextHelp, TextAlignmentOptions.Left, false);
        UI_MenuKit.Place(helpText.rectTransform, new Vector2(0f, 0.5f), new Vector2(250f, -20f), new Vector2(320f, 30f));
        helpText.textWrappingMode = TextWrappingModes.Normal;
        helpText.enableAutoSizing = true;
        helpText.fontSizeMin = 16f;
        helpText.fontSizeMax = 21f;

        Slider slider = BuildSlider(r, new Vector2(600f, 0f), new Vector2(340f, 64f));
        slider.onValueChanged.AddListener(v => changed(v));

        valueText = UI_MenuKit.Text("Value", r, "100%", 30f, UI_MenuKit.Cyan, TextAlignmentOptions.Right);
        UI_MenuKit.Place(valueText.rectTransform, new Vector2(1f, 0.5f), new Vector2(-62f, 0f), new Vector2(100f, 50f));
        return slider;
    }

    private static Slider BuildSlider(Transform parent, Vector2 position, Vector2 size)
    {
        RectTransform root = UI_MenuKit.Place(UI_MenuKit.Rect("Slider", parent), new Vector2(0f, 0.5f), position, size);
        Slider slider = root.gameObject.AddComponent<Slider>();
        slider.minValue = 0f;
        slider.maxValue = 1f;
        slider.direction = Slider.Direction.LeftToRight;

        // Invisible full-height hit area so the whole row height is easy to touch.
        Image hit = root.gameObject.AddComponent<Image>();
        hit.color = new Color(0f, 0f, 0f, 0f);

        Image track = UI_MenuKit.Rect("Track", root).gameObject.AddComponent<Image>();
        track.sprite = UI_MenuKit.Sprite("slider_track");
        track.raycastTarget = false;
        track.rectTransform.anchorMin = new Vector2(0f, 0.5f);
        track.rectTransform.anchorMax = new Vector2(1f, 0.5f);
        track.rectTransform.sizeDelta = new Vector2(0f, 16f);

        RectTransform fillArea = UI_MenuKit.Rect("Fill Area", root);
        fillArea.anchorMin = new Vector2(0f, 0.5f);
        fillArea.anchorMax = new Vector2(1f, 0.5f);
        fillArea.sizeDelta = new Vector2(0f, 16f);
        Image fill = UI_MenuKit.Rect("Fill", fillArea).gameObject.AddComponent<Image>();
        fill.sprite = UI_MenuKit.Sprite("slider_fill_cyan");
        fill.raycastTarget = false;
        fill.rectTransform.anchorMin = Vector2.zero;
        fill.rectTransform.anchorMax = new Vector2(0f, 1f);
        fill.rectTransform.sizeDelta = Vector2.zero;

        RectTransform handleArea = UI_MenuKit.Rect("Handle Slide Area", root);
        UI_MenuKit.Stretch(handleArea);
        handleArea.offsetMin = new Vector2(24f, 0f);
        handleArea.offsetMax = new Vector2(-24f, 0f);
        Image handle = UI_MenuKit.Rect("Handle", handleArea).gameObject.AddComponent<Image>();
        handle.sprite = UI_MenuKit.Sprite("slider_handle_normal");
        handle.preserveAspect = true;
        handle.rectTransform.sizeDelta = new Vector2(52f, 52f);
        handle.rectTransform.anchorMin = new Vector2(0f, 0.5f);
        handle.rectTransform.anchorMax = new Vector2(0f, 0.5f);

        slider.fillRect = fill.rectTransform;
        slider.handleRect = handle.rectTransform;
        slider.targetGraphic = handle;
        return slider;
    }

    private static void AddReleaseSound(Slider slider)
    {
        EventTrigger trigger = slider.gameObject.AddComponent<EventTrigger>();
        EventTrigger.Entry entry = new EventTrigger.Entry { eventID = EventTriggerType.PointerUp };
        entry.callback.AddListener(_ => MGR_Audio.PlayUITap());
        trigger.triggers.Add(entry);
    }

    private void BatteryRow(Transform parent, float y)
    {
        Image row = UI_MenuKit.Panel("Row_Battery", parent, UI_MenuKit.NavyRow);
        UI_MenuKit.Place(row.rectTransform, new Vector2(0.5f, 1f), new Vector2(0f, y), new Vector2(900f, 104f));
        Transform r = row.transform;

        Image icon = UI_MenuKit.Icon("icon_power_normal_64", r, Color.white);
        UI_MenuKit.Place(icon.rectTransform, new Vector2(0f, 0.5f), new Vector2(52f, 0f), new Vector2(52f, 52f));

        TMP_Text name = UI_MenuKit.Text("Label", r, "Battery saver", 32f, UI_MenuKit.TextMain, TextAlignmentOptions.Left);
        UI_MenuKit.Place(name.rectTransform, new Vector2(0f, 0.5f), new Vector2(290f, 18f), new Vector2(400f, 40f));
        TMP_Text help = UI_MenuKit.Text("Help", r, "Saves battery; movement is a bit less smooth",
            21f, UI_MenuKit.TextHelp, TextAlignmentOptions.Left, false);
        UI_MenuKit.Place(help.rectTransform, new Vector2(0f, 0.5f), new Vector2(305f, -20f), new Vector2(430f, 30f));
        help.enableAutoSizing = true;
        help.fontSizeMin = 16f;
        help.fontSizeMax = 21f;

        batteryState = UI_MenuKit.Text("State", r, "", 24f, UI_MenuKit.TextHelp, TextAlignmentOptions.Right, false);
        UI_MenuKit.Place(batteryState.rectTransform, new Vector2(1f, 0.5f), new Vector2(-270f, 0f), new Vector2(200f, 40f));

        // The whole switch is a big touch target (136 x 72), drawn with the atlas switch.
        RectTransform switchRect = UI_MenuKit.Place(UI_MenuKit.Rect("Switch", r), new Vector2(1f, 0.5f),
            new Vector2(-100f, 0f), new Vector2(136f, 72f));
        batteryToggleImage = switchRect.gameObject.AddComponent<Image>();
        batteryToggleImage.preserveAspect = true;
        Button button = switchRect.gameObject.AddComponent<Button>();
        button.targetGraphic = batteryToggleImage;
        button.onClick.AddListener(() =>
        {
            MGR_Audio.PlayUITap();
            GameSettings.BatterySaver = !GameSettings.BatterySaver;
            UpdateBatteryToggle();
        });
    }
}

using System;
using System.Collections;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Title screen (R2), built in code on Boot over Aanidhya's art (clean warehouse
// background + Delivery Empire logo). Replaces the plain "Play" button.
//   CONTINUE / PLAY  big yellow button, selected by default: tapping or pressing
//                    confirm again and again always ends in the game.
//   NEW GAME         smaller, only with a save, and asks first (deletes progress;
//                    the old save is kept as a backup file).
//   Settings         gear at the top right, opens UI_SettingsPanel.
//   Version          small, bottom left.
public class UI_TitleMenu : MonoBehaviour
{
    private const string TitleScene = "Boot";
    private const string GameScene = "Main_level";

    private RectTransform playRect;
    private Button playButton;
    private TMP_Text playLabel;
    private TMP_Text playHelp;
    private Button newGameButton;
    private Button settingsButton;
    private GameObject confirmRoot;
    private bool leaving;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void InstallSceneHook()
    {
        SceneManager.sceneLoaded -= HandleSceneLoaded;
        SceneManager.sceneLoaded += HandleSceneLoaded;
        HandleSceneLoaded(SceneManager.GetActiveScene(), LoadSceneMode.Single);
    }

    private static void HandleSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name != TitleScene || FindAnyObjectByType<UI_TitleMenu>() != null)
            return;

        GameObject go = new GameObject("UI_TitleMenu");
        SceneManager.MoveGameObjectToScene(go, scene);
        go.AddComponent<UI_TitleMenu>();
    }

    private void Awake()
    {
        // The managers live on between scenes: stop the clock on the title so
        // orders, riders and the day do not run behind the menu. Play sets it back.
        Time.timeScale = 0f;
        HideOldTitle();
        Build();
    }

    private IEnumerator Start()
    {
        // Bootstrap loads the save in its Start: read the numbers one frame later
        // (unscaled, the title runs with the clock stopped).
        yield return new WaitForSecondsRealtime(0.05f);
        RefreshSaveInfo();

        if (EventSystem.current != null)
            EventSystem.current.SetSelectedGameObject(playButton.gameObject);
    }

    private void Update()
    {
        // Gentle pulse on the main button: it invites the first tap.
        if (playRect != null)
            playRect.localScale = Vector3.one * (1f + 0.025f * Mathf.Sin(Time.unscaledTime * 3f));
    }

    private static void HideOldTitle()
    {
        foreach (TitleScreenController old in Resources.FindObjectsOfTypeAll<TitleScreenController>())
        {
            if (old == null || !old.gameObject.scene.IsValid())
                continue;

            Canvas canvas = old.GetComponentInParent<Canvas>(true);
            GameObject target = canvas != null ? canvas.rootCanvas.gameObject : old.gameObject;
            target.SetActive(false);
        }
    }

    // ---------------------------------------------------------
    // Save info
    // ---------------------------------------------------------

    private static bool HasSave()
    {
        return MGR_Save.Instance != null
            ? MGR_Save.Instance.HasValidSaveFile()
            : File.Exists(SavePath);
    }

    private static string SavePath => Path.Combine(Application.persistentDataPath, "save.json");

    private void RefreshSaveInfo()
    {
        bool hasSave = HasSave();
        playLabel.text = hasSave ? "CONTINUE" : "PLAY";

        if (hasSave && MGR_Game.Instance != null)
        {
            playHelp.text = $"Back to your warehouse - Day {MGR_Game.Instance.CurrentDay}, " +
                            $"${MGR_Game.Instance.CurrentCash / 100f:N2} in the bank";
        }
        else if (hasSave)
        {
            playHelp.text = "Back to your warehouse";
        }
        else
        {
            playHelp.text = "Start your 5-shift trial contract";
        }

        newGameButton.gameObject.SetActive(hasSave);

        // Without a save there is only one secondary button: centre it.
        RectTransform settingsRect = (RectTransform)settingsButton.transform;
        settingsRect.anchoredPosition = new Vector2(hasSave ? -190f : 0f, settingsRect.anchoredPosition.y);
    }

    // ---------------------------------------------------------
    // Actions
    // ---------------------------------------------------------

    private void Play()
    {
        if (leaving || UI_SettingsPanel.IsOpen)
            return;

        leaving = true;
        Time.timeScale = 1f;
        SceneManager.LoadScene(GameScene);
    }

    private void AskNewGame()
    {
        confirmRoot.SetActive(true);
    }

    private void CancelNewGame()
    {
        confirmRoot.SetActive(false);
        if (EventSystem.current != null)
            EventSystem.current.SetSelectedGameObject(playButton.gameObject);
    }

    private void StartNewGame()
    {
        if (leaving)
            return;

        leaving = true;

        // Keep the old save as a backup instead of deleting it.
        try
        {
            if (File.Exists(SavePath))
            {
                string backup = Path.Combine(Application.persistentDataPath,
                    $"save_backup_newgame_{DateTime.Now:yyyyMMdd_HHmmss}.json");
                File.Move(SavePath, backup);
            }
        }
        catch (Exception e)
        {
            Debug.LogWarning($"UI_TitleMenu: could not back up the save. {e.Message}");
        }

        // The managers already hold the old game in memory (they survive scene
        // loads). Remove them and load Boot again so Bootstrap starts a new game.
        GameObject runner = new GameObject("NewGameRunner");
        DontDestroyOnLoad(runner);
        runner.AddComponent<NewGameRunner>();
    }

    private class NewGameRunner : MonoBehaviour
    {
        private IEnumerator Start()
        {
            foreach (GameObject root in gameObject.scene.GetRootGameObjects())
            {
                if (root != gameObject)
                    Destroy(root);
            }

            // Destroy happens at the end of the frame: wait so the old managers
            // are gone before Boot creates the new ones.
            yield return null;
            Time.timeScale = 1f;
            SceneManager.LoadScene(TitleScene);
            Destroy(gameObject);
        }
    }

    // ---------------------------------------------------------
    // Layout (1920 x 1080 reference, landscape phone)
    // ---------------------------------------------------------

    private void Build()
    {
        Canvas canvas = UI_MenuKit.MakeCanvas("Title_Canvas", 80, transform);
        Transform c = canvas.transform;

        // Background fills the screen (crops the edges on wide phones).
        Sprite bgSprite = Resources.Load<Sprite>("UI/Title/title_bg");
        RectTransform bgHolder = UI_MenuKit.Stretch(UI_MenuKit.Rect("Background", c));
        Image bg = bgHolder.gameObject.AddComponent<Image>();
        bg.color = bgSprite != null ? Color.white : UI_MenuKit.Navy;
        bg.sprite = bgSprite;
        bg.raycastTarget = false;
        AspectRatioFitter fitter = bgHolder.gameObject.AddComponent<AspectRatioFitter>();
        fitter.aspectMode = AspectRatioFitter.AspectMode.EnvelopeParent;
        fitter.aspectRatio = 16f / 9f;

        // Logo.
        Sprite logoSprite = Resources.Load<Sprite>("UI/Title/title_logo");
        if (logoSprite != null)
        {
            Image logo = UI_MenuKit.Rect("Logo", c).gameObject.AddComponent<Image>();
            logo.sprite = logoSprite;
            logo.preserveAspect = true;
            logo.raycastTarget = false;
            UI_MenuKit.Place(logo.rectTransform, new Vector2(0.5f, 0.5f), new Vector2(0f, 190f), new Vector2(1000f, 500f));
        }
        else
        {
            TMP_Text name = UI_MenuKit.Text("GameName", c, "DELIVERY EMPIRE\nSIMULATOR", 96f, UI_MenuKit.Yellow);
            UI_MenuKit.Place(name.rectTransform, new Vector2(0.5f, 0.5f), new Vector2(0f, 200f), new Vector2(1400f, 300f));
        }

        // Everything you touch or must read sits inside the safe area (notch, camera hole).
        RectTransform safe = UI_MenuKit.Stretch(UI_MenuKit.Rect("SafeArea", c));
        safe.gameObject.AddComponent<UI_SafeArea>();
        c = safe;

        // Main action: big, yellow, centred under the logo.
        playButton = UI_MenuKit.Button("PlayButton", c, "PLAY", 64f, UI_MenuKit.Yellow, UI_MenuKit.Ink, Play);
        playRect = UI_MenuKit.Place((RectTransform)playButton.transform, new Vector2(0.5f, 0.5f),
            new Vector2(0f, -170f), new Vector2(560f, 130f));
        playLabel = playButton.GetComponentInChildren<TMP_Text>();
        Shadow shadow = playButton.gameObject.AddComponent<Shadow>();
        shadow.effectColor = UI_MenuKit.YellowDark;
        shadow.effectDistance = new Vector2(0f, -8f);

        playHelp = UI_MenuKit.Text("PlayHelp", c, "", 30f, UI_MenuKit.TextMain);
        playHelp.outlineColor = Color.black;
        playHelp.outlineWidth = 0.2f;
        UI_MenuKit.Place(playHelp.rectTransform, new Vector2(0.5f, 0.5f), new Vector2(0f, -268f), new Vector2(1100f, 44f));

        // Secondary row, smaller and dark, under the help line, where thumbs reach
        // on a phone held sideways: settings (gear + word) and new game.
        Button settings = UI_MenuKit.Button("SettingsButton", c, "", 0f, UI_MenuKit.Navy, Color.white,
            () => UI_SettingsPanel.Open(() =>
            {
                if (EventSystem.current != null)
                    EventSystem.current.SetSelectedGameObject(playButton.gameObject);
            }));
        UI_MenuKit.Place((RectTransform)settings.transform, new Vector2(0.5f, 0.5f),
            new Vector2(-190f, -352f), new Vector2(340f, 84f));
        settingsButton = settings;
        Image gear = UI_MenuKit.Icon("icon_settings_gear_64x64", settings.transform, UI_MenuKit.Cyan);
        UI_MenuKit.Place(gear.rectTransform, new Vector2(0f, 0.5f), new Vector2(58f, 0f), new Vector2(52f, 52f));
        TMP_Text gearWord = UI_MenuKit.Text("Label", settings.transform, "SETTINGS", 34f, UI_MenuKit.TextMain);
        UI_MenuKit.Place(gearWord.rectTransform, new Vector2(0.5f, 0.5f), new Vector2(28f, 0f), new Vector2(240f, 60f));

        newGameButton = UI_MenuKit.Button("NewGameButton", c, "NEW GAME", 34f, UI_MenuKit.Navy, UI_MenuKit.TextMain, AskNewGame);
        UI_MenuKit.Place((RectTransform)newGameButton.transform, new Vector2(0.5f, 0.5f),
            new Vector2(190f, -352f), new Vector2(340f, 84f));

        // Version.
        TMP_Text version = UI_MenuKit.Text("Version", c, $"v{Application.version}", 24f, UI_MenuKit.TextHelp,
            TextAlignmentOptions.Left, false);
        UI_MenuKit.Place(version.rectTransform, new Vector2(0f, 0f), new Vector2(130f, 36f), new Vector2(220f, 34f));

        BuildConfirm(canvas.transform);
    }

    private void BuildConfirm(Transform parent)
    {
        RectTransform rootRect = UI_MenuKit.Stretch(UI_MenuKit.Rect("ConfirmNewGame", parent));
        confirmRoot = rootRect.gameObject;
        Image dim = confirmRoot.AddComponent<Image>();
        dim.color = new Color(0f, 0f, 0f, 0.75f);

        Image panel = UI_MenuKit.Panel("Panel", rootRect, UI_MenuKit.Navy, true);
        UI_MenuKit.Place(panel.rectTransform, new Vector2(0.5f, 0.5f), Vector2.zero, new Vector2(900f, 440f));

        TMP_Text title = UI_MenuKit.Text("Title", panel.transform, "Start a new game?", 48f, UI_MenuKit.TextMain);
        UI_MenuKit.Place(title.rectTransform, new Vector2(0.5f, 1f), new Vector2(0f, -70f), new Vector2(820f, 60f));

        TMP_Text body = UI_MenuKit.Text("Body", panel.transform,
            "Your warehouse, cash and contract progress will be lost.", 30f, UI_MenuKit.TextHelp,
            TextAlignmentOptions.Center, false);
        body.textWrappingMode = TextWrappingModes.Normal;
        UI_MenuKit.Place(body.rectTransform, new Vector2(0.5f, 1f), new Vector2(0f, -170f), new Vector2(760f, 100f));

        // The safe choice is the big one and the default.
        Button keep = UI_MenuKit.Button("KeepButton", panel.transform, "KEEP MY GAME", 36f, UI_MenuKit.Yellow, UI_MenuKit.Ink, CancelNewGame);
        UI_MenuKit.Place((RectTransform)keep.transform, new Vector2(0.5f, 0f), new Vector2(-170f, 90f), new Vector2(420f, 100f));

        Button erase = UI_MenuKit.Button("EraseButton", panel.transform, "START NEW", 32f, UI_MenuKit.Red, Color.white, StartNewGame);
        UI_MenuKit.Place((RectTransform)erase.transform, new Vector2(0.5f, 0f), new Vector2(230f, 90f), new Vector2(320f, 90f));

        confirmRoot.SetActive(false);
    }
}

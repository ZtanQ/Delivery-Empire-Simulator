using System;
using UnityEngine;

// Player settings kept on the phone (PlayerPrefs), shared by the title screen
// and the pause menu (R2). Every change applies at once, so the player hears
// or sees the result while moving the slider.
//   Master volume -> AudioListener.volume (everything)
//   Music volume  -> MGR_Audio music loop
//   Sound effects -> MGR_Audio effects, UI sounds and warehouse ambience
//   Battery saver -> 30 FPS instead of 60 FPS
public static class GameSettings
{
    public const float DefaultMaster = 1f;
    public const float DefaultMusic = 0.8f;
    public const float DefaultSfx = 1f;
    public const bool DefaultBatterySaver = false;

    private const string KeyMaster = "settings.master";
    private const string KeyMusic = "settings.music";
    private const string KeySfx = "settings.sfx";
    private const string KeyBatterySaver = "settings.batterySaver";

    public static event Action OnChanged;

    private static bool loaded;
    private static float master;
    private static float music;
    private static float sfx;
    private static bool batterySaver;

    public static float Master
    {
        get { Load(); return master; }
        set { Load(); master = Mathf.Clamp01(value); PlayerPrefs.SetFloat(KeyMaster, master); Apply(); }
    }

    public static float Music
    {
        get { Load(); return music; }
        set { Load(); music = Mathf.Clamp01(value); PlayerPrefs.SetFloat(KeyMusic, music); Apply(); }
    }

    public static float Sfx
    {
        get { Load(); return sfx; }
        set { Load(); sfx = Mathf.Clamp01(value); PlayerPrefs.SetFloat(KeySfx, sfx); Apply(); }
    }

    public static bool BatterySaver
    {
        get { Load(); return batterySaver; }
        set { Load(); batterySaver = value; PlayerPrefs.SetInt(KeyBatterySaver, value ? 1 : 0); Apply(); }
    }

    public static int TargetFrameRate => BatterySaver ? 30 : 60;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    private static void Init()
    {
        loaded = false;
        Load();
        Apply();
    }

    private static void Load()
    {
        if (loaded)
            return;

        master = PlayerPrefs.GetFloat(KeyMaster, DefaultMaster);
        music = PlayerPrefs.GetFloat(KeyMusic, DefaultMusic);
        sfx = PlayerPrefs.GetFloat(KeySfx, DefaultSfx);
        batterySaver = PlayerPrefs.GetInt(KeyBatterySaver, DefaultBatterySaver ? 1 : 0) == 1;
        loaded = true;
    }

    public static void Apply()
    {
        Load();
        AudioListener.volume = master;
        Application.targetFrameRate = TargetFrameRate;
        OnChanged?.Invoke();
    }

    public static void ResetToDefaults()
    {
        Load();
        master = DefaultMaster;
        music = DefaultMusic;
        sfx = DefaultSfx;
        batterySaver = DefaultBatterySaver;
        PlayerPrefs.SetFloat(KeyMaster, master);
        PlayerPrefs.SetFloat(KeyMusic, music);
        PlayerPrefs.SetFloat(KeySfx, sfx);
        PlayerPrefs.SetInt(KeyBatterySaver, batterySaver ? 1 : 0);
        Apply();
    }

    public static void Save() => PlayerPrefs.Save();
}

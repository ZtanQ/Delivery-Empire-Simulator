using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MGR_Audio : Manager<MGR_Audio>
{
    [Header("Sound Effects")]
    [SerializeField] private AudioClip purchaseClip;
    [SerializeField] private AudioClip truckArriveClip;
    [SerializeField] private AudioClip boxPickClip;
    [SerializeField] private AudioClip boxPlaceClip;
    [SerializeField] private AudioClip newOrderClip;
    [SerializeField] private AudioClip orderFulfilledClip;
    [SerializeField] private AudioClip orderExpiredClip;
    [SerializeField] private AudioClip uiOpenClip;
    [SerializeField] private AudioClip uiCloseClip;
    [SerializeField] private AudioClip uiTapClip;

    [Header("Progress")]
    [Tooltip("SFX_LevelUp (Mugilan, sound batch 2). Empty: the order success sound plays instead.")]
    [SerializeField] private AudioClip levelUpClip;

    [Header("Ambient")]
    [SerializeField] private AudioClip ambientLoopClip;

    [Header("Music")]
    [SerializeField] private AudioClip menuMusicClip;
    [SerializeField] private AudioClip mainMusicClip;

    [Header("SFX Volume (%)")]
    [SerializeField, Range(0f, 100f)] private float purchaseVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float truckArriveVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float boxPickVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float boxPlaceVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float newOrderVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float orderFulfilledVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float orderExpiredVolumePercent = 75f;

    [Header("Ambient Volume (%)")]
    [SerializeField, Range(0f, 100f)] private float ambientVolumePercent = 75f;

    [Header("UI Volume (%)")]
    [SerializeField, Range(0f, 100f)] private float uiOpenVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float uiCloseVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float uiTapVolumePercent = 75f;

    [Header("Music Volume (%)")]
    [SerializeField, Range(0f, 100f)] private float menuMusicVolumePercent = 75f;
    [SerializeField, Range(0f, 100f)] private float mainMusicVolumePercent = 75f;

    private readonly Dictionary<string, int> _lastShelfQuantities =
        new Dictionary<string, int>();

    private AudioSource _sfxSource;
    private AudioSource _ambientSource;
    private AudioSource _musicSource;
    private AudioListener _fallbackAudioListener;

    // Loop volumes before the player's settings (GameSettings) are applied.
    private float _musicBaseVolume = 1f;
    private float _ambientBaseVolume = 1f;
    private bool _shelfPlacementSfxEnabled;

    protected override void Awake()
    {
        base.Awake();
        if (Instance != this)
        {
            return;
        }

        SceneManager.sceneLoaded += HandleSceneLoaded;
        GameSettings.OnChanged += ApplyVolumeSettings;
        EnsureAudioListener();
    }

    // Settings menu: music and effects volume apply at once to the loops.
    private void ApplyVolumeSettings()
    {
        if (_musicSource != null)
            _musicSource.volume = _musicBaseVolume * GameSettings.Music;
        if (_ambientSource != null)
            _ambientSource.volume = _ambientBaseVolume * GameSettings.Sfx;
    }

    private static float CategoryVolume(AudioSource source)
    {
        return Instance != null && source == Instance._musicSource
            ? GameSettings.Music
            : GameSettings.Sfx;
    }

    protected override void OnInitialise()
    {
        CreateAudioSources();
        SubscribeToEvents();
        ConfigureSceneAudio(SceneManager.GetActiveScene());

        // Bootstrap loads saved shelf contents immediately after manager
        // initialisation. Record those updates without playing placement SFX.
        StartCoroutine(EnableShelfPlacementSfxAfterBootstrap());

        Debug.Log("1. MGR_Audio initialised.");
    }

    private void CreateAudioSources()
    {
        _sfxSource = gameObject.AddComponent<AudioSource>();
        _sfxSource.playOnAwake = false;
        _sfxSource.loop = false;
        _sfxSource.spatialBlend = 0f;
        _sfxSource.volume = 1f;

        _ambientSource = gameObject.AddComponent<AudioSource>();
        _ambientSource.playOnAwake = false;
        _ambientSource.loop = true;
        _ambientSource.spatialBlend = 0f;
        _ambientBaseVolume = ToLinearVolume(ambientVolumePercent);
        _ambientSource.volume = _ambientBaseVolume * GameSettings.Sfx;

        _musicSource = gameObject.AddComponent<AudioSource>();
        _musicSource.playOnAwake = false;
        _musicSource.loop = true;
        _musicSource.spatialBlend = 0f;
        _musicSource.volume = 1f;
    }

    private void SubscribeToEvents()
    {
        MGR_Game.OnSupplierOrderCreated += HandleSupplierOrderCreated;
        CTRL_TruckDelivery.OnTruckArrived += HandleTruckArrived;
        CTRL_InteractionRaycast.OnBoxPickedUp += HandleBoxPickedUp;
        MGR_Inventory.OnShelfUpdated += HandleShelfUpdated;
        MGR_Order.OnOrderCreated += HandleOrderCreated;
        MGR_Order.OnOrderFulfilled += HandleOrderFulfilled;
        MGR_Order.OnOrderExpired += HandleOrderExpired;
    }

    private void HandleSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        EnsureAudioListener();
        ConfigureSceneAudio(scene);
    }

    // GDD v3 R4 (decision 17 Nov): MUS_Menu on the title screen (Boot);
    // MUS_Main loops through the game, together with the warehouse ambience.
    private void ConfigureSceneAudio(Scene scene)
    {
        if (scene.name == "Boot")
        {
            StopLoop(_ambientSource);
            PlayLoop(
                _musicSource,
                menuMusicClip != null ? menuMusicClip : mainMusicClip,
                menuMusicClip != null ? menuMusicVolumePercent : mainMusicVolumePercent
            );
        }
        else if (scene.name == "Main_level" || scene.name == "Sandbox_gp")
        {
            PlayLoop(
                _ambientSource,
                ambientLoopClip,
                ambientVolumePercent
            );
            PlayLoop(
                _musicSource,
                mainMusicClip,
                mainMusicVolumePercent
            );
        }
    }

    private static void PlayLoop(
        AudioSource source,
        AudioClip clip,
        float volumePercent)
    {
        if (source == null)
        {
            return;
        }

        float baseVolume = ToLinearVolume(volumePercent);
        if (Instance != null)
        {
            if (source == Instance._musicSource) Instance._musicBaseVolume = baseVolume;
            else if (source == Instance._ambientSource) Instance._ambientBaseVolume = baseVolume;
        }

        source.volume = baseVolume * CategoryVolume(source);
        source.loop = true;

        if (clip == null)
        {
            StopLoop(source);
            return;
        }

        if (source.clip == clip && source.isPlaying)
        {
            return;
        }

        source.Stop();
        source.clip = clip;
        source.Play();
    }

    private static void StopLoop(AudioSource source)
    {
        if (source == null)
        {
            return;
        }

        source.Stop();
        source.clip = null;
    }

    private void EnsureAudioListener()
    {
        AudioListener[] listeners = FindObjectsByType<AudioListener>();
        bool hasSceneListener = false;

        foreach (AudioListener listener in listeners)
        {
            if (listener != null &&
                listener != _fallbackAudioListener &&
                listener.enabled &&
                listener.gameObject.activeInHierarchy)
            {
                hasSceneListener = true;
                break;
            }
        }

        if (hasSceneListener)
        {
            if (_fallbackAudioListener != null)
            {
                _fallbackAudioListener.enabled = false;
            }

            return;
        }

        if (_fallbackAudioListener == null)
        {
            _fallbackAudioListener = gameObject.AddComponent<AudioListener>();
        }
        else
        {
            _fallbackAudioListener.enabled = true;
        }
    }

    private void UnsubscribeFromEvents()
    {
        MGR_Game.OnSupplierOrderCreated -= HandleSupplierOrderCreated;
        CTRL_TruckDelivery.OnTruckArrived -= HandleTruckArrived;
        CTRL_InteractionRaycast.OnBoxPickedUp -= HandleBoxPickedUp;
        MGR_Inventory.OnShelfUpdated -= HandleShelfUpdated;
        MGR_Order.OnOrderCreated -= HandleOrderCreated;
        MGR_Order.OnOrderFulfilled -= HandleOrderFulfilled;
        MGR_Order.OnOrderExpired -= HandleOrderExpired;
    }

    private IEnumerator EnableShelfPlacementSfxAfterBootstrap()
    {
        yield return null;
        _shelfPlacementSfxEnabled = true;
    }

    private void HandleSupplierOrderCreated(SupplierOrder order)
    {
        PlaySfx(purchaseClip, purchaseVolumePercent);
    }

    private void HandleTruckArrived()
    {
        PlaySfx(truckArriveClip, truckArriveVolumePercent);
    }

    private void HandleBoxPickedUp()
    {
        PlaySfx(boxPickClip, boxPickVolumePercent);
    }

    private void HandleShelfUpdated(
        string shelfID,
        ProductCategory category,
        int quantity)
    {
        if (string.IsNullOrEmpty(shelfID))
        {
            return;
        }

        bool hadPreviousQuantity =
            _lastShelfQuantities.TryGetValue(shelfID, out int previousQuantity);
        _lastShelfQuantities[shelfID] = quantity;

        bool shelfStockIncreased = hadPreviousQuantity
            ? quantity > previousQuantity
            : quantity > 0;

        if (_shelfPlacementSfxEnabled && shelfStockIncreased)
        {
            PlaySfx(boxPlaceClip, boxPlaceVolumePercent);
        }
    }

    private void HandleOrderCreated(OrderData order)
    {
        PlaySfx(newOrderClip, newOrderVolumePercent);
    }

    private void HandleOrderFulfilled(OrderData order)
    {
        PlaySfx(orderFulfilledClip, orderFulfilledVolumePercent);
    }

    private void HandleOrderExpired(OrderData order)
    {
        PlaySfx(orderExpiredClip, orderExpiredVolumePercent);
    }

    public static void PlayUIOpen()
    {
        if (Instance != null)
        {
            Instance.PlaySfx(
                Instance.uiOpenClip,
                Instance.uiOpenVolumePercent
            );
        }
    }

    public static void PlayUIClose()
    {
        if (Instance != null)
        {
            Instance.PlaySfx(
                Instance.uiCloseClip,
                Instance.uiCloseVolumePercent
            );
        }
    }

    public static void PlayLevelUp()
    {
        if (Instance == null)
            return;

        AudioClip clip = Instance.levelUpClip != null
            ? Instance.levelUpClip
            : Instance.orderFulfilledClip;

        Instance.PlaySfx(clip, Instance.orderFulfilledVolumePercent);
    }

    // Wrong shelf: reuses the order-fail sound until a dedicated error sound exists.
    public static void PlayWrongShelf()
    {
        if (Instance != null)
        {
            Instance.PlaySfx(
                Instance.orderExpiredClip,
                Instance.orderExpiredVolumePercent
            );
        }
    }

    public static void PlayUITap()
    {
        if (Instance != null)
        {
            Instance.PlaySfx(
                Instance.uiTapClip,
                Instance.uiTapVolumePercent
            );
        }
    }

    public static void SetPauseMusic(bool isPaused)
    {
        if (Instance == null)
        {
            return;
        }

        if (isPaused)
        {
            if (Instance._ambientSource != null)
            {
                Instance._ambientSource.Pause();
            }

            PlayLoop(
                Instance._musicSource,
                Instance.menuMusicClip,
                Instance.menuMusicVolumePercent
            );
        }
        else
        {
            Scene activeScene = SceneManager.GetActiveScene();
            if (activeScene.name == "Main_level" || activeScene.name == "Sandbox_gp")
            {
                if (Instance.ambientLoopClip != null &&
                    Instance._ambientSource != null &&
                    Instance._ambientSource.clip == Instance.ambientLoopClip)
                {
                    Instance._ambientSource.UnPause();
                }
                else
                {
                    PlayLoop(
                        Instance._ambientSource,
                        Instance.ambientLoopClip,
                        Instance.ambientVolumePercent
                    );
                }

                PlayLoop(
                    Instance._musicSource,
                    Instance.mainMusicClip,
                    Instance.mainMusicVolumePercent
                );
            }
            else
            {
                Instance.ConfigureSceneAudio(activeScene);
            }
        }
    }

    private static float ToLinearVolume(float volumePercent)
    {
        return Mathf.Clamp(volumePercent, 0f, 100f) / 100f;
    }

    private void PlaySfx(AudioClip clip, float volumePercent)
    {
        if (clip != null && _sfxSource != null)
        {
            _sfxSource.PlayOneShot(clip, ToLinearVolume(volumePercent) * GameSettings.Sfx);
        }
    }

    protected override void OnDestroy()
    {
        SceneManager.sceneLoaded -= HandleSceneLoaded;
        GameSettings.OnChanged -= ApplyVolumeSettings;
        UnsubscribeFromEvents();
        base.OnDestroy();
    }
}

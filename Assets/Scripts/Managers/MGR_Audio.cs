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

    [Header("Ambient")]
    [SerializeField] private AudioClip ambientLoopClip;

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

    private readonly Dictionary<string, int> _lastShelfQuantities =
        new Dictionary<string, int>();

    private AudioSource _sfxSource;
    private AudioSource _ambientSource;
    private AudioListener _fallbackAudioListener;
    private bool _shelfPlacementSfxEnabled;

    protected override void Awake()
    {
        base.Awake();
        if (Instance != this)
        {
            return;
        }

        SceneManager.sceneLoaded += HandleSceneLoaded;
        EnsureAudioListener();
    }

    protected override void OnInitialise()
    {
        CreateAudioSources();
        SubscribeToEvents();

        if (ambientLoopClip != null)
        {
            _ambientSource.clip = ambientLoopClip;
            _ambientSource.loop = true;
            _ambientSource.Play();
        }

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
        _ambientSource.volume = ToLinearVolume(ambientVolumePercent);
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

    private static float ToLinearVolume(float volumePercent)
    {
        return Mathf.Clamp(volumePercent, 0f, 100f) / 100f;
    }

    private void PlaySfx(AudioClip clip, float volumePercent)
    {
        if (clip != null && _sfxSource != null)
        {
            _sfxSource.PlayOneShot(clip, ToLinearVolume(volumePercent));
        }
    }

    protected override void OnDestroy()
    {
        SceneManager.sceneLoaded -= HandleSceneLoaded;
        UnsubscribeFromEvents();
        base.OnDestroy();
    }
}

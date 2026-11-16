
using System;
using System.Collections.Generic;
using UnityEngine;

namespace DeliveryEmpire.UI
{
    /// <summary>
    /// Master UI Atlas v3 Manager & Sprite Provider.
    /// Maintains the existing AtlasV2Manager class name
    /// to preserve compatibility with existing project references.
    /// </summary>
    public class AtlasV2Manager : MonoBehaviour
    {
        private static AtlasV2Manager _instance;

        public static AtlasV2Manager Instance
        {
            get
            {
                if (_instance == null)
                {
                    _instance = FindObjectOfType<AtlasV2Manager>();

                    if (_instance == null)
                    {
                        GameObject go = new GameObject("[AtlasV3Manager]");
                        _instance = go.AddComponent<AtlasV2Manager>();
                        DontDestroyOnLoad(go);
                    }
                }

                return _instance;
            }
        }

        [Header("Master Atlas V3 Reference")]
        [SerializeField] private Texture2D atlasTexture;
        [SerializeField] private Sprite[] preloadedSprites;

        private readonly Dictionary<string, Sprite> _spriteCache =
            new Dictionary<string, Sprite>(StringComparer.OrdinalIgnoreCase);

        private bool _isInitialized = false;

        private void Awake()
        {
            if (_instance != null && _instance != this)
            {
                Destroy(gameObject);
                return;
            }

            _instance = this;
            DontDestroyOnLoad(gameObject);

            InitializeSpriteCache();
        }

        public void InitializeSpriteCache()
        {
            if (_isInitialized && _spriteCache.Count > 0)
                return;

            _spriteCache.Clear();

            preloadedSprites =
            Resources.LoadAll<Sprite>("Atlas/T_UI_Atlas_v3");

            if (preloadedSprites != null)
            {
                foreach (Sprite s in preloadedSprites)
                {
                    if (s != null && !_spriteCache.ContainsKey(s.name))
                    {
                        _spriteCache.Add(s.name, s);
                    }
                }
            }

            _isInitialized = true;
            Debug.Log($"[Atlas V3 TEST] icon_tab_buy: {_spriteCache.ContainsKey("icon_tab_buy")}");
            Debug.Log($"[Atlas V3 TEST] icon_tab_staff: {_spriteCache.ContainsKey("icon_tab_staff")}");
            Debug.Log($"[Atlas V3 TEST] icon_tab_upgrades: {_spriteCache.ContainsKey("icon_tab_upgrades")}");

            Debug.Log(
                $"[AtlasV3Manager] Initialized with {_spriteCache.Count} sprites from T_UI_Atlas_v3.");
        }

        /// <summary>
        /// Retrieves any sprite by its exact name from Atlas v3.
        /// </summary>
        public Sprite GetSprite(string spriteName)
        {
            if (string.IsNullOrEmpty(spriteName))
                return null;

            if (!_isInitialized)
                InitializeSpriteCache();

            if (_spriteCache.TryGetValue(spriteName, out Sprite sprite))
                return sprite;

            Debug.LogWarning(
                $"[AtlasV3Manager] Sprite '{spriteName}' not found in Atlas v3 cache.");

            return null;
        }

        /// <summary>
        /// Convenience lookup for product SKUs.
        /// </summary>
        public Sprite GetProductIcon(string sku)
        {
            if (string.IsNullOrEmpty(sku))
                return null;

            string normalizedSku = sku.ToUpper().Trim();

            if (!normalizedSku.StartsWith("ICN_"))
                normalizedSku = "ICN_" + normalizedSku;

            return GetSprite(normalizedSku);
        }

        /// <summary>
        /// Convenience lookup for rating stars.
        /// </summary>
        public Sprite GetRatingStar(string color = "gold", int size = 32)
        {
            string starName = color.ToLower() == "grey"
                ? $"star_grey_disabled_{size}"
                : $"star_{color.ToLower()}_filled_{size}";

            return GetSprite(starName);
        }
    }
}
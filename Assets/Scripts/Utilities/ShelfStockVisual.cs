using System.Collections.Generic;
using TMPro;
using UnityEngine;

[RequireComponent(typeof(ShelfSlot))]
public class ShelfStockVisual : MonoBehaviour
{
    [SerializeField] private ShelfSlot shelf;
    [SerializeField] private Vector3 displayOffset = new Vector3(0f, 0.12f, 0f);
    [SerializeField, Min(0.01f)] private float verticalSpacing = 0.18f;
    [SerializeField, Min(0f)] private float productFrontOffset = 0.3f;
    [SerializeField, Min(0.1f)] private float categoryLabelHeight = 0.65f;
    [SerializeField, Min(0f)] private float categoryLabelFrontOffset = 0.6f;
    [SerializeField] private Vector2 categoryLabelSize = new Vector2(2.4f, 0.45f);

    private readonly Dictionary<DATA_ProductSO, List<GameObject>> pools =
        new Dictionary<DATA_ProductSO, List<GameObject>>();
    private TextMeshPro categoryLabel;
    private bool poolReady;

    private void Awake()
    {
        if (shelf == null)
            shelf = GetComponent<ShelfSlot>();
    }

    private void OnEnable() => MGR_Inventory.OnShelfUpdated += HandleShelfUpdated;
    private void OnDisable() => MGR_Inventory.OnShelfUpdated -= HandleShelfUpdated;

    private void Start()
    {
        CreateCategoryLabel();
        RefreshFromInventory();
    }

    private void LateUpdate()
    {
        if (categoryLabel == null || Camera.main == null)
            return;

        Vector3 direction = categoryLabel.transform.position - Camera.main.transform.position;
        if (direction.sqrMagnitude > 0f)
            categoryLabel.transform.rotation = Quaternion.LookRotation(direction, Vector3.up);
    }

    private void HandleShelfUpdated(string shelfId, ProductCategory category, int units)
    {
        if (shelf != null && shelfId == shelf.ShelfID)
            RefreshFromInventory();
    }

    private void RefreshFromInventory()
    {
        if (shelf == null || MGR_Inventory.Instance == null)
            return;

        if (!poolReady)
            BuildPool();
        if (poolReady)
            UpdateProps();
    }

    private void BuildPool()
    {
        foreach (DATA_ProductSO product in Resources.FindObjectsOfTypeAll<DATA_ProductSO>())
        {
            if (product == null || product.Category != shelf.Category || product.PropPrefab == null || pools.ContainsKey(product))
                continue;

            List<GameObject> productPool = new List<GameObject>(shelf.Capacity);
            for (int i = 0; i < shelf.Capacity; i++)
            {
                GameObject prop = Instantiate(product.PropPrefab, transform);
                prop.name = product.PropPrefab.name + " (Shelf Pool)";
                prop.SetActive(false);
                productPool.Add(prop);
            }
            pools.Add(product, productPool);
        }

        poolReady = true;
    }

    private void UpdateProps()
    {
        MGR_Inventory inventory = MGR_Inventory.Instance;
        int totalUnits = 0;
        foreach (DATA_ProductSO product in pools.Keys)
            totalUnits += Mathf.Max(0, inventory.GetShelfProductUnits(shelf.ShelfID, product));

        int slot = 0;
        foreach (KeyValuePair<DATA_ProductSO, List<GameObject>> entry in pools)
        {
            int productUnits = Mathf.Max(0, inventory.GetShelfProductUnits(shelf.ShelfID, entry.Key));
            int showCount = Mathf.Min(productUnits, shelf.Capacity - slot);

            for (int i = 0; i < entry.Value.Count; i++)
            {
                GameObject prop = entry.Value[i];
                bool show = i < showCount;
                prop.SetActive(show);
                if (show)
                    prop.transform.SetPositionAndRotation(GetPropPosition(slot++), Quaternion.identity);
            }
        }
    }

    private Vector3 GetPropPosition(int slot)
    {
        Vector3 front = shelf.AccessPoint != null
            ? Vector3.ProjectOnPlane(shelf.AccessPoint.position - transform.position, Vector3.up).normalized
            : Vector3.back;
        if (front.sqrMagnitude < 0.001f)
            front = Vector3.back;

        return transform.position + displayOffset + Vector3.up * (slot * verticalSpacing) + front * productFrontOffset;
    }

    private void CreateCategoryLabel()
    {
        if (shelf == null || categoryLabel != null)
            return;

        GameObject label = new GameObject("Shelf Category Label");
        categoryLabel = label.AddComponent<TextMeshPro>();
        categoryLabel.font = TMP_Settings.defaultFontAsset;
        if (categoryLabel.font == null)
            categoryLabel.font = Resources.Load<TMP_FontAsset>("Fonts & Materials/LiberationSans SDF");
        categoryLabel.text = shelf.Category.ToString();
        categoryLabel.fontStyle = FontStyles.Bold;
        categoryLabel.fontSize = 3f;
        categoryLabel.enableAutoSizing = true;
        categoryLabel.fontSizeMin = 1.2f;
        categoryLabel.fontSizeMax = 3f;
        categoryLabel.alignment = TextAlignmentOptions.Center;
        categoryLabel.color = Color.white;
        categoryLabel.outlineColor = Color.black;
        categoryLabel.outlineWidth = 0.2f;
        categoryLabel.rectTransform.sizeDelta = categoryLabelSize;

        Vector3 front = shelf.AccessPoint != null
            ? Vector3.ProjectOnPlane(shelf.AccessPoint.position - transform.position, Vector3.up).normalized
            : Vector3.back;
        if (front.sqrMagnitude < 0.001f)
            front = Vector3.back;
        label.transform.position = transform.position + Vector3.up * categoryLabelHeight + front * categoryLabelFrontOffset;
    }
}



using System.Collections.Generic;
using TMPro;
using UnityEngine;

[RequireComponent(typeof(ShelfSlot))]
public class ShelfStockVisual : MonoBehaviour
{
    [SerializeField] private ShelfSlot shelf;
    [SerializeField] private Vector3 displayOffset = new Vector3(1f, 0.3f, 0.05f);
    [SerializeField, Min(0.01f)] private float gridSpacingX = 10f;
    [SerializeField, Min(0.01f)] private float gridSpacingY = 0.5f;
    [SerializeField, Min(0.01f)] private float stackSpacingZ = 0.15f;
    [SerializeField, Min(1)] private int gridColumns = 1;
    [SerializeField, Min(1)] private int gridRows = 3;
    [SerializeField, HideInInspector] private float placementRotationY = 90f;
    [SerializeField, Min(0f)] private float productFrontOffset = 0.4f;
    [SerializeField, Min(0.1f)] private float categoryLabelHeight = 2.3f;
    [SerializeField, Min(0f)] private float categoryLabelFrontOffset = 0.4f;
    [SerializeField] private Vector2 categoryLabelSize = new Vector2(2.4f, 0.45f);

    private readonly Dictionary<DATA_ProductSO, List<GameObject>> pools =
        new Dictionary<DATA_ProductSO, List<GameObject>>();
    private readonly List<DATA_ProductSO> orderedProducts =
        new List<DATA_ProductSO>();
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
        PositionActiveProps();

        if (categoryLabel == null)
            return;

        UpdateCategoryLabelPosition();
        categoryLabel.rectTransform.sizeDelta = categoryLabelSize;

        if (Camera.main == null)
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
            orderedProducts.Add(product);
        }

        orderedProducts.Sort((a, b) => string.Compare(a.name, b.name, System.StringComparison.Ordinal));
        poolReady = true;
    }

    private void UpdateProps()
    {
        MGR_Inventory inventory = MGR_Inventory.Instance;
        // Keep each product type together in its own grid cell, with its units
        // extending along the shelf's local Z axis.
        int cell = 0;
        foreach (DATA_ProductSO product in orderedProducts)
        {
            List<GameObject> productPool = pools[product];
            int productUnits = Mathf.Max(0, inventory.GetShelfProductUnits(shelf.ShelfID, product));
            int showCount = Mathf.Min(productUnits, Mathf.Min(productPool.Count, shelf.Capacity));
            int productCell = cell++;
            int maxGridCells = Mathf.Max(1, gridColumns) * Mathf.Max(1, gridRows);
            if (productCell >= maxGridCells)
                showCount = 0;

            for (int i = 0; i < productPool.Count; i++)
            {
                GameObject prop = productPool[i];
                bool show = i < showCount;
                prop.SetActive(show);
            }
        }

        PositionActiveProps();
    }

    private void PositionActiveProps()
    {
        if (pools.Count == 0)
            return;

        int cell = 0;
        foreach (DATA_ProductSO product in orderedProducts)
        {
            List<GameObject> productPool = pools[product];
            int productCell = cell++;
            for (int i = 0; i < productPool.Count; i++)
            {
                GameObject prop = productPool[i];
                if (prop != null && prop.activeSelf)
                    prop.transform.SetPositionAndRotation(GetPropPosition(productCell, i), transform.rotation);
            }
        }
    }

    private Vector3 GetPropPosition(int cell, int stackIndex)
    {
        Vector3 front = shelf.AccessPoint != null
            ? Vector3.ProjectOnPlane(shelf.AccessPoint.position - transform.position, Vector3.up).normalized
            : Vector3.back;
        if (front.sqrMagnitude < 0.001f)
            front = Vector3.back;

        int columns = Mathf.Max(1, gridColumns);
        int rows = Mathf.Max(1, gridRows);
        int column = cell % columns;
        int row = (cell / columns) % rows;

        float x = (column - (columns - 1) * 0.5f) * gridSpacingX;
        float y = row * gridSpacingY;
        Vector3 offset = displayOffset
            + transform.right * x
            + transform.up * y
            + front * (productFrontOffset + stackIndex * stackSpacingZ);
        return transform.position + RotatePlacementOffset(offset);
    }

    private Vector3 RotatePlacementOffset(Vector3 offset)
    {
        return Quaternion.AngleAxis(placementRotationY, transform.up) * offset;
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
        foreach (DATA_ProductSO product in Resources.FindObjectsOfTypeAll<DATA_ProductSO>())
        {
            if (product != null && product.Category == shelf.Category)
            {
                categoryLabel.color = product.ColourCode;
                break;
            }
        }
        categoryLabel.outlineColor = Color.black;
        categoryLabel.outlineWidth = 0.2f;
        categoryLabel.rectTransform.sizeDelta = categoryLabelSize;

        UpdateCategoryLabelPosition();
    }

    private void UpdateCategoryLabelPosition()
    {
        if (shelf == null || categoryLabel == null)
            return;

        Vector3 front = shelf.AccessPoint != null
            ? Vector3.ProjectOnPlane(shelf.AccessPoint.position - transform.position, Vector3.up).normalized
            : Vector3.back;
        if (front.sqrMagnitude < 0.001f)
            front = Vector3.back;

        categoryLabel.transform.position = transform.position
            + Vector3.up * categoryLabelHeight
            + front * categoryLabelFrontOffset;
    }

    private void OnDrawGizmosSelected()
    {
        Vector3 front = shelf != null && shelf.AccessPoint != null
            ? Vector3.ProjectOnPlane(shelf.AccessPoint.position - transform.position, Vector3.up).normalized
            : Vector3.back;
        if (front.sqrMagnitude < 0.001f)
            front = Vector3.back;

        int columns = Mathf.Max(1, gridColumns);
        int rows = Mathf.Max(1, gridRows);
        Gizmos.color = new Color(0.2f, 0.85f, 1f, 0.9f);
        Vector3[] cellCenters = new Vector3[columns * rows];
        for (int row = 0; row < rows; row++)
        {
            for (int column = 0; column < columns; column++)
            {
                int index = row * columns + column;
                Vector3 gridOffset = transform.right * ((column - (columns - 1) * 0.5f) * gridSpacingX)
                    + transform.up * (row * gridSpacingY);
                Vector3 offset = displayOffset + front * productFrontOffset + gridOffset;
                Vector3 center = transform.position + RotatePlacementOffset(offset);
                cellCenters[index] = center;
                Gizmos.DrawLine(center - transform.right * 0.08f, center + transform.right * 0.08f);
                Gizmos.DrawLine(center - transform.forward * 0.08f, center + transform.forward * 0.08f);
            }
        }

        for (int row = 0; row < rows; row++)
            for (int column = 0; column < columns - 1; column++)
                Gizmos.DrawLine(cellCenters[row * columns + column], cellCenters[row * columns + column + 1]);

        for (int column = 0; column < columns; column++)
            for (int row = 0; row < rows - 1; row++)
                Gizmos.DrawLine(cellCenters[row * columns + column], cellCenters[(row + 1) * columns + column]);

        if (pools == null)
            return;

        Gizmos.color = new Color(1f, 0.65f, 0.15f, 1f);
        foreach (KeyValuePair<DATA_ProductSO, List<GameObject>> entry in pools)
        {
            if (entry.Value == null)
                continue;

            foreach (GameObject prop in entry.Value)
            {
                if (prop == null || !prop.activeInHierarchy)
                    continue;

                Renderer[] renderers = prop.GetComponentsInChildren<Renderer>();
                if (renderers.Length == 0)
                {
                    Gizmos.DrawWireSphere(prop.transform.position, 0.08f);
                    continue;
                }

                foreach (Renderer renderer in renderers)
                {
                    if (renderer != null && renderer.enabled)
                        Gizmos.DrawWireCube(renderer.bounds.center, renderer.bounds.size);
                }
            }
        }
    }
}



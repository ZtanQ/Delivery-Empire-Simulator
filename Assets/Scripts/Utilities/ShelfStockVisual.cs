using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[RequireComponent(typeof(ShelfSlot))]
public class ShelfStockVisual : MonoBehaviour
{
    [Header("References")]
    [SerializeField] private ShelfSlot shelf;

    [Header("Shelf Grid")]
    [SerializeField, Min(1)] private int gridColumns = 2;
    [SerializeField, Min(1)] private int gridRows = 3;
    [SerializeField, Min(0f)] private float cellMargin = 0.035f;
    [SerializeField, Min(0f)] private float unitSpacing = 0.02f;

    [Header("Product Display Grid")]
    [SerializeField, Min(1)] private int productDisplayColumns = 3;
    [SerializeField, Min(1)] private int productDisplayRows = 2;

    [Header("Product Placement")]
    [SerializeField] private Vector3 displayOffset = Vector3.zero;
    [SerializeField, Min(0f)] private float productFrontOffset = 0.1f;
    [SerializeField, Min(0f)] private float boardClearance = 0.01f;
    [SerializeField, Range(1f, 1.5f)] private float productScaleMultiplier = 1.2f;
    [SerializeField] private float horizontalCenterOffset = 0f;

    [Header("Shelf Board Heights (Local Y, Top to Bottom)")]
    [SerializeField]
    private float[] shelfBoardTopLocalY =
    {
    1.388f,
    0.763f,
    0.154f
    };

    [Header("Category Label")]
    [SerializeField, Min(0.1f)] private float categoryLabelHeight = 0.65f;
    [Tooltip("Label sits this far above the top of the shelf, so it reads over the products and from across the room.")]
    [SerializeField, Min(0f)] private float categoryLabelAboveTop = 0.3f;
    [SerializeField, Min(0f)] private float categoryLabelFrontOffset = 0.6f;
    [SerializeField] private Vector2 categoryLabelSize = new Vector2(2.4f, 0.45f);

    private readonly Dictionary<DATA_ProductSO, List<GameObject>> pools =
        new Dictionary<DATA_ProductSO, List<GameObject>>();

    private readonly Dictionary<GameObject, Vector3> originalScales =
    new Dictionary<GameObject, Vector3>();

    private readonly HashSet<DATA_ProductSO> warnedProducts =
    new HashSet<DATA_ProductSO>();

    private readonly List<DATA_ProductSO> orderedProducts =
        new List<DATA_ProductSO>();

    private TextMeshPro categoryLabel;
    private Vector3 categoryLabelScale = Vector3.one;
    private float categoryPulseTimer = -1f;
    private const float CategoryPulseSeconds = 1.6f;
    private Renderer shelfRenderer;
    private bool poolReady;

    private void Awake()
    {
        if (shelf == null)
            shelf = GetComponent<ShelfSlot>();

        if (shelf != null)
            shelfRenderer = shelf.GetComponentInChildren<Renderer>(true);
    }

    private void OnEnable()
    {
        MGR_Inventory.OnShelfUpdated += HandleShelfUpdated;
        CTRL_InteractionRaycast.OnWrongShelf += HandleWrongShelf;
    }

    private void OnDisable()
    {
        MGR_Inventory.OnShelfUpdated -= HandleShelfUpdated;
        CTRL_InteractionRaycast.OnWrongShelf -= HandleWrongShelf;
    }

    // The player tried a box on the wrong shelf: if this is the right one,
    // its title pulses so the player sees where to go.
    private void HandleWrongShelf(ProductCategory boxCategory, ShelfSlot triedShelf)
    {
        if (shelf != null && categoryLabel != null && shelf.Category == boxCategory)
            categoryPulseTimer = 0f;
    }

    private void Start()
    {
        CreateCategoryLabel();
        RefreshFromInventory();
    }

    private void LateUpdate()
    {
        if (categoryLabel == null || Camera.main == null)
            return;

        if (categoryPulseTimer >= 0f)
        {
            categoryPulseTimer += Time.unscaledDeltaTime;
            float pulse = Mathf.Abs(Mathf.Sin(categoryPulseTimer * Mathf.PI * 2.5f));
            categoryLabel.transform.localScale = categoryLabelScale * (1f + 0.45f * pulse);

            if (categoryPulseTimer >= CategoryPulseSeconds)
            {
                categoryPulseTimer = -1f;
                categoryLabel.transform.localScale = categoryLabelScale;
            }
        }

        Vector3 direction =
            categoryLabel.transform.position - Camera.main.transform.position;

        if (direction.sqrMagnitude > 0f)
        {
            categoryLabel.transform.rotation =
                Quaternion.LookRotation(direction, Vector3.up);
        }
    }

    private void HandleShelfUpdated(
        string shelfId,
        ProductCategory category,
        int units)
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
        foreach (DATA_ProductSO product in
                 Resources.FindObjectsOfTypeAll<DATA_ProductSO>())
        {
            if (product == null ||
                product.Category != shelf.Category ||
                product.PropPrefab == null ||
                pools.ContainsKey(product))
            {
                continue;
            }

            List<GameObject> productPool =
                new List<GameObject>(shelf.Capacity);

            for (int i = 0; i < shelf.Capacity; i++)
            {
                GameObject prop = Instantiate(product.PropPrefab, transform);

                prop.name = product.PropPrefab.name + " (Shelf Pool)";

                // Store the original scale only once.
                originalScales[prop] = prop.transform.localScale;

                prop.SetActive(false);

                productPool.Add(prop);
            }

            pools.Add(product, productPool);
        }

        orderedProducts.Clear();
        orderedProducts.AddRange(pools.Keys);

        orderedProducts.Sort((a, b) =>
            string.CompareOrdinal(a.name, b.name));

        poolReady = true;
    }

    private void UpdateProps()
    {
        MGR_Inventory inventory = MGR_Inventory.Instance;

        if (inventory == null || shelfRenderer == null)
            return;

        Bounds shelfBounds = shelfRenderer.bounds;

        Vector3 front = shelf.AccessPoint != null
            ? Vector3.ProjectOnPlane(
                shelf.AccessPoint.position - shelfBounds.center,
                Vector3.up).normalized
            : Vector3.back;

        if (front.sqrMagnitude < 0.001f)
            front = Vector3.back;

        Vector3 right = Vector3.Cross(front, Vector3.up).normalized;

        float rightExtent = GetProjectedExtent(shelfBounds, right);
        float frontExtent = GetProjectedExtent(shelfBounds, front);

        float centerRight = Vector3.Dot(shelfBounds.center, right);
        float centerFront = Vector3.Dot(shelfBounds.center, front);

        float minRight = centerRight - rightExtent;
        float maxRight = centerRight + rightExtent;

        float frontEdge = centerFront + frontExtent;

        int productCount = orderedProducts.Count;

        int columns = Mathf.Max(1, gridColumns);
        int rows = Mathf.Max(
            gridRows,
            Mathf.CeilToInt((float)productCount / columns));

        if (shelfBoardTopLocalY == null ||
            shelfBoardTopLocalY.Length < rows)
        {
            Debug.LogError(
                "ShelfStockVisual: Not enough shelf board heights assigned.",
                this);
            return;
        }

        float cellWidth = (maxRight - minRight) / columns;

        for (int productIndex = 0;
             productIndex < orderedProducts.Count;
             productIndex++)
        {
            DATA_ProductSO product = orderedProducts[productIndex];

            List<GameObject> productPool = pools[product];

            int column = productIndex % columns;
            int row = productIndex / columns;

            float cellCenterRight =
                minRight + (column + 0.5f) * cellWidth;


            int productUnits = Mathf.Max(
                0,
                inventory.GetShelfProductUnits(shelf.ShelfID, product));

            // No stock: hide all pooled props and move to the next product.
            if (productUnits == 0)
            {
                foreach (GameObject pooledProp in productPool)
                {
                    if (pooledProp != null)
                        pooledProp.SetActive(false);
                }

                continue;
            }

            if (productPool.Count == 0)
                continue;

            // Use the first pooled prop to calculate the product's visual dimensions.
            GameObject sampleProp = productPool[0];

            sampleProp.SetActive(true);

            if (originalScales.TryGetValue(sampleProp, out Vector3 sampleOriginalScale))
            {
                sampleProp.transform.localScale =
                    Vector3.Scale(
                        sampleOriginalScale,
                        Vector3.one * productScaleMultiplier);
            }

            if (!TryGetProductBounds(sampleProp, out Bounds sampleBounds))
            {
                Debug.LogWarning(
                    $"ShelfStockVisual: No renderer bounds found for {product.name}.",
                    this);

                foreach (GameObject pooledProp in productPool)
                {
                    if (pooledProp != null)
                        pooledProp.SetActive(false);
                }

                continue;
            }

            float productWidth =
                GetProjectedExtent(sampleBounds, right) * 2f;

            float productDepth =
                GetProjectedExtent(sampleBounds, front) * 2f;

            float usableWidth = cellWidth - 2f * cellMargin;

            // Reserve space for the front offset and the shelf back panel.
            const float backPanelDepth = 0.05f;

            float usableDepth =
                frontExtent * 2f
                - 2f * cellMargin
                - productFrontOffset
                - backPanelDepth;

            usableDepth = Mathf.Max(0f, usableDepth);

            int unitsPerRow = Mathf.Max(1, productDisplayColumns);
            int depthRows = Mathf.Max(1, productDisplayRows);

            int maxVisibleUnits = unitsPerRow * depthRows;

            // Log visual overflow only once per product.
            if (productUnits > maxVisibleUnits &&
                warnedProducts.Add(product))
            {
                Debug.LogWarning(
                    $"ShelfStockVisual: {product.name}: " +
                    $"{productUnits} stocked, {maxVisibleUnits} fit.",
                    this);
            }

            for (int i = 0; i < productPool.Count; i++)
            {
                GameObject prop = productPool[i];

                bool show = i < productUnits;

                prop.SetActive(show);

                if (!show)
                    continue;

                prop.transform.rotation = Quaternion.identity;

                if (originalScales.TryGetValue(prop, out Vector3 originalScale))
                {
                    prop.transform.localScale =
                        Vector3.Scale(
                            originalScale,
                            Vector3.one * productScaleMultiplier);
                }

                if (!TryGetProductBounds(prop, out Bounds productBounds))
                {
                    Debug.LogWarning(
                        $"ShelfStockVisual: No renderer bounds found for {product.name}.",
                        prop);

                    continue;
                }

                // Hide units that exceed the calculated visual capacity.
                if (i >= maxVisibleUnits)
                {
                    prop.SetActive(false);
                    continue;
                }

                int unitColumn = i % unitsPerRow;
                int unitDepthRow = i / unitsPerRow;

                float occupiedWidth =
                    unitsPerRow * productWidth +
                    (unitsPerRow - 1) * unitSpacing;

                float firstUnitRight =
                    cellCenterRight - occupiedWidth * 0.5f +
                    productWidth * 0.5f;

                float unitRight =
                    firstUnitRight +
                    unitColumn * (productWidth + unitSpacing);

                float unitFront =
                    frontEdge -
                    cellMargin -
                    productFrontOffset -
                    productDepth * 0.5f -
                    unitDepthRow * (productDepth + unitSpacing);

                // Get the selected shelf board's world-space height.
                float boardWorldY = shelf.transform.TransformPoint(
                    new Vector3(
                        0f,
                        shelfBoardTopLocalY[row],
                        0f
                    )
                ).y;

                // Place the product bottom just above the board.
                float unitY =
                    boardWorldY +
                    productBounds.extents.y +
                    boardClearance;

                // Calculate the horizontal position relative to the shelf centre.
                Vector3 targetCenter =
                    shelfBounds.center +
                    right * (unitRight - centerRight) +
                    front * (unitFront - centerFront);

                targetCenter.y = unitY;
                targetCenter += right * horizontalCenterOffset;

                // Apply the optional display offset.
                targetCenter += displayOffset;

                // Correct the product's actual mesh centre, including pivot offsets.
                if (TryGetProductBounds(prop, out Bounds currentBounds))
                {
                    prop.transform.position +=
                        targetCenter - currentBounds.center;
                }
            }
        }
    }

    private float GetProjectedExtent(Bounds bounds, Vector3 axis)
    {
        Vector3 extents = bounds.extents;

        return
            Mathf.Abs(axis.x) * extents.x +
            Mathf.Abs(axis.y) * extents.y +
            Mathf.Abs(axis.z) * extents.z;
    }

    private bool TryGetProductBounds(
        GameObject product,
        out Bounds combinedBounds)
    {
        Renderer[] renderers =
            product.GetComponentsInChildren<Renderer>(true);

        combinedBounds = new Bounds();
        bool found = false;

        foreach (Renderer renderer in renderers)
        {
            if (renderer == null || !renderer.enabled)
                continue;

            if (!found)
            {
                combinedBounds = renderer.bounds;
                found = true;
            }
            else
            {
                combinedBounds.Encapsulate(renderer.bounds);
            }
        }

        return found;
    }

    private void CreateCategoryLabel()
    {
        if (shelf == null || categoryLabel != null)
            return;

        GameObject label = new GameObject("Shelf Category Label");

        categoryLabel = label.AddComponent<TextMeshPro>();

        categoryLabel.font = TMP_Settings.defaultFontAsset;

        if (categoryLabel.font == null)
        {
            categoryLabel.font =
                Resources.Load<TMP_FontAsset>(
                    "Fonts & Materials/LiberationSans SDF");
        }

        categoryLabel.text = shelf.Category.ToString();
        categoryLabel.fontStyle = FontStyles.Bold;
        categoryLabel.fontSize = 3f;
        categoryLabel.enableAutoSizing = true;
        categoryLabel.fontSizeMin = 1.2f;
        categoryLabel.fontSizeMax = 3f;
        categoryLabel.alignment = TextAlignmentOptions.Center;

        foreach (DATA_ProductSO product in
                 Resources.FindObjectsOfTypeAll<DATA_ProductSO>())
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

        Vector3 front = shelf.AccessPoint != null
            ? Vector3.ProjectOnPlane(
                shelf.AccessPoint.position - transform.position,
                Vector3.up).normalized
            : Vector3.back;

        if (front.sqrMagnitude < 0.001f)
            front = Vector3.back;

        // Above the shelf: top of the shelf meshes plus a margin. Falls back
        // to the old fixed height if the shelf has no renderer.
        float height = categoryLabelHeight;
        if (TryGetShelfTop(out float topY))
            height = topY - transform.position.y + categoryLabelAboveTop;

        label.transform.position =
            transform.position +
            Vector3.up * height +
            front * categoryLabelFrontOffset;
    }

    private bool TryGetShelfTop(out float topY)
    {
        topY = 0f;
        bool found = false;

        foreach (Renderer r in shelf.GetComponentsInChildren<Renderer>(true))
        {
            if (r is TMP_SubMesh || r.GetComponent<TMP_Text>() != null)
                continue;

            float y = r.bounds.max.y;
            if (!found || y > topY)
                topY = y;
            found = true;
        }

        return found;
    }
}
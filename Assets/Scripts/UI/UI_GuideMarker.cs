using UnityEngine;
using UnityEngine.UI;

// World marker for the first-time hints. It floats above the next thing the
// player must use: a box at the dock (pick up), the shelf of the held box's
// category (place) and the computer (buy). It uses the action icons of
// UI atlas v3, so no new art is needed. Created at runtime by
// UI_FirstTimeHints (no scene or prefab change) and removed when the hints
// are done.
public class UI_GuideMarker : MonoBehaviour
{
    private const string AtlasPath = "Atlas/T_UI_Atlas_v3";
    private const string UseIcon = "icon_use_pc_normal_64";
    private const string PickUpIcon = "icon_pickup_normal_64";
    private const string PlaceIcon = "icon_place_normal_64";

    private const float MarkerSize = 0.35f;
    private const float HeightAboveTarget = 0.35f;
    private const float BobHeight = 0.08f;
    private const float BobSpeed = 3f;
    private const float RetargetInterval = 0.25f;

    private static UI_GuideMarker instance;

    private Transform markerRoot;
    private Image markerImage;
    private Sprite useSprite;
    private Sprite pickUpSprite;
    private Sprite placeSprite;

    private bool hasTarget;
    private Vector3 targetPoint;
    private float retargetTimer;

    public static void EnsureExists()
    {
        if (instance != null)
            return;

        GameObject go = new GameObject("GuideMarker");
        instance = go.AddComponent<UI_GuideMarker>();
    }

    // First product of an active, not yet reserved order that the player
    // does not own enough of (shelves, truck and hand together).
    public static DATA_ProductSO FindMissingOrderProduct()
    {
        if (MGR_Order.Instance == null || MGR_Inventory.Instance == null)
            return null;

        foreach (OrderData order in MGR_Order.Instance.ActiveOrders)
        {
            if (order == null ||
                !order.IsActive ||
                order.Items == null ||
                MGR_Order.Instance.IsOrderReserved(order))
            {
                continue;
            }

            foreach (OrderItem item in order.Items)
            {
                if (item == null || item.Product == null)
                    continue;

                if (MGR_Inventory.Instance.GetStock(item.Product) < item.Quantity)
                    return item.Product;
            }
        }

        return null;
    }

    // True while a rider has taken an order that is not completed yet.
    public static bool IsRiderDelivering()
    {
        if (MGR_Order.Instance == null)
            return false;

        foreach (OrderData order in MGR_Order.Instance.ActiveOrders)
        {
            if (order != null && MGR_Order.Instance.IsOrderReserved(order))
                return true;
        }

        return false;
    }

    public static CTRL_BoxContents FindHeldBox()
    {
        CTRL_FirstPersonController player =
            FindAnyObjectByType<CTRL_FirstPersonController>();

        if (player == null)
            return null;

        CTRL_BoxContents[] boxes =
            FindObjectsByType<CTRL_BoxContents>(FindObjectsInactive.Exclude);

        foreach (CTRL_BoxContents box in boxes)
        {
            if (box != null && box.transform.IsChildOf(player.transform))
                return box;
        }

        return null;
    }

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
            return;
        }

        instance = this;

        LoadSprites();
        BuildMarker();
        SetVisible(false);
    }

    private void OnDestroy()
    {
        if (instance == this)
            instance = null;
    }

    private void LoadSprites()
    {
        Sprite[] sprites = Resources.LoadAll<Sprite>(AtlasPath);

        foreach (Sprite sprite in sprites)
        {
            if (sprite == null)
                continue;

            if (sprite.name == UseIcon) useSprite = sprite;
            else if (sprite.name == PickUpIcon) pickUpSprite = sprite;
            else if (sprite.name == PlaceIcon) placeSprite = sprite;
        }

        if (useSprite == null || pickUpSprite == null || placeSprite == null)
        {
            Debug.LogWarning(
                "UI_GuideMarker: action icons not found in " + AtlasPath
            );
        }
    }

    private void BuildMarker()
    {
        GameObject canvasObject = new GameObject("GuideMarker_Canvas");
        canvasObject.transform.SetParent(transform, false);

        Canvas canvas = canvasObject.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.WorldSpace;

        RectTransform canvasRect = canvasObject.GetComponent<RectTransform>();
        canvasRect.sizeDelta = new Vector2(100f, 100f);
        canvasRect.localScale = Vector3.one * (MarkerSize / 100f);

        GameObject imageObject = new GameObject("Icon");
        imageObject.transform.SetParent(canvasObject.transform, false);

        markerImage = imageObject.AddComponent<Image>();
        markerImage.raycastTarget = false;
        markerImage.preserveAspect = true;

        RectTransform imageRect = imageObject.GetComponent<RectTransform>();
        imageRect.anchorMin = Vector2.zero;
        imageRect.anchorMax = Vector2.one;
        imageRect.offsetMin = Vector2.zero;
        imageRect.offsetMax = Vector2.zero;

        markerRoot = canvasObject.transform;
    }

    private void Update()
    {
        MGR_Save save = MGR_Save.Instance;

        if (save == null)
            return;

        if (save.HintsDone)
        {
            Destroy(gameObject);
            return;
        }

        retargetTimer -= Time.unscaledDeltaTime;

        if (retargetTimer <= 0f)
        {
            retargetTimer = RetargetInterval;
            Retarget(save.TutorialStep);
        }

        if (!hasTarget)
            return;

        float bob = Mathf.Sin(Time.unscaledTime * BobSpeed) * BobHeight;
        markerRoot.position = targetPoint + Vector3.up * bob;

        Camera cam = Camera.main;

        if (cam != null)
        {
            markerRoot.rotation = Quaternion.LookRotation(
                markerRoot.position - cam.transform.position
            );
        }
    }

    private void Retarget(int step)
    {
        // Steps follow UI_FirstTimeHints: 0 pick up the starter box,
        // 1 place it, 2 watch the rider, 3 buy at the computer.
        switch (step)
        {
            case 0:
                ShowAbove(FindLooseBox(), pickUpSprite);
                break;

            case 1:
                if (FindHeldBox() != null)
                    ShowAbove(FindShelfForHeldBox(), placeSprite);
                else
                    ShowAbove(FindLooseBox(), pickUpSprite);
                break;

            case 3:
                ShowAbove(FindTerminal(), useSprite);
                break;

            default:
                SetVisible(false);
                break;
        }
    }

    private void ShowAbove(GameObject target, Sprite sprite)
    {
        if (target == null || sprite == null ||
            !TryGetTopPoint(target, out Vector3 top))
        {
            SetVisible(false);
            return;
        }

        targetPoint = top + Vector3.up * HeightAboveTarget;

        if (markerImage.sprite != sprite)
            markerImage.sprite = sprite;

        SetVisible(true);
    }

    private void SetVisible(bool visible)
    {
        hasTarget = visible;

        if (markerRoot != null && markerRoot.gameObject.activeSelf != visible)
            markerRoot.gameObject.SetActive(visible);
    }

    private static GameObject FindTerminal()
    {
        CTRL_Interactable[] interactables =
            FindObjectsByType<CTRL_Interactable>(FindObjectsInactive.Exclude);

        foreach (CTRL_Interactable interactable in interactables)
        {
            if (interactable != null &&
                interactable.Action == CTRL_Interactable.ActionType.Use)
            {
                return interactable.gameObject;
            }
        }

        return null;
    }

    // Nearest product box that is not in the player's hands (on the truck,
    // at the dock or dropped on the floor).
    public static GameObject FindLooseBox()
    {
        CTRL_FirstPersonController player =
            FindAnyObjectByType<CTRL_FirstPersonController>();

        if (player == null)
            return null;

        CTRL_BoxContents[] boxes =
            FindObjectsByType<CTRL_BoxContents>(FindObjectsInactive.Exclude);

        GameObject best = null;
        float bestDistance = float.MaxValue;

        foreach (CTRL_BoxContents box in boxes)
        {
            if (box == null ||
                box.Product == null ||
                box.transform.IsChildOf(player.transform))
            {
                continue;
            }

            float distance =
                (box.transform.position - player.transform.position).sqrMagnitude;

            if (distance < bestDistance)
            {
                bestDistance = distance;
                best = box.gameObject;
            }
        }

        return best;
    }

    private static GameObject FindShelfForHeldBox()
    {
        CTRL_BoxContents held = FindHeldBox();

        if (held == null || held.Product == null)
            return null;

        Vector3 from = held.transform.position;

        ShelfSlot[] shelves =
            FindObjectsByType<ShelfSlot>(FindObjectsInactive.Exclude);

        GameObject best = null;
        float bestDistance = float.MaxValue;

        foreach (ShelfSlot shelf in shelves)
        {
            if (shelf == null ||
                shelf.Category != held.Product.Category ||
                shelf.CurrentUnits >= shelf.Capacity)
            {
                continue;
            }

            float distance = (shelf.transform.position - from).sqrMagnitude;

            if (distance < bestDistance)
            {
                bestDistance = distance;
                best = shelf.gameObject;
            }
        }

        return best;
    }

    private static bool TryGetTopPoint(GameObject target, out Vector3 top)
    {
        Renderer[] renderers = target.GetComponentsInChildren<Renderer>();
        bool found = false;
        Bounds bounds = default;

        foreach (Renderer r in renderers)
        {
            if (r == null || !r.enabled || r is ParticleSystemRenderer)
                continue;

            if (!found)
            {
                bounds = r.bounds;
                found = true;
            }
            else
            {
                bounds.Encapsulate(r.bounds);
            }
        }

        if (!found)
        {
            Collider[] colliders = target.GetComponentsInChildren<Collider>();

            foreach (Collider c in colliders)
            {
                if (c == null)
                    continue;

                if (!found)
                {
                    bounds = c.bounds;
                    found = true;
                }
                else
                {
                    bounds.Encapsulate(c.bounds);
                }
            }
        }

        if (!found)
        {
            top = target.transform.position;
            return true;
        }

        top = new Vector3(bounds.center.x, bounds.max.y, bounds.center.z);
        return true;
    }
}

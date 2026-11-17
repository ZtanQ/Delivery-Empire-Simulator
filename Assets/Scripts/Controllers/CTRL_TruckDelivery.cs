using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CTRL_TruckDelivery : MonoBehaviour
{
    private const int UnitsPerBox = 5;
    private const int MaxBoxesPerTruck = 6;

    public static CTRL_TruckDelivery Instance { get; private set; }
    public static event Action<bool, int> OnDockStateChanged;
    public int BoxesPerTruck => GetBoxesPerTruck();
    public bool HasTruckForSave => _truck != null;
    public Vector3 TruckPositionForSave => _truck != null ? _truck.transform.position : Vector3.zero;
    public Quaternion TruckRotationForSave => _truck != null ? _truck.transform.rotation : Quaternion.identity;

    public bool IsDockBusy
    {
        get
        {
            PruneDockQueue();
            return _truck != null ||
                _deliveryRoutine != null ||
                _pendingDeliveries.Count > 0 ||
                _dockQueue.Count > 0;
        }
    }

    public int BoxesLeftAtDock
    {
        get
        {
            PruneDockQueue();
            int count = _dockQueue.Count;

            foreach (GameObject box in _boxes)
            {
                if (box != null && _truck != null && box.transform.IsChildOf(_truck.transform))
                {
                    count++;
                }
            }

            foreach (List<ShelfBoxData> delivery in _pendingDeliveries)
            {
                if (delivery != null)
                {
                    count += delivery.Count;
                }
            }

            return count;
        }
    }

    [Header("Delivery")]
    [SerializeField] private GameObject _truckPrefab;
    [SerializeField] private GameObject _boxPrefab;
    [SerializeField] private Transform _truckStart;
    [SerializeField] private Transform _truckEnd;
    [SerializeField] private Transform _dockQueueAnchor;
    [SerializeField, Min(0.1f)] private float _dockQueueSpacing = 0.6f;
    [SerializeField] private float _travelDuration = 4f;
    [SerializeField] private float _leaveDelay = 2f;

    [Header("Cargo")]
    [SerializeField, Range(1, 2)] private int _rows = 2;
    [SerializeField, Range(1, 3)] private int _columns = 3;
    [SerializeField] private float _horizontalSpacing = 0.7f;
    [SerializeField] private float _verticalSpacing = 0.4f;

    [Header("Debug Delivery")]
    [SerializeField] private DATA_ProductSO _debugProduct;
    [SerializeField, Min(1)] private int _debugUnits = 12;

    private readonly Queue<List<ShelfBoxData>> _pendingDeliveries =
        new Queue<List<ShelfBoxData>>();

    private readonly List<GameObject> _boxes =
        new List<GameObject>();

    private readonly List<GameObject> _dockQueue =
        new List<GameObject>();

    private GameObject _truck;
    private Coroutine _deliveryRoutine;
    private ShelfSlot[] _shelfSlots;
    private float _dockStateRefreshTimer;
    private bool _lastReportedDockBusy;
    private int _lastReportedBoxesLeft = -1;

    private void Awake()
    {
        Instance = this;
    }

    private void OnEnable()
    {
        Instance = this;
        MGR_Game.OnSupplierOrderCreated += HandleSupplierOrderCreated;
        ReportDockState(true);
    }

    private void Start()
    {
        if (MGR_Save.Instance != null)
        {
            List<DockBoxSaveData> savedBoxes =
                MGR_Save.Instance.ConsumeSavedDockBoxes(
                    out bool hasTruck,
                    out bool hasTruckTransform,
                    out Vector3 truckPosition,
                    out Quaternion truckRotation
                );
            RestoreDockBoxes(
                savedBoxes,
                hasTruck,
                hasTruckTransform,
                truckPosition,
                truckRotation
            );
        }
    }

    private void OnDisable()
    {
        MGR_Game.OnSupplierOrderCreated -= HandleSupplierOrderCreated;
        if (Instance == this)
        {
            Instance = null;
        }
    }

    private void Update()
    {
        _dockStateRefreshTimer -= Time.deltaTime;
        if (_dockStateRefreshTimer > 0f)
        {
            return;
        }

        _dockStateRefreshTimer = 0.1f;
        ReportDockState();
    }

    /// <summary>
    /// Kept for the Sandbox_gp debug button.
    /// Creates a test order and sends it through the same box-building path.
    /// </summary>
    public void TriggerDelivery()
    {
        if (_debugProduct == null || _debugUnits <= 0)
        {
            Debug.LogWarning(
                "CTRL_TruckDelivery: Assign a debug product and a positive unit count."
            );
            return;
        }

        SupplierOrder debugOrder = new SupplierOrder(
            new List<PurchaseItem>
            {
                new PurchaseItem
                {
                    Product = _debugProduct,
                    Quantity = _debugUnits
                }
            }
        );

        HandleSupplierOrderCreated(debugOrder);
    }

    private void HandleSupplierOrderCreated(SupplierOrder order)
    {
        List<ShelfBoxData> orderBoxes = BuildBoxes(order);

        if (orderBoxes.Count == 0)
        {
            Debug.LogWarning(
                "CTRL_TruckDelivery: Supplier order had no valid products or quantities."
            );
            return;
        }

        // This controller remains the final guard for deliveries created
        // outside the terminal (for example, a debug delivery).
        if (IsDockBusy)
        {
            Debug.LogWarning(
                "CTRL_TruckDelivery: Ignoring a supplier order because the dock is busy."
            );
            return;
        }

        int boxesPerTruck = GetBoxesPerTruck();

        if (orderBoxes.Count > boxesPerTruck)
        {
            Debug.LogWarning(
                $"CTRL_TruckDelivery: Order needs {orderBoxes.Count} boxes; " +
                $"dispatching multiple trucks with up to {boxesPerTruck} boxes each. " +
                "The terminal should reject purchases above its truck limit."
            );
        }

        for (int i = 0; i < orderBoxes.Count; i += boxesPerTruck)
        {
            int count = Mathf.Min(boxesPerTruck, orderBoxes.Count - i);
            _pendingDeliveries.Enqueue(orderBoxes.GetRange(i, count));
        }

        if (_deliveryRoutine == null)
        {
            _deliveryRoutine = StartCoroutine(ProcessPendingDeliveries());
        }
    }

    private List<ShelfBoxData> BuildBoxes(SupplierOrder order)
    {
        List<ShelfBoxData> boxes = new List<ShelfBoxData>();

        if (order == null || order.Items == null)
        {
            return boxes;
        }

        // Merge duplicate product lines before packing so units for the same
        // product share boxes up to the five-unit limit.
        List<PurchaseItem> mergedLines = new List<PurchaseItem>();

        foreach (PurchaseItem item in order.Items)
        {
            if (item == null || item.Product == null || item.Quantity <= 0)
            {
                continue;
            }

            PurchaseItem existingLine = null;

            foreach (PurchaseItem mergedLine in mergedLines)
            {
                if (mergedLine.Product == item.Product)
                {
                    existingLine = mergedLine;
                    break;
                }
            }

            if (existingLine != null)
            {
                existingLine.Quantity += item.Quantity;
            }
            else
            {
                mergedLines.Add(new PurchaseItem
                {
                    Product = item.Product,
                    Quantity = item.Quantity
                });
            }
        }

        foreach (PurchaseItem line in mergedLines)
        {
            int remainingUnits = line.Quantity;

            while (remainingUnits > 0)
            {
                int unitsInBox = Mathf.Min(UnitsPerBox, remainingUnits);

                boxes.Add(new ShelfBoxData
                {
                    Product = line.Product,
                    Units = unitsInBox
                });

                remainingUnits -= unitsInBox;
            }
        }

        return boxes;
    }

    private int GetBoxesPerTruck()
    {
        int rows = Mathf.Clamp(_rows, 1, 2);
        int columns = Mathf.Clamp(_columns, 1, 3);

        return Mathf.Min(MaxBoxesPerTruck, rows * columns);
    }

    private IEnumerator ProcessPendingDeliveries()
    {
        while (_pendingDeliveries.Count > 0)
        {
            while (_dockQueue.Count > 0)
            {
                PruneDockQueue();
                if (_dockQueue.Count == 0)
                {
                    break;
                }

                yield return null;
            }

            List<ShelfBoxData> delivery = _pendingDeliveries.Dequeue();
            ReportDockState();
            yield return DeliverTruck(delivery);
        }

        _deliveryRoutine = null;
        ReportDockState();
    }

    private IEnumerator DeliverTruck(List<ShelfBoxData> cargo)
    {
        if (_truckPrefab == null ||
            _boxPrefab == null ||
            _truckStart == null ||
            _truckEnd == null)
        {
            Debug.LogError(
                "CTRL_TruckDelivery: Assign the truck, box, start, and end references."
            );
            yield break;
        }

        if (MGR_Pool.Instance == null)
        {
            Debug.LogError(
                "CTRL_TruckDelivery: MGR_Pool is not available. " +
                "The truck cannot retrieve pooled boxes."
            );
            yield break;
        }

        _truck = Instantiate(
            _truckPrefab,
            _truckStart.position,
            _truckStart.rotation
        );
        ReportDockState();

        Transform cargoPoint = _truck.transform.Find("CargoSpawnPoint");

        if (cargoPoint == null)
        {
            Debug.LogError(
                "CTRL_TruckDelivery: CargoSpawnPoint was not found on the truck."
            );

            Destroy(_truck);
            _truck = null;
            yield break;
        }

        if (!SpawnBoxes(cargoPoint, cargo))
        {
            ReleaseTrackedBoxes();
            Destroy(_truck);
            _truck = null;
            yield break;
        }

        ReportDockState();

        yield return MoveTruck(_truckStart, _truckEnd);

        float shelfCheckTimer = 0f;

        while (HasCargoRemaining())
        {
            shelfCheckTimer -= Time.deltaTime;

            if (shelfCheckTimer <= 0f)
            {
                shelfCheckTimer = 0.25f;

                if (AreAllShelvesFull())
                {
                    MoveCargoToDockQueue();

                    while (_dockQueue.Count > 0)
                    {
                        PruneDockQueue();
                        if (_dockQueue.Count == 0)
                        {
                            break;
                        }

                        yield return null;
                    }

                    break;
                }
            }

            yield return null;
        }

        yield return new WaitForSeconds(_leaveDelay);
        yield return MoveTruck(_truckEnd, _truckStart);

        if (_truck != null)
        {
            Destroy(_truck);
        }

        _truck = null;
        ReportDockState();
    }

    private bool AreAllShelvesFull()
    {
        if (_shelfSlots == null)
        {
            _shelfSlots = FindObjectsByType<ShelfSlot>();
        }

        if (_shelfSlots.Length == 0)
        {
            return false;
        }

        foreach (ShelfSlot shelf in _shelfSlots)
        {
            if (shelf != null && shelf.CurrentUnits < shelf.Capacity)
            {
                return false;
            }
        }

        return true;
    }

    private void MoveCargoToDockQueue()
    {
        foreach (GameObject box in _boxes)
        {
            if (box == null ||
                _truck == null ||
                !box.transform.IsChildOf(_truck.transform))
            {
                continue;
            }

            box.transform.SetParent(null, true);

            Rigidbody rigidbody = box.GetComponent<Rigidbody>();

            if (rigidbody != null)
            {
                rigidbody.useGravity = false;
                rigidbody.isKinematic = true;
            }

            foreach (Collider boxCollider in
                     box.GetComponentsInChildren<Collider>(true))
            {
                if (boxCollider != null)
                {
                    boxCollider.enabled = true;
                }
            }

            _dockQueue.Add(box);
        }

        _boxes.Clear();
        RestackDockQueue();
    }

    private void RestackDockQueue()
    {
        if (_dockQueueAnchor == null && _truckEnd == null)
        {
            return;
        }

        float spacing = Mathf.Max(0.55f, _dockQueueSpacing);
        const int columns = 3;

        PruneDockQueue();

        for (int i = 0; i < _dockQueue.Count; i++)
        {
            int column = i % columns;
            int row = i / columns;

            float x = (column - (columns - 1) * 0.5f) * spacing;
            GameObject box = _dockQueue[i];
            if (_dockQueueAnchor != null)
            {
                Vector3 localPosition = new Vector3(x, row * spacing, 0f);
                box.transform.SetPositionAndRotation(
                    _dockQueueAnchor.TransformPoint(localPosition),
                    _dockQueueAnchor.rotation
                );
            }
            else
            {
                Vector3 dockDirection = _truckStart != null
                    ? Vector3.ProjectOnPlane(
                        _truckEnd.position - _truckStart.position,
                        Vector3.up
                    ).normalized
                    : _truckEnd.forward;
                if (dockDirection.sqrMagnitude < 0.001f)
                {
                    dockDirection = _truckEnd.forward;
                }

                Vector3 queueRight = Vector3.Cross(Vector3.up, dockDirection).normalized;
                Vector3 queueOrigin = _truckEnd.position + dockDirection * 8.5f;
                Vector3 position = queueOrigin + queueRight * (x + 1.5f) + Vector3.up * (row * spacing);
                box.transform.SetPositionAndRotation(position, _truckEnd.rotation);
            }
        }

        ReportDockState();
    }

    private void PruneDockQueue()
    {
        for (int i = _dockQueue.Count - 1; i >= 0; i--)
        {
            GameObject box = _dockQueue[i];
            // Picked up or pooled boxes no longer belong to the dock queue.
            if (box == null || box.transform.parent != null)
            {
                _dockQueue.RemoveAt(i);
            }
        }
    }

    private void ReportDockState(bool force = false)
    {
        bool busy = IsDockBusy;
        int boxesLeft = BoxesLeftAtDock;
        if (!force && busy == _lastReportedDockBusy && boxesLeft == _lastReportedBoxesLeft)
        {
            return;
        }

        _lastReportedDockBusy = busy;
        _lastReportedBoxesLeft = boxesLeft;
        OnDockStateChanged?.Invoke(busy, boxesLeft);
    }

    public List<DockBoxSaveData> GetDockBoxesForSave()
    {
        List<DockBoxSaveData> savedBoxes = new List<DockBoxSaveData>();
        HashSet<GameObject> capturedBoxes = new HashSet<GameObject>();
        Transform cargoPoint = _truck != null
            ? _truck.transform.Find("CargoSpawnPoint")
            : null;

        foreach (GameObject box in _boxes)
        {
            if (box == null || _truck == null || !box.transform.IsChildOf(_truck.transform))
            {
                continue;
            }

            AddBoxSaveData(box, capturedBoxes, savedBoxes, cargoPoint);
        }

        PruneDockQueue();
        foreach (GameObject box in _dockQueue)
        {
            AddBoxSaveData(box, capturedBoxes, savedBoxes, null);
        }

        return savedBoxes;
    }

    private static void AddBoxSaveData(
        GameObject box,
        HashSet<GameObject> capturedBoxes,
        List<DockBoxSaveData> savedBoxes,
        Transform cargoPoint)
    {
        if (box == null || !capturedBoxes.Add(box))
        {
            return;
        }

        CTRL_BoxContents contents = box.GetComponent<CTRL_BoxContents>();
        if (contents == null || contents.Product == null || contents.Units <= 0)
        {
            return;
        }

        DockBoxSaveData saveData = new DockBoxSaveData
        {
            productID = contents.Product.ProductID,
            units = contents.Units
        };

        if (cargoPoint != null && box.transform.IsChildOf(cargoPoint))
        {
            saveData.hasCargoTransform = true;
            saveData.cargoLocalPosition = box.transform.localPosition;
            saveData.cargoLocalRotation = box.transform.localRotation;
        }

        savedBoxes.Add(saveData);
    }

    public void RestoreDockBoxes(
        IReadOnlyList<DockBoxSaveData> savedBoxes,
        bool hasSavedTruck,
        bool hasSavedTruckTransform,
        Vector3 savedTruckPosition,
        Quaternion savedTruckRotation)
    {
        if ((savedBoxes == null || savedBoxes.Count == 0) && !hasSavedTruck)
        {
            ReportDockState(true);
            return;
        }

        List<ShelfBoxData> cargo = new List<ShelfBoxData>();
        List<DockBoxSaveData> restoredBoxData = new List<DockBoxSaveData>();
        if (savedBoxes != null)
        {
            foreach (DockBoxSaveData savedBox in savedBoxes)
            {
                if (savedBox == null ||
                    string.IsNullOrEmpty(savedBox.productID) ||
                    savedBox.units <= 0 ||
                    savedBox.units > UnitsPerBox)
                {
                    continue;
                }

                DATA_ProductSO product = MGR_Inventory.Instance != null
                    ? MGR_Inventory.Instance.GetProductByID(savedBox.productID)
                    : null;
                if (product == null)
                {
                    Debug.LogWarning(
                        $"CTRL_TruckDelivery: Could not restore dock box for product '{savedBox.productID}'."
                    );
                    continue;
                }

                cargo.Add(new ShelfBoxData
                {
                    Product = product,
                    Units = savedBox.units
                });
                restoredBoxData.Add(savedBox);
            }
        }

        if (_truckPrefab == null || _boxPrefab == null || _truckEnd == null)
        {
            Debug.LogError(
                "CTRL_TruckDelivery: Cannot restore the saved truck without truck, box, and dock references."
            );
            ReportDockState(true);
            return;
        }

        Vector3 truckPosition = hasSavedTruckTransform
            ? savedTruckPosition
            : _truckEnd.position;
        Quaternion truckRotation = hasSavedTruckTransform
            ? savedTruckRotation
            : _truckEnd.rotation;
        _truck = Instantiate(_truckPrefab, truckPosition, truckRotation);

        Transform cargoPoint = _truck.transform.Find("CargoSpawnPoint");
        if (cargoPoint == null)
        {
            Debug.LogError("CTRL_TruckDelivery: CargoSpawnPoint was not found on the restored truck.");
            Destroy(_truck);
            _truck = null;
            ReportDockState(true);
            return;
        }

        if (cargo.Count > 0 && !SpawnBoxes(cargoPoint, cargo))
        {
            ReleaseTrackedBoxes();
            Destroy(_truck);
            _truck = null;
            ReportDockState(true);
            return;
        }

        int boxCount = Mathf.Min(_boxes.Count, restoredBoxData.Count);
        for (int i = 0; i < boxCount; i++)
        {
            DockBoxSaveData boxData = restoredBoxData[i];
            if (!boxData.hasCargoTransform)
            {
                continue;
            }

            _boxes[i].transform.localPosition = boxData.cargoLocalPosition;
            _boxes[i].transform.localRotation = boxData.cargoLocalRotation;
        }

        _deliveryRoutine = StartCoroutine(ResumeRestoredTruck());
    }

    private IEnumerator ResumeRestoredTruck()
    {
        if (_truckEnd != null &&
            Vector3.Distance(_truck.transform.position, _truckEnd.position) > 0.05f)
        {
            yield return MoveTruckTo(_truckEnd);
        }

        while (HasCargoRemaining())
        {
            yield return null;
        }

        yield return new WaitForSeconds(_leaveDelay);
        yield return MoveTruck(_truckEnd, _truckStart);

        if (_truck != null)
        {
            Destroy(_truck);
        }

        _truck = null;
        _deliveryRoutine = null;
        ReportDockState();
    }

    private IEnumerator MoveTruckTo(Transform target)
    {
        if (_truck == null || target == null)
        {
            yield break;
        }

        Vector3 startPosition = _truck.transform.position;
        Quaternion startRotation = _truck.transform.rotation;
        float elapsed = 0f;

        while (elapsed < _travelDuration)
        {
            elapsed += Time.deltaTime;
            float t = Mathf.Clamp01(elapsed / _travelDuration);
            t = t * t * (3f - 2f * t);
            _truck.transform.SetPositionAndRotation(
                Vector3.Lerp(startPosition, target.position, t),
                Quaternion.Slerp(startRotation, target.rotation, t)
            );
            yield return null;
        }

        if (_truck != null)
        {
            _truck.transform.SetPositionAndRotation(target.position, target.rotation);
        }
    }

    private bool SpawnBoxes(
        Transform cargoPoint,
        List<ShelfBoxData> cargo)
    {
        int columns = Mathf.Clamp(_columns, 1, 3);

        for (int i = 0; i < cargo.Count; i++)
        {
            GameObject box = MGR_Pool.Instance.Get(_boxPrefab);

            if (box == null)
            {
                Debug.LogError(
                    "CTRL_TruckDelivery: MGR_Pool could not provide a box."
                );
                return false;
            }

            CTRL_BoxContents contents =
                box.GetComponent<CTRL_BoxContents>();

            if (contents == null ||
                !contents.TrySetContents(
                    cargo[i].Product,
                    cargo[i].Units))
            {
                Debug.LogError(
                    "CTRL_TruckDelivery: The pooled box needs a valid " +
                    "CTRL_BoxContents component."
                );

                ReturnBoxToPool(box);
                return false;
            }

            box.transform.SetParent(cargoPoint, false);

            int column = i % columns;
            int row = i / columns;

            float x =
                (column - (columns - 1) * 0.5f) *
                _horizontalSpacing;

            float y = row * _verticalSpacing;

            box.transform.localPosition = new Vector3(x, y, 0f);
            box.transform.localRotation = Quaternion.identity;

            Rigidbody rigidbody = box.GetComponent<Rigidbody>();

            if (rigidbody != null)
            {
                rigidbody.isKinematic = true;
                rigidbody.useGravity = false;
            }

            _boxes.Add(box);
        }

        return true;
    }

    private IEnumerator MoveTruck(Transform from, Transform to)
    {
        if (_truck == null || from == null || to == null)
        {
            yield break;
        }

        Vector3 startPosition = from.position;
        Quaternion startRotation = from.rotation;
        float elapsed = 0f;

        while (elapsed < _travelDuration)
        {
            elapsed += Time.deltaTime;

            float t = Mathf.Clamp01(elapsed / _travelDuration);
            t = t * t * (3f - 2f * t);

            _truck.transform.SetPositionAndRotation(
                Vector3.Lerp(startPosition, to.position, t),
                Quaternion.Slerp(startRotation, to.rotation, t)
            );

            yield return null;
        }

        if (_truck != null)
        {
            _truck.transform.SetPositionAndRotation(
                to.position,
                to.rotation
            );
        }
    }

    private bool HasCargoRemaining()
    {
        if (_truck == null)
        {
            return false;
        }

        bool cargoRemaining = false;

        for (int i = _boxes.Count - 1; i >= 0; i--)
        {
            GameObject box = _boxes[i];

            if (box == null)
            {
                _boxes.RemoveAt(i);
                continue;
            }

            if (!box.transform.IsChildOf(_truck.transform))
            {
                _boxes.RemoveAt(i);
                RestackCargo();
                continue;
            }

            cargoRemaining = true;
        }

        return cargoRemaining;
    }

    private void RestackCargo()
    {
        int columns = Mathf.Clamp(_columns, 1, 3);

        for (int column = 0; column < columns; column++)
        {
            List<GameObject> stack = new List<GameObject>();

            float expectedX =
                (column - (columns - 1) * 0.5f) *
                _horizontalSpacing;

            foreach (GameObject box in _boxes)
            {
                if (box == null ||
                    _truck == null ||
                    !box.transform.IsChildOf(_truck.transform))
                {
                    continue;
                }

                float xDifference =
                    Mathf.Abs(box.transform.localPosition.x - expectedX);

                if (xDifference < 0.1f)
                {
                    stack.Add(box);
                }
            }

            for (int row = 0; row < stack.Count; row++)
            {
                GameObject box = stack[row];

                box.transform.localPosition = new Vector3(
                    expectedX,
                    row * _verticalSpacing,
                    0f
                );

                box.transform.localRotation = Quaternion.identity;
            }
        }
    }

    private void ReleaseTrackedBoxes()
    {
        for (int i = _boxes.Count - 1; i >= 0; i--)
        {
            ReturnBoxToPool(_boxes[i]);
        }

        _boxes.Clear();
    }

    private void ReturnBoxToPool(GameObject box)
    {
        if (box == null)
        {
            return;
        }

        if (MGR_Pool.Instance == null)
        {
            Destroy(box);
            return;
        }

        box.transform.SetParent(MGR_Pool.Instance.transform, false);
        MGR_Pool.Instance.Release(box);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CTRL_TruckDelivery : MonoBehaviour
{
    private const int UnitsPerBox = 5;
    private const int MaxBoxesPerTruck = 6;

    [Header("Delivery")]
    [SerializeField] private GameObject _truckPrefab;
    [SerializeField] private GameObject _boxPrefab;
    [SerializeField] private Transform _truckStart;
    [SerializeField] private Transform _truckEnd;
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

    private GameObject _truck;
    private Coroutine _deliveryRoutine;

    private void OnEnable()
    {
        MGR_Game.OnSupplierOrderCreated += HandleSupplierOrderCreated;
    }

    private void OnDisable()
    {
        MGR_Game.OnSupplierOrderCreated -= HandleSupplierOrderCreated;
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
            List<ShelfBoxData> delivery = _pendingDeliveries.Dequeue();
            yield return DeliverTruck(delivery);
        }

        _deliveryRoutine = null;
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

        yield return MoveTruck(_truckStart, _truckEnd);

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
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CTRL_TruckDelivery : MonoBehaviour
{
    [Header("Delivery")]
    [SerializeField] private GameObject _truckPrefab;
    [SerializeField] private GameObject _boxPrefab;
    [SerializeField] private Transform _truckStart;
    [SerializeField] private Transform _truckEnd;
    [SerializeField] private float _travelDuration = 4f;
    [SerializeField] private float _leaveDelay = 2f;

    [Header("Cargo")]
    [SerializeField] private int _rows = 2;
    [SerializeField] private int _columns = 3;
    [SerializeField] private float _horizontalSpacing = 0.7f;
    [SerializeField] private float _verticalSpacing = 0.4f;

    private readonly List<GameObject> _boxes = new();

    private GameObject _truck;
    private Coroutine _deliveryRoutine;

    public void TriggerDelivery()
    {
        if (_deliveryRoutine != null)
            return;

        _deliveryRoutine = StartCoroutine(DeliverTruck());
    }

    private IEnumerator DeliverTruck()
    {
        // Spawn truck.
        _truck = Instantiate(
            _truckPrefab,
            _truckStart.position,
            _truckStart.rotation);

        // Find cargo spawn point inside the truck prefab.
        Transform cargoPoint =
            _truck.transform.Find("CargoSpawnPoint");

        if (cargoPoint == null)
        {
            Debug.LogError(
                "CTRL_TruckDelivery: CargoSpawnPoint was not found on the truck.");

            Destroy(_truck);
            _truck = null;
            _deliveryRoutine = null;
            yield break;
        }

        // Spawn boxes immediately with the truck.
        SpawnBoxes(cargoPoint);

        // Truck backs up toward the dock with the boxes.
        yield return MoveTruck(
            _truckStart,
            _truckEnd);

        // Wait until every box has been picked up.
        while (HasCargoRemaining())
        {
            yield return null;
        }

        // Wait 2 seconds after the last box is removed.
        yield return new WaitForSeconds(_leaveDelay);

        // Truck leaves.
        yield return MoveTruck(
            _truckEnd,
            _truckStart);

        // Clean up truck.
        Destroy(_truck);

        _truck = null;
        _deliveryRoutine = null;
    }

    private IEnumerator MoveTruck(
        Transform from,
        Transform to)
    {
        Vector3 startPosition = from.position;
        Quaternion startRotation = from.rotation;

        float elapsed = 0f;

        while (elapsed < _travelDuration)
        {
            elapsed += Time.deltaTime;

            float t =
                Mathf.Clamp01(
                    elapsed / _travelDuration);

            // Smooth movement.
            t = t * t * (3f - 2f * t);

            _truck.transform.SetPositionAndRotation(
                Vector3.Lerp(
                    startPosition,
                    to.position,
                    t),

                Quaternion.Slerp(
                    startRotation,
                    to.rotation,
                    t));

            yield return null;
        }

        _truck.transform.SetPositionAndRotation(
            to.position,
            to.rotation);
    }

    private void SpawnBoxes(Transform cargoPoint)
    {
        ClearBoxes();

        for (int column = 0; column < _columns; column++)
        {
            float x =
                (column - (_columns - 1) * 0.5f) *
                _horizontalSpacing;

            for (int row = 0; row < _rows; row++)
            {
                float y =
                    row * _verticalSpacing;

                GameObject box =
                    Instantiate(
                        _boxPrefab,
                        cargoPoint);

                box.transform.localPosition =
                    new Vector3(
                        x,
                        y,
                        0f);

                box.transform.localRotation =
                    Quaternion.identity;

                Rigidbody rigidbody =
                    box.GetComponent<Rigidbody>();

                if (rigidbody != null)
                {
                    rigidbody.isKinematic = true;
                    rigidbody.useGravity = false;
                }

                _boxes.Add(box);
            }
        }
    }

    private bool HasCargoRemaining()
    {
        bool cargoRemaining = false;

        for (int i = _boxes.Count - 1; i >= 0; i--)
        {
            GameObject box = _boxes[i];

            if (box == null)
            {
                _boxes.RemoveAt(i);
                continue;
            }

            // Box has been picked up and is no longer inside the truck.
            if (!box.transform.IsChildOf(_truck.transform))
            {
                _boxes.RemoveAt(i);

                // Make the remaining boxes settle into their stacks.
                RestackCargo();

                continue;
            }

            cargoRemaining = true;
        }

        return cargoRemaining;
    }

    private void RestackCargo()
    {
        for (int column = 0; column < _columns; column++)
        {
            List<GameObject> stack = new();

            float expectedX =
                (column - (_columns - 1) * 0.5f) *
                _horizontalSpacing;

            // Find all remaining boxes belonging to this column.
            for (int i = 0; i < _boxes.Count; i++)
            {
                GameObject box = _boxes[i];

                if (box == null)
                    continue;

                if (!box.transform.IsChildOf(_truck.transform))
                    continue;

                float xDifference =
                    Mathf.Abs(
                        box.transform.localPosition.x -
                        expectedX);

                if (xDifference < 0.1f)
                    stack.Add(box);
            }

            // Put remaining boxes at the bottom of the stack.
            for (int row = 0; row < stack.Count; row++)
            {
                GameObject box = stack[row];

                box.transform.localPosition =
                    new Vector3(
                        expectedX,
                        row * _verticalSpacing,
                        0f);

                box.transform.localRotation =
                    Quaternion.identity;
            }
        }
    }

    private void ClearBoxes()
    {
        for (int i = 0; i < _boxes.Count; i++)
        {
            if (_boxes[i] != null)
                Destroy(_boxes[i]);
        }

        _boxes.Clear();
    }
}
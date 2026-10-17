using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeliveryDebugTester : MonoBehaviour
{
    [Header("Test Rider")]
    [SerializeField] private CTRL_Rider testRider;

    [Header("Test Order")]
    [SerializeField] private DATA_ProductSO testProduct;
    [SerializeField] private int quantity = 1;

    [Header("Timing")]
    [SerializeField] private float simulateExitDelay = 1f;
    [SerializeField] private float simulateReturnDelay = 1f;

    private CTRL_Rider dispatchedRider;
    private OrderData dispatchedOrder;

    private int eventStep;

    private void OnEnable()
    {
        MGR_Delivery.OnRiderDispatched += HandleRiderDispatched;
        MGR_Delivery.OnRiderLeft += HandleRiderLeft;
        MGR_Delivery.OnRiderReturned += HandleRiderReturned;
    }

    private void OnDisable()
    {
        MGR_Delivery.OnRiderDispatched -= HandleRiderDispatched;
        MGR_Delivery.OnRiderLeft -= HandleRiderLeft;
        MGR_Delivery.OnRiderReturned -= HandleRiderReturned;
    }

    private IEnumerator Start()
    {
        if (MGR_Inventory.Instance != null &&
            !MGR_Inventory.Instance.IsInitialised)
        {
            MGR_Inventory.Instance.Initialise();

            Debug.Log(
                "[DeliveryDebugTester] MGR_Inventory initialised for Sandbox_sys test."
            );
        }

        if (MGR_Game.Instance != null &&
            !MGR_Game.Instance.IsInitialised)
        {
            MGR_Game.Instance.Initialise();

            Debug.Log(
                "[DeliveryDebugTester] MGR_Game initialised for Sandbox_sys test."
            );
        }

        if (MGR_Order.Instance != null)
        {
            MGR_Order.Instance.SetOrderGenerationEnabled(false);
        }

        // Wait one frame so the Sandbox managers finish initialising.
        yield return null;

        if (MGR_Order.Instance == null)
        {
            Debug.LogError(
                "[DeliveryDebugTester] MGR_Order is unavailable."
            );
            yield break;
        }

        if (MGR_Inventory.Instance == null)
        {
            Debug.LogError(
                "[DeliveryDebugTester] MGR_Inventory is unavailable."
            );
            yield break;
        }

        if (MGR_Delivery.Instance == null)
        {
            Debug.LogError(
                "[DeliveryDebugTester] MGR_Delivery is unavailable."
            );
            yield break;
        }

        if (testRider == null)
        {
            Debug.LogError(
                "[DeliveryDebugTester] Assign a test rider."
            );
            yield break;
        }

        if (testProduct == null)
        {
            Debug.LogError(
                "[DeliveryDebugTester] Assign a test product."
            );
            yield break;
        }

        int before =
            MGR_Inventory.Instance.GetTotalShelfStock(testProduct);

        Debug.Log(
            $"[DeliveryDebugTester] Starting test. " +
            $"{testProduct.DisplayName} shelf stock BEFORE: {before}"
        );

        // Create and remember the EXACT deterministic test order.
        dispatchedOrder =
            MGR_Order.Instance.DebugCreateOrder(
                testProduct,
                quantity
            );

        if (dispatchedOrder == null)
        {
            Debug.LogError(
                "[DeliveryDebugTester] Failed to create test order."
            );
            yield break;
        }

        // Register the rider only after our deterministic order exists.
        MGR_Delivery.Instance.RegisterRider(testRider);

        Debug.Log(
            $"[DeliveryDebugTester] Registered test rider: {testRider.name}"
        );
    }


    private void HandleRiderDispatched(
        CTRL_Rider rider,
        OrderData order,
        List<string> shelves)
    {
        if (order != dispatchedOrder)
        {
            Debug.Log(
                $"[DeliveryDebugTester] Ignoring unrelated Order #{order.OrderID}."
            );

            return;
        }

        eventStep++;

        dispatchedRider = rider;

        int remaining =
            MGR_Inventory.Instance.GetTotalShelfStock(
                testProduct
            );

        Debug.Log(
            $"[DeliveryDebugTester] EVENT {eventStep}: " +
            $"OnRiderDispatched | " +
            $"Rider: {rider.name} | " +
            $"Order: {order.OrderID} | " +
            $"Shelves: {string.Join(", ", shelves)} | " +
            $"Shelf stock AFTER reservation: {remaining}"
        );

        StartCoroutine(SimulateRiderLeaving());
    }

    private IEnumerator SimulateRiderLeaving()
    {
        yield return new WaitForSeconds(
            simulateExitDelay
        );

        if (MGR_Delivery.Instance != null &&
            dispatchedRider != null)
        {
            MGR_Delivery.Instance.NotifyRiderLeft(
                dispatchedRider
            );
        }
    }

    private void HandleRiderLeft(
        CTRL_Rider rider,
        OrderData order)
    {
        if (order != dispatchedOrder)
        {
            return;
        }

        eventStep++;

        Debug.Log(
            $"[DeliveryDebugTester] EVENT {eventStep}: " +
            $"OnRiderLeft | " +
            $"Rider: {rider.name} | " +
            $"Order: {order.OrderID}"
        );

        StartCoroutine(SimulateRiderReturning());
    }

    private IEnumerator SimulateRiderReturning()
    {
        yield return new WaitForSeconds(
            simulateReturnDelay
        );

        if (MGR_Delivery.Instance != null &&
            dispatchedRider != null)
        {
            MGR_Delivery.Instance.NotifyRiderReturned(
                dispatchedRider
            );
        }
    }

    private void HandleRiderReturned(
        CTRL_Rider rider,
        OrderData order)
    {
        if (order != dispatchedOrder)
        {
            return;
        }

        eventStep++;

        Debug.Log(
            $"[DeliveryDebugTester] EVENT {eventStep}: " +
            $"OnRiderReturned | " +
            $"Rider: {rider.name} | " +
            $"Order: {order.OrderID}"
        );

        if (eventStep == 3)
        {
            Debug.Log(
                "[DeliveryDebugTester] PASS: " +
                "Dispatch -> Left -> Returned occurred in order."
            );

            if (MGR_Order.Instance != null)
            {
                MGR_Order.Instance.SetOrderGenerationEnabled(true);
            }
        }
    }
}
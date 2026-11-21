
using TMPro;
using UnityEngine;

// First-time hints for a new save. The player learns the loop by doing it,
// in this order (saved as TutorialStep 0-3):
//   0. A free truck brings one starter box: pick it up at the dock.
//   1. Put it on the shelf of the same colour.
//   2. An order asks for that product: a rider takes it from the shelf.
//   3. As soon as the rider takes it, the player is told to buy stock at the
//      computer, so they act while the rider delivers instead of watching.
// A short controls hint shows first, and a world marker (UI_GuideMarker)
// points at the next target. MGR_Order holds the first order until the
// starter box is on a shelf.
public class UI_FirstTimeHints : MonoBehaviour
{
    [Header("References")]
    [SerializeField] private TMP_Text hintText;

    [Header("Controls hint")]
    [SerializeField] private float controlsHintSeconds = 6f;

    [Header("Starter box")]
    [SerializeField] private int starterBoxUnits = 3;
    [SerializeField] private float starterTruckDelay = 1f;

    private const string ControlsHint =
        "Left side: move - Drag the right side: look around";

    private const string StarterTruckHint =
        "Your first delivery is coming to the dock";

    private const string PickUpHint =
        "A truck brought your first box. Pick it up at the dock";

    private const string PickUpAgainHint =
        "Pick the box up again";

    private const string PlaceHintGeneric =
        "Put the box on the shelf with the same colour";

    private const string PlaceHintCategory =
        "Put the box on the {0} shelf (same colour)";

    private const string DeliveryHint =
        "A customer ordered it. A rider will take it from your shelf";

    private const string BuyWhileRiderHint =
        "A rider is delivering. Meanwhile, buy stock at the computer";

    private const string BuyHintGeneric =
        "Orders keep coming. Buy stock at the computer";

    private const string BuyHintProduct =
        "An order needs {0}. Buy it at the computer";

    private const int StepCount = 4;
    private const float RefreshInterval = 0.5f;

    private MGR_Save saveManager;
    private bool isInitialised;
    private float controlsHintTimer;
    private float refreshTimer;
    private float starterTruckTimer;
    private bool starterTruckSent;
    private bool boughtBeforeBuyStep;

    public void Initialise()
    {
        if (isInitialised)
            return;

        saveManager = MGR_Save.Instance;

        if (saveManager == null || hintText == null)
        {
            Debug.LogError(
                "UI_FirstTimeHints: Required references are missing."
            );
            return;
        }

        if (!saveManager.TutorialInitialized)
        {
            hintText.gameObject.SetActive(false);
            return;
        }

        isInitialised = true;

        if (!saveManager.HintsDone && saveManager.TutorialStep == 0)
            controlsHintTimer = controlsHintSeconds;

        starterTruckTimer = starterTruckDelay;

        MGR_Game.OnSupplierOrderCreated += HandleSupplierOrderCreated;
        MGR_Delivery.OnRiderDispatched += HandleRiderDispatched;

        if (!saveManager.HintsDone)
            UI_GuideMarker.EnsureExists();

        RefreshHint();
    }

    private void Update()
    {
        if (!isInitialised || saveManager.HintsDone)
            return;

        UpdateStarterTruck();

        if (controlsHintTimer > 0f)
        {
            controlsHintTimer -= Time.deltaTime; // waits while the shift briefing pauses the game

            if (controlsHintTimer <= 0f)
                RefreshHint();

            return;
        }

        refreshTimer -= Time.unscaledDeltaTime;

        if (refreshTimer > 0f)
            return;

        refreshTimer = RefreshInterval;
        RefreshHint();
    }

    // Step 0 needs a box at the dock. Send one free starter box when the
    // dock is empty and nothing is lying around (new game, or the box got
    // lost before it reached a shelf).
    private void UpdateStarterTruck()
    {
        int step = saveManager.TutorialStep;

        if (step == 1 &&
            UI_GuideMarker.FindHeldBox() == null &&
            UI_GuideMarker.FindLooseBox() == null &&
            !IsDockBusy())
        {
            saveManager.UpdateTutorialProgress(0, false);
            starterTruckSent = false;
            starterTruckTimer = starterTruckDelay;
            step = 0;
        }

        if (step != 0 || starterTruckSent)
            return;

        if (IsDockBusy() || UI_GuideMarker.FindLooseBox() != null)
        {
            starterTruckSent = true;
            return;
        }

        starterTruckTimer -= Time.deltaTime;

        if (starterTruckTimer > 0f)
            return;

        CTRL_TruckDelivery truck = CTRL_TruckDelivery.Instance;
        MGR_Order orders = MGR_Order.Instance;

        if (truck == null || orders == null)
            return;

        DATA_ProductSO product = orders.PickTutorialStarterProduct();

        if (product != null && truck.DeliverFreeBoxes(product, starterBoxUnits))
            starterTruckSent = true;
    }

    private static bool IsDockBusy()
    {
        return CTRL_TruckDelivery.Instance != null &&
               CTRL_TruckDelivery.Instance.IsDockBusy;
    }

    private void HandleSupplierOrderCreated(SupplierOrder order)
    {
        if (saveManager.TutorialStep == 3)
            AdvanceHint();
        else
            boughtBeforeBuyStep = true;
    }

    private void HandleRiderDispatched(
        CTRL_Rider rider,
        OrderData order,
        System.Collections.Generic.List<string> shelves)
    {
        if (saveManager.TutorialStep != 2)
            return;

        AdvanceHint();

        // The player already bought on their own: nothing left to teach.
        if (boughtBeforeBuyStep && saveManager.TutorialStep == 3)
            AdvanceHint();
    }

    public void NotifyBoxPickedUp()
    {
        if (saveManager != null && saveManager.TutorialStep == 0)
            AdvanceHint();
    }

    public void NotifyBoxPlaced()
    {
        if (saveManager != null && saveManager.TutorialStep == 1)
            AdvanceHint();
    }

    private void AdvanceHint()
    {
        int nextStep = saveManager.TutorialStep + 1;
        bool done = nextStep >= StepCount;

        controlsHintTimer = 0f;

        saveManager.UpdateTutorialProgress(nextStep, done);

        RefreshHint();
    }

    private void RefreshHint()
    {
        if (saveManager.HintsDone ||
            saveManager.TutorialStep >= StepCount)
        {
            hintText.gameObject.SetActive(false);
            return;
        }

        string message =
            controlsHintTimer > 0f
                ? ControlsHint
                : GetStepMessage(saveManager.TutorialStep);

        if (hintText.text != message)
            hintText.text = message;

        hintText.gameObject.SetActive(true);
    }

    private static string GetStepMessage(int step)
    {
        switch (step)
        {
            case 0:
                return UI_GuideMarker.FindLooseBox() != null
                    ? PickUpHint
                    : StarterTruckHint;

            case 1:
                CTRL_BoxContents held = UI_GuideMarker.FindHeldBox();

                if (held == null)
                    return PickUpAgainHint;

                return held.Product != null
                    ? string.Format(PlaceHintCategory, held.Product.Category)
                    : PlaceHintGeneric;

            case 2:
                return DeliveryHint;

            default:
                DATA_ProductSO missing =
                    UI_GuideMarker.FindMissingOrderProduct();

                if (missing != null)
                    return string.Format(BuyHintProduct, missing.DisplayName);

                return UI_GuideMarker.IsRiderDelivering()
                    ? BuyWhileRiderHint
                    : BuyHintGeneric;
        }
    }

    private void OnDestroy()
    {
        MGR_Game.OnSupplierOrderCreated -= HandleSupplierOrderCreated;
        MGR_Delivery.OnRiderDispatched -= HandleRiderDispatched;
    }
}

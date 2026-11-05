
using TMPro;
using UnityEngine;

public class UI_FirstTimeHints : MonoBehaviour
{
    [Header("References")]
    [SerializeField] private TMP_Text hintText;

    private MGR_Save saveManager;
    private bool isInitialised;

    private readonly string[] hintMessages =
    {
        "Buy stock at the terminal",
        "Pick up a box at the dock",
        "Put it on the shelf with the same colour",
        "Riders take the orders from your shelves"
    };

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

        MGR_Game.OnSupplierOrderCreated += HandleSupplierOrderCreated;
        MGR_Order.OnOrderFulfilled += HandleOrderFulfilled;

        RefreshHint();
    }

    private void HandleSupplierOrderCreated(SupplierOrder order)
    {
        if (saveManager.TutorialStep == 0)
            AdvanceHint();
    }

    private void HandleOrderFulfilled(OrderData order)
    {
        if (saveManager.TutorialStep == 3)
            AdvanceHint();
    }

    public void NotifyBoxPickedUp()
    {
        if (saveManager != null && saveManager.TutorialStep == 1)
            AdvanceHint();
    }

    public void NotifyBoxPlaced()
    {
        if (saveManager != null && saveManager.TutorialStep == 2)
            AdvanceHint();
    }

    private void AdvanceHint()
    {
        int nextStep = saveManager.TutorialStep + 1;
        bool done = nextStep >= hintMessages.Length;

        saveManager.UpdateTutorialProgress(nextStep, done);

        RefreshHint();
    }

    private void RefreshHint()
    {
        if (saveManager.HintsDone ||
            saveManager.TutorialStep >= hintMessages.Length)
        {
            hintText.gameObject.SetActive(false);
            return;
        }

        hintText.text = hintMessages[saveManager.TutorialStep];
        hintText.gameObject.SetActive(true);
    }

    private void OnDestroy()
    {
        MGR_Game.OnSupplierOrderCreated -= HandleSupplierOrderCreated;
        MGR_Order.OnOrderFulfilled -= HandleOrderFulfilled;
    }
}

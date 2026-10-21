
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TerminalUpgradesUI : MonoBehaviour
{
    private const int RequiredLevel = 5;
    private const int RequiredCash = 200000; // $2,000.00 in cents

    [Header("Stage 1 Requirements")]
    [SerializeField] private TMP_Text levelRequirementText;
    [SerializeField] private TMP_Text moneyRequirementText;
    [SerializeField] private Button buyButton;

    private void OnEnable()
    {
        MGR_Game.OnCashChanged += HandleCashChanged;
        MGR_Game.OnLevelUp += HandleLevelUp;
    }

    private void OnDisable()
    {
        MGR_Game.OnCashChanged -= HandleCashChanged;
        MGR_Game.OnLevelUp -= HandleLevelUp;
    }

    private void Start()
    {
        RefreshRequirements();
    }

    private void HandleCashChanged(int currentCash, int change)
    {
        RefreshRequirements();
    }

    private void HandleLevelUp(int newLevel)
    {
        RefreshRequirements();
    }

    private void RefreshRequirements()
    {
        MGR_Game game = MGR_Game.Instance;

        if (game == null)
        {
            if (buyButton != null)
                buyButton.interactable = false;

            return;
        }

        bool needsLevel = game.CurrentLevel < RequiredLevel;
        bool needsCash = game.CurrentCash < RequiredCash;

        if (levelRequirementText != null)
        {
            levelRequirementText.gameObject.SetActive(needsLevel);
            levelRequirementText.text = "Needs level 5";
        }

        if (moneyRequirementText != null)
        {
            moneyRequirementText.gameObject.SetActive(needsCash);
            moneyRequirementText.text = "Needs: 2,000";
        }

        if (buyButton != null)
        {
            buyButton.interactable = !needsLevel && !needsCash;
        }
    }

    public void RequestStage1Upgrade()
    {
        MGR_Game game = MGR_Game.Instance;

        if (game == null ||
            game.CurrentLevel < RequiredLevel ||
            game.CurrentCash < RequiredCash)
        {
            RefreshRequirements();
            return;
        }

        // Keep the event integration pending until Arnab's event is ready.
        Debug.Log("Upgrade solicitado: Stage 1");
    }
}

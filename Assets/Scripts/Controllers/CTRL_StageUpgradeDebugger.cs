using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

/// <summary>
/// Temporary diagnostics for the Stage 1 upgrade button and purchase only.
/// Attach beside CTRL_StageUpgrade and assign the Buy button and Stage 1 object.
/// </summary>
[DisallowMultipleComponent]
public class CTRL_StageUpgradeDebugger : MonoBehaviour
{
    [Header("Stage 1 Upgrade Diagnostics")]
    [SerializeField] private Button buyButton;
    [SerializeField] private GameObject stage1Assembly;

    private string _lastStatus;

    private void OnEnable()
    {
        if (buyButton != null)
        {
            buyButton.onClick.AddListener(HandleBuyButtonClicked);
        }

        CTRL_StageUpgrade.OnStageChanged += HandleStageChanged;
    }

    private void OnDisable()
    {
        if (buyButton != null)
        {
            buyButton.onClick.RemoveListener(HandleBuyButtonClicked);
        }

        CTRL_StageUpgrade.OnStageChanged -= HandleStageChanged;
    }

    private void Start()
    {
        ReportStatus(true);
    }

    private void Update()
    {
        ReportStatus(false);
    }

    private void HandleBuyButtonClicked()
    {
        MGR_Game game = MGR_Game.Instance;
        CTRL_StageUpgrade upgrade = GetComponent<CTRL_StageUpgrade>();

        Debug.Log(
            "[Stage Upgrade Debug] Buy button click reached Unity's onClick event. " +
            DescribeGameState(game) +
            $" Controller enabled: {upgrade != null && upgrade.isActiveAndEnabled}. " +
            $"Stage 1 active: {stage1Assembly != null && stage1Assembly.activeSelf}.",
            this
        );
    }

    private void HandleStageChanged(int newStage)
    {
        MGR_Game game = MGR_Game.Instance;

        Debug.Log(
            $"[Stage Upgrade Debug] OnStageChanged fired with stage {newStage}. " +
            DescribeGameState(game) +
            $"Stage 1 active: {stage1Assembly != null && stage1Assembly.activeSelf}.",
            this
        );
    }

    private void ReportStatus(bool force)
    {
        CTRL_StageUpgrade upgrade = GetComponent<CTRL_StageUpgrade>();
        string status =
            $"Buy button assigned: {buyButton != null}; " +
            $"active in hierarchy: {buyButton != null && buyButton.gameObject.activeInHierarchy}; " +
            $"enabled: {buyButton != null && buyButton.enabled}; " +
            $"interactable: {buyButton != null && buyButton.IsInteractable()}; " +
            $"EventSystem present: {EventSystem.current != null}; " +
            $"CTRL_StageUpgrade enabled: {upgrade != null && upgrade.isActiveAndEnabled}; " +
            $"Stage 1 assigned: {stage1Assembly != null}; " +
            $"Stage 1 active: {stage1Assembly != null && stage1Assembly.activeSelf}; " +
            DescribeGameState(MGR_Game.Instance);

        if (force || status != _lastStatus)
        {
            Debug.Log("[Stage Upgrade Debug] " + status, this);
            _lastStatus = status;
        }
    }

    private static string DescribeGameState(MGR_Game game)
    {
        if (game == null)
        {
            return "MGR_Game missing. ";
        }

        return
            $"MGR_Game initialized: {game.IsInitialised}; " +
            $"level: {game.CurrentLevel}; " +
            $"cash: ${game.CurrentCash / 100f:F2}; " +
            $"Stage 1 purchasable: {game.IsStage1Purchasable}. ";
    }
}

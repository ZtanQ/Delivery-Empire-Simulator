using System;
using UnityEngine;
using UnityEngine.UI;

public class CTRL_StageUpgrade : MonoBehaviour
{
    private const float Stage1Cost = 2000f;

    [Header("Upgrade Button")]
    [SerializeField] private Button _stage1UpgradeButton;

    [Header("Stage 1")]
    [SerializeField] private GameObject _stage1Assembly;
    [SerializeField] private Transform _playerStage1Spawn;

    [Header("Player")]
    [SerializeField] private CharacterController _playerController;

    public static event Action<int> OnStageChanged;

    private bool _purchaseInProgress;

    private void Awake()
    {
        if (_playerController == null)
        {
            _playerController = GetComponent<CharacterController>();
        }
    }

    private void OnEnable()
    {
        if (_stage1UpgradeButton != null)
        {
            _stage1UpgradeButton.onClick.AddListener(TryPurchaseStage1);
        }
    }

    private void OnDisable()
    {
        if (_stage1UpgradeButton != null)
        {
            _stage1UpgradeButton.onClick.RemoveListener(TryPurchaseStage1);
        }
    }

    private void TryPurchaseStage1()
    {
        if (_purchaseInProgress)
        {
            return;
        }

        if (_stage1UpgradeButton == null ||
            _stage1Assembly == null ||
            _playerStage1Spawn == null ||
            _playerController == null)
        {
            Debug.LogError(
                "CTRL_StageUpgrade is missing its Buy_Button, Stage 1 object, " +
                "SPW_Playerstage1, or player CharacterController."
            );
            return;
        }

        if (_stage1Assembly.activeSelf)
        {
            Debug.Log("Stage 1 is already enabled.");
            return;
        }

        MGR_Game game = MGR_Game.Instance;
        if (game == null)
        {
            Debug.LogError("CTRL_StageUpgrade could not find MGR_Game.");
            return;
        }

        if (!game.IsStage1Purchasable)
        {
            Debug.Log("Stage 1 requires player level 5.");
            return;
        }

        _purchaseInProgress = true;

        if (!game.TrySpendCash(Stage1Cost))
        {
            Debug.Log("Stage 1 requires 2,000 cash.");
            _purchaseInProgress = false;
            return;
        }

        _stage1Assembly.SetActive(true);
        Physics.SyncTransforms();
        MovePlayerTo(_playerStage1Spawn.position);

        OnStageChanged?.Invoke(1);
        Debug.Log("Stage 1 purchased and enabled. Player moved to SPW_PlayerStage1.");
        _purchaseInProgress = false;
    }

    private void MovePlayerTo(Vector3 position)
    {
        bool wasEnabled = _playerController.enabled;
        _playerController.enabled = false;
        _playerController.transform.position = position;
        _playerController.enabled = wasEnabled;
        Physics.SyncTransforms();
    }
}

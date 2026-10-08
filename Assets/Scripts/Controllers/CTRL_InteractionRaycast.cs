using UnityEngine;

public class CTRL_InteractionRaycast : MonoBehaviour
{
    [Header("References")]
    [SerializeField] private Camera _playerCamera;
    [SerializeField] private ContextualActionButton _actionButton;
    [SerializeField] private Transform _handAnchor;
    [SerializeField] private Material _highlightMaterial;

    [Header("Terminal")]
    [SerializeField] private TerminalBuyUI _terminalUI;
    [SerializeField] private GameObject _terminalPanel;

    [Header("Player Controls")]
    [SerializeField] private CTRL_FirstPersonController _movementController;
    [SerializeField] private CTRL_FirstPersonCamera _lookController;

    [Header("Interaction")]
    [SerializeField] private LayerMask _interactableLayer;
    [SerializeField] private float _raycastDistance = 3f;

    [Header("Held Box")]
    [SerializeField] private Vector3 _heldLocalPosition =
        new Vector3(0.35f, -0.25f, 0.7f);

    private CTRL_Interactable _currentTarget;

    private GameObject _heldObject;
    private Rigidbody _heldRigidbody;
    private Collider[] _heldColliders;

    private bool _terminalControlsPaused;
    private bool _movementWasEnabled;
    private bool _lookWasEnabled;

    private void Awake()
    {
        if (_actionButton != null)
        {
            _actionButton.OnActionTapped.AddListener(HandleActionTapped);
        }

        SyncTerminalControlState();
    }

    private void OnDestroy()
    {
        if (_actionButton != null)
        {
            _actionButton.OnActionTapped.RemoveListener(HandleActionTapped);
        }
    }

    private void Update()
    {
        SyncTerminalControlState();

        if (_terminalControlsPaused)
        {
            return;
        }

        if (_heldObject != null)
        {
            SetActionButton("Drop");
            return;
        }

        CheckForTarget();
    }

    private void CheckForTarget()
    {
        if (_playerCamera == null)
        {
            SetCurrentTarget(null);
            return;
        }

        Ray ray = _playerCamera.ViewportPointToRay(
            new Vector3(0.5f, 0.5f, 0f)
        );

        CTRL_Interactable newTarget = null;

        if (Physics.Raycast(
                ray,
                out RaycastHit hit,
                _raycastDistance,
                _interactableLayer))
        {
            newTarget =
                hit.collider.GetComponentInParent<CTRL_Interactable>();
        }

        if (newTarget == _currentTarget)
        {
            return;
        }

        SetCurrentTarget(newTarget);
    }

    private void SetCurrentTarget(CTRL_Interactable target)
    {
        if (_currentTarget != null)
        {
            _currentTarget.SetHighlighted(false, _highlightMaterial);
        }

        _currentTarget = target;

        if (_currentTarget == null)
        {
            ClearActionButton();
            return;
        }

        _currentTarget.SetHighlighted(true, _highlightMaterial);
        UpdateActionButton(_currentTarget.Action);
    }

    private void HandleActionTapped()
    {
        if (_heldObject != null)
        {
            DropObject();
            return;
        }

        if (_currentTarget == null)
        {
            return;
        }

        switch (_currentTarget.Action)
        {
            case CTRL_Interactable.ActionType.PickUp:
                PickUpObject(_currentTarget);
                break;

            case CTRL_Interactable.ActionType.Use:
                OpenTerminal();
                break;

            case CTRL_Interactable.ActionType.Place:
                // Place behavior is not implemented yet.
                break;
        }
    }

    private void OpenTerminal()
    {
        if (_terminalUI == null || _terminalPanel == null)
        {
            Debug.LogWarning(
                "CTRL_InteractionRaycast: Assign the Terminal UI and its panel."
            );
            return;
        }

        SetCurrentTarget(null);
        _terminalUI.Open();
        SyncTerminalControlState();
    }

    private void SyncTerminalControlState()
    {
        bool terminalIsOpen =
            _terminalPanel != null &&
            _terminalPanel.activeInHierarchy;

        if (terminalIsOpen == _terminalControlsPaused)
        {
            return;
        }

        SetTerminalControlsPaused(terminalIsOpen);
    }

    private void SetTerminalControlsPaused(bool paused)
    {
        if (paused == _terminalControlsPaused)
        {
            return;
        }

        _terminalControlsPaused = paused;

        if (paused)
        {
            _movementWasEnabled =
                _movementController != null &&
                _movementController.enabled;

            _lookWasEnabled =
                _lookController != null &&
                _lookController.enabled;

            if (_movementController != null)
            {
                _movementController.enabled = false;
            }

            if (_lookController != null)
            {
                _lookController.enabled = false;
            }

            return;
        }

        if (_movementController != null)
        {
            _movementController.enabled = _movementWasEnabled;
        }

        if (_lookController != null)
        {
            _lookController.enabled = _lookWasEnabled;
        }
    }

    private void PickUpObject(CTRL_Interactable interactable)
    {
        if (interactable == null || _handAnchor == null)
        {
            return;
        }

        SetCurrentTarget(null);

        _heldObject = interactable.gameObject;
        _heldRigidbody = _heldObject.GetComponent<Rigidbody>();
        _heldColliders = _heldObject.GetComponentsInChildren<Collider>();

        foreach (Collider heldCollider in _heldColliders)
        {
            if (heldCollider != null)
            {
                heldCollider.enabled = false;
            }
        }

        if (_heldRigidbody != null)
        {
            _heldRigidbody.isKinematic = true;
            _heldRigidbody.useGravity = false;
        }

        _heldObject.transform.SetParent(_handAnchor);
        _heldObject.transform.localPosition = _heldLocalPosition;
        _heldObject.transform.localRotation = Quaternion.identity;

        SetActionButton("Drop");
    }

    private void DropObject()
    {
        if (_heldObject == null)
        {
            ClearHeldObjectReferences();
            ClearActionButton();
            return;
        }

        Transform objectTransform = _heldObject.transform;
        objectTransform.SetParent(null);

        if (_playerCamera != null)
        {
            objectTransform.position =
                _playerCamera.transform.position +
                _playerCamera.transform.forward;
        }

        if (_heldColliders != null)
        {
            foreach (Collider heldCollider in _heldColliders)
            {
                if (heldCollider != null)
                {
                    heldCollider.enabled = true;
                }
            }
        }

        if (_heldRigidbody != null)
        {
            _heldRigidbody.isKinematic = false;
            _heldRigidbody.useGravity = true;
        }

        ClearHeldObjectReferences();
        ClearActionButton();
    }

    private void ClearHeldObjectReferences()
    {
        _heldObject = null;
        _heldRigidbody = null;
        _heldColliders = null;
    }

    private void UpdateActionButton(
        CTRL_Interactable.ActionType actionType)
    {
        switch (actionType)
        {
            case CTRL_Interactable.ActionType.PickUp:
                SetActionButton("Pick up");
                break;

            case CTRL_Interactable.ActionType.Place:
                SetActionButton("Place");
                break;

            case CTRL_Interactable.ActionType.Use:
                SetActionButton("Use");
                break;
        }
    }

    private void SetActionButton(string label)
    {
        if (_actionButton != null)
        {
            _actionButton.SetAction(label, null);
        }
    }

    private void ClearActionButton()
    {
        SetActionButton("");
    }

    private void OnDisable()
    {
        if (_currentTarget != null)
        {
            _currentTarget.SetHighlighted(false, _highlightMaterial);
        }

        _currentTarget = null;
    }
}
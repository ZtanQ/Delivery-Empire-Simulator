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

    [Header("Placement Feedback")]
    [SerializeField, Min(0f)] private float _feedbackDuration = 1.5f;

    private CTRL_Interactable _currentTarget;
    private ShelfSlot _currentShelfTarget;

    private GameObject _heldObject;
    private Rigidbody _heldRigidbody;
    private Collider[] _heldColliders;
    private readonly RaycastHit[] _heldBoxHits = new RaycastHit[32];
    private float _heldBoxCollisionRadius = 0.2f;

    private bool _terminalControlsPaused;
    private bool _movementWasEnabled;
    private bool _lookWasEnabled;

    private string _placementFeedback;
    private float _placementFeedbackTimer;

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
            UpdateShelfTarget();

            if (_placementFeedbackTimer > 0f)
            {
                _placementFeedbackTimer -= Time.deltaTime;
                SetActionButton(_placementFeedback);
            }
            else
            {
                SetActionButton(
                    _currentShelfTarget != null ? "Place" : "Drop"
                );
            }

            return;
        }

        _currentShelfTarget = null;
        CheckForTarget();
    }

    private void LateUpdate()
    {
        UpdateHeldBoxPosition();
    }

    private void UpdateHeldBoxPosition()
    {
        if (_heldObject == null ||
            _handAnchor == null ||
            _playerCamera == null)
        {
            return;
        }

        // HandAnchor already sits 0.7 m in front of the camera. Do not add
        // the serialized 0.7 m local Z offset a second time.
        Vector3 localPosition = new Vector3(
            _heldLocalPosition.x,
            _heldLocalPosition.y,
            0f
        );

        Vector3 desiredPosition =
            _handAnchor.TransformPoint(localPosition);
        Vector3 toDesiredPosition =
            desiredPosition - _playerCamera.transform.position;
        float distance = toDesiredPosition.magnitude;

        if (distance <= 0.001f)
        {
            _heldObject.transform.position = desiredPosition;
            return;
        }

        Vector3 direction = toDesiredPosition / distance;
        float allowedDistance = distance;
        int hitCount = Physics.SphereCastNonAlloc(
            _playerCamera.transform.position,
            _heldBoxCollisionRadius,
            direction,
            _heldBoxHits,
            distance,
            Physics.DefaultRaycastLayers,
            QueryTriggerInteraction.Ignore
        );

        float nearestDistance = float.MaxValue;

        for (int i = 0; i < hitCount; i++)
        {
            Collider hitCollider = _heldBoxHits[i].collider;

            if (hitCollider == null ||
                hitCollider.transform == transform ||
                hitCollider.transform.IsChildOf(transform) ||
                hitCollider.transform == _heldObject.transform ||
                hitCollider.transform.IsChildOf(_heldObject.transform))
            {
                continue;
            }

            if (_heldBoxHits[i].distance < nearestDistance)
            {
                nearestDistance = _heldBoxHits[i].distance;
            }
        }

        if (nearestDistance < float.MaxValue)
        {
            allowedDistance = Mathf.Max(0f, nearestDistance - 0.03f);
        }

        _heldObject.transform.position =
            _playerCamera.transform.position + direction * allowedDistance;
        _heldObject.transform.rotation = _handAnchor.rotation;
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

    private void UpdateShelfTarget()
    {
        _currentShelfTarget = null;

        if (_playerCamera == null)
        {
            return;
        }

        Ray ray = _playerCamera.ViewportPointToRay(
            new Vector3(0.5f, 0.5f, 0f)
        );

        if (Physics.Raycast(ray, out RaycastHit hit, _raycastDistance))
        {
            _currentShelfTarget =
                hit.collider.GetComponentInParent<ShelfSlot>();
        }
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
            if (_currentShelfTarget != null)
            {
                PlaceHeldObject();
            }
            else
            {
                DropObject();
            }

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

        _currentShelfTarget = null;
        _placementFeedback = null;
        _placementFeedbackTimer = 0f;

        _heldObject = interactable.gameObject;
        _heldRigidbody = _heldObject.GetComponent<Rigidbody>();
        _heldColliders = _heldObject.GetComponentsInChildren<Collider>();

        _heldBoxCollisionRadius = 0.2f;

        foreach (Collider heldCollider in _heldColliders)
        {
            if (heldCollider != null)
            {
                if (heldCollider.enabled)
                {
                    _heldBoxCollisionRadius = Mathf.Max(
                        _heldBoxCollisionRadius,
                        heldCollider.bounds.extents.magnitude
                    );
                }

                heldCollider.enabled = false;
            }
        }

        _heldBoxCollisionRadius = Mathf.Clamp(
            _heldBoxCollisionRadius,
            0.1f,
            0.4f
        );

        if (_heldRigidbody != null)
        {
            _heldRigidbody.isKinematic = true;
            _heldRigidbody.useGravity = false;
        }

        _heldObject.transform.SetParent(_handAnchor);
        _heldObject.transform.localPosition = new Vector3(
            _heldLocalPosition.x,
            _heldLocalPosition.y,
            0f
        );
        _heldObject.transform.localRotation = Quaternion.identity;

        SetActionButton("Drop");
    }

    private void PlaceHeldObject()
    {
        if (_heldObject == null || _currentShelfTarget == null)
        {
            return;
        }

        CTRL_BoxContents boxContents =
            _heldObject.GetComponent<CTRL_BoxContents>();

        if (boxContents == null)
        {
            ShowPlacementFeedback("Invalid box");
            return;
        }

        if (MGR_Inventory.Instance == null)
        {
            ShowPlacementFeedback("Shelf unavailable");
            return;
        }

        ShelfBoxData boxData = boxContents.ToShelfBoxData();

        if (boxData == null)
        {
            ShowPlacementFeedback("Invalid box");
            return;
        }

        ShelfPlacementResult result =
            _currentShelfTarget.TryPlaceBox(boxData);

        switch (result)
        {
            case ShelfPlacementResult.Success:
                ReturnPlacedBoxToPool();
                break;

            case ShelfPlacementResult.WrongCategory:
                ShowPlacementFeedback("Wrong category");
                break;

            case ShelfPlacementResult.OverCapacity:
                ShowPlacementFeedback("Shelf full");
                break;

            default:
                ShowPlacementFeedback("Shelf unavailable");
                break;
        }
    }

    private void ReturnPlacedBoxToPool()
    {
        GameObject placedBox = _heldObject;

        ClearHeldObjectReferences();
        _currentShelfTarget = null;
        _placementFeedback = null;
        _placementFeedbackTimer = 0f;

        if (MGR_Pool.Instance != null)
        {
            placedBox.transform.SetParent(
                MGR_Pool.Instance.transform,
                false
            );

            MGR_Pool.Instance.Release(placedBox);
        }
        else
        {
            Destroy(placedBox);
        }

        ClearActionButton();
    }

    private void ShowPlacementFeedback(string message)
    {
        _placementFeedback = message;
        _placementFeedbackTimer = _feedbackDuration;
        SetActionButton(message);
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
        _currentShelfTarget = null;
        _placementFeedback = null;
        _placementFeedbackTimer = 0f;
        ClearActionButton();
    }

    private void ClearHeldObjectReferences()
    {
        _heldObject = null;
        _heldRigidbody = null;
        _heldColliders = null;
        _heldBoxCollisionRadius = 0.2f;
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

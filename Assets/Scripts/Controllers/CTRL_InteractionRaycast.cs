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
    [SerializeField, Min(0f)] private float _heldBoxSmoothTime = 0.06f;
    [SerializeField, Min(0f)] private float _heldBoxWallClearance = 0.03f;
    [SerializeField, Min(0f)] private float _heldBoxWallDropDistance = 0.25f;

    [Header("Placement Feedback")]
    [SerializeField, Min(0f)] private float _feedbackDuration = 1.5f;

    private CTRL_Interactable _currentTarget;
    private ShelfSlot _currentShelfTarget;

    private GameObject _heldObject;
    private Rigidbody _heldRigidbody;
    private Collider[] _heldColliders;
    private readonly RaycastHit[] _heldBoxHits = new RaycastHit[32];
    private Vector3 _heldBoxHalfExtents = new Vector3(0.2f, 0.2f, 0.2f);
    private Vector3 _heldColliderCenterLocal;
    private Vector3 _heldBoxSmoothingVelocity;

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
        UpdateHeldBoxPosition(false);
    }

    private void UpdateHeldBoxPosition(bool snapToHand)
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

        Quaternion heldRotation = _handAnchor.rotation;
        Vector3 desiredRootPosition =
            _handAnchor.TransformPoint(localPosition);
        Vector3 colliderCenterOffset = heldRotation * Vector3.Scale(
            _heldColliderCenterLocal,
            _heldObject.transform.localScale
        );
        Vector3 desiredCenter =
            desiredRootPosition + colliderCenterOffset;
        Vector3 safeCenter = GetHeldBoxTargetCenter(
            desiredCenter,
            heldRotation
        );
        Vector3 safeRootPosition = safeCenter - colliderCenterOffset;

        Vector3 nextRootPosition = safeRootPosition;

        if (!snapToHand)
        {
            nextRootPosition = Vector3.SmoothDamp(
                _heldObject.transform.position,
                safeRootPosition,
                ref _heldBoxSmoothingVelocity,
                _heldBoxSmoothTime,
                Mathf.Infinity,
                Time.deltaTime
            );

            // Recheck the smoothed position so easing can never carry the box
            // through a wall while the player turns or walks around it.
            Vector3 smoothedCenter =
                nextRootPosition + colliderCenterOffset;
            safeCenter = GetSafeHeldBoxCenter(smoothedCenter, heldRotation);
            nextRootPosition = safeCenter - colliderCenterOffset;
        }

        _heldObject.transform.SetPositionAndRotation(
            nextRootPosition,
            heldRotation
        );
    }

    private Vector3 GetHeldBoxTargetCenter(
        Vector3 desiredCenter,
        Quaternion heldRotation)
    {
        Vector3 safeCenter = GetSafeHeldBoxCenter(
            desiredCenter,
            heldRotation
        );

        float obstructionDistance =
            Vector3.Distance(desiredCenter, safeCenter);

        if (_heldBoxWallDropDistance <= 0f ||
            obstructionDistance <= 0.03f)
        {
            return safeCenter;
        }

        // Drop the box in the view only when a wall has pushed it back from
        // its normal hand position. Ease the amount in as the obstruction
        // gets stronger, then run the lowered target through the wall check.
        float dropStrength = Mathf.Clamp01(
            (obstructionDistance - 0.03f) / 0.35f
        );
        Vector3 loweredCenter = safeCenter -
            _playerCamera.transform.up *
            (_heldBoxWallDropDistance * dropStrength);

        return GetSafeHeldBoxCenter(loweredCenter, heldRotation);
    }

    private Vector3 GetSafeHeldBoxCenter(
        Vector3 desiredCenter,
        Quaternion heldRotation)
    {
        Vector3 toDesiredCenter =
            desiredCenter - _playerCamera.transform.position;
        float distance = toDesiredCenter.magnitude;

        if (distance <= 0.001f)
        {
            return desiredCenter;
        }

        Vector3 direction = toDesiredCenter / distance;
        float allowedDistance = distance;
        int hitCount = Physics.BoxCastNonAlloc(
            _playerCamera.transform.position,
            _heldBoxHalfExtents,
            direction,
            _heldBoxHits,
            heldRotation,
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
            allowedDistance = Mathf.Max(
                0f,
                nearestDistance - _heldBoxWallClearance
            );
        }

        return _playerCamera.transform.position + direction * allowedDistance;
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

        _heldBoxHalfExtents = new Vector3(0.2f, 0.2f, 0.2f);
        _heldColliderCenterLocal = Vector3.zero;
        _heldBoxSmoothingVelocity = Vector3.zero;
        bool hasColliderBounds = false;
        Bounds heldColliderBounds = default;

        foreach (Collider heldCollider in _heldColliders)
        {
            if (heldCollider != null)
            {
                if (heldCollider.enabled)
                {
                    if (!hasColliderBounds)
                    {
                        heldColliderBounds = heldCollider.bounds;
                        hasColliderBounds = true;
                    }
                    else
                    {
                        heldColliderBounds.Encapsulate(
                            heldCollider.bounds
                        );
                    }
                }

                heldCollider.enabled = false;
            }
        }

        if (hasColliderBounds)
        {
            _heldBoxHalfExtents = heldColliderBounds.extents;
            _heldColliderCenterLocal =
                _heldObject.transform.InverseTransformPoint(
                    heldColliderBounds.center
                );
        }

        _heldBoxHalfExtents = new Vector3(
            Mathf.Clamp(_heldBoxHalfExtents.x, 0.05f, 0.5f),
            Mathf.Clamp(_heldBoxHalfExtents.y, 0.05f, 0.5f),
            Mathf.Clamp(_heldBoxHalfExtents.z, 0.05f, 0.5f)
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
        UpdateHeldBoxPosition(true);

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
        _heldBoxHalfExtents = new Vector3(0.2f, 0.2f, 0.2f);
        _heldColliderCenterLocal = Vector3.zero;
        _heldBoxSmoothingVelocity = Vector3.zero;
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

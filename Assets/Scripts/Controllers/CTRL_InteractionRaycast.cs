using UnityEngine;

public class CTRL_InteractionRaycast : MonoBehaviour
{
    [Header("References")]
    [SerializeField] private Camera _playerCamera;
    [SerializeField] private ContextualActionButton _actionButton;
    [SerializeField] private Transform _handAnchor;
    [SerializeField] private Material _highlightMaterial;

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

    private void Awake()
    {
        _actionButton.OnActionTapped.AddListener(HandleActionTapped);
    }

    private void OnDestroy()
    {
        _actionButton.OnActionTapped.RemoveListener(HandleActionTapped);
    }

    private void Update()
    {
        if (_heldObject != null)
        {
            _actionButton.SetAction("Drop", null);
            return;
        }

        CheckForTarget();
    }

    private void CheckForTarget()
    {
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

        if (_currentTarget.Action ==
            CTRL_Interactable.ActionType.PickUp)
        {
            PickUpObject(_currentTarget);
        }
    }

    private void PickUpObject(CTRL_Interactable interactable)
    {
        _currentTarget.SetHighlighted(false, _highlightMaterial);
        _currentTarget = null;

        _heldObject = interactable.gameObject;

        _heldRigidbody =
            _heldObject.GetComponent<Rigidbody>();

        _heldColliders =
            _heldObject.GetComponentsInChildren<Collider>();

        foreach (Collider collider in _heldColliders)
        {
            collider.enabled = false;
        }

        if (_heldRigidbody != null)
        {
            _heldRigidbody.isKinematic = true;
            _heldRigidbody.useGravity = false;
        }

        _heldObject.transform.SetParent(_handAnchor);
        _heldObject.transform.localPosition = _heldLocalPosition;
        _heldObject.transform.localRotation = Quaternion.identity;

        _actionButton.SetAction("Drop", null);
    }

    private void DropObject()
    {
        Transform objectTransform = _heldObject.transform;

        objectTransform.SetParent(null);

        Vector3 dropPosition =
            _playerCamera.transform.position +
            _playerCamera.transform.forward;

        objectTransform.position = dropPosition;

        foreach (Collider collider in _heldColliders)
        {
            collider.enabled = true;
        }

        if (_heldRigidbody != null)
        {
            _heldRigidbody.isKinematic = false;
            _heldRigidbody.useGravity = true;
        }

        _heldObject = null;
        _heldRigidbody = null;
        _heldColliders = null;

        ClearActionButton();
    }

    private void UpdateActionButton(
        CTRL_Interactable.ActionType actionType)
    {
        switch (actionType)
        {
            case CTRL_Interactable.ActionType.PickUp:
                _actionButton.SetAction("Pick up", null);
                break;

            case CTRL_Interactable.ActionType.Place:
                _actionButton.SetAction("Place", null);
                break;

            case CTRL_Interactable.ActionType.Use:
                _actionButton.SetAction("Use", null);
                break;
        }
    }

    private void ClearActionButton()
    {
        _actionButton.SetAction("", null);
    }

    private void OnDisable()
    {
        if (_currentTarget != null)
        {
            _currentTarget.SetHighlighted(
                false,
                _highlightMaterial
            );
        }
    }
}
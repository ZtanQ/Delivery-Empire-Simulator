using UnityEngine;

public class CTRL_InteractionRaycast : MonoBehaviour
{
    [SerializeField] private Camera _playerCamera;
    [SerializeField] private LayerMask _interactableLayer;
    [SerializeField] private float _raycastDistance = 3f;
    [SerializeField] private ContextualActionButton _actionButton;
    [SerializeField] private Material _highlightMaterial;

    private CTRL_Interactable _currentTarget;

    private void Update()
    {
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
            _currentTarget.SetHighlighted(false, _highlightMaterial);
            _currentTarget = null;
        }
    }
}
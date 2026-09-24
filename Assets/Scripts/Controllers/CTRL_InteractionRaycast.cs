using UnityEngine;

public class CTRL_InteractionRaycast : MonoBehaviour
{
    [SerializeField] private Camera _playerCamera;
    [SerializeField] private LayerMask _interactableLayer;
    [SerializeField] private float _raycastDistance = 3f;
    [SerializeField] private Material _highlightMaterial;

    private Renderer _currentRenderer;
    private Material _originalMaterial;

    private void Update()
    {
        CheckForInteractable();
    }

    private void CheckForInteractable()
    {
        Ray ray = _playerCamera.ViewportPointToRay(
            new Vector3(0.5f, 0.5f, 0f)
        );

        if (Physics.Raycast(
            ray,
            out RaycastHit hit,
            _raycastDistance,
            _interactableLayer))
        {
            Renderer targetRenderer =
                hit.collider.GetComponent<Renderer>();

            if (targetRenderer == null)
            {
                targetRenderer =
                    hit.collider.GetComponentInParent<Renderer>();
            }

            if (targetRenderer != _currentRenderer)
            {
                ClearHighlight();
                Highlight(targetRenderer);
            }

            return;
        }

        ClearHighlight();
    }

    private void Highlight(Renderer targetRenderer)
    {
        if (targetRenderer == null)
            return;

        _currentRenderer = targetRenderer;
        _originalMaterial = targetRenderer.sharedMaterial;

        targetRenderer.sharedMaterial = _highlightMaterial;
    }

    private void ClearHighlight()
    {
        if (_currentRenderer == null)
            return;

        _currentRenderer.sharedMaterial = _originalMaterial;

        _currentRenderer = null;
        _originalMaterial = null;
    }
}
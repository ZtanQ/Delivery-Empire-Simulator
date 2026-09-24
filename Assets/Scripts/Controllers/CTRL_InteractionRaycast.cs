using UnityEngine;

public class CTRL_InteractionRaycast : MonoBehaviour
{
    [SerializeField] private Camera _playerCamera;
    [SerializeField] private LayerMask _interactableLayer;
    [SerializeField] private float _raycastDistance = 3f;
    [SerializeField] private Material _highlightMaterial;

    public CTRL_InteractionTarget CurrentTarget { get; private set; }

    private Renderer _highlightedRenderer;
    private Material[] _originalMaterials;

    private void Update()
    {
        CheckForInteractable();
    }

    private void CheckForInteractable()
    {
        Ray ray = _playerCamera.ViewportPointToRay(
            new Vector3(0.5f, 0.5f, 0f)
        );

        bool hitInteractable = Physics.Raycast(
            ray,
            out RaycastHit hit,
            _raycastDistance,
            _interactableLayer
        );

        if (!hitInteractable)
        {
            ClearHighlight();
            return;
        }

        CTRL_InteractionTarget target =
            hit.collider.GetComponentInParent<CTRL_InteractionTarget>();

        Renderer targetRenderer =
            hit.collider.GetComponentInParent<Renderer>();

        if (target == null || targetRenderer == null)
        {
            ClearHighlight();
            return;
        }

        // Already looking at the same object.
        if (target == CurrentTarget)
            return;

        ClearHighlight();

        CurrentTarget = target;
        HighlightTarget(targetRenderer);
    }

    private void HighlightTarget(Renderer targetRenderer)
    {
        _highlightedRenderer = targetRenderer;
        _originalMaterials = targetRenderer.sharedMaterials;

        Material[] highlightedMaterials =
            new Material[targetRenderer.sharedMaterials.Length];

        for (int i = 0; i < highlightedMaterials.Length; i++)
        {
            highlightedMaterials[i] = _highlightMaterial;
        }

        targetRenderer.sharedMaterials = highlightedMaterials;
    }

    private void ClearHighlight()
    {
        if (_highlightedRenderer != null &&
            _originalMaterials != null)
        {
            _highlightedRenderer.sharedMaterials = _originalMaterials;
        }

        _highlightedRenderer = null;
        _originalMaterials = null;
        CurrentTarget = null;
    }
}
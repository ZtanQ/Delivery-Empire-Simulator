using UnityEngine;

public class CTRL_Interactable : MonoBehaviour
{
    public enum ActionType
    {
        PickUp,
        Place,
        Use
    }

    [SerializeField] private ActionType _actionType;

    public ActionType Action => _actionType;

    private Renderer[] _renderers;
    private Material[][] _originalMaterials;
    private bool _isHighlighted;

    private void Awake()
    {
        _renderers = GetComponentsInChildren<Renderer>();

        _originalMaterials = new Material[_renderers.Length][];

        for (int i = 0; i < _renderers.Length; i++)
        {
            _originalMaterials[i] = _renderers[i].sharedMaterials;
        }
    }

    public void SetHighlighted(bool highlighted, Material highlightMaterial)
    {
        if (_isHighlighted == highlighted)
        {
            return;
        }

        if (highlightMaterial == null)
        {
            return;
        }

        _isHighlighted = highlighted;

        for (int i = 0; i < _renderers.Length; i++)
        {
            if (_renderers[i] == null)
            {
                continue;
            }

            if (highlighted)
            {
                Material[] highlightMaterials =
                    new Material[_renderers[i].sharedMaterials.Length];

                for (int j = 0; j < highlightMaterials.Length; j++)
                {
                    highlightMaterials[j] = highlightMaterial;
                }

                _renderers[i].sharedMaterials = highlightMaterials;
            }
            else
            {
                _renderers[i].sharedMaterials = _originalMaterials[i];
            }
        }
    }
}
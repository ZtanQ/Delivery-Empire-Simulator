using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CTRL_ContextualActionButton : MonoBehaviour
{
    [SerializeField] private CTRL_InteractionRaycast _interactionRaycast;
    [SerializeField] private Button _button;
    [SerializeField] private TMP_Text _label;
    [SerializeField] private Image _icon;

    private CTRL_InteractionTarget _currentTarget;

    private void Awake()
    {
        if (_button == null)
            _button = GetComponent<Button>();
    }

    private void Update()
    {
        CTRL_InteractionTarget target =
            _interactionRaycast.CurrentTarget;

        if (target == _currentTarget)
            return;

        _currentTarget = target;
        UpdateButton();
    }

    private void UpdateButton()
    {
        bool hasTarget = _currentTarget != null;

        _button.interactable = hasTarget;

        _label.text = hasTarget
            ? _currentTarget.ActionLabel
            : "";

        _icon.sprite = hasTarget
            ? _currentTarget.Icon
            : null;

        _icon.enabled =
            hasTarget && _currentTarget.Icon != null;
    }
}
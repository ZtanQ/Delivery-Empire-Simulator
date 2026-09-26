using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Events;
using UnityEngine.InputSystem;

public class ContextualActionButton : MonoBehaviour
{
    [SerializeField] private TMP_Text labelText;
    [SerializeField] private Image iconImage;

    public UnityEvent OnActionTapped;

    public void SetAction(string label, Sprite icon)
    {
        labelText.text = label;

        if (iconImage != null)
        {
            iconImage.sprite = icon;
            iconImage.enabled = icon != null;
        }
    }

    public void HandleTap()
    {
        OnActionTapped?.Invoke();
    }

    private void Update()
    {
        if (Keyboard.current == null)
            return;

        if (Keyboard.current.digit1Key.wasPressedThisFrame)
        {
            SetAction("Pick up", null);
        }

        if (Keyboard.current.digit2Key.wasPressedThisFrame)
        {
            SetAction("Place", null);
        }

        if (Keyboard.current.digit3Key.wasPressedThisFrame)
        {
            SetAction("Use", null);
        }
    }
}
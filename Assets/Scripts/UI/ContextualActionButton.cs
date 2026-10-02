using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Events;

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
}
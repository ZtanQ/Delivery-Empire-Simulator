
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Events;

public class ContextualActionButton : MonoBehaviour
{
    [SerializeField] private TMP_Text labelText;
    [SerializeField] private Image iconImage;

    public UnityEvent OnActionTapped;

    private void Awake()
    {
        HideAction();
    }

    public void SetAction(string label, Sprite icon)
    {
        bool hasAction = !string.IsNullOrWhiteSpace(label);

        if (!hasAction)
        {
            HideAction();
            return;
        }

        if (labelText != null)
            labelText.text = label;

        if (iconImage != null)
        {
            iconImage.sprite = icon;
            iconImage.enabled = icon != null;
        }

        gameObject.SetActive(true);
    }

    public void HideAction()
    {
        if (labelText != null)
            labelText.text = "";

        if (iconImage != null)
            iconImage.enabled = false;

        gameObject.SetActive(false);
    }

    public void HandleTap()
    {
        OnActionTapped?.Invoke();
    }
}

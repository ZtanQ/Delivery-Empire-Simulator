
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class ContextualActionButton : MonoBehaviour,
    IPointerDownHandler,
    IPointerUpHandler,
    IPointerExitHandler
{
    public enum ActionVisual
    {
        None,
        Pickup,
        Place,
        UsePC
    }

    [Header("References")]
    [SerializeField] private TMP_Text labelText;
    [SerializeField] private Image iconImage;
    [SerializeField] private Button actionButton;

    [Header("Pickup Sprites")]
    [SerializeField] private Sprite pickupNormal;
    [SerializeField] private Sprite pickupPressed;
    [SerializeField] private Sprite pickupDisabled;

    [Header("Place Sprites")]
    [SerializeField] private Sprite placeNormal;
    [SerializeField] private Sprite placePressed;
    [SerializeField] private Sprite placeDisabled;

    [Header("Use PC Sprites")]
    [SerializeField] private Sprite usePCNormal;
    [SerializeField] private Sprite usePCPressed;
    [SerializeField] private Sprite usePCDisabled;

    public UnityEvent OnActionTapped;

    private ActionVisual currentVisual = ActionVisual.None;
    private Sprite currentNormal;
    private Sprite currentPressed;
    private Sprite currentDisabled;

    private bool isPressed;
    private bool lastInteractable;

    private void Awake()
    {
        if (actionButton != null)
            actionButton.transition = Selectable.Transition.None;

        HideAction();
    }

    private void Update()
    {
        if (actionButton == null || currentVisual == ActionVisual.None)
            return;

        if (lastInteractable != actionButton.interactable)
        {
            lastInteractable = actionButton.interactable;
            isPressed = false;
            UpdateIconSprite();
        }
    }

    public void SetAction(string label, Sprite icon)
    {
        SetAction(label, icon, ActionVisual.None);
    }

    public void SetAction(
        string label,
        Sprite icon,
        ActionVisual actionVisual)
    {
        if (string.IsNullOrWhiteSpace(label))
        {
            HideAction();
            return;
        }

        Sprite nextNormal = icon;
        Sprite nextPressed = null;
        Sprite nextDisabled = null;

        switch (actionVisual)
        {
            case ActionVisual.Pickup:
                nextNormal = pickupNormal;
                nextPressed = pickupPressed;
                nextDisabled = pickupDisabled;
                break;

            case ActionVisual.Place:
                nextNormal = placeNormal;
                nextPressed = placePressed;
                nextDisabled = placeDisabled;
                break;

            case ActionVisual.UsePC:
                nextNormal = usePCNormal;
                nextPressed = usePCPressed;
                nextDisabled = usePCDisabled;
                break;
        }

        bool actionChanged =
            currentVisual != actionVisual ||
            currentNormal != nextNormal ||
            (labelText != null && labelText.text != label);

        if (actionChanged)
        {
            isPressed = false;
        }

        if (labelText != null)
            labelText.text = label;

        currentVisual = actionVisual;
        currentNormal = nextNormal;
        currentPressed = nextPressed;
        currentDisabled = nextDisabled;

        if (actionButton != null)
        {
            actionButton.transition = Selectable.Transition.None;
            lastInteractable = actionButton.interactable;
        }

        UpdateIconSprite();

        gameObject.SetActive(true);
    }

    private void UpdateIconSprite()
    {
        if (iconImage == null)
            return;

        if (actionButton != null && !actionButton.interactable)
        {
            iconImage.sprite = currentDisabled != null
                ? currentDisabled
                : currentNormal;
        }
        else if (isPressed && currentPressed != null)
        {
            iconImage.sprite = currentPressed;
        }
        else
        {
            iconImage.sprite = currentNormal;
        }

        iconImage.enabled = iconImage.sprite != null;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (actionButton == null || !actionButton.interactable)
            return;

        isPressed = true;
        UpdateIconSprite();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        isPressed = false;
        UpdateIconSprite();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        isPressed = false;
        UpdateIconSprite();
    }

    private void OnDisable()
    {
        isPressed = false;
    }

    public void HideAction()
    {
        currentVisual = ActionVisual.None;
        isPressed = false;

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

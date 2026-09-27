using UnityEngine;
using UnityEngine.EventSystems;

public class CTRL_VirtualJoystick : MonoBehaviour,
    IPointerDownHandler,
    IDragHandler,
    IPointerUpHandler
{
    [SerializeField] private RectTransform _handle;
    [SerializeField] private CanvasGroup _joystickVisual;
    [SerializeField] private float _joystickRadius = 80f;

    public Vector2 MovementInput { get; private set; }

    private RectTransform _joystickArea;

    private void Awake()
    {
        _joystickArea = GetComponent<RectTransform>();
        _joystickVisual.alpha = 0f;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        _joystickVisual.alpha = 1f;
        UpdateInput(eventData);
    }

    public void OnDrag(PointerEventData eventData)
    {
        UpdateInput(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        MovementInput = Vector2.zero;
        _handle.anchoredPosition = Vector2.zero;
        _joystickVisual.alpha = 0f;
    }

    private void UpdateInput(PointerEventData eventData)
    {
        Vector2 localPosition;

        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            _joystickArea,
            eventData.position,
            eventData.pressEventCamera,
            out localPosition
        );

        // Limit the handle to the joystick's movement area.
        Vector2 offset = Vector2.ClampMagnitude(
            localPosition,
            _joystickRadius
        );

        _handle.anchoredPosition = offset;
        MovementInput = offset / _joystickRadius;
    }
}
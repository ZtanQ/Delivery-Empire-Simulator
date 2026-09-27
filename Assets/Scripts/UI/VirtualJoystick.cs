using UnityEngine;
using UnityEngine.EventSystems;

public class VirtualJoystick : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [SerializeField] private RectTransform joystickBackground;
    [SerializeField] private RectTransform joystickHandle;

    public Vector2 InputVector { get; private set; }

    public void OnPointerDown(PointerEventData eventData)
    {
        OnDrag(eventData);
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector2 position;

        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            joystickBackground,
            eventData.position,
            eventData.pressEventCamera,
            out position
        );

        float radius = joystickBackground.sizeDelta.x / 2f;

        InputVector = Vector2.ClampMagnitude(position / radius, 1f);

        joystickHandle.anchoredPosition = InputVector * radius;

        Debug.Log("Joystick: " + InputVector);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        InputVector = Vector2.zero;
        joystickHandle.anchoredPosition = Vector2.zero;

        Debug.Log("Joystick: " + InputVector);
    }
}
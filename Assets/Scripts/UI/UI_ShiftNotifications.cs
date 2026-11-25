using UnityEngine;
using TMPro;

public class UI_ShiftNotifications : MonoBehaviour
{
    [Header("Notification")]
    [SerializeField] private TMP_Text notificationText;
    [SerializeField] private float goalReachedDuration = 2.5f;
    [SerializeField] private float emergencyBoxDuration = 5f;

    private float notificationTimer;

    private void Awake()
    {
        if (notificationText != null)
            notificationText.gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        MGR_Shift.OnTargetReached += HandleTargetReached;
        MGR_Shift.OnEmergencyBox += HandleEmergencyBox;
    }

    private void OnDisable()
    {
        MGR_Shift.OnTargetReached -= HandleTargetReached;
        MGR_Shift.OnEmergencyBox -= HandleEmergencyBox;
    }

    private void Update()
    {
        if (notificationText == null || !notificationText.gameObject.activeSelf)
            return;

        notificationTimer -= Time.deltaTime;

        if (notificationTimer <= 0f)
            notificationText.gameObject.SetActive(false);
    }

    private void HandleTargetReached(MGR_Shift shift)
    {
        ShowNotification("Goal reached!", goalReachedDuration);
    }

    private void HandleEmergencyBox()
    {
        ShowNotification(
            "Out of cash and stock: a free box is at the dock",
            emergencyBoxDuration
        );
    }

    private void ShowNotification(string message, float duration)
    {
        if (notificationText == null)
            return;

        notificationText.text = message;
        notificationTimer = duration;
        notificationText.gameObject.SetActive(true);
    }
}
using UnityEngine;

// Keeps a full-screen RectTransform inside the phone's safe area (notch,
// camera hole, rounded corners), so buttons near the edges stay touchable.
[RequireComponent(typeof(RectTransform))]
public class UI_SafeArea : MonoBehaviour
{
    private RectTransform rect;
    private Rect applied;
    private Vector2Int screen;

    private void Awake()
    {
        rect = (RectTransform)transform;
        Apply();
    }

    private void Update()
    {
        if (Screen.safeArea != applied || screen.x != Screen.width || screen.y != Screen.height)
            Apply();
    }

    private void Apply()
    {
        applied = Screen.safeArea;
        screen = new Vector2Int(Screen.width, Screen.height);
        if (Screen.width <= 0 || Screen.height <= 0)
            return;

        Vector2 min = applied.position;
        Vector2 max = applied.position + applied.size;
        min.x /= Screen.width;
        min.y /= Screen.height;
        max.x /= Screen.width;
        max.y /= Screen.height;

        rect.anchorMin = min;
        rect.anchorMax = max;
        rect.offsetMin = Vector2.zero;
        rect.offsetMax = Vector2.zero;
    }
}

using UnityEngine;
using UnityEngine.UI;

public class OrderCardTimer : MonoBehaviour
{
    [SerializeField] private Color normalColor = Color.white;
    [SerializeField] private Color warningColor = Color.red;
    [SerializeField] private Color reservedColor = Color.blue;

    private Image timeBar;
    private OrderData order;

    private void Awake()
    {
        timeBar = GetComponent<Image>();
    }

    public void Setup(OrderData orderData)
    {
        order = orderData;
        UpdateBar();
    }

    private void Update()
    {
        if (order == null)
            return;

        UpdateBar();
    }

    private void UpdateBar()
    {
        if (timeBar == null ||
            order == null ||
            order.TimerTotal <= 0f)
        {
            return;
        }

        float progress = Mathf.Clamp01(
            order.TimerRemaining / order.TimerTotal
        );

        timeBar.fillAmount = progress;

        bool isReserved =
            MGR_Order.Instance != null &&
            MGR_Order.Instance.IsOrderReserved(order);

        timeBar.color = isReserved
            ? reservedColor
            : progress <= 0.25f
                ? warningColor
                : normalColor;
    }
}
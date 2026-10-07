using UnityEngine;
using UnityEngine.UI;

public class OrderCardTimer : MonoBehaviour
{
    [SerializeField] private float duration = 90f;

    private Image timeBar;
    private float timeRemaining;

    private void Awake()
    {
        timeBar = GetComponent<Image>();
    }

    public void Setup(float totalTime)
    {
        duration = totalTime;
        timeRemaining = totalTime;
        UpdateBar();
    }

    private void Update()
    {
        if (timeRemaining <= 0f)
            return;

        timeRemaining -= Time.deltaTime;

        if (timeRemaining < 0f)
            timeRemaining = 0f;

        UpdateBar();
    }

    private void UpdateBar()
    {
        if (timeBar == null || duration <= 0f)
            return;

        timeBar.fillAmount = timeRemaining / duration;
    }
}
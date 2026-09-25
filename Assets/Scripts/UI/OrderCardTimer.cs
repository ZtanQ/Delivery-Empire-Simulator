using UnityEngine;
using UnityEngine.UI;

public class OrderCardTimer : MonoBehaviour
{
    public float duration = 60f;

    private Image timeBar;
    private float timeRemaining;

    void Start()
    {
        timeBar = GetComponent<Image>();
        timeRemaining = duration;
        timeBar.fillAmount = 1f;
    }

    void Update()
    {
        if (timeRemaining > 0)
        {
            timeRemaining -= Time.deltaTime;
            timeBar.fillAmount = timeRemaining / duration;
        }
    }
}
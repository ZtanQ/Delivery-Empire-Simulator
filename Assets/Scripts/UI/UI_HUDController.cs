using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class UI_HUDController : MonoBehaviour
{
    [Header("Level & XP")]
    public TMP_Text levelText;
    public TMP_Text xpText;
    public Image xpBar;

    [Header("Cash & Rating")]
    public TMP_Text cashText;
    public TMP_Text ratingText;

    public void SetLevel(int level)
    {
        levelText.text = level.ToString();
    }

    public void SetXP(int currentXP, int requiredXP)
    {
        xpText.text = currentXP + " / " + requiredXP + " XP";

        if (xpBar != null && requiredXP > 0)
        {
            xpBar.fillAmount =
                (float)currentXP / requiredXP;
        }
    }

    public void SetCash(int cash)
    {
        cashText.text = "$ " + cash.ToString("N0");
    }

    public void SetRating(float rating)
    {
        ratingText.text = rating.ToString("0.0");
    }

    private void OnEnable()
    {
        MGR_Game.OnCashChanged += HandleCashChanged;
        MGR_Game.OnXPChanged += HandleXPChanged;
    }

    private void OnDisable()
    {
        MGR_Game.OnCashChanged -= HandleCashChanged;
        MGR_Game.OnXPChanged -= HandleXPChanged;
    }

    private void HandleXPChanged(int newXP, int currentLevel)
    {
        SetXP(newXP, 100);
        SetLevel(currentLevel);
    }

    private void HandleCashChanged(int newCash, int delta)
    {
        SetCash(newCash);
    }

    private void Start()
    {
        if (MGR_Game.Instance != null)
        {
            SetLevel(1);
            SetXP(
                MGR_Game.Instance.CurrentXP,
                100
            );

            SetCash(
                MGR_Game.Instance.CurrentCash
            );
        }

        SetRating(5.0f);
    }
}
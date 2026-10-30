using System.Globalization;
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
        if (levelText != null)
            levelText.text = level.ToString();
    }

    public void SetXP(int currentXP, int requiredXP)
    {
        if (xpText != null)
            xpText.text = $"{currentXP} / {requiredXP} XP";

        if (xpBar != null)
        {
            xpBar.fillAmount = requiredXP > 0
                ? Mathf.Clamp01((float)currentXP / requiredXP)
                : 0f;
        }
    }

    public void SetCash(int cash)
    {
        if (cashText != null)
        {
            cashText.text = "$" +
                (cash / 100f).ToString("N2", CultureInfo.InvariantCulture);
        }
    }

    public void SetRating(float rating)
    {
        if (ratingText != null)
            ratingText.text = rating.ToString("0.0", CultureInfo.InvariantCulture);
    }
    
    private void OnEnable()
    {
        if (MGR_Game.Instance == null)
            return;

        MGR_Game.OnCashChanged += HandleCashChanged;
        MGR_Game.OnXPChanged += HandleXPChanged;
        MGR_Game.OnRatingChanged += HandleRatingChanged;

        int currentLevel = MGR_Game.Instance.CurrentLevel;
        int currentXP = MGR_Game.Instance.CurrentXP;

        SetLevel(currentLevel);
        UpdateXPDisplay(currentXP, currentLevel);
        SetCash(MGR_Game.Instance.CurrentCash);
        SetRating(MGR_Game.Instance.CurrentRating);
    }
    
    private void OnDisable()
    {
        MGR_Game.OnCashChanged -= HandleCashChanged;
        MGR_Game.OnXPChanged -= HandleXPChanged;
        MGR_Game.OnRatingChanged -= HandleRatingChanged;
    }
    
    private void HandleCashChanged(int newCash, int delta)
    {
        SetCash(newCash);
    }

    private void HandleXPChanged(int newXP, int currentLevel)
    {
        SetLevel(currentLevel);
        UpdateXPDisplay(newXP, currentLevel);
    }

    private void HandleRatingChanged(float newRating)
    {
        SetRating(newRating);
    }

    private void UpdateXPDisplay(int totalXP, int currentLevel)
    {
        if (MGR_Game.Instance == null)
            return;

        int currentLevelXP =
            MGR_Game.Instance.GetRequiredXPForLevel(currentLevel);

        int nextLevelXP =
            MGR_Game.Instance.GetRequiredXPForLevel(currentLevel + 1);

        int xpIntoLevel = Mathf.Max(0, totalXP - currentLevelXP);
        int xpNeeded = Mathf.Max(1, nextLevelXP - currentLevelXP);

        SetXP(xpIntoLevel, xpNeeded);
    }
}
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

    [Header("Order Queue")]
public TMP_Text order1Text;
public TMP_Text order2Text;
public TMP_Text order3Text;
public TMP_Text order4Text;

    public void SetLevel(int level)
    {
        levelText.text = level.ToString();
    }

    public void SetXP(int currentXP, int requiredXP)
    {
        xpText.text = currentXP + " / " + requiredXP + " XP";

        if (xpBar != null && requiredXP > 0)
        {
            xpBar.fillAmount = (float)currentXP / requiredXP;
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

     public void SetOrders(string order1, string order2, string order3, string order4)
    {
        order1Text.text = order1;
        order2Text.text = order2;
        order3Text.text = order3;
        order4Text.text = order4;
    }

    private void Start()
{
    SetLevel(1);
    SetXP(0, 100);
    SetCash(500);
    SetRating(5.0f);
    SetOrders("Burger", "Pizza", "Coffee", "Sushi");
}
}
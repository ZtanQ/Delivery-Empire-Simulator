using UnityEngine;

public class TerminalTabsUI : MonoBehaviour
{
    [Header("Tab Content")]
    [SerializeField] private GameObject buyContent;
    [SerializeField] private GameObject staffContent;
    [SerializeField] private GameObject upgradesContent;

    public void ShowBuy()
    {
        buyContent.SetActive(true);
        staffContent.SetActive(false);

        if (upgradesContent != null)
            upgradesContent.SetActive(false);
    }

    public void ShowStaff()
    {
        buyContent.SetActive(false);
        staffContent.SetActive(true);

        if (upgradesContent != null)
            upgradesContent.SetActive(false);
    }

    public void ShowUpgrades()
    {
        if (upgradesContent == null)
            return;

        buyContent.SetActive(false);
        staffContent.SetActive(false);
        upgradesContent.SetActive(true);
    }
}
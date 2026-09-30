using UnityEngine;

public class GameDebugTester : MonoBehaviour
{
    [SerializeField] private int cashToAdd = 100;
    [SerializeField] private int xpToAdd = 50;

    [ContextMenu("Award Test Cash")]
    private void AwardTestCash()
    {
        if (MGR_Game.Instance == null)
        {
            Debug.LogError("MGR_Game is not available.");
            return;
        }

        MGR_Game.Instance.AddCash(cashToAdd);

        Debug.Log($"Added {cashToAdd} cash. Current cash: {MGR_Game.Instance.CurrentCash}");
    }

    [ContextMenu("Award Test XP")]
    private void AwardTestXP()
    {
        if (MGR_Game.Instance == null)
        {
            Debug.LogError("MGR_Game is not available.");
            return;
        }

        MGR_Game.Instance.AddXP(xpToAdd);

        Debug.Log($"Added {xpToAdd} XP. Current XP: {MGR_Game.Instance.CurrentXP}");
    }
}
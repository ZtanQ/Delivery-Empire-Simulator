using UnityEngine;

[CreateAssetMenu(menuName = "Data/Game Balance")]
public class DATA_GameBalanceSO : ScriptableObject
{
    public int StartingCash = 500;
    public int StartingXP = 0;
    public int StartingLevel = 1;

    // Himanshu's confirmed XP curve will go here.
    public AnimationCurve XPCurve;
}

using System;
using UnityEngine;

// Values of the 5-shift trial contract (GDD v3, Release block R8).
// MGR_Shift loads Resources/ShiftContract.asset when it exists
// (Tools/DES/Create shift contract asset) and uses these defaults otherwise,
// so the targets can be tuned in the Inspector without code changes.
public enum ShiftGoalType
{
    DeliverOrders,
    EarnCash
}

[Serializable]
public class ShiftTarget
{
    public ShiftGoalType goal = ShiftGoalType.DeliverOrders;

    [Tooltip("Orders to deliver, or cash to earn in the shift.")]
    public int amount = 3;

    [Tooltip("Most expired orders allowed in the shift. -1 = no limit.")]
    public int maxExpired = -1;

    [Tooltip("Rating needed at the end of the shift. 0 = no rating rule.")]
    public float minRating = 0f;

    public string Describe()
    {
        string text = goal == ShiftGoalType.EarnCash
            ? $"Earn ${amount} in this shift"
            : $"Deliver {amount} orders";

        if (maxExpired >= 0)
            text += $", at most {maxExpired} expired";

        if (minRating > 0f)
            text += $", end with rating {minRating:0.0}+";

        return text;
    }
}

[CreateAssetMenu(menuName = "Data/Shift Contract")]
public class DATA_ShiftContractSO : ScriptableObject
{
    [Tooltip("Real seconds per shift (GDD R8: 5 minutes).")]
    public float shiftSeconds = 300f;

    public ShiftTarget[] shifts =
    {
        new ShiftTarget { goal = ShiftGoalType.DeliverOrders, amount = 3 },
        new ShiftTarget { goal = ShiftGoalType.DeliverOrders, amount = 5 },
        new ShiftTarget { goal = ShiftGoalType.EarnCash, amount = 300 },
        new ShiftTarget { goal = ShiftGoalType.DeliverOrders, amount = 8, maxExpired = 2 },
        new ShiftTarget { goal = ShiftGoalType.DeliverOrders, amount = 10, minRating = 3.5f }
    };

    [Header("Stars")]
    [Tooltip("2 stars: target met and at most this many expired.")]
    public int twoStarMaxExpired = 1;

    [Tooltip("3 stars: also end the shift with this rating or more.")]
    public float threeStarMinRating = 4.0f;

    [Header("Fail")]
    [Tooltip("The shift ends at once when the rating reaches this value.")]
    public float failRating = 1.0f;

    [Header("No stuck run")]
    [Tooltip("Units in the free emergency box (once per shift).")]
    public int emergencyBoxUnits = 3;

    [TextArea]
    public string introText =
        "This is your first warehouse. The city gives you a 5-shift trial " +
        "contract. Keep the customers happy and the warehouse is yours.";
}

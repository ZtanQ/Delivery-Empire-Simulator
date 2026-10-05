using System;
using System.Collections.Generic;

[Serializable]
public class OrderData
{
    public int OrderID;
    public List<OrderItem> Items;

    public float TimerRemaining;
    public float TimerTotal;

    public int XPReward;
    public int CashReward;

    public bool IsActive;
}
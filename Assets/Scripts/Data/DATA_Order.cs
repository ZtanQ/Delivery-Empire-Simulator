using System.Collections.Generic;

public class DATA_Order
{
    public int OrderID;
    public Dictionary<ProductCategory, int> RequestedItems;

    public float TimerRemaining;
    public float TimerTotal;

    public int Reward;

    public bool IsActive;
}
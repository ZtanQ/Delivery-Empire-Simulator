using UnityEngine;

public class MGR_Order : Manager<MGR_Order>
{
    protected override void OnInitialise()
    {
        Debug.Log("6. MGR_Order initialised.");
    }
}
using UnityEngine;

public class MGR_Pool : Manager<MGR_Pool>
{
    protected override void OnInitialise()
    {
        Debug.Log("2. MGR_Pool initialised.");
    }
}
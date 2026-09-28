using UnityEngine;

public class MGR_Game : Manager<MGR_Game>
{
    protected override void OnInitialise()
    {
        Debug.Log("5. MGR_Game initialised.");
    }
}
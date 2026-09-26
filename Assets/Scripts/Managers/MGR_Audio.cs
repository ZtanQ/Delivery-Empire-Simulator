using UnityEngine;

public class MGR_Audio : Manager<MGR_Audio>
{
    protected override void OnInitialise()
    {
        Debug.Log("1. MGR_Audio initialised.");
    }
}
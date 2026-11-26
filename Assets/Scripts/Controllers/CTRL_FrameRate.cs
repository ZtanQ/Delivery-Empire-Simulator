using UnityEngine;

public class CTRL_FrameRate : MonoBehaviour
{
    private void Awake()
    {
        // 60 FPS, or 30 with Battery saver on (GameSettings, R2).
        Application.targetFrameRate = GameSettings.TargetFrameRate;
    }
}
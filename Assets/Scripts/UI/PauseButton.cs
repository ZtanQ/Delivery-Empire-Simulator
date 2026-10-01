using UnityEngine;

public class PauseButton : MonoBehaviour
{
    public void OpenPauseMenu()
    {
        PauseMenuController controller = FindAnyObjectByType<PauseMenuController>(FindObjectsInactive.Include);

        if (controller != null)
        {
            controller.OpenPauseMenu();
        }
    }
}
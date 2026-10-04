using UnityEngine;

public class PauseMenuController : MonoBehaviour
{
    [SerializeField] private GameObject pauseMenu;

    public void OpenPauseMenu()
    {
        pauseMenu.SetActive(true);
        Time.timeScale = 0f;
    }

    public void ResumeGame()
    {
        pauseMenu.SetActive(false);
        Time.timeScale = 1f;
    }

    public void SaveGame()
    {
        // Placeholder until MGR_Save is implemented
        Debug.Log("Save button pressed.");
    }

    public void QuitToTitle()
    {
        Time.timeScale = 1f;
        Debug.Log("Quit to title pressed.");
    }
}
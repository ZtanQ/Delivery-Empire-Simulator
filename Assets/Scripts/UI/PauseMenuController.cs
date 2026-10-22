
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
        if (MGR_Save.Instance != null)
        {
            MGR_Save.Instance.SaveGame();
            Debug.Log("PauseMenuController: Save requested.");
        }
        else
        {
            Debug.LogError(
                "PauseMenuController: MGR_Save is unavailable."
            );
        }
    }

    public void QuitToTitle()
    {
        Time.timeScale = 1f;
        SaveGame();
        Debug.Log("Save and Quit requested.");
    }
}
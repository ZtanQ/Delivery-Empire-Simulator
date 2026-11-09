
using UnityEngine;
using UnityEngine.SceneManagement;

public class MGR_UI : Manager<MGR_UI>
{
    private bool hintsInitialised;

    protected override void OnInitialise()
    {
        Debug.Log("9. MGR_UI initialised.");
    }

    public void InitialiseFirstTimeHints()
    {
        hintsInitialised = false;

        SceneManager.sceneLoaded -= HandleSceneLoaded;
        SceneManager.sceneLoaded += HandleSceneLoaded;

        // Also check in case the gameplay scene is already loaded.
        TryInitialiseHints();
    }

    private void HandleSceneLoaded(
        Scene scene,
        LoadSceneMode mode)
    {
        TryInitialiseHints();
    }

    private void TryInitialiseHints()
    {
        if (hintsInitialised)
            return;

        UI_FirstTimeHints hints =
            FindAnyObjectByType<UI_FirstTimeHints>();

        if (hints == null)
            return;

        hints.Initialise();
        hintsInitialised = true;

        SceneManager.sceneLoaded -= HandleSceneLoaded;

        Debug.Log(
            "MGR_UI: First-time hints initialized successfully."
        );
    }
}

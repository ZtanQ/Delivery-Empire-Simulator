using UnityEngine;
using UnityEngine.SceneManagement;

public class Bootstrap : MonoBehaviour
{
    [SerializeField] private MonoBehaviour[] managerComponents;

    private void Start()
    {
        InitialiseManagers();
        LoadMainLevel();
    }

    private void InitialiseManagers()
    {
        foreach (MonoBehaviour component in managerComponents)
        {
            if (component == null)
                continue;

            if (component is IManager manager)
            {
                manager.Initialise();
            }
        }
    }

    private void LoadMainLevel()
    {
        SceneManager.LoadScene("Main_level");
    }
}
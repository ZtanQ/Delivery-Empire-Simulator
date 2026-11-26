using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// R9 "alive world": adds small idle motions to Fiora's dressing props when the
// gameplay scene loads. Nothing in Main_level or in the prop prefabs changes:
// the parts are found by the pivot names that come with the models.
public static class FX_AliveWorld
{
    private const string GameplayScene = "Main_level";

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void InstallSceneHook()
    {
        SceneManager.sceneLoaded -= HandleSceneLoaded;
        SceneManager.sceneLoaded += HandleSceneLoaded;
        HandleSceneLoaded(SceneManager.GetActiveScene(), LoadSceneMode.Single);
    }

    private static void HandleSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name != GameplayScene)
            return;

        var byName = new Dictionary<string, List<Transform>>();
        foreach (GameObject root in scene.GetRootGameObjects())
        {
            foreach (Transform t in root.GetComponentsInChildren<Transform>(true))
            {
                if (!byName.TryGetValue(t.name, out List<Transform> list))
                {
                    list = new List<Transform>();
                    byName[t.name] = list;
                }
                list.Add(t);
            }
        }

        // Clock: one driver per clock, placed on the hour hand's parent.
        foreach (Transform hour in Get(byName, "SM_Clock_hour"))
        {
            Transform parent = hour.parent;
            if (parent == null || parent.GetComponent<FX_ClockHands>() != null)
                continue;

            FX_ClockHands clock = parent.gameObject.AddComponent<FX_ClockHands>();
            clock.Setup(hour, parent.Find("SM_Clock_minutes"), parent.Find("SM_Clock_seconds"));
        }

        // Fan blades: steady spin.
        foreach (Transform blades in Get(byName, "Pivot_Blades"))
            AddOnce<FX_Spin>(blades);

        // Hanging sign: slow swing from its top pivot.
        foreach (Transform swing in Get(byName, "Pivot_Swing"))
            AddOnce<FX_Swing>(swing);

        // Newton's cradle: the two outer balls take turns.
        foreach (Transform ballA in Get(byName, "Pivot_Ball_A"))
        {
            Transform parent = ballA.parent;
            if (parent == null || parent.GetComponent<FX_NewtonCradle>() != null)
                continue;

            FX_NewtonCradle cradle = parent.gameObject.AddComponent<FX_NewtonCradle>();
            cradle.Setup(ballA, parent.Find("Pivot_Ball_E"));
        }
    }

    private static IEnumerable<Transform> Get(Dictionary<string, List<Transform>> byName, string name)
    {
        return byName.TryGetValue(name, out List<Transform> list) ? list : new List<Transform>();
    }

    private static void AddOnce<T>(Transform target) where T : Component
    {
        if (target.GetComponent<T>() == null)
            target.gameObject.AddComponent<T>();
    }
}

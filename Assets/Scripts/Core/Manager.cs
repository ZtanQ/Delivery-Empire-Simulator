using UnityEngine;

public abstract class Manager<T> : MonoBehaviour, IManager
    where T : Manager<T>
{
    public static T Instance { get; private set; }

    public bool IsInitialised { get; private set; }

    protected virtual void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = (T)this;
        DontDestroyOnLoad(gameObject);
    }

    public void Initialise()
    {
        if (IsInitialised)
            return;

        OnInitialise();
        IsInitialised = true;
    }

    protected abstract void OnInitialise();
}
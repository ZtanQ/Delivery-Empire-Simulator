using UnityEngine;
using System.Collections.Generic;

public class MGR_Pool : Manager<MGR_Pool>
{
    [SerializeField] private GameObject boxPrefab;
    [SerializeField] private GameObject riderPrefab;

    [SerializeField] private int boxPoolSize = 12;
    [SerializeField] private int riderPoolSize = 5;

    private readonly Queue<GameObject> boxPool = new Queue<GameObject>();
    private readonly Queue<GameObject> riderPool = new Queue<GameObject>();

    protected override void OnInitialise()
    {
        Debug.Log("2. MGR_Pool initialised.");

        if (boxPrefab == null)
        {
            Debug.LogError("MGR_Pool: Box prefab is not assigned.");
            return;
        }

        // Create a pool of 12 boxes
        for (int i = 0; i < boxPoolSize; i++)
        {
            GameObject box = Instantiate(boxPrefab, transform);
            box.SetActive(false);
            boxPool.Enqueue(box);
        }
        Debug.Log($"MGR_Pool created {boxPool.Count} boxes.");

        if (riderPrefab == null)
        {
            Debug.LogError("MGR_Pool: Rider prefab is not assigned.");
            return;
        }

        // Create a pool of 5 riderse
        for (int i = 0; i < riderPoolSize; i++)
        {
            GameObject rider = Instantiate(riderPrefab, transform);
            rider.SetActive(false);
            riderPool.Enqueue(rider);
        }
        Debug.Log($"MGR_Pool created {riderPool.Count} riders.");
    }


    public GameObject Get(GameObject prefab)
    {
        if (prefab == null) 
            return null;
         
        Queue<GameObject> pool = null;

        if (prefab == boxPrefab)
            pool = boxPool;
        else if (prefab == riderPrefab)
            pool = riderPool;

        if (pool == null) {
            Debug.LogWarning($"MGR_Pool: {prefab.name} is not registered.");
            return null;
        }

        GameObject obj;

        if (pool.Count > 0)
            obj = pool.Dequeue();
        else
            obj = Instantiate(prefab, transform);

        obj.SetActive(true);
        obj.GetComponent<IPoolable>()?.OnSpawn();
        return obj;
    }

    public GameObject GetRider()
    {
        return Get(riderPrefab);
    }

    public void Release(GameObject obj)
    {
        if (obj == null)
            return;

        obj.GetComponent<IPoolable>()?.OnDespawn();
        obj.SetActive(false);

        // Identify the prefab associated with this pooled instance.
        if (obj.name.StartsWith(boxPrefab.name))
            boxPool.Enqueue(obj);
        else if (obj.name.StartsWith(riderPrefab.name))
            riderPool.Enqueue(obj);
    }
}
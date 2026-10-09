using UnityEngine;
using System.Collections.Generic;

public class MGR_Pool : Manager<MGR_Pool>
{
    [SerializeField] private GameObject boxPrefab;
    [SerializeField] private int poolSize = 12;

    private readonly Queue<GameObject> boxPool = new Queue<GameObject>();

    protected override void OnInitialise()
    {
        Debug.Log("2. MGR_Pool initialised.");

        if (boxPrefab == null)
        {
            Debug.LogError("MGR_Pool: Box prefab is not assigned."); //#95 2
            return;
        }

        // Create a pool of 12 boxes
        for (int i = 0; i < poolSize; i++)
        {
            GameObject box = Instantiate(boxPrefab, transform);
            box.SetActive(false);
            boxPool.Enqueue(box);
        }

        Debug.Log($"MGR_Pool created {boxPool.Count} boxes.");
    }

    public GameObject Get(GameObject prefab)
    {
        if (prefab != boxPrefab)
        {
            return null;
        }

        if (boxPool.Count == 0)
        {
            Debug.LogWarning("MGR_Pool: No boxes available in the pool. Consider increasing the pool size."); //#95 3
        }

        GameObject obj = boxPool.Dequeue();

        obj.SetActive(true);

        IPoolable poolable = obj.GetComponent<IPoolable>();

        if (poolable != null)
        {
            poolable.OnSpawn();
        }

        return obj;
    }

    public void Release(GameObject obj)
    {
        if (obj == null)
        {
            return;
        }

        IPoolable poolable = obj.GetComponent<IPoolable>();

        if (poolable != null)
        {
            poolable.OnDespawn();
        }

        obj.SetActive(false);

        boxPool.Enqueue(obj); //#95 1

    }
}
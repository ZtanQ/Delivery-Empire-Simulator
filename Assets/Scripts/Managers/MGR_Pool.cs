using UnityEngine;
using System.Collections.Generic;

public class MGR_Pool : Manager<MGR_Pool>
{
    [SerializeField] private GameObject boxPrefab;

    private readonly Queue<GameObject> boxPool = new Queue<GameObject>();

    protected override void OnInitialise()
    {
        Debug.Log("2. MGR_Pool initialised.");

        // Create a pool of 12 boxes
        for (int i = 0; i < 12; i++)
        {
            GameObject box = Instantiate(boxPrefab, transform);
            box.SetActive(false);
            boxPool.Enqueue(box);
        }

        Debug.Log("MGR_Pool created 12 boxes.");
    }

    public GameObject Get(GameObject prefab)
    {
        if (prefab != boxPrefab)
        {
            return null;
        }

        if (boxPool.Count == 0)
        {
            return null;
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

    }
}
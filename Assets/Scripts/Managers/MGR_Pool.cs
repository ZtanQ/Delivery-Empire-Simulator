using UnityEngine;
using System.Collections.Generic;

public class MGR_Pool : Manager<MGR_Pool>
{
    [SerializeField] private GameObject boxPrefab;
    [SerializeField] private GameObject orderCardPrefab;

    private readonly Queue<GameObject> boxPool = new Queue<GameObject>();
    private readonly Queue<GameObject> orderCardPool = new Queue<GameObject>();

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

        // Create a pool of 4 order cards
        for (int i = 0; i < 4; i++)
        {/*
            GameObject card = Instantiate(orderCardPrefab, transform);
            card.SetActive(false);
            orderCardPool.Enqueue(card);*/
        }

        Debug.Log("Order card prefab not yet imported.");
        //Debug.Log("MGR_Pool created 4 order cards.");
    }

    public GameObject Get(GameObject prefab)
    {
        GameObject obj = null;

        if (prefab == boxPrefab)
        {
            if (boxPool.Count == 0)
            {
                Debug.LogWarning("MGR_Pool: Box pool is empty.");
                return null;
            }

            obj = boxPool.Dequeue();
        }
        else if (prefab == orderCardPrefab)
        {
            if (orderCardPool.Count == 0)
            {
                Debug.LogWarning("MGR_Pool: Card pool is empty.");
                return null;
            }

            obj = orderCardPool.Dequeue();
        }
        else
        {
            Debug.LogWarning("MGR_Pool: Requested prefab is not registered.");
            return null;
        }

        obj.SetActive(true);

        IPoolable poolable = obj.GetComponent<IPoolable>();

        if (poolable != null)
        {
            poolable.OnSpawn();
        }

        Debug.Log("MGR_Pool: Object retrieved from pool.");

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

        if (obj.name.Contains(boxPrefab.name))
        {
            boxPool.Enqueue(obj);
            Debug.Log("MGR_Pool: Box returned to pool.");
        }
        else if (obj.name.Contains(orderCardPrefab.name))
        {
            orderCardPool.Enqueue(obj);
            Debug.Log("MGR_Pool: Order card returned to pool.");
        }
        else
        {
            Debug.LogWarning("MGR_Pool: Released object does not belong to this pool.");
        }
    }
}
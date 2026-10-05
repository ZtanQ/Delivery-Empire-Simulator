using UnityEngine;
using System.Collections.Generic;

public class MGR_Pool : Manager<MGR_Pool>
{
    [SerializeField] private GameObject boxPrefab;
    [SerializeField] private GameObject cardPrefab;

    private readonly Queue<GameObject> boxPool = new Queue<GameObject>();     // FIFO collection for boxes
    private readonly Queue<GameObject> cardPool = new Queue<GameObject>();    // FIFO collection for cards

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

        // Create a pool of 4 cards
        for (int i = 0; i < 4; i++)
        {
            GameObject card = Instantiate(cardPrefab, transform);
            card.SetActive(false);
            cardPool.Enqueue(card);
        }

        Debug.Log("MGR_Pool created 4 cards.");
    }

    //OnSpawn() and OnDespawn() allow you to reset the object's state.
    public GameObject Get(GameObject obj)
    {
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
        IPoolable poolable = obj.GetComponent<IPoolable>();

        if (poolable != null)
        {
            poolable.OnDespawn();
        }

        obj.SetActive(false);
    }

}
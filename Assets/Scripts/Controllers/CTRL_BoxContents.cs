using UnityEngine;

public class CTRL_BoxContents : MonoBehaviour, IPoolable
{
    private const int MaxUnitsPerBox = 5;

    public DATA_ProductSO Product { get; private set; }
    public int Units { get; private set; }

    private Rigidbody _rigidbody;
    private Collider[] _colliders;

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _colliders = GetComponentsInChildren<Collider>(true);
    }

    public bool TrySetContents(DATA_ProductSO product, int units)
    {
        if (product == null || units <= 0 || units > MaxUnitsPerBox)
        {
            Debug.LogWarning(
                "CTRL_BoxContents: A box needs a product and between 1 and 5 units."
            );
            return false;
        }

        Product = product;
        Units = units;
        return true;
    }

    public ShelfBoxData ToShelfBoxData()
    {
        if (Product == null || Units <= 0)
        {
            return null;
        }

        return new ShelfBoxData
        {
            Product = Product,
            Units = Units
        };
    }

    public void OnSpawn()
    {
        ClearContents();
        ResetPhysicalState();
    }

    public void OnDespawn()
    {
        ClearContents();
        ResetPhysicalState();
    }

    private void ClearContents()
    {
        Product = null;
        Units = 0;
    }

    private void ResetPhysicalState()
    {
        if (_colliders != null)
        {
            foreach (Collider boxCollider in _colliders)
            {
                if (boxCollider != null)
                {
                    boxCollider.enabled = true;
                }
            }
        }

        if (_rigidbody == null)
        {
            return;
        }

        _rigidbody.isKinematic = false;
        _rigidbody.useGravity = false;
        _rigidbody.linearVelocity = Vector3.zero;
        _rigidbody.angularVelocity = Vector3.zero;
        _rigidbody.isKinematic = true;
    }
}
using UnityEngine;

public enum ProductCategory
{
    Snacks,
    Drinks,
    Dairy,
    Bakery
}

[CreateAssetMenu(menuName = "Data/Product")]
public class DATA_ProductSO : ScriptableObject
{
    public string ProductID;
    public ProductCategory Category;
    public string DisplayName;

    [Header("Economy")]
    public float BaseCost;

    [SerializeField] private float salePriceMultiplier = 1.5f;

    public float SalePriceMultiplier => salePriceMultiplier;

    public Color ColourCode;
    public Sprite Icon;
    public GameObject BoxPrefab;
    public GameObject PropPrefab;
}
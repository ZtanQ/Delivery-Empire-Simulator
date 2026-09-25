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
    public int BaseCost;
    public Color ColourCode;
    public Sprite Icon;
    public GameObject BoxPrefab;
    public GameObject PropPrefab;
}
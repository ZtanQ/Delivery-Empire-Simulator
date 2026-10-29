
using UnityEngine;

public class BoxProductIcon : MonoBehaviour
{
    [SerializeField] private Renderer colourIndicator;

    private CTRL_BoxContents contents;
    private DATA_ProductSO lastProduct;

    private void Awake()
    {
        contents = GetComponent<CTRL_BoxContents>();

        if (colourIndicator != null)
        {
            colourIndicator.enabled = false;
        }
    }

    private void LateUpdate()
    {
        if (contents == null)
        {
            return;
        }

        DATA_ProductSO currentProduct = contents.Product;

        if (currentProduct == lastProduct)
        {
            return;
        }

        lastProduct = currentProduct;

        if (colourIndicator == null)
        {
            return;
        }

        if (currentProduct == null)
        {
            colourIndicator.enabled = false;
            return;
        }

        colourIndicator.material.color = currentProduct.ColourCode;
        colourIndicator.enabled = true;
    }
}

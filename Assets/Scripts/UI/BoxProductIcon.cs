using UnityEngine;

public class BoxProductIcon : MonoBehaviour
{
    [SerializeField] private Renderer colourIndicatorTop;
    [SerializeField] private Renderer colourIndicatorFront;

    private CTRL_BoxContents contents;
    private DATA_ProductSO lastProduct;

    private void Awake()
    {
        contents = GetComponent<CTRL_BoxContents>();

        if (colourIndicatorTop != null)
            colourIndicatorTop.enabled = false;

        if (colourIndicatorFront != null)
            colourIndicatorFront.enabled = false;
    }

    private void LateUpdate()
    {
        if (contents == null)
            return;

        DATA_ProductSO currentProduct = contents.Product;

        if (currentProduct == lastProduct)
            return;

        lastProduct = currentProduct;

        if (currentProduct == null)
        {
            SetIndicatorsEnabled(false);
            return;
        }

        SetIndicatorColour(colourIndicatorTop, currentProduct.ColourCode);
        SetIndicatorColour(colourIndicatorFront, currentProduct.ColourCode);

        SetIndicatorsEnabled(true);
    }

    private void SetIndicatorColour(Renderer indicator, Color colour)
    {
        if (indicator != null)
            indicator.material.color = colour;
    }

    private void SetIndicatorsEnabled(bool enabled)
    {
        if (colourIndicatorTop != null)
            colourIndicatorTop.enabled = enabled;

        if (colourIndicatorFront != null)
            colourIndicatorFront.enabled = enabled;
    }
}
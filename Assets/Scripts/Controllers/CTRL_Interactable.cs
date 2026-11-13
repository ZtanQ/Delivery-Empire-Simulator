using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CTRL_Interactable : MonoBehaviour
{
    public enum ActionType
    {
        PickUp,
        Place,
        Use
    }

    [SerializeField] private ActionType _actionType;

    public ActionType Action => _actionType;

    private sealed class RendererHighlightState
    {
        public Renderer Renderer;
        public MaterialPropertyBlock[] OriginalPropertyBlocks;
        public MaterialPropertyBlock[] WorkingPropertyBlocks;
        public int[] ColourPropertyIds;
        public Color[] OriginalColours;
    }

    private static readonly int BaseColourId = Shader.PropertyToID("_BaseColor");
    private static readonly int LegacyColourId = Shader.PropertyToID("_Color");
    [SerializeField, Range(0f, 1f)] private float _highlightTintStrength = 0.3f;
    private static readonly string[] BoxIndicatorNames = { "QuadTop", "QuadFront" };

    private readonly List<RendererHighlightState> _rendererStates =
        new List<RendererHighlightState>();
    private bool _isHighlighted;

    private void Awake()
    {
        bool isProductBox = GetComponent<CTRL_BoxContents>() != null;
        Renderer[] renderers = GetComponentsInChildren<Renderer>(true);

        foreach (Renderer targetRenderer in renderers)
        {
            if (targetRenderer == null ||
                targetRenderer.GetComponent<TMP_Text>() != null ||
                (isProductBox && IsBoxIndicator(targetRenderer)))
            {
                continue;
            }

            Material[] sharedMaterials = targetRenderer.sharedMaterials;
            RendererHighlightState state = new RendererHighlightState
            {
                Renderer = targetRenderer,
                OriginalPropertyBlocks = new MaterialPropertyBlock[sharedMaterials.Length],
                WorkingPropertyBlocks = new MaterialPropertyBlock[sharedMaterials.Length],
                ColourPropertyIds = new int[sharedMaterials.Length],
                OriginalColours = new Color[sharedMaterials.Length]
            };

            bool hasTintableMaterial = false;
            for (int materialIndex = 0; materialIndex < sharedMaterials.Length; materialIndex++)
            {
                MaterialPropertyBlock originalBlock = new MaterialPropertyBlock();
                targetRenderer.GetPropertyBlock(originalBlock, materialIndex);
                state.OriginalPropertyBlocks[materialIndex] = originalBlock;
                state.WorkingPropertyBlocks[materialIndex] = new MaterialPropertyBlock();

                Material sharedMaterial = sharedMaterials[materialIndex];
                if (sharedMaterial == null)
                {
                    continue;
                }

                int colourPropertyId = GetColourPropertyId(sharedMaterial);
                if (colourPropertyId == 0)
                {
                    continue;
                }

                state.ColourPropertyIds[materialIndex] = colourPropertyId;
                state.OriginalColours[materialIndex] = originalBlock.HasColor(colourPropertyId)
                    ? originalBlock.GetColor(colourPropertyId)
                    : sharedMaterial.GetColor(colourPropertyId);
                hasTintableMaterial = true;
            }

            if (hasTintableMaterial)
            {
                _rendererStates.Add(state);
            }
        }
    }

    public void SetHighlighted(bool highlighted, Material highlightMaterial)
    {
        if (highlightMaterial == null || _isHighlighted == highlighted)
        {
            return;
        }

        _isHighlighted = highlighted;

        Color highlightColour = highlightMaterial.HasProperty(BaseColourId)
            ? highlightMaterial.GetColor(BaseColourId)
            : highlightMaterial.color;

        foreach (RendererHighlightState state in _rendererStates)
        {
            if (state.Renderer == null)
            {
                continue;
            }

            for (int materialIndex = 0;
                 materialIndex < state.ColourPropertyIds.Length;
                 materialIndex++)
            {
                if (state.ColourPropertyIds[materialIndex] == 0)
                {
                    continue;
                }

                if (!highlighted)
                {
                    state.Renderer.SetPropertyBlock(
                        state.OriginalPropertyBlocks[materialIndex],
                        materialIndex);
                    continue;
                }

                MaterialPropertyBlock propertyBlock = state.WorkingPropertyBlocks[materialIndex];
                state.Renderer.GetPropertyBlock(propertyBlock, materialIndex);
                Color tintedColour = Color.Lerp(
                    state.OriginalColours[materialIndex],
                    highlightColour,
                    _highlightTintStrength);
                propertyBlock.SetColor(
                    state.ColourPropertyIds[materialIndex],
                    tintedColour);
                state.Renderer.SetPropertyBlock(propertyBlock, materialIndex);
            }
        }
    }

    private static int GetColourPropertyId(Material material)
    {
        if (material.HasProperty(BaseColourId))
        {
            return BaseColourId;
        }

        if (material.HasProperty(LegacyColourId))
        {
            return LegacyColourId;
        }

        return 0;
    }

    private bool IsBoxIndicator(Renderer targetRenderer)
    {
        if (targetRenderer.transform.parent != transform)
        {
            return false;
        }

        foreach (string indicatorName in BoxIndicatorNames)
        {
            if (targetRenderer.gameObject.name == indicatorName)
            {
                return true;
            }
        }

        return false;
    }
}

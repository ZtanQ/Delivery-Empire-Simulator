
using UnityEngine;
using TMPro;

public class ShelfCategoryLabel : MonoBehaviour
{
    [SerializeField] private TMP_Text labelText;

    private ShelfSlot shelfSlot;

    private void Awake()
    {
        shelfSlot = GetComponentInParent<ShelfSlot>();

        if (shelfSlot == null || labelText == null)
        {
            Debug.LogWarning(
                "ShelfCategoryLabel: ShelfSlot or label text is missing.",
                this
            );
            return;
        }

        labelText.text = shelfSlot.Category.ToString();
    }
}

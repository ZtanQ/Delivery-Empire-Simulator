using UnityEngine;

public enum InteractionAction
{
    PickUp,
    Place,
    Use
}

public class CTRL_InteractionTarget : MonoBehaviour
{
    [SerializeField] private InteractionAction _action;
    [SerializeField] private Sprite _icon;

    public InteractionAction Action => _action;
    public Sprite Icon => _icon;

    public string ActionLabel
    {
        get
        {
            switch (_action)
            {
                case InteractionAction.PickUp:
                    return "Pick up";

                case InteractionAction.Place:
                    return "Place";

                case InteractionAction.Use:
                    return "Use";

                default:
                    return "";
            }
        }
    }
}
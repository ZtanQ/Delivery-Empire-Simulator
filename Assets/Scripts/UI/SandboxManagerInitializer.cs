using UnityEngine;

public class SandboxManagerInitializer : MonoBehaviour
{
    private void Awake()
    {
        if (MGR_Game.Instance != null)
            MGR_Game.Instance.Initialise();

        if (MGR_Delivery.Instance != null)
            MGR_Delivery.Instance.Initialise();

        if (MGR_Order.Instance != null)
            MGR_Order.Instance.Initialise();

        if (MGR_UI.Instance != null)
            MGR_UI.Instance.Initialise();
    }
}
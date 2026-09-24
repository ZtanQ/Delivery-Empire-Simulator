using UnityEngine;
using UnityEngine.SceneManagement;

public class Bootstrap : MonoBehaviour
{
    [SerializeField] private MGR_Audio audioManager;
    [SerializeField] private MGR_Pool poolManager;
    [SerializeField] private MGR_Inventory inventoryManager;
    [SerializeField] private MGR_Save saveManager;
    [SerializeField] private MGR_Game gameManager;
    [SerializeField] private MGR_Order orderManager;
    [SerializeField] private MGR_Delivery deliveryManager;
    [SerializeField] private MGR_Truck truckManager;
    [SerializeField] private MGR_UI uiManager;

    private void Start()
    {
        InitialiseManagers();

        SceneManager.LoadScene("Sanbox_sys");
    }

    private void InitialiseManagers()
    {
        audioManager.Initialise();
        poolManager.Initialise();
        inventoryManager.Initialise();
        saveManager.Initialise();
        gameManager.Initialise();
        orderManager.Initialise();
        deliveryManager.Initialise();
        truckManager.Initialise();
        uiManager.Initialise();
    }
}
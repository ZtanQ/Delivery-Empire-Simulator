using System;
using System.Collections.Generic;
using UnityEditor.Overlays;
using UnityEngine;

[Serializable]
public class ProductStockSaveData
{
    public string productID;
    public int quantity;
}

[Serializable]
public class GameSaveData
{
    public int saveVersion = 1;

    public int cash;
    public int xp;
    public int level;
    public float rating;

    public int stage;
    public int riders;
    public int day;

    public List<ProductStockSaveData> productStock =
        new List<ProductStockSaveData>();
}

public class MGR_Save : Manager<MGR_Save>
{
    private const int CurrentSaveVersion = 1;

    private string SavePath =>
    System.IO.Path.Combine(
        Application.persistentDataPath,
        "save.json"
    );

    public bool HasLoadedSave { get; private set; }
    public bool SaveFileExists =>
          System.IO.File.Exists(SavePath);

    protected override void OnInitialise()
    {
        HasLoadedSave = false;

        Debug.Log(
            $"4. MGR_Save initialised. Save path: {SavePath}"
        );
    }

    public void SaveGame()
    {
        if (MGR_Game.Instance == null ||
            MGR_Inventory.Instance == null)
        {
            Debug.LogError(
                "MGR_Save: Cannot save because required managers are unavailable."
            );

            return;
        }

        GameSaveData data =
            new GameSaveData();

        data.saveVersion = CurrentSaveVersion;

        data.cash = MGR_Game.Instance.CurrentCash;
        data.xp = MGR_Game.Instance.CurrentXP;
        data.level = MGR_Game.Instance.CurrentLevel;
        data.rating = MGR_Game.Instance.CurrentRating;
        data.day = MGR_Game.Instance.CurrentDay;

        if (MGR_Delivery.Instance != null)
        {
            data.stage =
                MGR_Delivery.Instance.CurrentStage;

            data.riders =
                MGR_Delivery.Instance.ActiveRiderCount;
        }

        Dictionary<string, int> stock =
            MGR_Inventory.Instance.GetStockForSave();

        foreach (KeyValuePair<string, int> entry in stock)
        {
            ProductStockSaveData productData =
                new ProductStockSaveData();

            productData.productID = entry.Key;
            productData.quantity = entry.Value;

            data.productStock.Add(productData);
        }

        string json =
            JsonUtility.ToJson(
                data,
                true
            );

        try
        {
            System.IO.File.WriteAllText(
                SavePath,
                json
            );

            Debug.Log(
                $"MGR_Save: Game saved successfully to {SavePath}"
            );
        }
        catch (Exception exception)
        {
            Debug.LogError(
                $"MGR_Save: Failed to save game. {exception.Message}"
            );
        }
    }

    public bool LoadGame()
    {
        HasLoadedSave = false;

        if (!System.IO.File.Exists(SavePath))
        {
            Debug.Log(
                "MGR_Save: No save file found. Starting a new game."
            );

            return false;
        }

        try
        {
            string json =
                System.IO.File.ReadAllText(SavePath);

            if (string.IsNullOrWhiteSpace(json))
            {
                Debug.LogWarning(
                    "MGR_Save: Save file is empty. Starting a new game."
                );

                return false;
            }

            GameSaveData data =
                JsonUtility.FromJson<GameSaveData>(json);

            if (data == null)
            {
                Debug.LogWarning(
                    "MGR_Save: Save data could not be read."
                );

                return false;
            }

            if (data.saveVersion != CurrentSaveVersion)
            {
                Debug.LogWarning(
                    $"MGR_Save: Unsupported save version " +
                    $"{data.saveVersion}. Expected {CurrentSaveVersion}."
                );

                return false;
            }

            if (MGR_Game.Instance == null ||
                MGR_Inventory.Instance == null ||
                MGR_Delivery.Instance == null)
            {
                Debug.LogError(
                    "MGR_Save: Required managers are unavailable."
                );

                return false;
            }

            MGR_Game.Instance.LoadGameState(
                data.cash,
                data.xp,
                data.level,
                data.rating,
                data.day
            );

            MGR_Delivery.Instance.LoadDeliveryState(
                data.stage,
                data.riders
            );

            Dictionary<string, int> loadedStock =
                new Dictionary<string, int>();

            if (data.productStock != null)
            {
                foreach (ProductStockSaveData product
                    in data.productStock)
                {
                    if (product == null ||
                        string.IsNullOrEmpty(product.productID))
                    {
                        continue;
                    }

                    loadedStock[product.productID] =
                        Mathf.Max(0, product.quantity);
                }
            }

            MGR_Inventory.Instance.LoadStock(
                loadedStock
            );

            HasLoadedSave = true;

            Debug.Log(
                $"MGR_Save: Save loaded successfully. " +
                $"Version: {data.saveVersion}, " +
                $"Day: {data.day}, " +
                $"Stage: {data.stage}, " +
                $"Riders: {data.riders}"
            );

            return true;
        }
        catch (Exception exception)
        {
            Debug.LogError(
                $"MGR_Save: Failed to load save. {exception.Message}"
            );

            return false;
        }
    }
    public bool HasValidSaveFile()
    {
        if (!System.IO.File.Exists(SavePath))
        {
            return false;
        }

        try
        {
            string json =
                System.IO.File.ReadAllText(SavePath);

            if (string.IsNullOrWhiteSpace(json))
            {
                return false;
            }

            GameSaveData data =
                JsonUtility.FromJson<GameSaveData>(json);

            if (data == null)
            {
                return false;
            }

            return data.saveVersion == CurrentSaveVersion;
        }
        catch (Exception exception)
        {
            Debug.LogWarning(
                $"MGR_Save: Save validation failed. {exception.Message}"
            );

            return false;
        }
    }

    private void OnApplicationQuit()
    {
        if (!IsInitialised)
        {
            return;
        }

        SaveGame();
    }
}
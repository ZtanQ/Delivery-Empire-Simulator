using System.IO;
using UnityEditor;
using UnityEngine;

// Editor helpers for the shift contract (1121-LEAD).
//   Tools/DES/Shift/Create shift contract asset  Resources/ShiftContract.asset
//     with the GDD R8 values, to tune the targets in the Inspector.
//   Tools/DES/Shift/End shift now (win | fail), Add one delivered order,
//     Leave 10 seconds: only while playing.
//   Tools/DES/Shift/Reset contract progress: back to shift 1 (not in Play).
public static class DES_ShiftTools
{
    private const string AssetFolder = "Assets/Resources";
    private const string AssetPath = AssetFolder + "/ShiftContract.asset";

    [MenuItem("Tools/DES/Shift/Create shift contract asset")]
    private static void CreateContractAsset()
    {
        DATA_ShiftContractSO existing =
            AssetDatabase.LoadAssetAtPath<DATA_ShiftContractSO>(AssetPath);

        if (existing != null)
        {
            Selection.activeObject = existing;
            Debug.Log("DES_ShiftTools: " + AssetPath + " already exists.");
            return;
        }

        if (!Directory.Exists(AssetFolder))
            AssetDatabase.CreateFolder("Assets", "Resources");

        DATA_ShiftContractSO contract = ScriptableObject.CreateInstance<DATA_ShiftContractSO>();
        AssetDatabase.CreateAsset(contract, AssetPath);
        AssetDatabase.SaveAssets();
        Selection.activeObject = contract;
        Debug.Log("DES_ShiftTools: created " + AssetPath + " with the GDD R8 values.");
    }

    [MenuItem("Tools/DES/Shift/End shift now (win)")]
    private static void EndWin() { if (MGR_Shift.Instance != null) MGR_Shift.Instance.DebugEndShiftWin(); }

    [MenuItem("Tools/DES/Shift/End shift now (fail)")]
    private static void EndFail() { if (MGR_Shift.Instance != null) MGR_Shift.Instance.DebugEndShiftFail(); }

    [MenuItem("Tools/DES/Shift/Add one delivered order")]
    private static void AddDelivered() { if (MGR_Shift.Instance != null) MGR_Shift.Instance.DebugAddDelivered(); }

    [MenuItem("Tools/DES/Shift/Leave 10 seconds")]
    private static void LeaveTen() { if (MGR_Shift.Instance != null) MGR_Shift.Instance.DebugLeaveTenSeconds(); }

    [MenuItem("Tools/DES/Shift/End shift now (win)", true)]
    [MenuItem("Tools/DES/Shift/End shift now (fail)", true)]
    [MenuItem("Tools/DES/Shift/Add one delivered order", true)]
    [MenuItem("Tools/DES/Shift/Leave 10 seconds", true)]
    private static bool IsPlaying() => EditorApplication.isPlaying && MGR_Shift.Instance != null;

    [MenuItem("Tools/DES/Shift/Reset contract progress")]
    private static void ResetProgress()
    {
        PlayerPrefs.DeleteKey("DES_Contract_Shift");
        PlayerPrefs.DeleteKey("DES_Contract_Won");

        for (int i = 0; i < 10; i++)
            PlayerPrefs.DeleteKey("DES_Contract_Stars_" + i);

        PlayerPrefs.Save();
        Debug.Log("DES_ShiftTools: contract progress reset, next Play starts at shift 1.");
    }

    [MenuItem("Tools/DES/Shift/Reset contract progress", true)]
    private static bool NotPlaying() => !EditorApplication.isPlaying;
}

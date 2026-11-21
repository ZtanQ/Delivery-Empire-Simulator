using System;
using System.IO;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;

// Editor-only helpers to test the first minutes of the game.
// The game loads persistentDataPath/save.json on its own, and the first-time
// hints only run on a new save, so after one full run they never show again.
//   Tools/DES/Start a new game       renames save.json (kept as a backup)
//   Tools/DES/Replay first-time hints keeps the save but restarts the hints
//   Tools/DES/Open save folder
public static class DES_SaveTools
{
    private static string SaveFolder => Application.persistentDataPath;
    private static string SavePath => Path.Combine(SaveFolder, "save.json");

    [MenuItem("Tools/DES/Start a new game (back up save)")]
    private static void StartNewGame()
    {
        if (!File.Exists(SavePath))
        {
            Debug.Log("DES_SaveTools: no save.json, the next Play is already a new game.");
            return;
        }

        string backup = Path.Combine(
            SaveFolder,
            $"save_backup_{DateTime.Now:yyyyMMdd_HHmmss}.json"
        );

        File.Move(SavePath, backup);
        Debug.Log($"DES_SaveTools: save.json moved to {backup}. Press Play in Boot for a new game.");
    }

    [MenuItem("Tools/DES/Replay first-time hints")]
    private static void ReplayHints()
    {
        if (!File.Exists(SavePath))
        {
            Debug.Log("DES_SaveTools: no save.json, the next Play is a new game with hints.");
            return;
        }

        string json = File.ReadAllText(SavePath);

        json = Regex.Replace(json, "\"tutorialInitialized\"\\s*:\\s*(true|false)", "\"tutorialInitialized\": true");
        json = Regex.Replace(json, "\"tutorialStep\"\\s*:\\s*-?\\d+", "\"tutorialStep\": 0");
        json = Regex.Replace(json, "\"hintsDone\"\\s*:\\s*(true|false)", "\"hintsDone\": false");

        File.WriteAllText(SavePath, json);
        Debug.Log("DES_SaveTools: first-time hints reset in save.json. Press Play in Boot.");
    }

    [MenuItem("Tools/DES/Start a new game (back up save)", true)]
    [MenuItem("Tools/DES/Replay first-time hints", true)]
    private static bool NotInPlayMode()
    {
        // In Play mode the game saves again on exit and would undo the change.
        return !EditorApplication.isPlaying;
    }

    [MenuItem("Tools/DES/Open save folder")]
    private static void OpenSaveFolder()
    {
        EditorUtility.RevealInFinder(SavePath);
    }
}

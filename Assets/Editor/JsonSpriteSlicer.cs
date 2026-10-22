using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEditor.U2D.Sprites;
using UnityEngine;

public class JsonSpriteSlicer : EditorWindow
{
    [Serializable]
    private class SpriteInfo
    {
        public string name;
        public int x, y, width, height;
        public Vector2 pivot = new Vector2(0.5f, 0.5f);
        public Vector4 border = Vector4.zero;
    }

    private Texture2D atlas;
    private TextAsset jsonFile;

    [MenuItem("Tools/Sprite Tools/JSON Sprite Slicer")]
    private static void OpenWindow()
    {
        GetWindow<JsonSpriteSlicer>("JSON Sprite Slicer");
    }

    private void OnGUI()
    {
        EditorGUILayout.LabelField(
            "JSON Sprite Slicer", EditorStyles.boldLabel);

        atlas = (Texture2D)EditorGUILayout.ObjectField(
            "Texture Atlas", atlas, typeof(Texture2D), false);

        jsonFile = (TextAsset)EditorGUILayout.ObjectField(
            "Atlas JSON", jsonFile, typeof(TextAsset), false);

        EditorGUILayout.HelpBox(
            "Reads the sprites dictionary with x, y, width, height, " +
            "pivot, and optional border fields.",
            MessageType.Info);

        using (new EditorGUI.DisabledScope(
                   atlas == null || jsonFile == null))
        {
            if (GUILayout.Button("Apply JSON Slices"))
                ApplySlices();
        }
    }

    private static void ConfigureTexture(
    TextureImporter importer,
    bool configurePalette = false)
    {
        importer.maxTextureSize = 1024;

        if (configurePalette)
        {
            importer.filterMode = FilterMode.Point;
            importer.mipmapEnabled = false;
        }
    }

    private void ApplySlices()
    {
        string path = AssetDatabase.GetAssetPath(atlas);
        TextureImporter importer =
            AssetImporter.GetAtPath(path) as TextureImporter;

        if (importer == null)
        {
            Debug.LogError("Could not find the texture importer.");
            return;
        }

        if (atlas.width != 1024 || atlas.height != 1024)
        {
            Debug.LogWarning(
                $"JSON specifies a 1024x1024 atlas, but the selected " +
                $"texture is {atlas.width}x{atlas.height}. " +
                "Checking coordinates against the selected texture.");
        }

        List<SpriteInfo> sprites;

        try
        {
            sprites = ParseSprites(jsonFile.text);
        }
        catch (Exception exception)
        {
            Debug.LogError("Sprite JSON error: " + exception.Message);
            return;
        }

        if (sprites.Count == 0)
        {
            Debug.LogError("No sprite definitions were found.");
            return;
        }

        HashSet<string> names = new HashSet<string>();

        foreach (SpriteInfo sprite in sprites)
        {
            if (!names.Add(sprite.name))
            {
                Debug.LogError("Duplicate sprite: " + sprite.name);
                return;
            }

            if (sprite.width <= 0 || sprite.height <= 0 ||
                sprite.x < 0 || sprite.y < 0 ||
                sprite.x + sprite.width > atlas.width ||
                sprite.y + sprite.height > atlas.height)
            {
                Debug.LogError(
                    $"Invalid rectangle for {sprite.name}: " +
                    $"{sprite.x},{sprite.y}, " +
                    $"{sprite.width}x{sprite.height}");
                return;
            }

            if (sprite.pivot.x < 0 || sprite.pivot.x > 1 ||
                sprite.pivot.y < 0 || sprite.pivot.y > 1)
            {
                Debug.LogError(
                    $"Invalid pivot for {sprite.name}");
                return;
            }

            if (sprite.border.x + sprite.border.z > sprite.width ||
                sprite.border.y + sprite.border.w > sprite.height)
            {
                Debug.LogError(
                    $"Borders exceed sprite dimensions: {sprite.name}");
                return;
            }
        }

        var factory = new SpriteDataProviderFactories();
        factory.Init();

        ISpriteEditorDataProvider provider =
            factory.GetSpriteEditorDataProviderFromObject(importer);

        if (provider == null)
        {
            Debug.LogError("Could not create Sprite Editor data provider.");
            return;
        }

        // Initialize the provider before reading or writing sprite data.
        provider.InitSpriteEditorDataProvider();

        var nameProvider =
            provider.GetDataProvider<ISpriteNameFileIdDataProvider>();

        Dictionary<string, GUID> oldIDs =
            new Dictionary<string, GUID>();

        if (nameProvider != null)
        {
            foreach (SpriteNameFileIdPair pair
                     in nameProvider.GetNameFileIdPairs())
            {
                oldIDs[pair.name] = pair.GetFileGUID();
            }
        }

        List<SpriteRect> rects = new List<SpriteRect>();

        foreach (SpriteInfo sprite in sprites)
        {
            GUID id = oldIDs.TryGetValue(sprite.name, out GUID existingID)
                ? existingID
                : GUID.Generate();

            rects.Add(new SpriteRect
            {
                name = sprite.name,
                spriteID = id,

                // JSON origin is top-left; Unity origin is bottom-left.
                rect = new Rect(
                    sprite.x,
                    atlas.height - sprite.y - sprite.height,
                    sprite.width,
                    sprite.height),

                alignment = SpriteAlignment.Custom,
                pivot = sprite.pivot,
                border = sprite.border
            });
        }

        importer.textureType = TextureImporterType.Sprite;
        importer.spriteImportMode = SpriteImportMode.Multiple;

        provider.SetSpriteRects(rects.ToArray());

        if (nameProvider != null)
        {
            List<SpriteNameFileIdPair> pairs =
                new List<SpriteNameFileIdPair>();

            foreach (SpriteRect rect in rects)
            {
                pairs.Add(new SpriteNameFileIdPair(
                    rect.name, rect.spriteID));
            }

            nameProvider.SetNameFileIdPairs(pairs.ToArray());
        }

        provider.Apply();
        ConfigureTexture(importer, true);
        importer.SaveAndReimport();

        Debug.Log(
            $"Applied {rects.Count} sprite slices to {atlas.name}.");
    }

    private static List<SpriteInfo> ParseSprites(string json)
    {
        Match sectionMatch = Regex.Match(
            json, "\"sprites\"\\s*:\\s*\\{");

        if (!sectionMatch.Success)
            throw new Exception("Missing top-level 'sprites' object.");

        int sectionStart = sectionMatch.Index +
                           sectionMatch.Length - 1;

        string section = ExtractObject(json, sectionStart);

        List<SpriteInfo> result = new List<SpriteInfo>();

        // Match each named sprite object. Nested objects such as border
        // are handled by extracting the complete object using brace depth.
        int position = 0;

        while (position < section.Length)
        {
            Match entry = Regex.Match(
                section.Substring(position),
                "\"((?:\\\\.|[^\"\\\\])*)\"\\s*:\\s*\\{");

            if (!entry.Success)
                break;

            string name = Regex.Unescape(entry.Groups[1].Value);

            int objectStart = position + entry.Index +
                              entry.Length - 1;

            string block = ExtractObject(section, objectStart);

            SpriteInfo info = new SpriteInfo
            {
                name = name,
                x = ReadInt(block, "x"),
                y = ReadInt(block, "y"),
                width = ReadInt(block, "width"),
                height = ReadInt(block, "height"),
                pivot = ReadVector2(block, "pivot",
                    new Vector2(0.5f, 0.5f)),
                border = ReadBorder(block)
            };

            result.Add(info);

            position = objectStart + block.Length;
        }

        return result;
    }

    private static string ExtractObject(string text, int start)
    {
        int depth = 0;
        bool inString = false;
        bool escaped = false;

        for (int i = start; i < text.Length; i++)
        {
            char c = text[i];

            if (inString)
            {
                if (escaped)
                    escaped = false;
                else if (c == '\\')
                    escaped = true;
                else if (c == '"')
                    inString = false;

                continue;
            }

            if (c == '"')
                inString = true;
            else if (c == '{')
                depth++;
            else if (c == '}' && --depth == 0)
                return text.Substring(start, i - start + 1);
        }

        throw new Exception("Unclosed JSON object.");
    }

    private static int ReadInt(string json, string key)
    {
        Match match = Regex.Match(
            json, "\"" + Regex.Escape(key) +
                  "\"\\s*:\\s*(-?\\d+)");

        if (!match.Success)
            throw new Exception("Missing integer field: " + key);

        return int.Parse(match.Groups[1].Value,
            CultureInfo.InvariantCulture);
    }

    private static Vector2 ReadVector2(
        string json, string key, Vector2 fallback)
    {
        Match match = Regex.Match(
            json, "\"" + Regex.Escape(key) +
                  "\"\\s*:\\s*\\[\\s*" +
                  @"(-?\d+(?:\.\d+)?)\s*,\s*" +
                  @"(-?\d+(?:\.\d+)?)\s*\]");

        if (!match.Success)
            return fallback;

        return new Vector2(
            float.Parse(match.Groups[1].Value,
                CultureInfo.InvariantCulture),
            float.Parse(match.Groups[2].Value,
                CultureInfo.InvariantCulture));
    }

    private static Vector4 ReadBorder(string json)
    {
        Match match = Regex.Match(json, "\"border\"\\s*:\\s*\\{");

        if (!match.Success)
            return Vector4.zero;

        int start = match.Index + match.Length - 1;
        string block = ExtractObject(json, start);

        float left = ReadInt(block, "left");
        float top = ReadInt(block, "top");
        float right = ReadInt(block, "right");
        float bottom = ReadInt(block, "bottom");

        // Unity border order: left, bottom, right, top.
        return new Vector4(left, bottom, right, top);
    }
}

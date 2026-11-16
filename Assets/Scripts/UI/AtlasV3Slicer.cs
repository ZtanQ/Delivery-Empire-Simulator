
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEditor;
using UnityEditor.U2D.Sprites;

namespace DeliveryEmpire.UI
{
    public static class AtlasV3Slicer
    {
        private const string TexturePath =
            "Assets/Resources/Atlas/T_UI_Atlas_v3.png";

        private const string JsonPath =
            "Assets/Art/Textures/T_UI_Atlas_v3.json";

        [MenuItem("Tools/Atlas/Slice UI Atlas v3")]
        public static void SliceAtlasV3()
        {
            if (!File.Exists(JsonPath))
            {
                ShowError("JSON manifest not found: " + JsonPath);
                return;
            }

            TextureImporter importer =
                AssetImporter.GetAtPath(TexturePath) as TextureImporter;

            if (importer == null)
            {
                ShowError("Texture not found: " + TexturePath);
                return;
            }

            try
            {
                string json = File.ReadAllText(JsonPath);

                int atlasWidth = ReadInt(json, "width");
                int atlasHeight = ReadInt(json, "height");

                Texture2D texture =
                    AssetDatabase.LoadAssetAtPath<Texture2D>(TexturePath);

                if (texture == null ||
                    texture.width != atlasWidth ||
                    texture.height != atlasHeight)
                {
                    throw new Exception(
                        "Texture dimensions do not match the manifest.");
                }

                int spritesStart =
                    FindTopLevelObjectProperty(json, "sprites");

                if (spritesStart < 0)
                    throw new Exception(
                        "Top-level sprites section not found.");

                int spritesEnd =
                    FindObjectEnd(json, spritesStart);

                if (spritesEnd < 0)
                    throw new Exception(
                        "Invalid sprites section in JSON.");

                List<SpriteRect> spriteRects =
                    new List<SpriteRect>();

                HashSet<string> names =
                    new HashSet<string>();

                int position = spritesStart + 1;

                while (position < spritesEnd)
                {
                    SkipSeparators(json, ref position);

                    if (position >= spritesEnd)
                        break;

                    if (json[position] != '"')
                        throw new Exception(
                            "Invalid sprite name at position " + position);

                    string name =
                        ReadJsonString(json, ref position);

                    SkipWhitespace(json, ref position);

                    if (position >= spritesEnd ||
                        json[position] != ':')
                    {
                        throw new Exception(
                            "Missing ':' after sprite " + name);
                    }

                    position++;

                    SkipWhitespace(json, ref position);

                    if (position >= spritesEnd ||
                        json[position] != '{')
                    {
                        throw new Exception(
                            "Invalid sprite object: " + name);
                    }

                    int objectStart = position;

                    int objectEnd =
                        FindObjectEnd(json, objectStart);

                    if (objectEnd < 0 || objectEnd > spritesEnd)
                    {
                        throw new Exception(
                            "Invalid JSON object: " + name);
                    }

                    string data = json.Substring(
                        objectStart + 1,
                        objectEnd - objectStart - 1);

                    int x = ReadInt(data, "x");
                    int y = ReadInt(data, "y");
                    int width = ReadInt(data, "width");
                    int height = ReadInt(data, "height");

                    Match pivotMatch = Regex.Match(
                        data,
                        "\"pivot\"\\s*:\\s*\\[\\s*([0-9.]+)\\s*,\\s*([0-9.]+)\\s*\\]");

                    if (!pivotMatch.Success ||
                        width <= 0 || height <= 0 ||
                        x < 0 || y < 0 ||
                        x + width > atlasWidth ||
                        y + height > atlasHeight ||
                        !names.Add(name))
                    {
                        throw new Exception(
                            "Invalid sprite data: " + name);
                    }

                    float pivotX = float.Parse(
                        pivotMatch.Groups[1].Value,
                        CultureInfo.InvariantCulture);

                    float pivotY = float.Parse(
                        pivotMatch.Groups[2].Value,
                        CultureInfo.InvariantCulture);

                    spriteRects.Add(new SpriteRect
                    {
                        name = name,
                        rect = new Rect(
                            x,
                            atlasHeight - y - height,
                            width,
                            height),
                        alignment = SpriteAlignment.Custom,
                        pivot = new Vector2(pivotX, pivotY),
                        spriteID = GUID.Generate()
                    });

                    position = objectEnd + 1;
                }

                Debug.Log(
                    "[Atlas V3] Sprites encontrados: " +
                    spriteRects.Count);

                if (spriteRects.Count != 142)
                {
                    throw new Exception(
                        "Expected 142 sprites, found " +
                        spriteRects.Count +
                        ". No changes were applied.");
                }

                importer.textureType =
                    TextureImporterType.Sprite;

                importer.spriteImportMode =
                    SpriteImportMode.Multiple;

                importer.spritePixelsPerUnit = 100;
                importer.mipmapEnabled = false;
                importer.filterMode = FilterMode.Bilinear;
                importer.wrapMode = TextureWrapMode.Clamp;

                SpriteDataProviderFactories factory =
                    new SpriteDataProviderFactories();

                factory.Init();

                ISpriteEditorDataProvider dataProvider =
                    factory.GetSpriteEditorDataProviderFromObject(
                        importer);

                if (dataProvider == null)
                    throw new Exception(
                        "Could not initialize Sprite Data Provider.");

                dataProvider.InitSpriteEditorDataProvider();

                dataProvider.SetSpriteRects(
                    spriteRects.ToArray());

                dataProvider.Apply();

                importer.SaveAndReimport();

                Debug.Log(
                    "[Atlas V3] Successfully sliced " +
                    spriteRects.Count + " sprites.");

                EditorUtility.DisplayDialog(
                    "Atlas V3",
                    "Successfully sliced 142 sprites!",
                    "OK");
            }
            catch (Exception e)
            {
                Debug.LogError("[Atlas V3] " + e);

                EditorUtility.DisplayDialog(
                    "Atlas V3 - Error",
                    e.Message,
                    "OK");
            }
        }

        private static int FindTopLevelObjectProperty(
            string json,
            string propertyName)
        {
            int depth = 0;

            for (int i = 0; i < json.Length; i++)
            {
                char c = json[i];

                if (c == '"')
                {
                    string key = ReadJsonString(json, ref i);

                    if (depth == 1 && key == propertyName)
                    {
                        // ReadJsonString leaves i immediately
                        // after the closing quotation mark.
                        int next = i;

                        SkipWhitespace(json, ref next);

                        if (next < json.Length &&
                            json[next] == ':')
                        {
                            next++;

                            SkipWhitespace(json, ref next);

                            if (next < json.Length &&
                                json[next] == '{')
                            {
                                return next;
                            }
                        }
                    }

                    // The for-loop increments i after this.
                    continue;
                }

                if (c == '{')
                    depth++;
                else if (c == '}')
                    depth--;
            }

            return -1;
        }

        private static int FindObjectEnd(
            string json,
            int start)
        {
            int depth = 0;
            bool inString = false;
            bool escaped = false;

            for (int i = start; i < json.Length; i++)
            {
                char c = json[i];

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
                else if (c == '}')
                {
                    depth--;

                    if (depth == 0)
                        return i;
                }
            }

            return -1;
        }

        private static string ReadJsonString(
            string json,
            ref int position)
        {
            if (json[position] != '"')
                throw new Exception("Expected JSON string.");

            int start = position + 1;
            position++;

            bool escaped = false;

            while (position < json.Length)
            {
                char c = json[position];

                if (escaped)
                    escaped = false;
                else if (c == '\\')
                    escaped = true;
                else if (c == '"')
                {
                    string value = json.Substring(
                        start,
                        position - start);

                    position++;
                    return value;
                }

                position++;
            }

            throw new Exception("Unterminated JSON string.");
        }

        private static void SkipWhitespace(
            string json,
            ref int position)
        {
            while (position < json.Length &&
                   char.IsWhiteSpace(json[position]))
            {
                position++;
            }
        }

        private static void SkipSeparators(
            string json,
            ref int position)
        {
            while (position < json.Length &&
                   (char.IsWhiteSpace(json[position]) ||
                    json[position] == ','))
            {
                position++;
            }
        }

        private static int ReadInt(
            string json,
            string key)
        {
            Match match = Regex.Match(
                json,
                "\"" + Regex.Escape(key) + "\"\\s*:\\s*(\\d+)");

            if (!match.Success)
                throw new Exception(
                    "Missing field: " + key);

            return int.Parse(
                match.Groups[1].Value,
                CultureInfo.InvariantCulture);
        }

        private static void ShowError(string message)
        {
            EditorUtility.DisplayDialog(
                "Atlas V3",
                message,
                "OK");
        }
    }
}
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;

// 1103-TA2: brings Mukul's 24 product models (Art_Inbox, 23-24 Nov) into the game.
//   Tools/DES/Art/Import Mukul products
//     1. Atlas textures: max 2048, Android ASTC 6x6.
//     2. Three materials (snacks, bakery, drinks + dairy), copies of M_Palette_Shared
//        with the category atlas as Base Map.
//     3. The 24 product FBX: meters, no cameras, lights or animation, no imported materials.
//     4. The 24 product prefabs: every renderer gets its category material.
//     5. Report (Console + Logs/DES_ProductImport.txt): size, triangles and renderers per product.
//   Tools/DES/Art/Product size report: step 5 only.
//   Tools/DES/Art/Product preview sheet: front and back pictures of the 24 products (Logs/).
public static class DES_ProductImport
{
    private const string ModelFolder = "Assets/Art/Models/Products";
    private const string PrefabFolder = "Assets/Prefabs/Products";
    private const string TextureFolder = "Assets/Art/Textures/Products";
    private const string MaterialFolder = "Assets/Art/Materials/Products";
    private const string BaseMaterialPath = "Assets/Art/Materials/M_Palette_Shared.mat";

    private static readonly string[,] Categories =
    {
        // prefix, material name, atlas file
        { "SNK", "M_Products_Snacks", "T_Products_Snacks_Atlas.png" },
        { "BAK", "M_Products_Bakery", "T_Products_Bakery_Atlas.png" },
        { "DRK", "M_Products_DrinksDairy", "T_Products_DrinksDairy_Atlas.png" },
        { "DRY", "M_Products_DrinksDairy", "T_Products_DrinksDairy_Atlas.png" },
    };

    [MenuItem("Tools/DES/Art/Import Mukul products")]
    public static void ImportAll()
    {
        Dictionary<string, Material> materials = SetupTexturesAndMaterials();
        if (materials == null)
            return;

        SetupModels();
        int fixedPrefabs = SetupPrefabs(materials);

        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();

        Debug.Log("DES_ProductImport: " + fixedPrefabs + " product prefabs updated.");
        WriteReport();
    }

    [MenuItem("Tools/DES/Art/Product size report")]
    public static void WriteReport()
    {
        StringBuilder report = new StringBuilder();
        report.AppendLine("Product\tSize X\tSize Y\tSize Z (m)\tTriangles\tRenderers\tMaterial\tCheck");

        foreach (string prefabPath in ProductPrefabPaths())
        {
            GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(prefabPath);
            if (prefab == null)
                continue;

            GameObject instance = (GameObject)PrefabUtility.InstantiatePrefab(prefab);
            instance.transform.position = Vector3.zero;
            instance.transform.rotation = Quaternion.identity;

            Renderer[] renderers = instance.GetComponentsInChildren<Renderer>(true);
            Bounds bounds = new Bounds(Vector3.zero, Vector3.zero);
            bool hasBounds = false;
            int triangles = 0;
            string materialName = "-";

            foreach (Renderer renderer in renderers)
            {
                if (!hasBounds)
                {
                    bounds = renderer.bounds;
                    hasBounds = true;
                }
                else
                {
                    bounds.Encapsulate(renderer.bounds);
                }

                if (renderer.sharedMaterial != null)
                    materialName = renderer.sharedMaterial.name;

                MeshFilter filter = renderer.GetComponent<MeshFilter>();
                if (filter != null && filter.sharedMesh != null)
                    triangles += filter.sharedMesh.triangles.Length / 3;
            }

            Vector3 size = bounds.size;
            float largest = Mathf.Max(size.x, Mathf.Max(size.y, size.z));
            string check = "OK";
            if (renderers.Length == 0 || triangles == 0)
                check = "NO MESH";
            else if (largest > 0.6f)
                check = "TOO BIG?";
            else if (largest < 0.03f)
                check = "TOO SMALL?";
            else if (triangles > 1500)
                check = "MANY TRIANGLES";

            report.AppendLine(string.Format(
                "{0}\t{1:0.000}\t{2:0.000}\t{3:0.000}\t{4}\t{5}\t{6}\t{7}",
                prefab.name, size.x, size.y, size.z, triangles,
                renderers.Length, materialName, check));

            Object.DestroyImmediate(instance);
        }

        string logFolder = Path.Combine(Path.GetDirectoryName(Application.dataPath), "Logs");
        Directory.CreateDirectory(logFolder);
        string reportPath = Path.Combine(logFolder, "DES_ProductImport.txt");
        File.WriteAllText(reportPath, report.ToString());

        Debug.Log("DES_ProductImport report (" + reportPath + "):\n" + report);
    }

    // Renders the 24 products in a 6 x 4 grid (one row per category), front, back and top,
    // to Logs/DES_ProductPreview_front.png, _back.png and _top.png, for the review with Mukul.
    [MenuItem("Tools/DES/Art/Product preview sheet")]
    public static void PreviewSheet()
    {
        RenderSheet(0f, "front", false);
        RenderSheet(180f, "back", false);
        RenderSheet(0f, "top", true);
    }

    private static void RenderSheet(float yaw, string suffix, bool fromTop)
    {
        const int cell = 320;
        string[] rows = { "SNK", "BAK", "DRK", "DRY" };
        List<string> prefabs = new List<string>(ProductPrefabPaths());

        GameObject stage = new GameObject("DES_PreviewStage") { hideFlags = HideFlags.HideAndDontSave };
        GameObject camObject = new GameObject("DES_PreviewCamera") { hideFlags = HideFlags.HideAndDontSave };
        Camera cam = camObject.AddComponent<Camera>();
        cam.clearFlags = CameraClearFlags.SolidColor;
        cam.backgroundColor = new Color(0.82f, 0.82f, 0.82f);
        cam.orthographic = true;
        GameObject lightObject = new GameObject("DES_PreviewLight") { hideFlags = HideFlags.HideAndDontSave };
        Light light = lightObject.AddComponent<Light>();
        light.type = LightType.Directional;
        light.intensity = 1.2f;
        lightObject.transform.rotation = fromTop ? Quaternion.Euler(70f, 20f, 0f) : Quaternion.Euler(30f, 180f + yaw - 20f, 0f);

        RenderTexture rt = new RenderTexture(cell, cell, 24);
        Texture2D sheet = new Texture2D(cell * 6, cell * 4, TextureFormat.RGB24, false);
        Texture2D tile = new Texture2D(cell, cell, TextureFormat.RGB24, false);

        for (int r = 0; r < rows.Length; r++)
        {
            int c = 0;
            foreach (string path in prefabs)
            {
                if (Prefix(Path.GetFileName(path)) != rows[r] || c >= 6)
                    continue;

                GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(path);
                GameObject go = (GameObject)PrefabUtility.InstantiatePrefab(prefab);
                go.hideFlags = HideFlags.HideAndDontSave;
                go.transform.SetParent(stage.transform, false);
                go.transform.position = Vector3.zero;
                go.transform.rotation = Quaternion.Euler(0f, yaw, 0f);

                Bounds b = new Bounds(go.transform.position, Vector3.zero);
                bool first = true;
                foreach (Renderer ren in go.GetComponentsInChildren<Renderer>())
                {
                    if (first) { b = ren.bounds; first = false; }
                    else b.Encapsulate(ren.bounds);
                }

                float size = Mathf.Max(b.size.x, Mathf.Max(b.size.y, b.size.z));
                cam.orthographicSize = size * 0.6f;
                cam.transform.position = fromTop
                    ? b.center + new Vector3(0f, size * 3f, -0.001f)
                    : b.center + new Vector3(0f, size * 0.15f, -size * 3f);
                cam.transform.LookAt(b.center);
                cam.nearClipPlane = 0.01f;
                cam.farClipPlane = size * 10f;
                cam.targetTexture = rt;
                cam.Render();

                RenderTexture.active = rt;
                tile.ReadPixels(new Rect(0, 0, cell, cell), 0, 0);
                tile.Apply();
                RenderTexture.active = null;
                sheet.SetPixels(c * cell, (rows.Length - 1 - r) * cell, cell, cell, tile.GetPixels());

                Object.DestroyImmediate(go);
                c++;
            }
        }

        sheet.Apply();
        string logFolder = Path.Combine(Path.GetDirectoryName(Application.dataPath), "Logs");
        Directory.CreateDirectory(logFolder);
        string outPath = Path.Combine(logFolder, "DES_ProductPreview_" + suffix + ".png");
        File.WriteAllBytes(outPath, sheet.EncodeToPNG());

        cam.targetTexture = null;
        Object.DestroyImmediate(rt);
        Object.DestroyImmediate(tile);
        Object.DestroyImmediate(sheet);
        Object.DestroyImmediate(stage);
        Object.DestroyImmediate(camObject);
        Object.DestroyImmediate(lightObject);
        Debug.Log("DES_ProductImport: preview sheet written to " + outPath);
    }

    private static Dictionary<string, Material> SetupTexturesAndMaterials()
    {
        Material baseMaterial = AssetDatabase.LoadAssetAtPath<Material>(BaseMaterialPath);
        if (baseMaterial == null)
        {
            Debug.LogError("DES_ProductImport: " + BaseMaterialPath + " not found.");
            return null;
        }

        if (!AssetDatabase.IsValidFolder(MaterialFolder))
            AssetDatabase.CreateFolder("Assets/Art/Materials", "Products");

        Dictionary<string, Material> byPrefix = new Dictionary<string, Material>();

        for (int i = 0; i < Categories.GetLength(0); i++)
        {
            string prefix = Categories[i, 0];
            string materialName = Categories[i, 1];
            string texturePath = TextureFolder + "/" + Categories[i, 2];

            SetupTexture(texturePath);
            Texture2D atlas = AssetDatabase.LoadAssetAtPath<Texture2D>(texturePath);
            if (atlas == null)
            {
                Debug.LogError("DES_ProductImport: atlas missing: " + texturePath);
                return null;
            }

            string materialPath = MaterialFolder + "/" + materialName + ".mat";
            Material material = AssetDatabase.LoadAssetAtPath<Material>(materialPath);
            if (material == null)
            {
                material = new Material(baseMaterial) { name = materialName };
                AssetDatabase.CreateAsset(material, materialPath);
            }

            if (material.HasProperty("_BaseMap"))
                material.SetTexture("_BaseMap", atlas);
            if (material.HasProperty("_MainTex"))
                material.SetTexture("_MainTex", atlas);
            if (material.HasProperty("_BaseColor"))
                material.SetColor("_BaseColor", Color.white);
            EditorUtility.SetDirty(material);

            byPrefix[prefix] = material;
        }

        return byPrefix;
    }

    private static void SetupTexture(string path)
    {
        TextureImporter importer = AssetImporter.GetAtPath(path) as TextureImporter;
        if (importer == null)
        {
            AssetDatabase.ImportAsset(path);
            importer = AssetImporter.GetAtPath(path) as TextureImporter;
        }
        if (importer == null)
            return;

        importer.textureType = TextureImporterType.Default;
        importer.sRGBTexture = true;
        importer.mipmapEnabled = true;
        importer.wrapMode = TextureWrapMode.Clamp;
        importer.maxTextureSize = 2048;

        TextureImporterPlatformSettings android = importer.GetPlatformTextureSettings("Android");
        android.overridden = true;
        android.maxTextureSize = 2048;
        android.format = TextureImporterFormat.ASTC_6x6;
        importer.SetPlatformTextureSettings(android);

        importer.SaveAndReimport();
    }

    private static void SetupModels()
    {
        foreach (string guid in AssetDatabase.FindAssets("t:Model", new[] { ModelFolder }))
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            ModelImporter importer = AssetImporter.GetAtPath(path) as ModelImporter;
            if (importer == null || Prefix(Path.GetFileName(path)) == null)
                continue;

            importer.globalScale = 1f;
            importer.useFileUnits = true;
            importer.useFileScale = true;
            importer.bakeAxisConversion = true;
            importer.importCameras = false;
            importer.importLights = false;
            importer.importVisibility = false;
            importer.importBlendShapes = false;
            importer.animationType = ModelImporterAnimationType.None;
            importer.importAnimation = false;
            importer.materialImportMode = ModelImporterMaterialImportMode.None;
            importer.isReadable = false;
            importer.SaveAndReimport();
        }
    }

    private static int SetupPrefabs(Dictionary<string, Material> materials)
    {
        int count = 0;

        foreach (string prefabPath in ProductPrefabPaths())
        {
            string prefix = Prefix(Path.GetFileName(prefabPath));
            if (prefix == null || !materials.ContainsKey(prefix))
                continue;

            Material material = materials[prefix];
            GameObject root = PrefabUtility.LoadPrefabContents(prefabPath);

            foreach (Renderer renderer in root.GetComponentsInChildren<Renderer>(true))
            {
                Material[] slots = renderer.sharedMaterials;
                if (slots.Length == 0)
                    slots = new Material[1];
                for (int i = 0; i < slots.Length; i++)
                    slots[i] = material;
                renderer.sharedMaterials = slots;
            }

            PrefabUtility.SaveAsPrefabAsset(root, prefabPath);
            PrefabUtility.UnloadPrefabContents(root);

            GameObject asset = AssetDatabase.LoadAssetAtPath<GameObject>(prefabPath);
            if (asset != null)
                PrefabUtility.RemoveUnusedOverrides(new[] { asset }, InteractionMode.AutomatedAction);

            count++;
        }

        return count;
    }

    private static IEnumerable<string> ProductPrefabPaths()
    {
        List<string> paths = new List<string>();
        foreach (string guid in AssetDatabase.FindAssets("t:Prefab", new[] { PrefabFolder }))
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            if (Prefix(Path.GetFileName(path)) != null)
                paths.Add(path);
        }
        paths.Sort(System.StringComparer.Ordinal);
        return paths;
    }

    // "SM_SNK-01_PotatoChips.prefab" -> "SNK"
    private static string Prefix(string fileName)
    {
        if (!fileName.StartsWith("SM_") || fileName.Length < 6)
            return null;
        string prefix = fileName.Substring(3, 3);
        for (int i = 0; i < Categories.GetLength(0); i++)
            if (Categories[i, 0] == prefix)
                return prefix;
        return null;
    }
}

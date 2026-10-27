// Andrei's Shared Palette Mapper 1.2. Place this file under Assets/Editor.
// Unity 2022.3+ / Unity 6; no URP assembly dependency. Editor-only.
#if UNITY_EDITOR
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Unity.Collections;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.Rendering;
using Object = UnityEngine.Object;

namespace RuralGames.EditorTools
{
    public sealed class SharedPaletteMapper : EditorWindow
    {
        const string Version = "1.0"; // Keep existing geometry cache keys compatible.
        const string CachePrefix = "RuralGames.SharedPalette/" + Version + "/";
        [SerializeField] Texture2D palette;
        [SerializeField] Material sharedMaterial;
        [SerializeField] int columns = 1, bands = 5;
        [SerializeField] bool objectMode = true;
        [SerializeField] bool preserveSourceMeshNames = true;
        [SerializeField] int batchSwatch = 4;
        [SerializeField] string outputFolder = "Assets/Art/Generated/SharedPalette";
        readonly List<ColourRow> colours = new List<ColourRow>();
        readonly List<Target> targets = new List<Target>();
        readonly List<GameObject> roots = new List<GameObject>();
        readonly List<string> errors = new List<string>();
        readonly Dictionary<Mesh, int> currentCells = new Dictionary<Mesh, int>();
        Color[] swatches;
        string[] labels;
        Vector2 scroll;
        string stamp, status = "Select scene objects, prefabs or FBXs, then Scan Selection.";

        sealed class ColourRow
        {
            public Material material;
            public Color source;
            public int nearest, chosen, uses;
        }
        sealed class Target
        {
            public MeshRenderer renderer;
            public MeshFilter filter;
            public Mesh mesh;
            public Material[] materials;
            public int[] rows;
            public int chosen, current = -1;
        }

        [Serializable]
        sealed class MeshOrigin
        {
            public string sourceGuid, sourceHash, sourceName;
            public long sourceId;
        }

        sealed class SourceInfo
        {
            public Mesh mesh;
            public string name;
        }

        [MenuItem("Tools/Andrei's tools/Shared Palette Mapper")]
        public static void Open() { GetWindow<SharedPaletteMapper>("Shared Palette"); }
        void OnEnable() { minSize = new Vector2(620, 420); FindSharedAssets(); }
        void OnSelectionChange() { Invalidate(); Repaint(); }
        void Invalidate() { stamp = null; }

        void FindSharedAssets()
        {
            if (!palette) palette = FindExact<Texture2D>("T_Palette_Shared");
            if (!sharedMaterial) sharedMaterial = FindExact<Material>("M_Palette_Shared");
        }
        static T FindExact<T>(string name) where T : Object
        {
            var found = AssetDatabase.FindAssets(name + " t:" + typeof(T).Name)
                .Select(g => AssetDatabase.LoadAssetAtPath<T>(AssetDatabase.GUIDToAssetPath(g)))
                .Where(a => a && a.name == name).ToArray();
            return found.Length == 1 ? found[0] : null;
        }

        void OnGUI()
        {
            EditorGUILayout.LabelField("Shared Palette Mapper", EditorStyles.boldLabel);
            EditorGUILayout.HelpBox("Select modular objects in the Hierarchy or FBXs/prefabs in the Project. " +
                "Scene objects receive undoable overrides. Project assets produce new prefab copies. " +
                "Source FBXs, materials, colliders and import settings are preserved.", MessageType.Info);
            EditorGUI.BeginChangeCheck();
            objectMode = GUILayout.Toolbar(objectMode ? 0 : 1, new[] { "Assign bands to objects", "Match source material colours" }) == 0;
            float oldLabelWidth = EditorGUIUtility.labelWidth;
            EditorGUIUtility.labelWidth = 230;
            palette = (Texture2D)EditorGUILayout.ObjectField("T_Palette_Shared", palette, typeof(Texture2D), false, GUILayout.Height(EditorGUIUtility.singleLineHeight));
            sharedMaterial = (Material)EditorGUILayout.ObjectField("M_Palette_Shared", sharedMaterial, typeof(Material), false);
            columns = Mathf.Clamp(EditorGUILayout.IntField("Swatches across each band", columns), 1, 64);
            bands = Mathf.Clamp(EditorGUILayout.IntField("Horizontal bands (top to bottom)", bands), 1, 64);
            outputFolder = EditorGUILayout.TextField("Generated assets folder", outputFolder);
            preserveSourceMeshNames = EditorGUILayout.Toggle(new GUIContent("Preserve Source Mesh Names",
                "Display source names with _Palette. Hashed asset paths and mesh references stay stable."), preserveSourceMeshNames);
            EditorGUIUtility.labelWidth = oldLabelWidth;
            if (EditorGUI.EndChangeCheck()) { Invalidate(); swatches = null; }
            EditorGUILayout.LabelField("Your current palette: 1 swatch across × 5 bands. Row 1 is the TOP.", EditorStyles.miniLabel);
            if (GUILayout.Button("Find named shared assets")) { FindSharedAssets(); Invalidate(); }
            if (GUILayout.Button("Repair Existing Generated Mesh Names")) RunUI(RepairGeneratedMeshNames);
            using (new EditorGUI.DisabledScope(!palette || !sharedMaterial || EditorApplication.isPlayingOrWillChangePlaymode))
            {
                if (GUILayout.Button("1. Scan Selection", GUILayout.Height(28)))
                    RunUI(Scan);
                using (new EditorGUI.DisabledScope(stamp == null || errors.Count > 0 || targets.Count == 0))
                    if (GUILayout.Button(objectMode ? "2. Apply Band Assignments" : "2. Create / Reuse Meshes and Apply", GUILayout.Height(28)))
                        RunUI(() => { status = Apply(); });
            }
            EditorGUILayout.HelpBox(status, MessageType.None);
            scroll = EditorGUILayout.BeginScrollView(scroll);
            foreach (string error in errors) EditorGUILayout.HelpBox(error, MessageType.Error);
            if (swatches != null)
            {
                EditorGUILayout.LabelField("Palette swatches — sampled at band/cell centres", EditorStyles.boldLabel);
                if (objectMode)
                {
                    EditorGUILayout.LabelField("Click a band to choose it for every listed object, or use each object's dropdown below.", EditorStyles.wordWrappedMiniLabel);
                    using (new EditorGUI.DisabledScope(stamp == null))
                    {
                        EditorGUI.BeginChangeCheck();
                        int chosen = EditorGUILayout.Popup("Band for all listed objects", Mathf.Clamp(batchSwatch, 0, labels.Length - 1), labels);
                        if (EditorGUI.EndChangeCheck()) SetAllBands(chosen);
                    }
                }
                for (int r = 0; r < bands; r++)
                {
                    EditorGUILayout.BeginHorizontal();
                    for (int c = 0; c < columns; c++)
                    {
                        int i = r * columns + c;
                        Rect rect = GUILayoutUtility.GetRect(50, 32, GUILayout.MinWidth(50));
                        EditorGUI.DrawRect(rect, swatches[i]);
                        var style = new GUIStyle(EditorStyles.miniLabel)
                        {
                            normal = { textColor = swatches[i].grayscale > .5f ? Color.black : Color.white }
                        };
                        using (new EditorGUI.DisabledScope(stamp == null))
                        {
                            if (objectMode) { if (GUI.Button(rect, labels[i], style)) SetAllBands(i); }
                            else GUI.Label(rect, labels[i], style);
                        }
                    }
                    EditorGUILayout.EndHorizontal();
                }
            }
            if (objectMode)
            {
                foreach (Target target in targets)
                {
                    using (new EditorGUI.DisabledScope(stamp == null))
                    {
                        EditorGUILayout.BeginVertical(EditorStyles.helpBox);
                        EditorGUILayout.ObjectField(target.renderer ? target.renderer.name : "Deleted object", target.renderer ? target.renderer.gameObject : null, typeof(GameObject), true);
                        if (swatches != null)
                        {
                            EditorGUILayout.BeginHorizontal();
                            DrawColour("Chosen", swatches[target.chosen]);
                            target.chosen = EditorGUILayout.Popup("Assign to", target.chosen, labels);
                            EditorGUILayout.EndHorizontal();
                            EditorGUILayout.LabelField(target.current >= 0 ? "Current mapping: " + labels[target.current] : "Current UVs span the texture. Apply will place the whole object in the chosen band.", EditorStyles.wordWrappedMiniLabel);
                        }
                        EditorGUILayout.EndVertical();
                    }
                }
            }
            else foreach (ColourRow row in colours)
            {
                using (new EditorGUI.DisabledScope(stamp == null))
                {
                    EditorGUILayout.BeginVertical(EditorStyles.helpBox);
                    EditorGUILayout.ObjectField((row.material ? row.material.name : "Deleted material") + " (" + row.uses + " slots)", row.material, typeof(Material), false);
                    EditorGUILayout.BeginHorizontal();
                    DrawColour("Source", row.source);
                    if (swatches != null)
                    {
                        DrawColour("Nearest", swatches[row.nearest]);
                        DrawColour("Chosen", swatches[row.chosen]);
                        row.chosen = EditorGUILayout.Popup(row.chosen, labels);
                        if (GUILayout.Button("Auto", GUILayout.Width(45))) row.chosen = row.nearest;
                    }
                    EditorGUILayout.EndHorizontal();
                    if (swatches != null)
                        EditorGUILayout.LabelField((row.chosen == row.nearest ? "Automatic match" : "Manual override") +
                            " • ΔE76 " + Vector3.Distance(ToLab(row.source), ToLab(swatches[row.chosen])).ToString("F2"), EditorStyles.miniLabel);
                    EditorGUILayout.EndVertical();
                }
            }
            EditorGUILayout.EndScrollView();
        }
        void SetAllBands(int chosen)
        {
            batchSwatch = chosen;
            foreach (Target target in targets) target.chosen = chosen;
        }
        static void DrawColour(string text, Color colour)
        {
            Rect rect = GUILayoutUtility.GetRect(65, 32, GUILayout.Width(65));
            EditorGUI.DrawRect(new Rect(rect.x, rect.y, 60, 14), colour);
            GUI.Label(new Rect(rect.x, rect.y + 15, 65, 16), text, EditorStyles.miniLabel);
        }
        void RunUI(Action action)
        {
            try { action(); }
            catch (OperationCanceledException) { status = "Cancelled. Object assignments were restored; unfinished generated assets removed."; }
            catch (Exception e) { status = e.Message; Debug.LogException(e); }
            finally { EditorUtility.ClearProgressBar(); }
        }

        void ValidateSettings()
        {
            if (EditorApplication.isPlayingOrWillChangePlaymode) throw new InvalidOperationException("Exit Play Mode first.");
            if (!palette || !sharedMaterial) throw new InvalidOperationException("Assign T_Palette_Shared and M_Palette_Shared first.");
            ValidateFolder(outputFolder);
            if (!EditorUtility.IsPersistent(palette) || !EditorUtility.IsPersistent(sharedMaterial))
                throw new InvalidOperationException("Use saved palette and shared material assets.");
            if (columns < 1 || bands < 1 || columns > 64 || bands > 64)
                throw new InvalidOperationException("Band and column counts must be between 1 and 64.");
            string property = BaseTextureProperty(sharedMaterial);
            if (property == null || sharedMaterial.GetTexture(property) != palette)
                throw new InvalidOperationException("The shared material must use the selected palette as its base texture.");
            if (sharedMaterial.GetTextureScale(property) != Vector2.one || sharedMaterial.GetTextureOffset(property) != Vector2.zero)
                throw new InvalidOperationException("Set the shared material's base texture tiling to (1,1) and offset to (0,0).");
            string colourProperty = BaseColourProperty(sharedMaterial);
            if (colourProperty != null && sharedMaterial.GetColor(colourProperty) != Color.white)
                throw new InvalidOperationException("The shared material's base colour must be white to display the palette accurately.");
            if (IsTransparent(sharedMaterial)) throw new InvalidOperationException("Use an opaque shared material.");
            var importer = AssetImporter.GetAtPath(AssetDatabase.GetAssetPath(palette)) as TextureImporter;
            if (importer != null && (!importer.sRGBTexture || importer.textureType != TextureImporterType.Default))
                throw new InvalidOperationException("Use a Default, sRGB colour palette texture.");
        }

        void Scan()
        {
            Invalidate(); colours.Clear(); targets.Clear(); roots.Clear(); errors.Clear(); currentCells.Clear(); swatches = null;
            ValidateSettings();
            swatches = SamplePalette(palette, columns, bands);
            labels = swatches.Select((s, i) => CellLabel(i) + " #" + ColorUtility.ToHtmlStringRGB(s)).ToArray();
            batchSwatch = Mathf.Clamp(batchSwatch, 0, swatches.Length - 1);
            var selected = Selection.gameObjects.Distinct().ToArray();
            foreach (GameObject go in selected)
            {
                // Selecting a parent and child should never convert a renderer twice.
                if (selected.Any(other => other != go && go.transform.IsChildOf(other.transform))) continue;
                roots.Add(go);
            }
            if (roots.Count == 0) throw new InvalidOperationException("Select GameObjects, FBXs or prefabs (not bare Mesh sub-assets).");
            int skipped = 0;
            foreach (GameObject root in roots)
            {
                if (EditorUtility.IsPersistent(root) && !AssetDatabase.IsMainAsset(root))
                {
                    errors.Add(root.name + ": select the root FBX/prefab asset rather than an internal GameObject sub-asset.");
                    continue;
                }
                if (root.GetComponentsInChildren<SkinnedMeshRenderer>(true).Length > 0)
                    errors.Add(root.name + ": skinned meshes are outside this static modular mesh tool's scope.");
                foreach (MeshRenderer renderer in root.GetComponentsInChildren<MeshRenderer>(true))
                {
                    // Manual assignment needs no original material colours and includes already-shared objects.
                    if (!objectMode && renderer.sharedMaterials.Length > 0 && renderer.sharedMaterials.All(m => m == sharedMaterial)) { skipped++; continue; }
                    try { targets.Add(Inspect(renderer)); }
                    catch (Exception e) { errors.Add(renderer.name + ": " + e.Message); }
                }
            }
            if (targets.Count == 0) errors.Add(objectMode ? "No static MeshRenderers found in the selection." : "No source-colour MeshRenderers found. Use Assign bands to objects for assets already using the shared material.");
            stamp = Fingerprint();
            status = objectMode ? targets.Count + " objects ready. Choose a band for all, or set individual dropdowns, then Apply." :
                targets.Count + " renderers, " + colours.Count + " source materials. " + skipped + " already-shared renderers skipped. " +
                (errors.Count > 0 ? "Resolve the listed issues and scan again." : "Review source → nearest → chosen colours, then Apply.");
        }

        Target Inspect(MeshRenderer renderer)
        {
            MeshFilter filter = renderer.GetComponent<MeshFilter>();
            Mesh mesh = filter ? filter.sharedMesh : null;
            if (!mesh || mesh.vertexCount == 0 || mesh.subMeshCount == 0) throw new InvalidOperationException("Missing or empty mesh.");
            if (!EditorUtility.IsPersistent(mesh)) throw new InvalidOperationException("Save/export the mesh as an asset before mapping.");
            if (EditorUtility.IsDirty(mesh)) throw new InvalidOperationException("Save the source mesh asset before mapping, so cached variants use its saved geometry.");
            if (mesh.blendShapeCount > 0 || mesh.HasVertexAttribute(VertexAttribute.BlendWeight) || mesh.HasVertexAttribute(VertexAttribute.BlendIndices))
                throw new InvalidOperationException("Blend shapes and skin weights are unsupported.");
            if (renderer.HasPropertyBlock()) throw new InvalidOperationException("Remove material property overrides before assigning palette colours.");
            Material[] materials = renderer.sharedMaterials;
            for (int sub = 0; sub < mesh.subMeshCount; sub++)
                if (mesh.GetTopology(sub) != MeshTopology.Triangles) throw new InvalidOperationException("Only triangle submeshes are supported.");
            var target = new Target { renderer = renderer, filter = filter, mesh = mesh, materials = materials, rows = new int[materials.Length] };
            if (objectMode)
            {
                if (!currentCells.TryGetValue(mesh, out int current))
                {
                    current = UniformCell(mesh, columns, bands);
                    currentCells.Add(mesh, current);
                }
                target.current = current;
                target.chosen = current >= 0 ? current : batchSwatch;
                return target;
            }
            if (materials.Length != mesh.subMeshCount) throw new InvalidOperationException("Material slot count must equal submesh count; extra overlay slots are ambiguous.");
            for (int sub = 0; sub < materials.Length; sub++)
            {
                if (mesh.GetTopology(sub) != MeshTopology.Triangles) throw new InvalidOperationException("Only triangle submeshes are supported.");
                Color source = InspectColour(materials[sub]);
                int row = colours.FindIndex(x => x.material == materials[sub]);
                if (row < 0)
                {
                    row = colours.Count;
                    int nearest = Nearest(source, swatches);
                    colours.Add(new ColourRow { material = materials[sub], source = source, nearest = nearest, chosen = nearest });
                }
                colours[row].uses++;
                target.rows[sub] = row;
            }
            return target;
        }

        // A shared material alone does not mean UVs have been mapped. Detect a complete
        // existing centre mapping so rescanning and reapplying it can reuse that mesh directly.
        public static int UniformCell(Mesh mesh, int columns, int rows)
        {
            using (var snapshot = MeshUtility.AcquireReadOnlyMeshData(mesh))
            {
                var data = snapshot[0];
                if (data.vertexCount == 0 || !data.HasVertexAttribute(VertexAttribute.TexCoord0)) return -1;
                using (var uv = new NativeArray<Vector2>(data.vertexCount, Allocator.TempJob))
                {
                    data.GetUVs(0, uv);
                    for (int cell = 0; cell < columns * rows; cell++)
                    {
                        Vector2 centre = CellUV(cell, columns, rows);
                        if ((uv[0] - centre).sqrMagnitude > 1e-10f) continue;
                        bool uniform = true;
                        for (int i = 1; i < uv.Length; i++)
                            if ((uv[i] - centre).sqrMagnitude > 1e-10f || !IsFinite(uv[i])) { uniform = false; break; }
                        if (uniform && IsFinite(uv[0])) return cell;
                    }
                }
            }
            return -1;
        }
        static bool IsFinite(Vector2 value) { return !float.IsNaN(value.x) && !float.IsInfinity(value.x) && !float.IsNaN(value.y) && !float.IsInfinity(value.y); }

        static Color InspectColour(Material material)
        {
            if (!material) throw new InvalidOperationException("A source material slot is empty.");
            string property = BaseColourProperty(material);
            if (property == null) throw new InvalidOperationException(material.name + " has no _BaseColor or _Color.");
            Color colour = material.GetColor(property);
            if (colour.a < .999f || IsTransparent(material)) throw new InvalidOperationException(material.name + " is transparent/cutout; use opaque flat colours.");
            string textureProperty = BaseTextureProperty(material);
            if (textureProperty != null && material.GetTexture(textureProperty))
                throw new InvalidOperationException(material.name + " has a base texture; this tool matches flat material colours and does not bake textures.");
            return colour;
        }
        static bool IsTransparent(Material m)
        {
            return m.renderQueue >= 2450 || (m.HasProperty("_Surface") && m.GetFloat("_Surface") > .5f) ||
                (m.HasProperty("_Mode") && m.GetFloat("_Mode") > .5f) || (m.HasProperty("_AlphaClip") && m.GetFloat("_AlphaClip") > .5f);
        }
        static string BaseColourProperty(Material m) { return m.HasProperty("_BaseColor") ? "_BaseColor" : m.HasProperty("_Color") ? "_Color" : null; }
        static string BaseTextureProperty(Material m) { return m.HasProperty("_BaseMap") ? "_BaseMap" : m.HasProperty("_MainTex") ? "_MainTex" : null; }
        string CellLabel(int i) { return columns == 1 ? "Band " + (i + 1) : "R" + (i / columns + 1) + " C" + (i % columns + 1); }

        // Decode the authored PNG/JPEG without enabling Read/Write or reimporting the palette.
        public static Color[] SamplePalette(Texture2D texture, int columns, int rows)
        {
            if (columns < 1 || rows < 1) throw new ArgumentOutOfRangeException("Palette dimensions");
            string path = AssetDatabase.GetAssetPath(texture);
            string ext = Path.GetExtension(path).ToLowerInvariant();
            if (ext != ".png" && ext != ".jpg" && ext != ".jpeg")
                throw new InvalidOperationException("Use a PNG or JPEG palette for accurate, importer-independent sampling.");
            var decoded = new Texture2D(2, 2, TextureFormat.RGBA32, false, false);
            try
            {
                if (!decoded.LoadImage(File.ReadAllBytes(path), false)) throw new IOException("Could not decode palette image.");
                if (columns > decoded.width || rows > decoded.height) throw new InvalidOperationException("There are more cells than pixels in the palette.");
                var result = new Color[columns * rows];
                for (int i = 0; i < result.Length; i++)
                {
                    Vector2 uv = CellUV(i, columns, rows);
                    result[i] = decoded.GetPixel(Mathf.Min((int)(uv.x * decoded.width), decoded.width - 1),
                        Mathf.Min((int)(uv.y * decoded.height), decoded.height - 1));
                    if (result[i].a < .999f) throw new InvalidOperationException("Palette cell " + (i + 1) + " is transparent.");
                }
                return result;
            }
            finally { DestroyImmediate(decoded); }
        }
        public static Vector2 CellUV(int index, int columns, int rows)
        {
            return new Vector2((index % columns + .5f) / columns, 1f - (index / columns + .5f) / rows);
        }
        public static int Nearest(Color source, Color[] paletteColours)
        {
            int best = 0; float distance = float.PositiveInfinity;
            Vector3 lab = ToLab(source);
            for (int i = 0; i < paletteColours.Length; i++)
            {
                float d = (lab - ToLab(paletteColours[i])).sqrMagnitude;
                if (d < distance) { best = i; distance = d; }
            }
            return best;
        }
        public static Vector3 ToLab(Color srgb)
        {
            Color linear = srgb.linear;
            float x = LabCurve((.4124564f * linear.r + .3575761f * linear.g + .1804375f * linear.b) / .95047f);
            float y = LabCurve(.2126729f * linear.r + .7151522f * linear.g + .0721750f * linear.b);
            float z = LabCurve((.0193339f * linear.r + .1191920f * linear.g + .9503041f * linear.b) / 1.08883f);
            return new Vector3(116f * y - 16f, 500f * (x - y), 200f * (y - z));
        }
        static float LabCurve(float v) { return v > .008856452f ? Mathf.Pow(v, 1f / 3f) : 7.787037f * v + 16f / 116f; }

        string Fingerprint()
        {
            var b = new StringBuilder(Version);
            b.Append(columns).Append('/').Append(bands).Append(outputFolder).Append(objectMode).Append(preserveSourceMeshNames);
            AddStamp(b, palette); AddStamp(b, sharedMaterial);
            foreach (var root in roots) AddStamp(b, root);
            foreach (var t in targets)
            {
                if (!t.renderer || !t.filter) return "deleted";
                AddStamp(b, t.renderer); AddStamp(b, t.filter.sharedMesh); AddStamp(b, t.mesh);
                b.Append(t.renderer.HasPropertyBlock());
                foreach (Material m in t.renderer.sharedMaterials)
                {
                    AddStamp(b, m);
                    if (m) { string p = BaseColourProperty(m); if (p != null) b.Append(m.GetColor(p).ToString("R")); }
                }
            }
            return Hash128.Compute(b.ToString()).ToString();
        }
        static void AddStamp(StringBuilder b, Object obj)
        {
            if (!obj) { b.Append("null;"); return; }
            b.Append(obj.GetHashCode()).Append(':').Append(EditorUtility.GetDirtyCount(obj));
            string path = AssetDatabase.GetAssetPath(obj);
            if (!string.IsNullOrEmpty(path)) b.Append(AssetDatabase.GetAssetDependencyHash(path));
            b.Append(';');
        }

        string Apply()
        {
            ValidateSettings();
            if (stamp == null || errors.Count > 0 || targets.Count == 0 || stamp != Fingerprint())
                throw new InvalidOperationException("Selection or source assets changed. Scan again before applying.");
            foreach (var row in colours)
                if (row.chosen < 0 || row.chosen >= swatches.Length) throw new InvalidOperationException("Invalid swatch choice. Scan again.");
            if (objectMode && targets.Any(t => t.chosen < 0 || t.chosen >= swatches.Length))
                throw new InvalidOperationException("Invalid object band choice. Scan again.");
            EnsureFolder(outputFolder);
            var created = new List<string>();
            var assigned = new Dictionary<Target, Mesh>();
            var cache = new Dictionary<string, Mesh>();
            var updates = new Dictionary<Mesh, MeshOrigin>();
            // Resolve legacy provenance before renaming anything: generated mesh dependency
            // hashes can themselves be part of older chained cache keys.
            List<Mesh> candidates = null;
            var resolved = new Dictionary<Mesh, SourceInfo>();
            var sources = new Dictionary<Target, SourceInfo>();
            foreach (Target target in targets)
            {
                if (!resolved.TryGetValue(target.mesh, out SourceInfo info))
                {
                    info = ResolveSource(target.mesh, ref candidates, new HashSet<Mesh>());
                    resolved.Add(target.mesh, info);
                }
                sources.Add(target, info);
            }
            int reused = 0, prefabs = 0, sceneCount = 0;
            Undo.IncrementCurrentGroup();
            int group = Undo.GetCurrentGroup();
            Undo.SetCurrentGroupName("Map selected meshes to shared palette");
            try
            {
                // Finish all mesh assets before changing a single scene reference.
                for (int i = 0; i < targets.Count; i++)
                {
                    Target t = targets[i];
                    Cancel("Preparing " + t.renderer.name, (float)i / targets.Count);
                    if (objectMode && t.chosen == t.current && t.mesh.subMeshCount == 1)
                    {
                        assigned.Add(t, t.mesh); reused++;
                        QueueMeshUpdate(updates, t.mesh, sources[t]);
                        continue;
                    }
                    Mesh source = objectMode ? sources[t].mesh : t.mesh;
                    Vector2[] uvs = objectMode ? Enumerable.Repeat(CellUV(t.chosen, columns, bands), source.subMeshCount).ToArray() :
                        t.rows.Select(r => CellUV(colours[r].chosen, columns, bands)).ToArray();
                    string key = MeshKey(source, uvs);
                    string path = outputFolder + "/SP_" + key + ".asset";
                    Mesh derived;
                    if (!cache.TryGetValue(key, out derived))
                    {
                        derived = AssetDatabase.LoadAssetAtPath<Mesh>(path);
                        if (derived)
                        {
                            var importer = AssetImporter.GetAtPath(path);
                            if (importer == null || !TryOwnedMesh(derived, out string ownedKey, out _) || ownedKey != key)
                                throw new InvalidOperationException("An unrecognised mesh occupies " + path + ". Choose another generated folder.");
                            reused++;
                        }
                        else
                        {
                            if (File.Exists(path)) throw new IOException("An existing file occupies " + path);
                            derived = BuildMesh(source, uvs, () => Cancel("Remapping " + t.renderer.name, (float)i / targets.Count));
                            bool saved = false;
                            try
                            {
                                created.Add(path);
                                AssetDatabase.CreateAsset(derived, path); saved = true;
                                var importer = AssetImporter.GetAtPath(path);
                                importer.userData = CachePrefix + key;
                                AssetDatabase.WriteImportSettingsIfDirty(path);
                            }
                            finally { if (!saved && derived) DestroyImmediate(derived); }
                        }
                        cache.Add(key, derived);
                    }
                    else reused++;
                    QueueMeshUpdate(updates, derived, objectMode ? sources[t] : new SourceInfo { mesh = source, name = sources[t].name });
                    assigned.Add(t, derived);
                }
                foreach (GameObject root in roots.Where(EditorUtility.IsPersistent))
                {
                    Target[] relevant = targets.Where(t => t.renderer.transform == root.transform || t.renderer.transform.IsChildOf(root.transform)).ToArray();
                    if (relevant.Length == 0) continue;
                    Cancel("Saving prefab copy of " + root.name, .95f);
                    // Clone into a preview scene so project-asset conversion cannot dirty the user's scene.
                    var preview = EditorSceneManager.NewPreviewScene();
                    GameObject clone = null;
                    try
                    {
                        clone = (GameObject)PrefabUtility.InstantiatePrefab(root, preview);
                        if (!clone) throw new InvalidOperationException("Could not instantiate " + root.name);
                        PrefabUtility.UnpackPrefabInstance(clone, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
                        var originals = root.GetComponentsInChildren<MeshRenderer>(true);
                        var copies = clone.GetComponentsInChildren<MeshRenderer>(true);
                        if (originals.Length != copies.Length) throw new InvalidOperationException("Prefab hierarchy changed. Scan again.");
                        foreach (Target t in relevant)
                        {
                            int index = Array.IndexOf(originals, t.renderer);
                            copies[index].GetComponent<MeshFilter>().sharedMesh = assigned[t];
                            copies[index].sharedMaterials = new[] { sharedMaterial };
                        }
                        string path = AssetDatabase.GenerateUniqueAssetPath(outputFolder + "/" + SafeName(root.name) + "_Palette.prefab");
                        created.Add(path);
                        PrefabUtility.SaveAsPrefabAsset(clone, path, out bool ok);
                        if (!ok) throw new IOException("Unity could not save " + path);
                        prefabs++;
                    }
                    finally
                    {
                        if (clone) DestroyImmediate(clone);
                        EditorSceneManager.ClosePreviewScene(preview);
                    }
                }
                // Generated files are durable cache assets. Undo affects assignments, not shared files.
                foreach (Target t in targets.Where(t => !EditorUtility.IsPersistent(t.renderer)))
                {
                    Cancel("Applying " + t.renderer.name, .98f);
                    Undo.RecordObjects(new Object[] { t.filter, t.renderer }, "Assign shared palette");
                    t.filter.sharedMesh = assigned[t];
                    t.renderer.sharedMaterials = new[] { sharedMaterial };
                    PrefabUtility.RecordPrefabInstancePropertyModifications(t.filter);
                    PrefabUtility.RecordPrefabInstancePropertyModifications(t.renderer);
                    EditorSceneManager.MarkSceneDirty(t.renderer.gameObject.scene);
                    sceneCount++;
                }
                Undo.FlushUndoRecordObjects();
                Undo.CollapseUndoOperations(group);
                // Save only the assets created by this operation, never unrelated dirty materials/scenes.
                foreach (string path in created) AssetDatabase.SaveAssetIfDirty(AssetDatabase.LoadMainAssetAtPath(path));
                foreach (var update in updates) UpdateMeshMetadata(update.Key, update.Value, preserveSourceMeshNames);
                Invalidate();
                return "Mapped " + sceneCount + " scene renderers; created " + prefabs + " prefab copies. " +
                    cache.Count + " mesh variants, " + reused + " reused. Ctrl+Z restores scene assignments. Rescan to map more objects.";
            }
            catch
            {
                Undo.FlushUndoRecordObjects();
                Undo.RevertAllDownToGroup(group);
                for (int i = created.Count - 1; i >= 0; i--) AssetDatabase.DeleteAsset(created[i]);
                Invalidate();
                throw;
            }
            finally { EditorUtility.ClearProgressBar(); }
        }

        static bool TryOwnedMesh(Mesh mesh, out string key, out MeshOrigin origin)
        {
            key = null; origin = null;
            var importer = AssetImporter.GetAtPath(AssetDatabase.GetAssetPath(mesh));
            string data = importer != null ? importer.userData : null;
            if (string.IsNullOrEmpty(data) || !data.StartsWith(CachePrefix, StringComparison.Ordinal)) return false;
            int newline = data.IndexOf('\n');
            string header = newline < 0 ? data : data.Substring(0, newline);
            key = header.Substring(CachePrefix.Length);
            if (key.Length != 32 || !key.All(Uri.IsHexDigit)) return false;
            if (newline >= 0)
            {
                try { origin = JsonUtility.FromJson<MeshOrigin>(data.Substring(newline + 1)); }
                catch (ArgumentException) { /* Legacy cache remains usable without provenance. */ }
            }
            return true;
        }

        static SourceInfo ResolveSource(Mesh mesh, ref List<Mesh> candidates, HashSet<Mesh> visited)
        {
            var result = new SourceInfo { mesh = mesh, name = mesh.name };
            if (!visited.Add(mesh) || !TryOwnedMesh(mesh, out string key, out MeshOrigin origin)) return result;
            if (origin != null && !string.IsNullOrEmpty(origin.sourceGuid))
            {
                result.name = origin.sourceName;
                string path = AssetDatabase.GUIDToAssetPath(origin.sourceGuid);
                // Existing variants are snapshots. Do not silently rebuild from changed originals.
                if (string.IsNullOrEmpty(path) || AssetDatabase.GetAssetDependencyHash(path).ToString() != origin.sourceHash) return result;
                var original = AssetDatabase.LoadAllAssetsAtPath(path).OfType<Mesh>().FirstOrDefault(m =>
                    AssetDatabase.TryGetGUIDAndLocalFileIdentifier(m, out string guid, out long id) && id == origin.sourceId);
                if (original && original != mesh && !EditorUtility.IsDirty(original))
                    return ResolveSource(original, ref candidates, visited);
                return result;
            }

            // 1.0/1.1 stored only a one-way cache hash. Recover provenance only when
            // the original mesh and inferred per-submesh UV choices reproduce that exact key.
            if (candidates == null)
                candidates = AssetDatabase.FindAssets("t:Mesh").Concat(AssetDatabase.FindAssets("t:Model")).Distinct()
                    .SelectMany(g => AssetDatabase.LoadAllAssetsAtPath(AssetDatabase.GUIDToAssetPath(g)).OfType<Mesh>()).Distinct().ToList();
            for (int i = 0; i < candidates.Count; i++)
            {
                if ((i & 63) == 0) Cancel("Finding original mesh for " + mesh.name, (float)i / Math.Max(1, candidates.Count));
                Mesh candidate = candidates[i];
                if (!candidate || visited.Contains(candidate) || EditorUtility.IsDirty(candidate)) continue;
                Vector2[] choices = InferLegacyChoices(candidate, mesh);
                if (choices != null && MeshKey(candidate, choices) == key)
                    return ResolveSource(candidate, ref candidates, visited);
            }
            // A missing/reimported original cannot be identified from a hash alone.
            result.name = mesh.name == "SP_" + key ? null : mesh.name.EndsWith("_Palette", StringComparison.Ordinal) ?
                mesh.name.Substring(0, mesh.name.Length - "_Palette".Length) : mesh.name;
            return result;
        }

        static Vector2[] InferLegacyChoices(Mesh source, Mesh generated)
        {
            if (generated.subMeshCount != 1 || !generated.HasVertexAttribute(VertexAttribute.TexCoord0)) return null;
            ulong count = 0;
            for (int sub = 0; sub < source.subMeshCount; sub++)
            {
                if (source.GetTopology(sub) != MeshTopology.Triangles || source.GetIndexCount(sub) == 0) return null;
                count += source.GetIndexCount(sub);
            }
            if (count != generated.GetIndexCount(0) || count > int.MaxValue) return null;
            using (var snapshot = MeshUtility.AcquireReadOnlyMeshData(generated))
            using (var uv = new NativeArray<Vector2>(generated.vertexCount, Allocator.TempJob))
            using (var indices = new NativeArray<int>((int)count, Allocator.TempJob))
            {
                snapshot[0].GetUVs(0, uv); snapshot[0].GetIndices(indices, 0, true);
                var choices = new Vector2[source.subMeshCount];
                int corner = 0;
                for (int sub = 0; sub < source.subMeshCount; sub++)
                {
                    Vector2 choice = uv[indices[corner]];
                    int end = corner + (int)source.GetIndexCount(sub);
                    for (; corner < end; corner++) if (!uv[indices[corner]].Equals(choice)) return null;
                    choices[sub] = choice;
                }
                return choices;
            }
        }

        static void QueueMeshUpdate(Dictionary<Mesh, MeshOrigin> updates, Mesh generated, SourceInfo source)
        {
            if (!TryOwnedMesh(generated, out _, out MeshOrigin existing)) return; // Never rename a source asset.
            if (source.mesh == generated)
            {
                if (existing != null) updates[generated] = existing;
                return;
            }
            AssetDatabase.TryGetGUIDAndLocalFileIdentifier(source.mesh, out string guid, out long id);
            updates[generated] = new MeshOrigin
            {
                sourceGuid = guid,
                sourceId = id,
                sourceName = source.name,
                sourceHash = AssetDatabase.GetAssetDependencyHash(AssetDatabase.GetAssetPath(source.mesh)).ToString()
            };
        }

        static void UpdateMeshMetadata(Mesh mesh, MeshOrigin origin, bool preserveNames)
        {
            if (!TryOwnedMesh(mesh, out string key, out _)) return;
            string path = AssetDatabase.GetAssetPath(mesh);
            string desired = preserveNames ? (string.IsNullOrEmpty(origin.sourceName) ? mesh.name : origin.sourceName + "_Palette") : Path.GetFileNameWithoutExtension(path);
            // CreateAsset uses its filename as the object name. Set the readable name
            // AFTER creation, and save the same object to retain its GUID and local file ID.
            if (mesh.name != desired)
            {
                mesh.name = desired; EditorUtility.SetDirty(mesh); AssetDatabase.SaveAssetIfDirty(mesh);
            }
            var importer = AssetImporter.GetAtPath(path);
            string metadata = CachePrefix + key + "\n" + JsonUtility.ToJson(origin);
            if (importer.userData != metadata)
            {
                importer.userData = metadata; AssetDatabase.WriteImportSettingsIfDirty(path);
            }
        }

        void RepairGeneratedMeshNames()
        {
            ValidateFolder(outputFolder);
            if (!AssetDatabase.IsValidFolder(outputFolder)) { status = "No generated folder to repair yet."; return; }
            var meshes = AssetDatabase.FindAssets("t:Mesh", new[] { outputFolder })
                .SelectMany(g => AssetDatabase.LoadAllAssetsAtPath(AssetDatabase.GUIDToAssetPath(g)).OfType<Mesh>())
                .Where(m => TryOwnedMesh(m, out _, out _)).Distinct().ToArray();
            List<Mesh> candidates = null;
            var updates = new Dictionary<Mesh, MeshOrigin>();
            // Resolve the full batch first, preserving legacy chained-key evidence.
            foreach (Mesh mesh in meshes)
            {
                if (EditorUtility.IsDirty(mesh)) continue;
                QueueMeshUpdate(updates, mesh, ResolveSource(mesh, ref candidates, new HashSet<Mesh>()));
            }
            foreach (var update in updates) UpdateMeshMetadata(update.Key, update.Value, preserveSourceMeshNames);
            Invalidate();
            status = "Updated names/provenance for " + updates.Count + " generated meshes in place. " +
                (meshes.Length - updates.Count) + " skipped (unsaved edits or original source could not be identified). No geometry rebuilt. Rescan before applying.";
        }

        static void Cancel(string message, float progress)
        {
            if (EditorUtility.DisplayCancelableProgressBar("Shared Palette Mapper", message, progress)) throw new OperationCanceledException();
        }
        public static string MeshKey(Mesh source, Vector2[] choices)
        {
            if (EditorUtility.IsDirty(source)) throw new InvalidOperationException("Save the source mesh asset before mapping.");
            if (!AssetDatabase.TryGetGUIDAndLocalFileIdentifier(source, out string guid, out long id))
                throw new InvalidOperationException("The source mesh needs a stable asset identity.");
            var b = new StringBuilder("RuralGames.SharedPalette/" + Version);
            b.Append(guid).Append('/').Append(id).Append('/').Append(AssetDatabase.GetAssetDependencyHash(AssetDatabase.GetAssetPath(source)));
            // JsonUtility writes floats with invariant formatting and full round-trip precision.
            foreach (Vector2 uv in choices) b.Append('/').Append(JsonUtility.ToJson(uv));
            return Hash128.Compute(b.ToString()).ToString();
        }
        static string SafeName(string name)
        {
            foreach (char c in Path.GetInvalidFileNameChars()) name = name.Replace(c, '_');
            return string.IsNullOrWhiteSpace(name) ? "ModularMesh" : name;
        }
        static void ValidateFolder(string folder)
        {
            if (string.IsNullOrEmpty(folder) || !folder.StartsWith("Assets/", StringComparison.Ordinal) ||
                folder.EndsWith("/", StringComparison.Ordinal) || folder.Contains('\\') || folder.Split('/').Any(s => s == "." || s == ".." || s.Length == 0))
                throw new InvalidOperationException("Choose a dedicated generated folder under Assets/, without trailing slash or .. segments.");
            // Refuse filesystem links so a generated-assets path cannot redirect writes out of Assets.
            string full = Path.GetFullPath(folder);
            for (var dir = new DirectoryInfo(full); dir != null && dir.FullName.Length >= Path.GetFullPath("Assets").Length; dir = dir.Parent)
                if (dir.Exists && (dir.Attributes & FileAttributes.ReparsePoint) != 0)
                    throw new InvalidOperationException("Generated folders cannot be symbolic links or junctions.");
        }
        static void EnsureFolder(string folder)
        {
            if (AssetDatabase.IsValidFolder(folder)) return;
            string parent = folder.Substring(0, folder.LastIndexOf('/'));
            EnsureFolder(parent);
            string guid = AssetDatabase.CreateFolder(parent, folder.Substring(folder.LastIndexOf('/') + 1));
            if (string.IsNullOrEmpty(guid)) throw new IOException("Could not create folder " + folder);
        }

        // Editor mesh snapshots bypass Read/Write without changing ModelImporter or FBX bytes.
        // Split a vertex only when different material slots choose different swatch UVs.
        public static Mesh BuildMesh(Mesh source, Vector2[] slotUVs, Action checkpoint = null)
        {
            if (slotUVs.Length != source.subMeshCount) throw new ArgumentException("One chosen UV is required per submesh.");
            if (source.blendShapeCount > 0 || source.HasVertexAttribute(VertexAttribute.BlendWeight) || source.HasVertexAttribute(VertexAttribute.BlendIndices))
                throw new InvalidOperationException("Static meshes without blend shapes/skin weights are required.");
            using (var snapshot = MeshUtility.AcquireReadOnlyMeshData(source))
            {
                Mesh.MeshData data = snapshot[0];
                Vector3[] sourcePositions = ReadVector3(data, VertexAttribute.Position);
                Vector3[] sourceNormals = ReadVector3(data, VertexAttribute.Normal);
                Vector4[] sourceTangents = ReadVector4(data, VertexAttribute.Tangent);
                Color[] sourceColours = null;
                if (data.HasVertexAttribute(VertexAttribute.Color))
                    using (var array = new NativeArray<Color>(data.vertexCount, Allocator.TempJob)) { data.GetColors(array); sourceColours = array.ToArray(); }
                var sourceUV = new Vector4[8][];
                for (int c = 1; c < 8; c++)
                {
                    if (!data.HasVertexAttribute((VertexAttribute)((int)VertexAttribute.TexCoord0 + c))) continue;
                    using (var array = new NativeArray<Vector4>(data.vertexCount, Allocator.TempJob)) { data.GetUVs(c, array); sourceUV[c] = array.ToArray(); }
                }
                var positions = new List<Vector3>(); var normals = new List<Vector3>();
                var tangents = new List<Vector4>(); var colours = new List<Color>();
                var uv0 = new List<Vector2>(); var indices = new List<int>();
                var uv = new List<Vector4>[8];
                for (int c = 1; c < 8; c++) uv[c] = new List<Vector4>();
                // Equal UV values share vertices even when they came from different material slots.
                var uniqueUVs = new List<Vector2>();
                var lookup = new Dictionary<long, int>();
                for (int sub = 0; sub < data.subMeshCount; sub++)
                {
                    var desc = data.GetSubMesh(sub);
                    if (desc.topology != MeshTopology.Triangles || desc.indexCount % 3 != 0) throw new InvalidOperationException("Only triangle submeshes are supported.");
                    int cell = uniqueUVs.IndexOf(slotUVs[sub]);
                    if (cell < 0) { cell = uniqueUVs.Count; uniqueUVs.Add(slotUVs[sub]); }
                    using (var sourceIndices = new NativeArray<int>(desc.indexCount, Allocator.TempJob))
                    {
                        data.GetIndices(sourceIndices, sub, true);
                        for (int corner = 0; corner < sourceIndices.Length; corner++)
                        {
                            if ((corner & 8191) == 0) checkpoint?.Invoke();
                            int v = sourceIndices[corner];
                            if (v < 0 || v >= sourcePositions.Length) throw new InvalidOperationException("Out-of-range source mesh index.");
                            long key = ((long)cell << 32) | (uint)v;
                            if (!lookup.TryGetValue(key, out int destination))
                            {
                                destination = positions.Count; lookup.Add(key, destination);
                                positions.Add(sourcePositions[v]);
                                if (sourceNormals != null) normals.Add(sourceNormals[v]);
                                if (sourceTangents != null) tangents.Add(sourceTangents[v]);
                                if (sourceColours != null) colours.Add(sourceColours[v]);
                                uv0.Add(slotUVs[sub]);
                                for (int c = 1; c < 8; c++) if (sourceUV[c] != null) uv[c].Add(sourceUV[c][v]);
                            }
                            indices.Add(destination);
                        }
                    }
                }
                Mesh mesh = new Mesh { name = source.name + "_Palette", indexFormat = positions.Count > 65535 ? IndexFormat.UInt32 : IndexFormat.UInt16 };
                try
                {
                    mesh.SetVertices(positions);
                    if (sourceNormals != null) mesh.SetNormals(normals);
                    if (sourceTangents != null) mesh.SetTangents(tangents);
                    if (sourceColours != null) mesh.SetColors(colours);
                    mesh.SetUVs(0, uv0);
                    for (int c = 1; c < 8; c++)
                    {
                        if (sourceUV[c] == null) continue;
                        int dimension = data.GetVertexAttributeDimension((VertexAttribute)((int)VertexAttribute.TexCoord0 + c));
                        if (dimension == 2) mesh.SetUVs(c, uv[c].Select(v => new Vector2(v.x, v.y)).ToList());
                        else if (dimension == 3) mesh.SetUVs(c, uv[c].Select(v => new Vector3(v.x, v.y, v.z)).ToList());
                        else mesh.SetUVs(c, uv[c]);
                    }
                    mesh.SetTriangles(indices, 0, false);
                    if (sourceNormals == null) mesh.RecalculateNormals();
                    mesh.bounds = source.bounds;
                    return mesh;
                }
                catch { DestroyImmediate(mesh); throw; }
            }
        }
        static Vector3[] ReadVector3(Mesh.MeshData data, VertexAttribute attribute)
        {
            if (!data.HasVertexAttribute(attribute)) return null;
            using (var values = new NativeArray<Vector3>(data.vertexCount, Allocator.TempJob))
            {
                if (attribute == VertexAttribute.Position) data.GetVertices(values); else data.GetNormals(values);
                return values.ToArray();
            }
        }
        static Vector4[] ReadVector4(Mesh.MeshData data, VertexAttribute attribute)
        {
            if (!data.HasVertexAttribute(attribute)) return null;
            using (var values = new NativeArray<Vector4>(data.vertexCount, Allocator.TempJob)) { data.GetTangents(values); return values.ToArray(); }
        }
    }
}
#endif

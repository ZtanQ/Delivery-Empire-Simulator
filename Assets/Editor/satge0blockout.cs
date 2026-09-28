// Stage0BlockoutBuilder.cs
//
// Editor tool that generates a real-scale (10 x 10 m) grey blockout using
// Unity's ProBuilder package: floor, four walls, a door opening in the
// south wall, and a loading dock (wall opening + raised exterior platform)
// in the north wall. All pieces get MeshColliders, so collision is correct
// out of the box.
//
// SETUP
// 1. Requires the ProBuilder package (Window > Package Manager > ProBuilder).
// 2. Drop this file in an "Editor" folder, e.g. Assets/Editor/Stage0BlockoutBuilder.cs
// 3. In the Unity menu: Tools > Blockout > Build Stage 0 (10x10m)
// 4. Re-running the menu item deletes and rebuilds the "Stage0_Blockout" object,
//    so it's safe to iterate on the constants below and re-run.
//
// LAYOUT (world space, room centered on the origin)
//   Floor:  10 x 10 m, top surface at Y = 0
//   Walls:  4 m tall, 0.3 m thick
//   Door:   south wall (-Z), 1.2 m wide x 2.4 m tall opening, centered
//   Dock:   north wall (+Z), 3 m wide x 3.5 m tall opening, centered,
//           plus an exterior platform raised to 1.1 m (standard truck-bed height)

using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.ProBuilder;
using PBShapeGenerator = UnityEngine.ProBuilder.ShapeGenerator;

public static class Stage0BlockoutBuilder
{
    // ---- Tunables -----------------------------------------------------
    private const float RoomSize = 10f;
    private const float WallHeight = 4f;
    private const float WallThickness = 0.3f;

    private const float DoorWidth = 1.2f;
    private const float DoorHeight = 2.4f;

    private const float DockWidth = 3f;
    private const float DockHeight = 3.5f;
    private const float DockPlatformHeight = 1.1f;   // truck-bed height
    private const float DockPlatformDepth = 2.5f;
    private const float DockPlatformWidth = 4f;

    private const string RootName = "Stage0_Blockout";
    private const string MaterialPath = "Assets/Materials/Blockout_Grey.mat";

    private struct BoxSpec
    {
        public string Name;
        public Vector3 Center;
        public Vector3 Size;
        public BoxSpec(string name, Vector3 center, Vector3 size)
        {
            Name = name;
            Center = center;
            Size = size;
        }
    }

    [MenuItem("Tools/Blockout/Build Stage 0 (10x10m)")]
    public static void Build()
    {
        // Clean rebuild
        GameObject existing = GameObject.Find(RootName);
        if (existing != null)
        {
            Object.DestroyImmediate(existing);
        }

        GameObject root = new GameObject(RootName);
        Undo.RegisterCreatedObjectUndo(root, "Build Stage 0 Blockout");

        Material grey = GetOrCreateGreyMaterial();

        float half = RoomSize / 2f;      // 5
        float wallCenterY = WallHeight / 2f;

        List<BoxSpec> boxes = new List<BoxSpec>();

        // Floor: top surface sits at Y = 0
        boxes.Add(new BoxSpec(
            "Floor",
            new Vector3(0f, -0.1f, 0f),
            new Vector3(RoomSize, 0.2f, RoomSize)));

        // --- South wall (door), at Z = -half -------------------------------
        float doorHalf = DoorWidth / 2f;
        float southSegLen = half - doorHalf;                 // length of each side segment
        boxes.Add(new BoxSpec(
            "Wall_South_Left",
            new Vector3(-(doorHalf + southSegLen / 2f), wallCenterY, -half),
            new Vector3(southSegLen, WallHeight, WallThickness)));
        boxes.Add(new BoxSpec(
            "Wall_South_Right",
            new Vector3(doorHalf + southSegLen / 2f, wallCenterY, -half),
            new Vector3(southSegLen, WallHeight, WallThickness)));
        boxes.Add(new BoxSpec(
            "Wall_South_DoorHeader",
            new Vector3(0f, DoorHeight + (WallHeight - DoorHeight) / 2f, -half),
            new Vector3(DoorWidth, WallHeight - DoorHeight, WallThickness)));

        // --- North wall (loading dock opening), at Z = +half ---------------
        float dockHalf = DockWidth / 2f;
        float northSegLen = half - dockHalf;
        boxes.Add(new BoxSpec(
            "Wall_North_Left",
            new Vector3(-(dockHalf + northSegLen / 2f), wallCenterY, half),
            new Vector3(northSegLen, WallHeight, WallThickness)));
        boxes.Add(new BoxSpec(
            "Wall_North_Right",
            new Vector3(dockHalf + northSegLen / 2f, wallCenterY, half),
            new Vector3(northSegLen, WallHeight, WallThickness)));
        boxes.Add(new BoxSpec(
            "Wall_North_DockHeader",
            new Vector3(0f, DockHeight + (WallHeight - DockHeight) / 2f, half),
            new Vector3(DockWidth, WallHeight - DockHeight, WallThickness)));

        // --- East / West walls (solid) --------------------------------------
        boxes.Add(new BoxSpec(
            "Wall_East",
            new Vector3(half, wallCenterY, 0f),
            new Vector3(WallThickness, WallHeight, RoomSize)));
        boxes.Add(new BoxSpec(
            "Wall_West",
            new Vector3(-half, wallCenterY, 0f),
            new Vector3(WallThickness, WallHeight, RoomSize)));

        // --- Loading dock exterior platform ---------------------------------
        boxes.Add(new BoxSpec(
            "LoadingDock_Platform",
            new Vector3(0f, DockPlatformHeight / 2f, half + DockPlatformDepth / 2f),
            new Vector3(DockPlatformWidth, DockPlatformHeight, DockPlatformDepth)));

        foreach (BoxSpec spec in boxes)
        {
            CreateBox(spec, root.transform, grey);
        }

        Selection.activeGameObject = root;
        Debug.Log("[Stage0BlockoutBuilder] Built " + boxes.Count + " pieces under '" + RootName + "'.");
    }

    private static void CreateBox(BoxSpec spec, Transform parent, Material mat)
    {
        ProBuilderMesh pb = PBShapeGenerator.GenerateCube(PivotLocation.Center, spec.Size);
        pb.gameObject.name = spec.Name;
        pb.transform.SetParent(parent, false);
        pb.transform.position = spec.Center;

        pb.ToMesh();
        pb.Refresh();

        MeshRenderer mr = pb.GetComponent<MeshRenderer>();
        if (mr != null)
        {
            mr.sharedMaterial = mat;
        }

        // Correct collision: static mesh collider matching the visible geometry.
        MeshCollider collider = pb.gameObject.GetComponent<MeshCollider>();
        if (collider == null)
        {
            collider = pb.gameObject.AddComponent<MeshCollider>();
        }
        collider.sharedMesh = pb.GetComponent<MeshFilter>().sharedMesh;
        collider.convex = false; // static level geometry, non-convex is fine and more accurate

        GameObjectUtility.SetStaticEditorFlags(
            pb.gameObject,
            StaticEditorFlags.BatchingStatic | StaticEditorFlags.NavigationStatic | StaticEditorFlags.OccluderStatic | StaticEditorFlags.OccludeeStatic);
    }

    private static Material GetOrCreateGreyMaterial()
    {
        Material mat = AssetDatabase.LoadAssetAtPath<Material>(MaterialPath);
        if (mat != null)
        {
            return mat;
        }

        if (!AssetDatabase.IsValidFolder("Assets/Materials"))
        {
            AssetDatabase.CreateFolder("Assets", "Materials");
        }

        Shader shader = Shader.Find("Universal Render Pipeline/Lit");
        if (shader == null)
        {
            shader = Shader.Find("Standard");
        }

        mat = new Material(shader);
        mat.name = "Blockout_Grey";
        Color grey = new Color(0.6f, 0.6f, 0.6f, 1f);
        if (mat.HasProperty("_BaseColor")) mat.SetColor("_BaseColor", grey);
        if (mat.HasProperty("_Color")) mat.SetColor("_Color", grey);

        AssetDatabase.CreateAsset(mat, MaterialPath);
        AssetDatabase.SaveAssets();
        return mat;
    }
}
# Andrei's Shared Palette Mapper 1.1

Open **Tools → Andrei's tools → Shared Palette Mapper**.

The tool was built for the available Rural Games checkout at `D:/RuralGames/RepoTest/Delivery-Empire-Simulator`: Unity **6000.6.1f1**, URP **17.6.0**. It uses the project's existing `Assets/Art/Textures/T_Palette_Shared.png` and `Assets/Art/Materials/M_Palette_Shared.mat`. It has no URP package assembly dependency and does not install or upgrade packages.

## Install in another checkout

1. Copy `Assets/Editor/RuralGames/SharedPaletteMapper.cs` from this package into the same path in your Unity project. Keep it inside an `Editor` folder.
2. Wait for Unity to compile, then open the menu above. No component needs to be added to any object.
3. The window finds uniquely named `T_Palette_Shared` and `M_Palette_Shared` assets. If either is missing or there are duplicates, drag the correct asset into its field.

The single C# file is sufficient. The `qa` folder is a separate test project and must **not** be installed in the game. Remove any other installed copy of this same SharedPaletteMapper class before installing an update. The older `MaterialLogic` window is a separate tool.

## Fast workflow

1. Save your scene. Select one or more modular objects in the **Hierarchy**, or root FBX/prefab assets in the **Project**. Selected parents include inactive children; selecting a parent and its child processes each renderer once.
2. Leave **Swatches across each band = 1** and **Horizontal bands = 5** for your current palette. It contains five full-width horizontal bands, not a square swatch grid.
3. Leave **Assign bands to objects** selected and click **Scan Selection**. Objects already using `M_Palette_Shared` are included, even when their UVs currently cover the entire texture. Each MeshRenderer has its own dropdown, so two objects sharing the same material can use different bands.
4. **Click a coloured band** to choose it for every listed object, or use the **Band for all listed objects** dropdown. Override any individual object using its **Assign to** dropdown. These controls change pending choices; they do not change the scene until Apply.
5. Click **Apply Band Assignments**. Each object's entire mesh is placed within its chosen band, across all its source submeshes. The material remains `M_Palette_Shared`.

Band numbers run **top to bottom**: **1 red, 2 blue, 3 light blue, 4 yellow, 5 light grey** in the current palette. For example, select your walls, Scan, click the grey band, and Apply. Select the floor separately and choose its band. Or scan everything together and set each object's dropdown.

Unmapped meshes start with the bulk dropdown's band (initially light grey). A mesh already uniformly mapped to a band starts with that current band. To change an already-mapped object, scan it again and choose another band; undoing its previous conversion is unnecessary. Reapplying the existing band to a single-submesh mesh reuses that mesh directly.

The optional **Match source material colours** tab retains the earlier workflow for objects that still have their original flat-colour materials. It shows Source / Nearest / Chosen colours per material, matches with CIELAB Delta E 76, and supports dropdown overrides plus Auto reset. A shared source material has one choice across its slots. Use **Assign bands to objects** when original material colours have already been replaced.

For five bands, UV0 is placed at **U = 0.5** and **V = 0.9, 0.7, 0.5, 0.3, 0.1**. If your palette later has several swatches across each band, set the actual column count; row and column counts are independent. Cells must be uniform flat colours at their centres. Uneven band widths/heights and arbitrary atlas islands need a different layout; this MVP samples equal bands/cells.

The shared material must use the selected palette in `_BaseMap` (URP) or `_MainTex`, with a white base colour, tiling `(1,1)`, offset `(0,0)`, and opaque rendering. The tool validates these settings and leaves the material unchanged. If you need to create it manually, use **Universal Render Pipeline/Lit**, name it `M_Palette_Shared`, assign `T_Palette_Shared` as Base Map and set Base Color to white.

## What Apply changes

- **Hierarchy selection:** assigns derived mesh assets and the existing shared material to selected MeshFilters/MeshRenderers. Prefab instances receive overrides. **Ctrl+Z** reverses the entire batch's mesh and material assignments; redo is supported. Save the scene when satisfied. In Prefab Mode, saving through Unity will save your prefab changes normally.
- **Project selection:** saves separate `*_Palette.prefab` copies under `Assets/Art/Generated/SharedPalette`. Drag these copies into the scene or use them to replace the original modules. The new prefab copies are independent and unpack nested prefab links. The source prefab/FBX is preserved. Repeating Project conversion creates another uniquely named prefab copy.
- **Mesh sharing:** one `SP_<hash>.asset` is reused for the same source mesh/sub-asset, saved source dependency hash and per-slot swatch UV choices. Multiple instances and later editor sessions reuse it. Different mappings produce separate assets. A reimported/changed source produces a new variant when its dependency hash changes. Generated meshes are snapshots: **rescan and reconvert from the original sources after source changes**; existing mapped instances do not auto-update.
- **Geometry:** all triangle material slots collapse into one submesh/material. Vertices are split only where the same source vertex needs different swatch UVs. Distinct authored vertices are never welded. Same-swatch slots can share vertices. Positions, normals, tangents, vertex colours and UV channels 1–7 are carried over; missing normals are recalculated. Large results use 32-bit indices.
- **Lighting:** only UV0 changes. UV1 (called `mesh.uv2` in Unity's older API) retains the source values and dimensions for every copied/split vertex. No lightmap unwrap is generated. Missing/bad source lightmap UVs remain missing/bad. Changing albedo can require rebaking scene lighting; the tool does not alter bake settings or bake lighting.
- **Colliders:** stay on their existing mesh and settings, since geometry has not moved. Existing shelf colliders remain intact.

## Safe operation and recovery

Original FBXs, their `.meta` import settings, source materials and the shared palette are never rewritten or reimported by the tool. Editor mesh snapshots allow FBXs with **Read/Write disabled** to be converted directly. PNG/JPEG colours are sampled from image bytes without changing texture import settings. Unsaved source mesh edits must be saved first to avoid reusing a variant of older geometry.

The snapshot API's editor behaviour is documented in Unity's [MeshUtility.AcquireReadOnlyMeshData reference](https://docs.unity.com/en-us/engine/6000.5/script-reference/unityeditor/meshutility/acquirereadonlymeshdata).

Apply prepares all meshes before assigning scene references. Cancel or an ordinary exception restores any assignments and removes assets created by that unfinished operation. It preserves existing generated assets and pre-existing files. A sudden editor/process crash can leave unreferenced output assets; inspect the generated folder after a crash. Empty folders may remain after cancellation.

**Undo restores scene references; it does not delete generated mesh/prefab files.** Those may be used by other modules. Remove unwanted output through the Project window only after checking its references. Do not edit the generated cache meshes manually. To change a band, select the mapped object, scan in **Assign bands to objects**, choose its new band and apply. Other objects using its previous mesh keep their own band.

No scene, source prefab or unrelated dirty asset is saved automatically. Project prefab copies and derived meshes are written only under the chosen generated folder. The tool refuses output traversal and junction/symlink folders. It never commits or switches Git branches.

## MVP limits

Static MeshRenderers with saved triangle mesh assets. Skinned meshes, skin weights, blend shapes and material property blocks block the batch. Select/export a saved mesh asset for scene-generated geometry such as unsaved ProBuilder meshes. Select root FBX/prefab assets rather than bare Mesh or internal GameObject sub-assets.

**Assign bands to objects** replaces all material slots with the shared material and ignores original source shading. It therefore accepts objects with a single shared material even if their mesh has multiple submeshes. Every submesh receives the same selected band. Use the source-colour workflow before replacing materials if different regions of one mesh need different bands.

**Match source material colours** requires opaque flat `_BaseColor`/`_Color` source colours and one material slot per submesh. Missing/extra slots, base-colour textures and transparency/cutout block that mode.

This matches base colours; it does not bake textures or preserve each source material's metallic, roughness/smoothness, emission or normal maps. Those properties come from the shared material. Custom shaders may render vertex colours differently. Test a small selection first.

For clean palette sampling at a distance, the texture can be configured in Unity as Default/sRGB, Point, Clamp, no mipmaps, and uncompressed. The existing project palette currently uses mipmaps, bilinear filtering and compression; the tool keeps those existing settings, so distant colours can blend. Review that separately if visible.

## Verification

Compiled against the installed Unity **6000.6.1f1** assemblies with **0 warnings and 0 errors**. The isolated Unity integration suite passed **58 assertions** using the actual five-band palette image and a copied `SM_Shelf_Unit.fbx`. These include already-shared objects, independent object bands, bulk choices, all-submesh coverage, reassignment without changing other instances, current-band detection and repeated-apply reuse, as well as the original source-colour, UV1, undo/redo, prefab, FBX-preservation and rollback checks. The mesh cache format remains compatible with 1.0, whose persistent identity was also checked through an editor restart.

Evidence and the reproducible harness are under `SharedPaletteMapper/qa`. Tests use Standard shader fixtures for material assignment; the installed project's URP material settings were inspected separately. Interactive window layout, URP rendered appearance, a production lighting bake and other Unity releases were not exercised. The code targets Unity 2022.3+ APIs, but only the installed Unity 6 version was run.

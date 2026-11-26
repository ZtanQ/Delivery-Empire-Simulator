using UnityEngine;

// Small helpers to read the shape of a part's meshes in the space of a pivot,
// so the motion scripts can pick their axis without hand-set values.
public static class FX_MeshAxes
{
    // Bounds of every mesh under root, expressed in the local space of 'space'.
    public static bool TryGetLocalBounds(Transform root, Transform space, out Bounds bounds)
    {
        bounds = new Bounds();
        bool found = false;

        foreach (MeshFilter filter in root.GetComponentsInChildren<MeshFilter>(true))
        {
            Mesh mesh = filter.sharedMesh;
            if (mesh == null)
                continue;

            Bounds mb = mesh.bounds;
            Vector3 c = mb.center;
            Vector3 e = mb.extents;

            for (int i = 0; i < 8; i++)
            {
                Vector3 corner = c + new Vector3(
                    (i & 1) == 0 ? -e.x : e.x,
                    (i & 2) == 0 ? -e.y : e.y,
                    (i & 4) == 0 ? -e.z : e.z);

                Vector3 world = filter.transform.TransformPoint(corner);
                Vector3 local = space.InverseTransformPoint(world);

                if (!found)
                {
                    bounds = new Bounds(local, Vector3.zero);
                    found = true;
                }
                else
                {
                    bounds.Encapsulate(local);
                }
            }
        }

        return found;
    }

    // Local axis (X, Y or Z) along which the bounds are thinnest.
    public static Vector3 ThinnestAxis(Bounds b)
    {
        Vector3 s = b.size;
        if (s.x <= s.y && s.x <= s.z) return Vector3.right;
        if (s.y <= s.x && s.y <= s.z) return Vector3.up;
        return Vector3.forward;
    }

    // Of the two horizontal local axes (X, Z), the one along which the bounds are widest.
    public static Vector3 WidestHorizontalAxis(Bounds b)
    {
        return b.size.x >= b.size.z ? Vector3.right : Vector3.forward;
    }
}

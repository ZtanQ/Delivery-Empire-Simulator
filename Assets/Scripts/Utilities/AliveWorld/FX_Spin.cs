using UnityEngine;

// Steady spin around a local axis (fan blades). Pauses with the game (scaled time).
// With autoAxis on, the axis is the thinnest side of the blades' meshes,
// which is the axis a flat set of blades turns around.
public class FX_Spin : MonoBehaviour
{
    [SerializeField] private bool autoAxis = true;
    [SerializeField] private Vector3 localAxis = Vector3.forward;
    [SerializeField] private float degreesPerSecond = 540f;

    private Quaternion rest;
    private float angle;

    private void Start()
    {
        rest = transform.localRotation;

        if (autoAxis && FX_MeshAxes.TryGetLocalBounds(transform, transform, out Bounds b))
            localAxis = FX_MeshAxes.ThinnestAxis(b);
    }

    private void Update()
    {
        angle = (angle + degreesPerSecond * Time.deltaTime) % 360f;
        transform.localRotation = rest * Quaternion.AngleAxis(angle, localAxis);
    }
}

using UnityEngine;

// Slow swing from a top pivot (hanging sign), like a light draught.
// Two sine waves so the motion does not look mechanical. With autoAxis on,
// the sign swings around its widest horizontal side (front-back sway).
public class FX_Swing : MonoBehaviour
{
    [SerializeField] private bool autoAxis = true;
    [SerializeField] private Vector3 localAxis = Vector3.right;
    [SerializeField] private float amplitude = 4f;
    [SerializeField] private float period = 3.2f;
    [SerializeField] private float secondaryAmplitude = 1.2f;
    [SerializeField] private float secondaryPeriod = 1.9f;

    private Quaternion rest;
    private float phase;

    private void Start()
    {
        rest = transform.localRotation;
        phase = Random.value * 10f;

        if (autoAxis && FX_MeshAxes.TryGetLocalBounds(transform, transform, out Bounds b))
            localAxis = FX_MeshAxes.WidestHorizontalAxis(b);
    }

    private void Update()
    {
        float t = Time.time + phase;
        float angle =
            Mathf.Sin(t * 2f * Mathf.PI / period) * amplitude +
            Mathf.Sin(t * 2f * Mathf.PI / secondaryPeriod) * secondaryAmplitude;

        transform.localRotation = rest * Quaternion.AngleAxis(angle, localAxis);
    }
}

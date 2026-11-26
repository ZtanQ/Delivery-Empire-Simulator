using UnityEngine;

// Newton's cradle: ball A swings out and back, hits the row, then ball E
// swings out on the other side, and so on. Ball A is at +X and ball E at -X,
// so A swings with a positive angle around local Z and E with a negative one.
public class FX_NewtonCradle : MonoBehaviour
{
    [SerializeField] private Transform ballA;
    [SerializeField] private Transform ballE;
    [SerializeField] private Vector3 localAxis = Vector3.forward;
    [SerializeField] private float amplitude = 25f;
    [SerializeField] private float halfPeriod = 0.55f;

    private Quaternion restA;
    private Quaternion restE;

    public void Setup(Transform a, Transform e)
    {
        ballA = a;
        ballE = e;
        CacheRest();
    }

    private void Awake()
    {
        CacheRest();
    }

    private void CacheRest()
    {
        if (ballA != null) restA = ballA.localRotation;
        if (ballE != null) restE = ballE.localRotation;
    }

    private void Update()
    {
        // One full cycle = A out and back, then E out and back.
        float cycle = (Time.time / (halfPeriod * 2f)) % 2f;
        float swing = Mathf.Sin((cycle % 1f) * Mathf.PI) * amplitude;

        bool sideA = cycle < 1f;
        Set(ballA, restA, sideA ? swing : 0f);
        Set(ballE, restE, sideA ? 0f : -swing);
    }

    private void Set(Transform ball, Quaternion rest, float angle)
    {
        if (ball == null)
            return;

        ball.localRotation = rest * Quaternion.AngleAxis(angle, localAxis);
    }
}

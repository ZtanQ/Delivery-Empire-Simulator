using System;
using UnityEngine;

// Turns the clock hands with the phone's real time. The second hand ticks
// once per second with a small overshoot. The hands turn around their local
// Y axis (the clock model is rotated 90 degrees on X, so local Y is the face
// normal); a positive angle is clockwise for a player facing the clock
// (checked in the editor on 25 Nov). Each hand's rest direction is read from
// its mesh, so the clock shows the right time whatever pose the model has.
public class FX_ClockHands : MonoBehaviour
{
    [SerializeField] private Transform hourHand;
    [SerializeField] private Transform minuteHand;
    [SerializeField] private Transform secondHand;
    [SerializeField] private Vector3 localAxis = Vector3.up;
    [SerializeField] private float direction = 1f;
    [SerializeField] private float tickTime = 0.12f;

    private Quaternion hourRest;
    private Quaternion minuteRest;
    private Quaternion secondRest;
    private float hourOffset;
    private float minuteOffset;
    private float secondOffset;

    public void Setup(Transform hour, Transform minute, Transform second)
    {
        hourHand = hour;
        minuteHand = minute;
        secondHand = second;
        CacheRest();
    }

    private void Awake()
    {
        CacheRest();
    }

    private void CacheRest()
    {
        if (hourHand != null) { hourRest = hourHand.localRotation; hourOffset = RestAngle(hourHand); }
        if (minuteHand != null) { minuteRest = minuteHand.localRotation; minuteOffset = RestAngle(minuteHand); }
        if (secondHand != null) { secondRest = secondHand.localRotation; secondOffset = RestAngle(secondHand); }
    }

    // Clockwise angle from 12 o'clock that the hand points to in its rest pose.
    private float RestAngle(Transform hand)
    {
        if (!FX_MeshAxes.TryGetLocalBounds(hand, hand, out Bounds b))
            return 0f;

        Vector3 pointing = Vector3.ProjectOnPlane(b.center, localAxis);
        Vector3 up = Vector3.ProjectOnPlane(hand.InverseTransformDirection(Vector3.up), localAxis);
        if (pointing.sqrMagnitude < 1e-10f || up.sqrMagnitude < 1e-10f)
            return 0f;

        return Vector3.SignedAngle(up, pointing, localAxis) * direction;
    }

    private void Update()
    {
        DateTime now = DateTime.Now;
        float seconds = now.Second;
        float fraction = now.Millisecond / 1000f;

        // Tick: the hand jumps in the first part of each second, with a small overshoot.
        float tick = fraction < tickTime ? EaseOutBack(fraction / tickTime) : 1f;
        float secondAngle = (seconds - 1f + tick) * 6f;
        float minuteAngle = (now.Minute + seconds / 60f) * 6f;
        float hourAngle = ((now.Hour % 12) + now.Minute / 60f) * 30f;

        Apply(hourHand, hourRest, hourAngle - hourOffset);
        Apply(minuteHand, minuteRest, minuteAngle - minuteOffset);
        Apply(secondHand, secondRest, secondAngle - secondOffset);
    }

    private void Apply(Transform hand, Quaternion rest, float angle)
    {
        if (hand == null)
            return;

        hand.localRotation = rest * Quaternion.AngleAxis(angle * direction, localAxis);
    }

    private static float EaseOutBack(float t)
    {
        const float c1 = 1.70158f;
        const float c3 = c1 + 1f;
        float p = t - 1f;
        return 1f + c3 * p * p * p + c1 * p * p;
    }
}

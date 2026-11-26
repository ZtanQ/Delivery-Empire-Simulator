using System.Collections.Generic;
using UnityEngine;

// Truck body motion: a soft settle bounce when the truck stops at the dock,
// a small engine idle while parked and a light bump while driving.
// Only the model parts move (vertical offset); CargoSpawnPoint and the boxes
// stay where CTRL_TruckDelivery puts them, so picking up boxes is not affected.
public class FX_TruckSuspension : MonoBehaviour
{
    [SerializeField] private string cargoPointName = "CargoSpawnPoint";

    [Header("Settle bounce when the truck stops")]
    [SerializeField] private float settleDrop = 0.06f;
    [SerializeField] private float settleFrequency = 2.2f;
    [SerializeField] private float settleDamping = 3.5f;

    [Header("Engine idle while parked")]
    [SerializeField] private float idleAmplitude = 0.006f;
    [SerializeField] private float idleFrequency = 7f;

    [Header("Driving")]
    [SerializeField] private float driveAmplitude = 0.015f;
    [SerializeField] private float driveFrequency = 3f;
    [SerializeField] private float movingSpeed = 0.05f;

    private readonly List<Transform> parts = new List<Transform>();
    private readonly List<Vector3> restPositions = new List<Vector3>();

    private Vector3 lastPosition;
    private bool wasMoving;
    private float settleTimer = -1f;

    private void Start()
    {
        foreach (Transform child in transform)
        {
            if (child.name == cargoPointName)
                continue;

            parts.Add(child);
            restPositions.Add(child.localPosition);
        }

        lastPosition = transform.position;
    }

    private void LateUpdate()
    {
        float dt = Time.deltaTime;
        if (dt <= 0f)
            return;

        float speed = (transform.position - lastPosition).magnitude / dt;
        lastPosition = transform.position;

        bool moving = speed > movingSpeed;
        if (wasMoving && !moving)
            settleTimer = 0f;
        wasMoving = moving;

        float offset;
        if (moving)
        {
            offset = Mathf.Sin(Time.time * driveFrequency * 2f * Mathf.PI) * driveAmplitude;
        }
        else
        {
            offset = Mathf.Sin(Time.time * idleFrequency * 2f * Mathf.PI) * idleAmplitude;

            if (settleTimer >= 0f)
            {
                settleTimer += dt;
                float decay = Mathf.Exp(-settleDamping * settleTimer);
                offset += -settleDrop * decay * Mathf.Cos(settleTimer * settleFrequency * 2f * Mathf.PI);

                if (decay < 0.01f)
                    settleTimer = -1f;
            }
        }

        for (int i = 0; i < parts.Count; i++)
        {
            if (parts[i] != null)
                parts[i].localPosition = restPositions[i] + Vector3.up * offset;
        }
    }
}

// TestMover.cs
//
// Minimal WASD walk controller for testing level collision (walls, door,
// loading dock gaps, floor). Not a final player controller — just enough
// to push into geometry and confirm it blocks or lets you through.
//
// SETUP
// 1. Put this file anywhere under Assets/Scripts (a normal script, not Editor).
// 2. Select your test Capsule in the Hierarchy.
// 3. Component > Physics > Character Controller (if it doesn't have one yet).
//    - Set Center Y to roughly half the capsule's height (e.g. 1) so it
//      doesn't spawn half-buried in the floor.
// 4. Add Component > this script (TestMover).
// 5. Press Play, click into the Game view, and use WASD to move,
//    mouse to look around, Space to jump.

using UnityEngine;

[RequireComponent(typeof(CharacterController))]
public class TestMover : MonoBehaviour
{
    [Header("Movement")]
    public float moveSpeed = 4f;
    public float gravity = -20f;
    public float jumpHeight = 1.2f;

    [Header("Look")]
    public float mouseSensitivity = 2f;
    public Camera playerCamera; // optional: assign a camera to child under this object for a first-person view

    private CharacterController controller;
    private Vector3 verticalVelocity;
    private float cameraPitch;

    private void Awake()
    {
        controller = GetComponent<CharacterController>();

        if (playerCamera == null)
        {
            playerCamera = GetComponentInChildren<Camera>();
        }
    }

    private void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
    }

    private void Update()
    {
        HandleLook();
        HandleMove();

        // Press Escape to release the mouse cursor at any time.
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Cursor.lockState = CursorLockMode.None;
        }
    }

    private void HandleLook()
    {
        if (playerCamera == null)
        {
            return;
        }

        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity;
        float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity;

        transform.Rotate(Vector3.up * mouseX);

        cameraPitch -= mouseY;
        cameraPitch = Mathf.Clamp(cameraPitch, -80f, 80f);
        playerCamera.transform.localEulerAngles = new Vector3(cameraPitch, 0f, 0f);
    }

    private void HandleMove()
    {
        float inputX = Input.GetAxis("Horizontal"); // A/D
        float inputZ = Input.GetAxis("Vertical");   // W/S

        Vector3 move = transform.right * inputX + transform.forward * inputZ;
        controller.Move(move * moveSpeed * Time.deltaTime);

        // Simple gravity + jump
        if (controller.isGrounded)
        {
            verticalVelocity.y = -1f; // small downward force to keep grounded flag reliable

            if (Input.GetButtonDown("Jump"))
            {
                verticalVelocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
            }
        }
        else
        {
            verticalVelocity.y += gravity * Time.deltaTime;
        }

        controller.Move(verticalVelocity * Time.deltaTime);
    }
}
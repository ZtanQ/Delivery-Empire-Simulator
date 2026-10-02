#if UNITY_EDITOR || UNITY_STANDALONE

using UnityEngine;
using UnityEngine.InputSystem;

public class TestControls : MonoBehaviour
{
    [Header("References")]
    [SerializeField] private CTRL_FirstPersonController _mobileController;
    [SerializeField] private CTRL_FirstPersonCamera _mobileCamera;
    [SerializeField] private ContextualActionButton _actionButton;

    [Header("PC Movement")]
    [SerializeField] private float _moveSpeed = 5f;
    [SerializeField] private float _lookSensitivity = 0.15f;

    [Header("Optional Jump")]
    [SerializeField] private bool _enableJump;
    [SerializeField] private float _jumpForce = 6f;
    [SerializeField] private float _gravity = -20f;

    private CharacterController _characterController;
    private Camera _playerCamera;

    private float _yaw;
    private float _pitch;
    private float _verticalVelocity;

    private bool _cursorLocked;
    private bool _ignoreMouseDelta;

    private void Awake()
    {
        _characterController = GetComponent<CharacterController>();
        _playerCamera = GetComponentInChildren<Camera>();

        if (_playerCamera != null)
        {
            _yaw = transform.eulerAngles.y;

            _pitch = _playerCamera.transform.localEulerAngles.x;

            if (_pitch > 180f)
                _pitch -= 360f;
        }
    }

    private void Start()
    {
        // PC testing takes full control.
        if (_mobileController != null)
            _mobileController.enabled = false;

        if (_mobileCamera != null)
            _mobileCamera.enabled = false;

        LockCursor();
    }

    private void Update()
    {
        HandleCursor();

        if (!_cursorLocked)
            return;

        HandleLook();
        HandleMovement();
        HandleActions();
    }

    private void HandleCursor()
    {
        if (Keyboard.current != null &&
            Keyboard.current.escapeKey.wasPressedThisFrame)
        {
            UnlockCursor();
            return;
        }

        // Right-click re-enters the game after ESC.
        if (!_cursorLocked &&
            Mouse.current != null &&
            Mouse.current.rightButton.wasPressedThisFrame)
        {
            LockCursor();

            // Ignore the click's mouse delta.
            _ignoreMouseDelta = true;
        }
    }

    private void LockCursor()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;

        _cursorLocked = true;
    }

    private void UnlockCursor()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;

        _cursorLocked = false;
        _ignoreMouseDelta = true;
    }

    private void HandleLook()
    {
        if (Mouse.current == null ||
            _playerCamera == null)
        {
            return;
        }

        if (_ignoreMouseDelta)
        {
            _ignoreMouseDelta = false;
            return;
        }

        Vector2 mouseDelta =
            Mouse.current.delta.ReadValue();

        _yaw += mouseDelta.x * _lookSensitivity;
        _pitch -= mouseDelta.y * _lookSensitivity;

        _pitch = Mathf.Clamp(
            _pitch,
            -80f,
            80f);

        transform.localRotation =
            Quaternion.Euler(
                0f,
                _yaw,
                0f);

        _playerCamera.transform.localRotation =
            Quaternion.Euler(
                _pitch,
                0f,
                0f);
    }

    private void HandleMovement()
    {
        if (Keyboard.current == null)
            return;

        Vector2 input = Vector2.zero;

        if (Keyboard.current.wKey.isPressed)
            input.y += 1f;

        if (Keyboard.current.sKey.isPressed)
            input.y -= 1f;

        if (Keyboard.current.dKey.isPressed)
            input.x += 1f;

        if (Keyboard.current.aKey.isPressed)
            input.x -= 1f;

        input = Vector2.ClampMagnitude(input, 1f);

        Vector3 forward = transform.forward;
        Vector3 right = transform.right;

        forward.y = 0f;
        right.y = 0f;

        forward.Normalize();
        right.Normalize();

        Vector3 movement =
            forward * input.y +
            right * input.x;

        _characterController.Move(
            movement *
            _moveSpeed *
            Time.deltaTime);

        HandleGravity();
    }

    private void HandleGravity()
    {
        if (_characterController.isGrounded)
        {
            if (_verticalVelocity < 0f)
                _verticalVelocity = -2f;

            if (_enableJump &&
                Keyboard.current != null &&
                Keyboard.current.spaceKey.wasPressedThisFrame)
            {
                _verticalVelocity = _jumpForce;
            }
        }

        _verticalVelocity +=
            _gravity *
            Time.deltaTime;

        _characterController.Move(
            Vector3.up *
            _verticalVelocity *
            Time.deltaTime);
    }

    private void HandleActions()
    {
        if (Keyboard.current == null)
            return;

        if (Keyboard.current.eKey.wasPressedThisFrame)
        {
            if (_actionButton != null)
                _actionButton.HandleTap();
        }
    }

    private void OnDisable()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }
}

#endif
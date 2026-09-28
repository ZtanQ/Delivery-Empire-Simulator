using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(CharacterController))]
public class TestControls : MonoBehaviour
{
    [Header("Movement")]
    [SerializeField] private float _moveSpeed = 4f;
    [SerializeField] private float _gravity = -20f;
    [SerializeField] private float _jumpHeight = 1.2f;

    [Header("Look")]
    [SerializeField] private float _mouseSensitivity = 0.15f;
    [SerializeField] private float _verticalLookLimit = 80f;
    [SerializeField] private Camera _playerCamera;
    [SerializeField] private ContextualActionButton _actionButton;

    private CharacterController _characterController;
    private CTRL_FirstPersonController _mobileController;
    private CTRL_FirstPersonCamera _mobileCamera;

    private float _verticalVelocity;
    private float _cameraPitch;
    private bool _pcMode;

    private void Awake()
    {
        _characterController = GetComponent<CharacterController>();

        if (_playerCamera == null)
        {
            _playerCamera = GetComponentInChildren<Camera>();
        }

        _mobileController = GetComponent<CTRL_FirstPersonController>();

        if (_playerCamera != null)
        {
            _mobileCamera =
                _playerCamera.GetComponent<CTRL_FirstPersonCamera>();
        }
    }

private void Update()
{
    if (!_pcMode && IsPCInputDetected())
    {
        EnablePCMode();
    }

    if (!_pcMode)
    {
        return;
    }

    if (Keyboard.current.escapeKey.wasPressedThisFrame)
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        return;
    }

    // Click the Game view to capture the mouse again.
    if (Mouse.current.leftButton.wasPressedThisFrame && Cursor.lockState != CursorLockMode.Locked)
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }
    
    if (Keyboard.current.eKey.wasPressedThisFrame)
    {
        _actionButton.HandleTap();
    }

    // Do not rotate the camera while the cursor is free.
    if (Cursor.lockState == CursorLockMode.Locked)
    {
        HandleLook();
    }
    

    HandleMove();
}

    private bool IsPCInputDetected()
    {
        if (Keyboard.current == null || Mouse.current == null)
        {
            return false;
        }

        return
            Keyboard.current.anyKey.isPressed ||
            Mouse.current.delta.ReadValue().sqrMagnitude > 0f;
    }

    private void EnablePCMode()
    {
        _pcMode = true;

        if (_mobileController != null)
        {
            _mobileController.enabled = false;
        }

        if (_mobileCamera != null)
        {
            _mobileCamera.enabled = false;
        }

        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;

        _cameraPitch = _playerCamera.transform.localEulerAngles.x;

        if (_cameraPitch > 180f)
        {
            _cameraPitch -= 360f;
        }
    }

private void HandleLook()
{
    if (_playerCamera == null || Mouse.current == null)
    {
        return;
    }

    Vector2 mouseDelta = Mouse.current.delta.ReadValue();

    float mouseX = mouseDelta.x * _mouseSensitivity;
    float mouseY = mouseDelta.y * _mouseSensitivity;

    transform.Rotate(Vector3.up * mouseX);

    _cameraPitch -= mouseY;

    _cameraPitch = Mathf.Clamp(
        _cameraPitch,
        -_verticalLookLimit,
        _verticalLookLimit
    );

    _playerCamera.transform.localRotation =
        Quaternion.Euler(_cameraPitch, 0f, 0f);
}

    private void HandleMove()
    {
        if (Keyboard.current == null)
        {
            return;
        }

        float inputX = 0f;
        float inputZ = 0f;

        if (Keyboard.current.aKey.isPressed)
        {
            inputX -= 1f;
        }

        if (Keyboard.current.dKey.isPressed)
        {
            inputX += 1f;
        }

        if (Keyboard.current.sKey.isPressed)
        {
            inputZ -= 1f;
        }

        if (Keyboard.current.wKey.isPressed)
        {
            inputZ += 1f;
        }

        Vector3 move =
            transform.right * inputX +
            transform.forward * inputZ;

        move = Vector3.ClampMagnitude(move, 1f);
        move *= _moveSpeed;

        if (_characterController.isGrounded)
        {
            _verticalVelocity = -1f;

            if (Keyboard.current.spaceKey.wasPressedThisFrame)
            {
                _verticalVelocity =
                    Mathf.Sqrt(_jumpHeight * -2f * _gravity);
            }
        }
        else
        {
            _verticalVelocity += _gravity * Time.deltaTime;
        }

        move.y = _verticalVelocity;

        _characterController.Move(
            move * Time.deltaTime
        );
    }
}
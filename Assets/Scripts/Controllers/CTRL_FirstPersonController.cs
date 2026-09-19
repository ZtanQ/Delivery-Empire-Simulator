using UnityEngine;

[RequireComponent(typeof(CharacterController))]
public class CTRL_FirstPersonController : MonoBehaviour
{
    [SerializeField] private CTRL_VirtualJoystick _joystick;
    [SerializeField] private Transform _playerCamera;
    [SerializeField] private float _moveSpeed = 5f;
    [SerializeField] private float _gravity = -20f;

    private CharacterController _characterController;
    private float _verticalVelocity;

    private void Awake()
    {
        _characterController = GetComponent<CharacterController>();
    }

    private void Update()
    {
        MovePlayer();
    }

    private void MovePlayer()
    {
        Vector2 input = _joystick.MovementInput;

        // Movement follows the direction the camera is facing.
        Vector3 forward = _playerCamera.forward;
        Vector3 right = _playerCamera.right;

        // Looking up or down should not move the player vertically.
        forward.y = 0f;
        right.y = 0f;

        forward.Normalize();
        right.Normalize();

        Vector3 movement = forward * input.y + right * input.x;
        movement *= _moveSpeed;

        // CharacterController does not apply gravity automatically.
        if (_characterController.isGrounded)
        {
            _verticalVelocity = -2f;
        }
        else
        {
            _verticalVelocity += _gravity * Time.deltaTime;
        }

        movement.y = _verticalVelocity;

        _characterController.Move(movement * Time.deltaTime);
    }
}
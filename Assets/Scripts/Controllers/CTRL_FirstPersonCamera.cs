using UnityEngine;
using UnityEngine.InputSystem.EnhancedTouch;

using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;

public class CTRL_FirstPersonCamera : MonoBehaviour
{
    [SerializeField] private Transform _player;
    [SerializeField] private float _lookSensitivity = 0.15f;
    [SerializeField] private float _lookDamping = 0.08f;
    [SerializeField] private float _verticalLookLimit = 80f;

    private Camera _camera;

    private float _targetYaw;
    private float _targetPitch;

    private float _currentPitch;
    private float _yawVelocity;
    private float _pitchVelocity;

    private void Awake()
    {
        _camera = GetComponent<Camera>();

        _camera.fieldOfView = 75f;

        _targetYaw = _player.eulerAngles.y;
    }

    private void OnEnable()
    {
        EnhancedTouchSupport.Enable();
    }

    private void OnDisable()
    {
        EnhancedTouchSupport.Disable();
    }

    private void Update()
    {
        ReadTouchInput();
        UpdateCameraRotation();
    }

    private void ReadTouchInput()
    {
        foreach (Touch touch in Touch.activeTouches)
        {
            // The right half of the screen is reserved for looking.
            if (touch.screenPosition.x <= Screen.width * 0.5f)
                continue;

            if (touch.phase != UnityEngine.InputSystem.TouchPhase.Moved)
                continue;

            _targetYaw += touch.delta.x * _lookSensitivity;
            _targetPitch -= touch.delta.y * _lookSensitivity;

            _targetPitch = Mathf.Clamp(
                _targetPitch,
                -_verticalLookLimit,
                _verticalLookLimit
            );

            // Only use one right-side touch for camera look.
            break;
        }
    }

    private void UpdateCameraRotation()
    {
        float yaw = Mathf.SmoothDampAngle(
            _player.eulerAngles.y,
            _targetYaw,
            ref _yawVelocity,
            _lookDamping
        );

        _currentPitch = Mathf.SmoothDamp(
            _currentPitch,
            _targetPitch,
            ref _pitchVelocity,
            _lookDamping
        );

        _player.rotation = Quaternion.Euler(0f, yaw, 0f);
        transform.localRotation = Quaternion.Euler(
            _currentPitch,
            0f,
            0f
        );
    }
}
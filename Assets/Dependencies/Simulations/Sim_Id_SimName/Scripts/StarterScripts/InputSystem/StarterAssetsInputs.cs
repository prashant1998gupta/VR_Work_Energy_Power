using UnityEngine;
#if ENABLE_INPUT_SYSTEM  
using UnityEngine.InputSystem;
#endif
namespace Inspirit.Simulations.Template
{

	public class StarterAssetsInputs : MonoBehaviour
	{
		[Header("Character Input Values")]
		public Vector2 move;
		public Vector2 look;
		public Vector2 pointePosition;
		public bool cameraSwitch;
		public bool jump;
		public bool sprint;
		public bool pickUp;

		[Header("Movement Settings")]
		public bool analogMovement;

#if !UNITY_IOS || !UNITY_ANDROID
		[Header("Mouse Cursor Settings")]
		public bool cursorLocked = true;
		public bool cursorInputForLook = true;
#endif

#if ENABLE_INPUT_SYSTEM 
		public void OnMove(InputValue value)
		{
			MoveInput(value.Get<Vector2>());
		}

		public void OnLook(InputValue value)
		{
			if (cursorInputForLook)
			{
				LookInput(value.Get<Vector2>());
			}
		}

		public void OnJump(InputValue value)
		{
			JumpInput(value.isPressed);
		}

		public void OnSprint(InputValue value)
		{
			SprintInput(value.isPressed);
		}

		public void OnPickUp(InputValue value)
		{
			PickUpInput(value.isPressed);
		}

		public void OnPointerPosition(InputValue value)
		{
			PointerPositionInput(value.Get<Vector2>());

		}

		public void OnCameraSwitch(InputValue value)
		{
			CameraSwitchInput(value.isPressed);

		}
#else
	// old input sys if we do decide to have it (most likely wont)...
#endif


		public void MoveInput(Vector2 newMoveDirection)
		{
			move = newMoveDirection;
		}

		public void LookInput(Vector2 newLookDirection)
		{
			look = newLookDirection;
		}

		public void JumpInput(bool newJumpState)
		{
			jump = newJumpState;
		}

		public void SprintInput(bool newSprintState)
		{
			sprint = newSprintState;
		}

		public void PickUpInput(bool newPickUpState)
		{
			pickUp = newPickUpState;
		}
		public void PointerPositionInput(Vector2 newPointerPosition)
		{
			pointePosition = newPointerPosition;
		}
		public void CameraSwitchInput(bool newCamSwitchState)
		{
			cameraSwitch = newCamSwitchState;
		}
	}

}
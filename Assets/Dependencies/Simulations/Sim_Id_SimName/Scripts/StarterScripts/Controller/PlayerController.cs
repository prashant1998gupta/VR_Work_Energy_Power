using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.Template
{
    public enum PlayerCameraMode { FreeRoam, Fixed};


    public class PlayerController : SingeltonBase<PlayerController>
    {
        private PlayerCameraMode currentCameraMode;
        public static event Action<PlayerCameraMode> OnCameraModeChanged;
        private StarterAssetsInputs _input;

        protected override void Awake()
        {
            base.Awake();
            _input = GetComponent<StarterAssetsInputs>();
        }

        private void Start()
        {
            //CursorController.ToggleCursorState(true);
        }

        private void Update()
        {
            CheckIfCameraSwitched();
        }

        public void ChangeCameraMode(PlayerCameraMode newMode)
        {
            if (currentCameraMode == newMode)
            {
                Debug.Log("Cannot re-assign same camera mode");
                return;
            }

            currentCameraMode = newMode;
            SetCameraMode();
        }

        private void SetCameraMode()
        {
            OnCameraModeChanged?.Invoke(currentCameraMode);
            switch (currentCameraMode)
            {
                case PlayerCameraMode.FreeRoam:
                    SwitchToFreeRoam();
                    return;
                case PlayerCameraMode.Fixed:
                    SwitchToFixed();
                    return;
            }

        }

        private void SwitchToFixed()
        {
            Debug.Log("Fixed");
        }

        private void SwitchToFreeRoam()
        {
            Debug.Log("Free roam");
        }

        private void CheckIfCameraSwitched()
        {
            if (!_input.cameraSwitch)
            {
                return;
            }
            _input.cameraSwitch = false;
            var newCameMode = currentCameraMode == PlayerCameraMode.FreeRoam ? PlayerCameraMode.Fixed : PlayerCameraMode.FreeRoam;
            ChangeCameraMode(newCameMode);
        }
    }
}

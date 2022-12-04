using System;
using UnityEngine;

namespace Inspirit.Simulations.Template
{
    public class InstructionPanel : MonoBehaviour
    {
        PlayerMovementController playerMovementController;
        public event Action StartGameButtonPressed;

        void Awake()
        {
            playerMovementController = FindObjectOfType<PlayerMovementController>();
        }

        public void OnClickStartGame()
        {
            GazeInputModule.Instance.SwitchToFreeRoamMode();
            playerMovementController.SetPlayerMovement(true);

            gameObject.SetActive(false);
            StartGameButtonPressed?.Invoke();
        }
    }
}

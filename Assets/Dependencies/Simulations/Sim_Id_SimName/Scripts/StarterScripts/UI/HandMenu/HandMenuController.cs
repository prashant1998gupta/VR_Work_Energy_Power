using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// A script to manage the Hand Menu
/// </summary>
namespace Inspirit.Simulations.Template
{
    public class HandMenuController : MonoBehaviour
    {
        public GameObject[] menuPanels;
        public BNG.LocomotionManager locomotionManager; //This reference should come from XR RIG prefab
        public bool isTeleport;
        // Start is called before the first frame update
        void Start()
        {
            isTeleport = false;
            SetToggle();
        }

        // Update is called once per frame
        void Update()
        {

        }

        public Button teleportButton;
        public void SetTeleport()
        {
            locomotionManager.ChangeLocomotionType(BNG.LocomotionType.Teleport);
            teleportButton.interactable = false;
            joystickButton.interactable = true;
        }

        public Button joystickButton;
        public void SetJoystick()
        {
            locomotionManager.ChangeLocomotionType(BNG.LocomotionType.SmoothLocomotion);
            joystickButton.interactable = false;
            teleportButton.interactable = true;
        }

        public void SetToggle()
        {

            teleportButton.interactable = !isTeleport;
            joystickButton.interactable = isTeleport;
            locomotionManager.LocomotionToggle();
            isTeleport = !isTeleport;
        }
        public void RearrangeMenuPanels(int index)
        {
            menuPanels[index].transform.SetAsLastSibling();
        }

        public void ExitCall()
        {
             
        }
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

namespace Inspirit.Simulations.Template
{
    /// <summary>
    /// This is a controller script to handle Cinemachine Camera view changes
    /// </summary>
    public class CameraSwitchController : MonoBehaviour
    {
        public static CinemachineVirtualCamera activeCamera = null;
        public CinemachineVirtualCamera defaultCamReference;
        public static CinemachineVirtualCamera defaultCamera;

        public static CinemachineVirtualCamera capturedCam;
        public GameObject triggerZoneUIreference;
        public static GameObject triggerZoneUI;
        public GameObject gaze;
        static List<CinemachineVirtualCamera> cameraList = new List<CinemachineVirtualCamera>();

        private void Awake()
        {
            defaultCamera = defaultCamReference;
            triggerZoneUI = triggerZoneUIreference;
            triggerZoneUI.SetActive(false);
        }
        public static bool isActiveCam(CinemachineVirtualCamera curCam)///Check if given cam is active camera
        {
            return curCam == activeCamera;
        }

        public static void SwitchCamera(CinemachineVirtualCamera camera)///Makes the given camera the highest priority 
        {
            activeCamera = camera;
            camera.Priority = 10;
            foreach (CinemachineVirtualCamera c in cameraList)
            {
                if (c != camera)
                {
                    c.Priority = 0;
                }
            }
        }



        public static void CaptureCam(CinemachineVirtualCamera camera, bool status)///Capture camera and enables/disables UI popup
        {
            capturedCam = camera;
            //print("CAM CAPTURED " + capturedCam);
            triggerZoneUI.SetActive(status);

        }
        public static void Register(CinemachineVirtualCamera camera) ///Registers Camera to list
        {
            cameraList.Add(camera);
        }

        public static void Unregister(CinemachineVirtualCamera camera) ///Unregisters Camera from list
        {
            cameraList.Remove(camera);
        }

    }
}
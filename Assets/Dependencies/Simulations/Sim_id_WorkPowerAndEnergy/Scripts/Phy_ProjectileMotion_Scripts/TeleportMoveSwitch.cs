using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TeleportMoveSwitch : MonoBehaviour
    {
        public VRIndoorMove teleport;
        public OVRPlayerController move;

        private void Update()
        {
            if (OVRInput.Get(OVRInput.RawButton.LThumbstick))
                move.enabled = false;
            else
            {
                if (move.enabled == false)
                    StartCoroutine(EnableMove());
            }
        }

        IEnumerator EnableMove()
        {
            yield return new WaitForSeconds(0.5f);
            move.enabled = true;
        }
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class OculusInputModule : VRInputModule
    {
        public OVRInput.Controller m_source = OVRInput.Controller.RHand;
        public OVRInput.RawButton m_Click = OVRInput.RawButton.RHandTrigger;
        public override void Process()
        {
            base.Process();

            // Press
            if (OVRInput.GetDown(m_Click, m_source))
                ProcessPress(data);

            if (OVRInput.GetUp(m_Click, m_source))
                ProcessRelease(data);

        }
    }
}

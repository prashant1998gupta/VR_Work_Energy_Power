using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BNG;

namespace Inspirit.Simulations.VR_Test
{
    [RequireComponent(typeof(GraphicRaycaster))]
    [RequireComponent(typeof(Canvas))]
    public class VRAwakeCanvas : VRCanvas
    {
        private void OnEnable()
        {
            VRUISystem.Instance.AddCanvas(GetComponent<Canvas>());
        }
    }
}

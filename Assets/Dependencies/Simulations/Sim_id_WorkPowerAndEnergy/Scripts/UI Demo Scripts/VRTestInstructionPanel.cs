using System;
using UnityEngine;

namespace Inspirit.Simulations.VR_Test
{
    public class VRTestInstructionPanel : MonoBehaviour
    {
        public event Action StartGameButtonPressed;
        public void OnClickStartGame()
        {
            gameObject.SetActive(false);
            StartGameButtonPressed?.Invoke();
        }
    }
}

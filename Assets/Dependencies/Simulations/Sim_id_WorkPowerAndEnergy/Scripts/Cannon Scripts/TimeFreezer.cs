using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TimeFreezer : MonoBehaviour
    {
        private bool _timeStopped;
        public void FreezeTime()
        {
            if (_timeStopped == false)
            {
                Time.timeScale = 0.0000001f;
                _timeStopped = true;
            }
            else
            {
                Time.timeScale = 1.0f;
                _timeStopped = false;
            }
        }
    }
}

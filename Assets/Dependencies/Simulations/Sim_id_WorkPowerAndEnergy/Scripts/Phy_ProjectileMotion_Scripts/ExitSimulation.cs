using UnityEngine;
using Inspirit.Mediators.Simulations;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class ExitSimulation : MonoBehaviour
    {
        public void OnClickExitSimulation()
        {
            SimulationEvents.OnExit?.Invoke();
            Debug.Log("-------OnExitInvoked---------");
        }
    }
}

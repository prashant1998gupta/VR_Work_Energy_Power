using UnityEngine;
using UnityEngine.Events;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class ProjectileInfoHandler : MonoBehaviour
    {
        bool _launched;
        bool _collided;

        [SerializeField] UnityEvent LaunchStarted;
        [SerializeField] UnityEvent ObjectLanded;

        public void StartLaunch()
        {
            if (!_launched)
            {
                _launched = true;

                LaunchStarted.Invoke();

                _collided = false;
            }
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (_launched && !_collided)
            {
                ObjectLanded.Invoke();

                _collided = true;
                _launched = false;
            }
        }
    }
}
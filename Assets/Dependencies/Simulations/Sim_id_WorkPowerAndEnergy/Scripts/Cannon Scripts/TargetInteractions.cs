using UnityEngine;
using UnityEngine.Events;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TargetInteractions : MonoBehaviour
    {
        [SerializeField] UnityEvent<int> _cannonTargetReached;
        [SerializeField] int _inputTaskIndex;
        GameObject _projectileObject;

        private void OnTriggerEnter(Collider other)
        {
            _projectileObject = other.gameObject;

            if (_projectileObject.name.Contains("Cannonball"))
            {
                print("Target Reached");
                _cannonTargetReached.Invoke(_inputTaskIndex);
                gameObject.SetActive(false);
            }
        }
    }
}
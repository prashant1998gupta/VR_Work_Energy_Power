using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class ProjectileThrow : MonoBehaviour
    {
        private Vector3 _throwingDirection;
        [SerializeField] private Transform _handTransform;
        private Vector3 _handPosition;
        [SerializeField] private float _throwingSensitivity;
        public void ReleaseObject()
        {
            _throwingDirection =  GetComponent<Rigidbody>().velocity;
            /*
            _handPosition = _handTransform.position;
            _throwingDirection = _handTransform.position - _handPosition;
            _throwingDirection *= _throwingSensitivity;
            */
            gameObject.GetComponent<Launch>().LaunchProjectile(_throwingDirection);
        }
    }
}

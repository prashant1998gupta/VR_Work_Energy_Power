using System.Collections;
using UnityEngine;
using UnityEngine.Events;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class VelocityForceTranslator : MonoBehaviour
    {
        Rigidbody _rigidbody;
        Vector3 _lastVelocity;
        Vector3 _resultingForce;

        [SerializeField] float _baseForceMagnitude;
        [SerializeField] float _accelerationMultiplier;

        [SerializeField] UnityEvent ObjectLaunched;

        private void Awake()
        {
            _rigidbody = GetComponent<Rigidbody>();
        }

        public void ThrowObjectWithForce()
        {
            StartCoroutine(ThrowObjectCoroutine());
        }

        IEnumerator ThrowObjectCoroutine()
        {
            yield return new WaitForFixedUpdate();
            _lastVelocity = _rigidbody.velocity;
            _rigidbody.velocity = Vector3.zero;
            _rigidbody.angularVelocity = Vector3.zero;
            ApplyForceFromVelocity(_lastVelocity);
            ObjectLaunched.Invoke();
        }

        private void ApplyForceFromVelocity(Vector3 velocity)
        {
            _rigidbody.AddForce(ConvertVelocityToForce(velocity), ForceMode.Force);
        }

        private Vector3 ConvertVelocityToForce(Vector3 velocity)
        {
            //First, we get direction from accelerations obtained from velocity from VR Rig hands.
            Vector3 accelerationDirection = (velocity / Time.fixedDeltaTime).normalized;
            //Then, we take magnitude of accelaration as reference and reduce it.
            float accelerationMagnitude = (velocity / Time.fixedDeltaTime).magnitude * _accelerationMultiplier;

            //We calculate resulting force with previous calculations.
            _resultingForce = _baseForceMagnitude * accelerationDirection * accelerationMagnitude;
            //We apply force with ForceMode.Force so mass is considered for simulation.
            _rigidbody.AddForce(_resultingForce, ForceMode.Force);

            return _resultingForce;
        }

        public void SetBaseForceMagnitude(float baseForceMagnitude)
        {
            _baseForceMagnitude = baseForceMagnitude;
        }

        public void SetAccelerationMultiplier(float accelerationMultiplier)
        {
            _accelerationMultiplier = accelerationMultiplier;
        }

        private void OnEnable()
        {
            PropsDemoProperties.NotifyBaseForce += SetBaseForceMagnitude;
            PropsDemoProperties.NotifyAccelerationMultiplier += SetAccelerationMultiplier;
        }

        private void OnDisable()
        {
            PropsDemoProperties.NotifyBaseForce -= SetBaseForceMagnitude;
            PropsDemoProperties.NotifyAccelerationMultiplier -= SetAccelerationMultiplier;
        }
    }
}
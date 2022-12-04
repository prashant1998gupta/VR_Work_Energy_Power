using UnityEngine;
using TMPro;
using System.Collections;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class VectorDrawer : MonoBehaviour
    {
        [SerializeField] GameObject _projectileInfo;
        [SerializeField] GameObject _initArrowContainer;
        [SerializeField] GameObject _maxHeightArrowContainer;
        [SerializeField] GameObject _finalArrowContainer;
        GameObject _vectorResolution;

        Transform _initArrowTransform;
        Transform _maxHeightArrowTransform;
        Transform _finalArrowTransform;

        Vector3 _velocityDirection;
        Vector3 _origin;

        Rigidbody _rigidBody;

        float _velocityMagnitude;

        Vector3 _originalLocalScale = new Vector3(1f,1f,1f);

        GameObject _initVelocity;
        GameObject _maxHeightVelocity;
        GameObject _finalVelocity;

        Transform _initVelocityTransform;
        Transform _maxHeightVelocityTransform;
        Transform _finalVelocityTransform;

        GameObject _maxHeightVelocityZ;
        GameObject _maxHeightVelocityY;
        GameObject _maxHeightVelocityX;

        GameObject _initVelocityZ;
        GameObject _initVelocityY;
        GameObject _initVelocityX;

        GameObject _finalVelocityZ;
        GameObject _finalVelocityY;
        GameObject _finalVelocityX;

        Transform _maxHeightVelocityZTransform;
        Transform _maxHeightVelocityYTransform;
        Transform _maxHeightVelocityXTransform;

        Transform _initVelocityZTransform;
        Transform _initVelocityYTransform;
        Transform _initVelocityXTransform;

        Transform _finalVelocityZTransform;
        Transform _finalVelocityYTransform;
        Transform _finalVelocityXTransform;

        Vector3 _velocity;
        Vector3 _velocityZ;
        Vector3 _velocityY;
        Vector3 _velocityX;

        private void Start()
        {
            InitializeValues();
        }

        private void InitializeValues()
        {
            _rigidBody = gameObject.GetComponent<Rigidbody>();
            _origin = transform.position;

            _initArrowTransform = _initArrowContainer.transform;
            _maxHeightArrowTransform = _maxHeightArrowContainer.transform;
            _finalArrowTransform = _finalArrowContainer.transform;

            _initVelocity = _initArrowContainer.transform.GetChild(0).gameObject;
            _initVelocityTransform = _initVelocity.transform;

            _maxHeightVelocity = _maxHeightArrowContainer.transform.GetChild(0).gameObject;
            _maxHeightVelocityTransform = _maxHeightVelocity.transform;

            _finalVelocity = _finalArrowContainer.transform.GetChild(0).gameObject;
            _finalVelocityTransform = _finalVelocity.transform;

            _maxHeightVelocityZ = _maxHeightArrowContainer.transform.GetChild(1).gameObject;
            _maxHeightVelocityZTransform = _maxHeightVelocityZ.transform;

            _maxHeightVelocityY = _maxHeightArrowContainer.transform.GetChild(2).gameObject;
            _maxHeightVelocityYTransform = _maxHeightVelocityY.transform;

            _maxHeightVelocityX = _maxHeightArrowContainer.transform.GetChild(3).gameObject;
            _maxHeightVelocityXTransform = _maxHeightVelocityX.transform;

            _initVelocityZ = _initArrowContainer.transform.GetChild(1).gameObject;
            _initVelocityZTransform = _initVelocityZ.transform;

            _initVelocityY = _initArrowContainer.transform.GetChild(2).gameObject;
            _initVelocityYTransform = _initVelocityY.transform;

            _initVelocityX = _initArrowContainer.transform.GetChild(3).gameObject;
            _initVelocityXTransform = _initVelocityX.transform;

            _finalVelocityZ = _finalArrowContainer.transform.GetChild(1).gameObject;
            _finalVelocityZTransform = _finalVelocityZ.transform;

            _finalVelocityY = _finalArrowContainer.transform.GetChild(2).gameObject;
            _finalVelocityYTransform = _finalVelocityY.transform;

            _finalVelocityX = _finalArrowContainer.transform.GetChild(3).gameObject;
            _finalVelocityXTransform = _finalVelocityX.transform;
        }

        public void ResetVectors()
        {
            _origin = transform.position;

            _initArrowTransform.localScale = _originalLocalScale;
            _maxHeightArrowTransform.localScale = _originalLocalScale;
            _finalArrowTransform.localScale = _originalLocalScale;

            _initVelocityTransform.localScale = _originalLocalScale;
            _maxHeightVelocityTransform.localScale = _originalLocalScale;
            _finalVelocityTransform.localScale = _originalLocalScale;

            _maxHeightVelocityZTransform.localScale = _originalLocalScale;
            _maxHeightVelocityYTransform.localScale = _originalLocalScale;
            _maxHeightVelocityXTransform.localScale = _originalLocalScale;

            _initVelocityZTransform.localScale = _originalLocalScale;
            _initVelocityYTransform.localScale = _originalLocalScale;
            _initVelocityXTransform.localScale = _originalLocalScale;

            _finalVelocityZTransform.localScale = _originalLocalScale;
            _finalVelocityYTransform.localScale = _originalLocalScale;
            _finalVelocityXTransform.localScale = _originalLocalScale;
        }

        IEnumerator DrawVectors()
        {
            yield return new WaitForFixedUpdate();

            _initArrowContainer.SetActive(true);

            _velocity = _rigidBody.velocity;
            DrawVector(_initVelocity, _initVelocityTransform, _origin, _velocity);

            DrawVectorComponents(_initVelocityZ, _initVelocityZTransform, _initVelocityY, _initVelocityYTransform, _initVelocityX, _initVelocityXTransform, _velocity, _origin);
        }

        public void CallDrawVectors()
        {
            StartCoroutine(DrawVectors());
        }

        public void DrawMaxHeightVector()
        {
            _maxHeightArrowContainer.SetActive(true);

            _velocity = _rigidBody.velocity;
            DrawVector(_maxHeightVelocity, _maxHeightVelocityTransform, transform.position, _velocity);

            DrawVectorComponents(_maxHeightVelocityZ, _maxHeightVelocityZTransform, _maxHeightVelocityY, _maxHeightVelocityYTransform, _maxHeightVelocityX, _maxHeightVelocityXTransform, _velocity, transform.position);
        }

        public void DrawFinalHeightVector()
        {
            _finalArrowContainer.SetActive(true);

            _velocity = _rigidBody.velocity;
            DrawVector(_finalVelocity, _finalVelocityTransform, transform.position, _velocity);
            
            DrawVectorComponents(_finalVelocityZ, _finalVelocityZTransform, _finalVelocityY, _initVelocityYTransform, _finalVelocityX, _finalVelocityXTransform,_velocity, transform.position);
        }

        private void DrawVector(GameObject arrow, Transform arrowTransform, Vector3 position, Vector3 direction)
        {

            arrow.SetActive(true);

            arrowTransform = arrow.transform;
            arrowTransform.position = position;

            _velocityDirection = direction + position;
            arrowTransform.LookAt(_velocityDirection);

            _velocityMagnitude = direction.magnitude;

            Vector3 newScale = new Vector3(1, 1, 1);

            if (_velocityMagnitude > 2)
            {
                newScale = arrowTransform.localScale * _velocityMagnitude;
            }
            else
                newScale = new Vector3(2, 2, 2);

            arrowTransform.localScale = newScale;
            /*
            print("Velocity Direction: " + _velocityDirection);
            print("Velocity Magnitude: " + _velocityMagnitude);
            */
        }

        private void DrawVectorComponents(GameObject velocityZ, Transform velocityZTransform, 
            GameObject velocityY, Transform velocityYTransform,
            GameObject velocityX, Transform velocityXTransform, Vector3 velocity, Vector3 position)
        {
            _velocityZ = new Vector3(0, 0, velocity.z);
            DrawVector(velocityZ, velocityZTransform, position, _velocityZ);
            _velocityY = new Vector3(0, velocity.y, 0);
            DrawVector(velocityY, velocityYTransform, position, _velocityY);
            _velocityX = new Vector3(velocity.x, 0, 0);
            DrawVector(velocityX, velocityXTransform, position, _velocityX);
        }
    }
}
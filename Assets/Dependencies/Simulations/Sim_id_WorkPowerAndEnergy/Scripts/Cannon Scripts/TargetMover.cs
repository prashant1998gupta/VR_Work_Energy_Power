using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TargetMover : MonoBehaviour
    {
        [SerializeField] float _targetSpeed;
        [SerializeField] float _maxDistance;
        Vector3 _startPosition;
        Vector3 _newPosition;

        private void Start()
        {
            _startPosition = transform.position;
        }

        void FixedUpdate()
        {
            SimpleMovement();
        }

        private void SimpleMovement()
        {
            if (CheckMaxDistanceReached())
                _targetSpeed = _targetSpeed * -1;

            _newPosition = new Vector3(transform.position.x + _targetSpeed, transform.position.y, transform.position.z);
            transform.position = _newPosition;
        }

        private bool CheckMaxDistanceReached()
        {
            if (Vector3.Distance(transform.position, _startPosition) > _maxDistance)
            {
                _startPosition = transform.position;
                return true;
            }
            else
                return false;
        }
    }
}

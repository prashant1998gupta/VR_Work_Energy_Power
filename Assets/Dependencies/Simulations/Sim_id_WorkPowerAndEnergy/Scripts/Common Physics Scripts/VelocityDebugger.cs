using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class VelocityDebugger : MonoBehaviour
    {
        Rigidbody _rigidBody;

        private void Start()
        {
            _rigidBody = gameObject.GetComponent<Rigidbody>();
        }

        private void FixedUpdate()
        {
            DebugVelocity();
        }

        private void DebugVelocity()
        {
            Debug.DrawRay(transform.position, _rigidBody.velocity, Color.yellow);
        }
    }
}
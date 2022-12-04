using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class OriginReturner : MonoBehaviour
    {
        Vector3 _originalPosition;
        Quaternion _originalRotation;

        [SerializeField] private float _waitingTime;

        void Start()
        {
            _originalPosition = transform.position;
            _originalRotation = transform.rotation;
        }

        private void OnCollisionEnter(Collision collision)
        {
            if(collision.gameObject.name.Contains("Floor"))
            {
                StartCoroutine(ReturnToOrigin());
            }
        }

        IEnumerator ReturnToOrigin()
        {
            yield return new WaitForSeconds(_waitingTime);
            gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;
            gameObject.GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
            gameObject.transform.position = _originalPosition;
            gameObject.transform.rotation = _originalRotation;
        }
    }
}

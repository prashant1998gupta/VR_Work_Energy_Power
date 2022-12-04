using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class PropsDemoProperties : MonoBehaviour
    {
        [SerializeField] float _baseForceMagnitude = 50f;
        [SerializeField] float _accelerationMultiplier = 0.005f;

        public static Action<float> NotifyBaseForce;
        public static Action<float> NotifyAccelerationMultiplier;

        private void Start()
        {
            NotifyBaseForce.Invoke(_baseForceMagnitude);
            NotifyAccelerationMultiplier.Invoke(_accelerationMultiplier);
        }
    }
}

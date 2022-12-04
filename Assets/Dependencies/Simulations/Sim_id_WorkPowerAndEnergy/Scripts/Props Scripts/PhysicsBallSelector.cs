using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class PhysicsBallSelector : MonoBehaviour
    {
        public PhysicsBallType _physicsBallType;

        public GameObject[] _ballObjects;

        public void PhysicsBallSelected()
        {
            SelectPhysicsBall(_physicsBallType);
        }

        private void SelectPhysicsBall(PhysicsBallType physicsBallType)
        {
            for(int i=0; i < _ballObjects.Length; i++)
            {
                _ballObjects[i].SetActive(false);
                if (i == ((int)physicsBallType))
                    _ballObjects[i].SetActive(true);
            }
        }
    }
}
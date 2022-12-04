using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.Template
{
    public class DetectTableExample : MonoBehaviour
    {
        bool isFound;
        private void OnTriggerEnter(Collider other)
        {
            if (other.tag == "Player"&& !isFound)
            {
                TaskUIHandler.Instance.MarkTaskAsComplete(0);
                isFound = true;
            }
        }
    }
}
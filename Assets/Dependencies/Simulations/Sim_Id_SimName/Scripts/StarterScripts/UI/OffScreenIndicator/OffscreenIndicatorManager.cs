using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Inspirit.Simulations.Template
{
    //A manager script to control Offscreen Arrow Indicator gameobjects
    public class OffscreenIndicatorManager : MonoBehaviour
    {
        public Color arrowColor;
        public List<Target> currentTargetList;

        public static OffscreenIndicatorManager Instance;
 
        void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(this);
            }
            else
            {
                Instance = this;

            }
        }

        //Method to Add Target to a Gameobject
        public void AddTarget(GameObject targetObject)
        {
            Target target = targetObject.AddComponent<Target>();
            target.targetColor = arrowColor;
            target.needDistanceText = false;
            currentTargetList.Add(target);
        }

        //Method to clear the full list of Targets
        public void ClearTargets()
        {
           foreach(Target target in currentTargetList)
            {
                Destroy(target.gameObject.GetComponent<Target>());
            }
            currentTargetList.Clear();
        }

    }
}
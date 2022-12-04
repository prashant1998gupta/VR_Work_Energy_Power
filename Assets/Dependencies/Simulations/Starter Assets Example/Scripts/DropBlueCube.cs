using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

namespace Inspirit.Simulations.Template
{
    public class DropBlueCube : MonoBehaviour
    {
          bool isComplete;
          bool isRotate;
        public GameObject quiz;
        public GameObject refPosition;
        public GameObject ButtonZone;
        public GameObject ButtonZoneUI;
        private void OnTriggerEnter(Collider other)
        {
            if(other.name=="Blue Sphere" && !other.GetComponent<Rigidbody>().isKinematic)
            {
                other.transform.parent = refPosition.transform;
                other.transform.position = refPosition.transform.position;
                other.GetComponent<Rigidbody>().isKinematic = true;
                isRotate = true;
                if (!isComplete)
                {
                    TaskUIHandler.Instance.MarkTaskAsComplete(2);
                    OffscreenIndicatorManager.Instance.ClearTargets();
                    isComplete = true;
                    ButtonZone.SetActive(true);
                    ButtonZoneUI.SetActive(true);
                    TaskUIHandler.Instance.AddTask("Explore the 3D button zone", TaskObject.TaskStatus.Pending);
                    OffscreenIndicatorManager.Instance.AddTarget(ButtonZoneUI);
                    quiz.SetActive(true);
                }
            }
        }
        private void Update()
        {
            if(isRotate)
            {
                refPosition.transform.Rotate(Vector3.up * Time.deltaTime * 40f);
            }
        }
    }
}
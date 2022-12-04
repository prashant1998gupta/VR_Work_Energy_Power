using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class Pointer : MonoBehaviour
    {
        public float defaultLength = 9.0f;
        public GameObject dot = null;
        public VRInputModule inputModule;
        LineRenderer lineRenderer = null;

        private void Awake()
        {
            lineRenderer = GetComponent<LineRenderer>();
        }
        void Update()
        {
            UpdateLine();
        }
        void UpdateLine()
        {
            // Use default length or distance
            PointerEventData data = inputModule.GetData();
            float targetLength = data.pointerCurrentRaycast.distance == 0 ? defaultLength : data.pointerCurrentRaycast.distance + 0.25f;


            if (targetLength < 5f)
            {
                //Raycast
                RaycastHit hit = CreateRaycast(targetLength);
                if (hit.transform != null)
                    print(hit.transform.name);

                //Default
                Vector3 endPosition = transform.position + (transform.forward * targetLength);

                //Based on HIt
                if (hit.collider != null)
                {
                    endPosition = hit.point;
                }

                //Set Position of dot
                if (dot)
                    dot.transform.position = endPosition;

                //Set linerenderer
                if (data.pointerEnter && data.pointerEnter.layer == LayerMask.NameToLayer("UI"))
                {
                    print(data.pointerEnter.transform.name);
                    lineRenderer.enabled = true;
                    lineRenderer.SetPosition(0, transform.position);
                    lineRenderer.SetPosition(1, endPosition);
                }
                else
                    lineRenderer.enabled = false;
            }
            else lineRenderer.enabled = false;
        }
        RaycastHit CreateRaycast(float length)
        {
            RaycastHit hit;
            Ray ray = new Ray(transform.position, transform.forward);
            Physics.Raycast(ray, out hit, defaultLength);
            return hit;
        }
    }
}

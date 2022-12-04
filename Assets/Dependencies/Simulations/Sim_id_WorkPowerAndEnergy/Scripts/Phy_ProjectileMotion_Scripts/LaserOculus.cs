using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class LaserOculus : MonoBehaviour
    {

        LineRenderer lineRenderer;
        Vector3 start_position;
        Vector3 end_position;
        LayerMask layerMask;

        // Start is called before the first frame update
        void Start()
        {
            lineRenderer = GetComponent<LineRenderer>();
            layerMask = 1 << 5;
        }

        // Update is called once per frame
        void Update()
        {
            UpdateLaser();
        }

        void UpdateLaser()
        {
            Ray ray = new Ray(transform.position, transform.forward);
            start_position = transform.position;
            end_position = transform.position + transform.forward * 100;
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, 100f, layerMask))
            {
                end_position = hit.point;
            }
            //UpdateLaserBeam();
        }

        void UpdateLaserBeam()
        {
            lineRenderer.SetPosition(0, start_position);
            lineRenderer.SetPosition(1, end_position);
        }

        public void LaserBeamOff()
        {
            //lineRenderer.enabled = false; 
        }

        public void LaserBeamOn()
        {
            //lineRenderer.enabled = true;
        }
    }
}

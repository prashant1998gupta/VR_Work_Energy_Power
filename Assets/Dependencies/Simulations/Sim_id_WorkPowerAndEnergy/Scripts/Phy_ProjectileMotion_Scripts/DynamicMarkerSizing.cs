using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class DynamicMarkerSizing : MonoBehaviour
    {
        Vector3 orig_scale;
        public float scaleFactor = 1f;
        public bool squarert_factor = false;

        void Start()
        {
            orig_scale = transform.localScale;
        }

        // Update is called once per frame
        void Update()
        {
            if (squarert_factor)
                transform.localScale = (scaleFactor) * orig_scale * Mathf.Sqrt(Vector3.Distance(transform.position, Camera.main.transform.position));
            else
                transform.localScale = (scaleFactor) * orig_scale * (Vector3.Distance(transform.position, Camera.main.transform.position));
        }
    }
}

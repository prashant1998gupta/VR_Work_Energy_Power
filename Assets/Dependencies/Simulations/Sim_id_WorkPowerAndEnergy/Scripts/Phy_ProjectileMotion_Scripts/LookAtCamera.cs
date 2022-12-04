using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class LookAtCamera : MonoBehaviour
    {
        public bool UI;
        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            this.transform.LookAt(Camera.main.transform);
            if (UI)
                this.transform.Rotate(Vector3.up, 180);

        }
    }
}

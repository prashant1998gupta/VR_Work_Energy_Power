using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TrailPointer : MonoBehaviour
    {
        Vector3 orig_posn;
        // Start is called before the first frame update
        void Start()
        {
            orig_posn = transform.position;
        }

        // Update is called once per frame
        void Update()
        {

        }

        public void PlaceTrailPointer(float velocity, float time)
        {
            print("placetrailpointer");
            print(velocity);
            Vector3 init_velo = -transform.forward * velocity;
            transform.position = orig_posn + init_velo * time + (0.5f) * Physics.gravity * time * time;
        }

    }
}

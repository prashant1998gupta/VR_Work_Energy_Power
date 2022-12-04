using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class HeadSetSwitcher : MonoBehaviour
    {
        //public static string headset;
        public bool sVive;
        public bool sOculus;
        public static bool Vive;
        public static bool Oculus;

        // Start is called before the first frame update

        private void Awake()
        {
            Vive = sVive;
            Oculus = sOculus;
        }

        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            print("vive " + Vive);
            print("oculus " + Oculus);
        }


    }
}

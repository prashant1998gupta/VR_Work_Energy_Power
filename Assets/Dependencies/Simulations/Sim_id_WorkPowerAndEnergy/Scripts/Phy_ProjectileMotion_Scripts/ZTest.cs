using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace Inspirit.Simulations.ProjectileMotion
{
    public class ZTest : MonoBehaviour
    {
        public UnityEngine.Rendering.CompareFunction comparison = UnityEngine.Rendering.CompareFunction.Always;

        // Start is called before the first frame update
        void Start()
        {
            Image image = gameObject.GetComponent<Image>();
            Material new_mat = new Material(image.material);
            new_mat.SetInt("unity_GUIZTestMode", (int)comparison);
            image.material = new_mat;
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}

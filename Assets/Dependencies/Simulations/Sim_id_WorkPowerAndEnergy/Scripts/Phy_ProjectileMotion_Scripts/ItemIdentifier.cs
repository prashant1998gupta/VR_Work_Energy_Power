using System.Collections;
using UnityEngine;
using TMPro;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class ItemIdentifier : MonoBehaviour
    {
        public TextMeshProUGUI text;
        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.tag == "Projectile")
            {
                if (HeadSetSwitcher.Oculus == true)
                    StartCoroutine(VibrateOculusController());
                if (HeadSetSwitcher.Vive == true)
                    StartCoroutine(VibrateViveController());
                text.gameObject.SetActive(true);
                text.text = other.gameObject.name;
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.gameObject.tag == "Projectile")
            {
                text.gameObject.SetActive(false);
            }
        }

        IEnumerator VibrateOculusController()
        {
            if (transform.name == "LeftHandAnchor")
            {
                OVRInput.SetControllerVibration(1, 1, OVRInput.Controller.LTouch);
                yield return new WaitForSeconds(0.1f);
                OVRInput.SetControllerVibration(0, 0, OVRInput.Controller.LTouch);
            }
            if (transform.name == "RightHandAnchor")
            {
                OVRInput.SetControllerVibration(1, 1, OVRInput.Controller.RTouch);
                yield return new WaitForSeconds(0.1f);
                OVRInput.SetControllerVibration(0, 0, OVRInput.Controller.RTouch);
            }
        }

        IEnumerator VibrateViveController()
        {
            if (transform.name == "Controller (left)")
            {
                
            }
            if (transform.name == "Controller (right)")
            {
                
            }
            yield return null;
        }
    }
}

using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class LaserUI : MonoBehaviour
    {
        public static GameObject currentObject;
        int currentID;

        string name;
        string tab;

        //public Transform raycastStartPoint;
        LayerMask layerMask;

        //public LineRenderer lineRendRef;

        // Start is called before the first frame update
        void Start()
        {
            layerMask = 1 >> 5;
            layerMask = ~layerMask;
        }

        // Update is called once per frame
        void Update()
        {
            RaycastHit[] hits;
            hits = Physics.RaycastAll(transform.position, transform.forward, 100f, layerMask);
            for (int i = 0; i < hits.Length; i++)
            {
                RaycastHit hit = hits[i];

                int id = hit.collider.gameObject.GetInstanceID();
                if (currentID != id)
                {
                    currentID = id;
                    currentObject = hit.collider.gameObject;

                    name = currentObject.name;
                    tag = currentObject.tag;
                    if (name == "Physics-Button")
                        currentObject.GetComponent<Animator>().SetTrigger("Highlighted");
                }

                if (tag == "Button")
                {
                    if (name == "MainMenu")
                    {
                        //  if (trigger.GetStateDown(SteamVR_Input_Sources.Any))
                        if (OVRInput.GetDown(OVRInput.RawButton.LIndexTrigger) || OVRInput.GetDown(OVRInput.RawButton.RIndexTrigger))
                        {
                            currentObject.GetComponent<Button>().onClick.Invoke();
                            //currentObject.GetComponent<Button>().Select();
                        }
                    }

                    if (name == "Cancel")
                    {
                        if (OVRInput.GetDown(OVRInput.RawButton.LIndexTrigger) || OVRInput.GetDown(OVRInput.RawButton.RIndexTrigger))
                        {
                            currentObject.GetComponent<Button>().onClick.Invoke();
                            //currentObject.GetComponent<Button>().Select();
                            //GetComponent<SteamVR_LaserPointer>().thickness = 0.000f;
                        }
                    }

                    if (name == "Physics-Button")
                    {
                        if (OVRInput.GetDown(OVRInput.RawButton.LIndexTrigger) || OVRInput.GetDown(OVRInput.RawButton.RIndexTrigger))
                        {
                            currentObject.GetComponent<Animator>().SetTrigger("Pressed");
                            StartCoroutine(ButtonPressed());
                            //currentObject.GetComponent<Button>().onClick.Invoke();
                            //currentObject.GetComponent<Button>().Select();
                        }
                        //if (OVRInput.GetDown(OVRInput.RawButton.LIndexTrigger) || OVRInput.GetDown(OVRInput.RawButton.RIndexTrigger))
                        //{
                        //    currentObject.GetComponent<Button>().onClick.Invoke();
                        //    //currentObject.GetComponent<Button>().Select();
                        //}
                    }

                    //if (name == "Cancel")
                    //{
                    //    if (trigger.GetStateDown(SteamVR_Input_Sources.Any))
                    //    {
                    //        currentObject.GetComponent<Button>().onClick.Invoke();

                    //    }
                    //}
                }
            }
        }


        IEnumerator ButtonPressed()
        {
            yield return new WaitForSeconds(0.5f);
            currentObject.GetComponent<Button>().onClick.Invoke();
        }

        private void OnDrawGizmos()
        {
            Gizmos.color = Color.green;
            Gizmos.DrawRay(transform.position, transform.forward * 200);
        }
    }
}

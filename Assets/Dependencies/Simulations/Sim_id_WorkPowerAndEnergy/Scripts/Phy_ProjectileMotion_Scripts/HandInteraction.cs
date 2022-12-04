using System.Collections;
using UnityEngine;
using UnityEngine.XR;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class HandInteraction : MonoBehaviour
    {
        public GameObject glove;
        public float throwingSensitivity = 20f;
        HandInteraction[] otherHands;
        HandInteraction otherHand;
        int grabLayerMask = 1 << 8;
        //bool triggerValue = false;
        float triggerValue;
        public GameObject objectCollided;
        public GameObject objectinHand;
        Vector3 objPos = Vector3.zero;
        Vector3 handPosition;
        Vector3 offset = Vector3.zero;
        InputDevice lHand;
        InputDevice rHand;
        public bool grabbed = false;
        public bool triggered;
        Transform objparent;

        // Start is called before the first frame update
        void Start()
        {
            otherHands = FindObjectsOfType(typeof(HandInteraction)) as HandInteraction[];
            if (otherHands[0] == this)
                otherHand = otherHands[1];
            else if (otherHands[1] == this)
                otherHand = otherHands[0];
            StartCoroutine(Changetags());
        }

        IEnumerator Changetags()
        {
            yield return new WaitForSeconds(0.2f);
            gameObject.tag = "GameController";
        }

        void GrabObject()
        {
            glove.GetComponent<Animator>().SetInteger("AnimationState", 2);
            if (objectinHand.tag == "Spring")
            {

                objectinHand.gameObject.GetComponent<Rigidbody>().isKinematic = true;
                if (!grabbed)
                {
                    objPos = objectinHand.transform.position;
                    offset = objectinHand.transform.position - transform.position;
                    grabbed = true;
                }
                objectinHand.transform.position = new Vector3(objPos.x, (transform.position + offset).y, objPos.z);
                //objectinHand.transform.SetParent(transform);
            }
            else
            {
                offset = objectinHand.transform.position - transform.position;
                objectinHand.gameObject.GetComponent<Rigidbody>().isKinematic = true;
                objectinHand.transform.position = transform.position + offset;
                objectinHand.transform.SetParent(transform);
                grabbed = true;
                objectinHand.GetComponent<SoundEffectManager>().PlayGrabSound();
            }
        }

        void HandOverObject()
        {
            objectinHand.transform.SetParent(objparent);        /// parent is reassigned
            grabbed = false;
            objectinHand = null;
            glove.GetComponent<Animator>().SetInteger("AnimationState", 0);
        }

        public void UnGrabObject()
        {
            //objectinHand.transform.SetParent(null);
            objectinHand.transform.SetParent(objparent);        /// parent is reassigned
            objectinHand.gameObject.GetComponent<Rigidbody>().isKinematic = false;
            grabbed = false;
            objectinHand = null;
            glove.GetComponent<Animator>().SetInteger("AnimationState", 0);
        }

        void ReleaseObject(Vector3 throwingdirn)
        {
            objectinHand.transform.SetParent(objparent);        /// parent is reassigned
            objectinHand.gameObject.GetComponent<Rigidbody>().isKinematic = false;
            throwingdirn *= throwingSensitivity;
            objectinHand.GetComponent<Rigidbody>().velocity = throwingdirn;
            grabbed = false;
            //objectinHand.GetComponent<Rigidbody>().AddForce(throwingdirn * 200, ForceMode.Impulse);
            if (objectinHand.tag == "Projectile")
                objectinHand.GetComponent<Launch>().LaunchProjectile(throwingdirn);
            //objectinHand = null;          
            //objectinHand.GetComponent<SoundEffectManager>().PlayGrabSound();
            glove.GetComponent<Animator>().SetInteger("AnimationState", 0);
        }

        // Update is called once per frame
        void Update()
        {
            if (gameObject.name == "LeftHandAnchor" && OVRInput.Get(OVRInput.RawAxis1D.LIndexTrigger) > 0.5f && objectCollided)

            {

                if ((objectCollided.tag == "Projectile" || objectCollided.tag == "Grab" || objectCollided.tag == "Weight") && !grabbed)
                {
                    objectinHand = objectCollided;

                    if (otherHand.grabbed == true && otherHand.objectinHand == objectCollided)
                        otherHand.HandOverObject();
                    objparent = objectinHand.transform.parent;                                       // Store parent of objinHand, to be later used when Ungrabbing objects
                    GrabObject();
                    if (objectCollided.tag == "Projectile")
                        objectinHand.GetComponent<Launch>().trailobj.transform.SetParent(null);

                }
                else if (objectCollided.tag == "Spring")
                {
                    objectinHand = objectCollided;
                    objparent = objectinHand.transform.parent;                                        // Store parent of objinHand, to be later used when Ungrabbing objects
                    GrabObject();
                }
            }

            if (gameObject.name == "RightHandAnchor" && OVRInput.Get(OVRInput.RawAxis1D.RIndexTrigger) > 0.5f && objectCollided)
            {
                if ((objectCollided.tag == "Projectile" || objectCollided.tag == "Grab" || objectCollided.tag == "Weight") && !grabbed)
                {
                    objectinHand = objectCollided;
                    if (otherHand.grabbed == true && otherHand.objectinHand == objectCollided)
                        otherHand.HandOverObject();
                    objparent = objectinHand.transform.parent;                                        // Store parent of objinHand, to be later used when Ungrabbing objects
                    GrabObject();
                    if (objectCollided.tag == "Projectile")
                        objectinHand.GetComponent<Launch>().trailobj.transform.SetParent(null);

                }
                else if (objectCollided.tag == "Spring")
                {
                    objectinHand = objectCollided;
                    objparent = objectinHand.transform.parent;                                        // Store parent of objinHand, to be later used when Ungrabbing objects
                    GrabObject();
                }
            }

            //if (gameObject.name == "RightHandAnchor" && OVRInput.Get(OVRInput.RawAxis1D.RIndexTrigger) > 0.5f && objectCollided)
            //{
            //    if (!grabbed)
            //    {
            //        objectinHand = objectCollided;
            //        if (objectCollided.tag == "Projectile")
            //        {
            //            if (otherHand.grabbed == true && otherHand.objectinHand == objectCollided)
            //            {
            //                GrabObject();
            //                otherHand.HandOverObject();
            //                objectinHand.GetComponent<Launch>().trailobj.transform.SetParent(null);
            //            }
            //            else
            //            {
            //                GrabObject();

            //                objectinHand.GetComponent<Launch>().trailobj.transform.SetParent(null);
            //            }
            //        }
            //    }
            //}

            if (gameObject.name == "LeftHandAnchor" && OVRInput.Get(OVRInput.RawAxis1D.LIndexTrigger) < 0.5f && grabbed)
            {
                if (objectinHand.tag == "Projectile" || objectinHand.tag == "Grab" || objectinHand.tag == "Weight")
                {
                    Vector3 dirn = this.transform.position - handPosition;
                    if (objectinHand)
                        ReleaseObject(dirn);
                }
                else if (objectinHand.tag == "Spring")
                    UnGrabObject();
                objectinHand = null;
            }

            if (gameObject.name == "RightHandAnchor" && OVRInput.Get(OVRInput.RawAxis1D.RIndexTrigger) < 0.5f && grabbed)
            {
                if (objectinHand.tag == "Projectile" || objectinHand.tag == "Grab" || objectinHand.tag == "Weight")
                {
                    Vector3 dirn = this.transform.position - handPosition;
                    if (objectinHand)
                        ReleaseObject(dirn);
                }
                else if (objectinHand.tag == "Spring")
                    UnGrabObject();
                objectinHand = null;
            }

            //if (gameObject.name == "RightHandAnchor" && OVRInput.Get(OVRInput.RawAxis1D.RIndexTrigger) < 0.5f && grabbed)
            //{
            //    Vector3 dirn = this.transform.position - handPosition;
            //    if (objectinHand)
            //        ReleaseObject(dirn);
            //    objectinHand = null;
            //}

            if (OVRInput.Get(OVRInput.RawButton.LIndexTrigger))
                triggered = true;
            else
                triggered = false;
            handPosition = transform.position;
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.tag == "Grab" || other.gameObject.tag == "Projectile" || other.gameObject.tag == "Spring" || other.gameObject.tag == "Weight")
            {
                objectCollided = other.gameObject;
            }
        }
        private void OnTriggerExit(Collider other)
        {
            if (other.gameObject.tag == "Grab" || other.gameObject.tag == "Projectile" || other.gameObject.tag == "Spring" || other.gameObject.tag == "Weight" || other.gameObject.tag == "Untagged")
            {
                objectCollided = null;
            }
        }

    }
}

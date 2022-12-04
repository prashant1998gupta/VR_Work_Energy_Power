using System.Collections;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class InstructionLabel : MonoBehaviour
    {
        //public string text_trigger;
        //public string text_grip;
        //public Sprite indexTriggerimg;
        //public Sprite handTriggerimg;
        public bool IndexTrigger;
        public bool HandTrigger;
        bool open = true;                           //InstructionLabelState

        //public GameObject instructionLabel;
        public GameObject vive_grab;
        public GameObject vive_pause;
        public GameObject oculus_grab;
        public GameObject oculus_pause;
      
        public bool labelActive;                        //BackMenu UI state

        // Start is called before the first frame update
        void Start()
        {
            //print(HeadSetSwitcher.Oculus + "Oculus State");
            if (HeadSetSwitcher.Vive)
                vive_grab.SetActive(true);
            if (HeadSetSwitcher.Oculus)
                oculus_grab.SetActive(true);
            labelActive = false;                                                // When backmenuUI is off
        }

        // Update is called once per frame
        void Update()
        {
            CompareButton();
        }

        IEnumerator Close()
        {
            //labelActive = false;
            open = false;
            yield return new WaitForSeconds(2f);
            transform.GetChild(0).gameObject.SetActive(false);
            //transform.parent.GetChild(1).gameObject.SetActive(false);

            yield return null;
        }

        public void LabelPause()                  // Called form Snap


        {
            HideAll();
            IndexTrigger = false;
            HandTrigger = true;
            if (HeadSetSwitcher.Vive)
                vive_pause.SetActive(true);
            if (HeadSetSwitcher.Oculus)
                oculus_pause.SetActive(true);

            GetComponent<Animator>().SetTrigger("FadeIn");
            open = true;
        }

        public void LabelGrab()
        {
            HandTrigger = false;
            IndexTrigger = true;
            if (HeadSetSwitcher.Vive)
                vive_grab.SetActive(true);
            if (HeadSetSwitcher.Oculus)
                oculus_grab.SetActive(true);
            GetComponent<Animator>().SetTrigger("FadeIn");
            open = true;
            //labelActive = true;
        }

        void CompareButton()
        {
            if ((OVRInput.GetDown(OVRInput.RawButton.LIndexTrigger) || OVRInput.GetDown(OVRInput.RawButton.RIndexTrigger) || Input.GetKeyDown(KeyCode.Alpha5)) && IndexTrigger && open && !labelActive)
            //if (trigger.GetStateDown(SteamVR_Input_Sources.Any) && IndexTrigger && open)
            {
                print("index closed");
                GetComponent<Animator>().SetTrigger("FadeOut");
                StartCoroutine(Close());
            }

            if (OVRInput.GetDown(OVRInput.RawButton.LHandTrigger) && HandTrigger && open && !labelActive)
            //if (grip.GetStateDown(SteamVR_Input_Sources.Any) && HandTrigger && open)
            {
                print("UI CLosedd");
                GetComponent<Animator>().SetTrigger("FadeOut");
                StartCoroutine(Close());
            }
        }

        public void HideAll()
        {
            vive_grab.SetActive(false);
            vive_pause.SetActive(false);
            oculus_grab.SetActive(false);
            oculus_pause.SetActive(false);
            gameObject.SetActive(false);
        }

    }
}

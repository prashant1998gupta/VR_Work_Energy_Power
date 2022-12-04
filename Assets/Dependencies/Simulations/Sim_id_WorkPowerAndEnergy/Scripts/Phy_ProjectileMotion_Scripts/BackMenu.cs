using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class BackMenu : MonoBehaviour
    {
        public GameObject lHand;
        public GameObject rHand;
        public GameObject InstructionalLabel;
 
        bool first = false;
  
        public int indexactive;
        // Start is called before the first frame update
        void Start()
        {
            if (HeadSetSwitcher.Vive)
                indexactive = 0;
            else if (HeadSetSwitcher.Oculus)
                indexactive = 2;

        }

        // Update is called once per frame
        void Update()
        {
            //if (MainMenu.GetStateDown(SteamVR_Input_Sources.Any) || OVRInput.GetDown(OVRInput.RawButton.X))
            if ((HeadSetSwitcher.Oculus && OVRInput.GetDown(OVRInput.RawButton.X)))
            {

                first = !first;
                if (first)
                {
                    if (InstructionalLabel && InstructionalLabel.GetComponent<InstructionLabel>().labelActive == false)
                    {
                        for (int i = 0; i < InstructionalLabel.transform.childCount; i++)
                        {
                            if (InstructionalLabel.transform.GetChild(i).gameObject.activeSelf == true)
                            {
                                InstructionalLabel.transform.GetChild(i).gameObject.SetActive(false);
                                indexactive = i;
                            }
                        }
                        InstructionalLabel.GetComponent<InstructionLabel>().labelActive = true;
                    }
                    transform.GetChild(0).gameObject.SetActive(true);
                    lHand.GetComponent<LaserUI>().enabled = true;
                    rHand.GetComponent<LaserUI>().enabled = true;
                    if (HeadSetSwitcher.Oculus)
                    {
                        lHand.GetComponent<LaserOculus>().LaserBeamOn();
                        rHand.GetComponent<LaserOculus>().LaserBeamOn();
                    }

                }

                else
                {
                    if (InstructionalLabel && InstructionalLabel.GetComponent<InstructionLabel>().labelActive == true)
                    {
                        InstructionalLabel.transform.GetChild(indexactive).gameObject.SetActive(true);
                        InstructionalLabel.GetComponent<InstructionLabel>().labelActive = false;
                    }

                    transform.GetChild(0).gameObject.SetActive(false);
                    lHand.GetComponent<LaserUI>().enabled = false;
                    rHand.GetComponent<LaserUI>().enabled = false;
                    if (HeadSetSwitcher.Oculus)
                    {
                        lHand.GetComponent<LaserOculus>().LaserBeamOff();
                        rHand.GetComponent<LaserOculus>().LaserBeamOff();
                    }
                }
            }
        }

        public void BacktoMainMenu()
        {
            SceneManager.LoadScene("StartMenu");
        }

        IEnumerator WaitForsec()
        {
            yield return new WaitForSeconds(1f);

        }

        public void Cancel()
        {
            print("Cancel");
            transform.GetChild(0).gameObject.SetActive(false);
            lHand.GetComponent<LaserUI>().enabled = false;
            rHand.GetComponent<LaserUI>().enabled = false;
            if (HeadSetSwitcher.Oculus)
            {
                lHand.GetComponent<LaserOculus>().LaserBeamOff();
                rHand.GetComponent<LaserOculus>().LaserBeamOff();
            }
            if (InstructionalLabel.GetComponent<InstructionLabel>().labelActive == true)
            {
                InstructionalLabel.transform.GetChild(indexactive).gameObject.SetActive(true);
                InstructionalLabel.GetComponent<InstructionLabel>().labelActive = false;
            }
            first = false;
            //rHand.GetComponent<SteamVR_LaserPointer>().thickness = 0f;
        }
    }
}

using UnityEngine;
using TMPro;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TiltCannon : MonoBehaviour
    {
        public bool isCannon;                                   // iscannon true for cannon, false for screen
        Vector3 hand;
        Vector3 offset;
        public GameObject cannon;                               // remains stable
        public GameObject pivot;                                // point around which the rotation happens
        public GameObject cannonBody;                           // part that moves
        public Transform handlepoint;                           // point which keeps track of rotation along the pivot, different from the knob/lever
        [HideInInspector] public float handleAngle;
        bool firstHighlight = true;
   
        public bool enableTilt;
        bool offsetcalc = false;
        public GameObject screen;
        public Cannon cannonShooter;                             // Responsible for launching from the cannon
        float power;
        bool Cannonready;
        public GameObject CannonBall;
        public TiltCannon cannonangle;
        public GameObject arrow;

        // Start is called before the first frame update
        void Start()
        {
            Vector3 pivottoknob = -handlepoint.position + pivot.transform.position;
            handleAngle = Vector3.Angle(-cannon.transform.forward, pivottoknob.normalized);
            //if (isCannon)
            //screen.transform.GetChild(0).GetChild(1).GetComponent<TextMeshProUGUI>().text = "Angle " + angle.ToString("f") + "\x00B0";                             //Displays default angle value on the screen
            //transform.GetChild(0).GetChild(1).GetChild(0).GetComponent<TextMeshProUGUI>().text = "30" + "\x00B0";
        }

        // Update is called once per frame
        void Update()
        {

        }

        private void OnTriggerEnter(Collider other)
        {
            //print("Controller Entered");
            //if (firstHighlight && other.gameObject.layer == 11)
            if (isCannon && other.gameObject.layer == LayerMask.NameToLayer("Controller"))
            {
                arrow.GetComponent<HighlightPlus.HighlightEffect>().highlighted = false;
                arrow.SetActive(false);
            }
            print(other.name);
        }

        private void OnTriggerStay(Collider other)
        {
            //print(other.transform.name);

            //When trigger is pressed
            //if (enableTilt && other.gameObject.layer == 11 && (OVRInput.Get(OVRInput.RawButton.LIndexTrigger) || OVRInput.Get(OVRInput.RawButton.RIndexTrigger) || trigger.GetState(SteamVR_Input_Sources.Any)))
            if (enableTilt && other.gameObject.layer == LayerMask.NameToLayer("Controller") && (OVRInput.Get(OVRInput.RawButton.LIndexTrigger) || OVRInput.Get(OVRInput.RawButton.RIndexTrigger)))
            {
                //Vector3 offset = other.transform.position - transform.position;
                if (!offsetcalc)                                                                            //Offset from hand to handle point, so that handle doesn't snap to the hand
                {
                    offset = other.transform.position - handlepoint.position;
                    offsetcalc = true;
                }

                hand = other.transform.position - offset;
                Vector3 pivottoknob = -hand + pivot.transform.position;
                handleAngle = Vector3.Angle(-cannon.transform.forward, pivottoknob.normalized);
                if (isCannon)                                                                                                           // For Angle Tilt
                    cannonBody.transform.rotation = Quaternion.AngleAxis(handleAngle, cannon.transform.right);
                else                                                                                                                    // For velocity slider
                {
                    cannonBody.transform.rotation = Quaternion.AngleAxis(handleAngle - 90, cannon.transform.right);
                    power = Mathf.FloorToInt(10 + (handleAngle / 90 * 4) * 2);
                    //screen.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "Velocity = " + power.ToString() + " m/s";
                    screen.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "Velocity = " + (power * Mathf.Sin(cannonangle.handleAngle * Mathf.Deg2Rad)).ToString() + " m/s";
                    screen.transform.GetChild(0).GetChild(1).GetComponent<TextMeshProUGUI>().text = "Angle = " + ((int)cannonangle.handleAngle).ToString() + "\x00B0";
                }
                //transform.GetChild(0).GetChild(1).GetChild(0).GetComponent<TextMeshProUGUI>().text = angle.ToString("F") + "\x00B0";
                //print(angle + "angle screen");
                if (!isCannon)
                    transform.rotation = Quaternion.AngleAxis(-handleAngle / 2, transform.right);
            }
            //else if (enableTilt && other.gameObject.layer == 11 && (OVRInput.GetUp(OVRInput.RawButton.LIndexTrigger) || OVRInput.GetUp(OVRInput.RawButton.RIndexTrigger) || trigger.GetStateUp(SteamVR_Input_Sources.Any)))
            else if (enableTilt && other.gameObject.layer == LayerMask.NameToLayer("Controller") && (OVRInput.GetUp(OVRInput.RawButton.LIndexTrigger) || OVRInput.GetUp(OVRInput.RawButton.RIndexTrigger)))
            {
                if (isCannon)
                    SetAngle();
                if (!isCannon)
                {
                    if (CannonBall.GetComponent<Launch>().launched == false)
                        cannonShooter.ShootProjectile(power);
                    cannonBody.transform.rotation = Quaternion.Euler(-90f, 0f, 0f);                                                             //Snaps back to original place after the projectile is launched
                    transform.rotation = Quaternion.AngleAxis(0, transform.right);
                }
                //transform.GetChild(0).GetComponent<Animator>().SetTrigger("FadeOut");
                firstHighlight = false;
            }
        }

        private void OnTriggerExit(Collider other)
        {
            //if (enableTilt && other.tag == "GameController")
            //if (enableTilt && other.gameObject.layer == 11 && (OVRInput.Get(OVRInput.RawButton.LIndexTrigger) || OVRInput.Get(OVRInput.RawButton.RIndexTrigger) || trigger.GetState(SteamVR_Input_Sources.Any)))
            if (enableTilt && other.gameObject.layer == LayerMask.NameToLayer("Controller") && (OVRInput.Get(OVRInput.RawButton.LIndexTrigger) || OVRInput.Get(OVRInput.RawButton.RIndexTrigger)))
            {
                if (isCannon)
                    SetAngle();
                if (!isCannon)
                {
                    if (CannonBall.GetComponent<Launch>().launched == false)
                        cannonShooter.ShootProjectile(power);
                    cannonBody.transform.rotation = Quaternion.Euler(-90f, 0f, 0f);
                    transform.rotation = Quaternion.AngleAxis(0, transform.right);
                }
                firstHighlight = false;
            }
            offsetcalc = false;
        }

        private void RotateBody(float angle)
        {
            cannonBody.transform.rotation = Quaternion.AngleAxis(angle, cannon.transform.right);
        }

        private void SetAngle()
        {
            if (handleAngle < 22.5)
            {
                RotateBody(15f);
                screen.transform.GetChild(0).GetChild(1).GetComponent<TextMeshProUGUI>().text = "Angle = 15" + "\x00B0";
                handleAngle = 15f;
            }
            else if (handleAngle > 22.5f && handleAngle < 37.5f)
            {
                RotateBody(30f);
                screen.transform.GetChild(0).GetChild(1).GetComponent<TextMeshProUGUI>().text = "Angle = 30" + "\x00B0";
                handleAngle = 30f;
            }
            else if (handleAngle > 37.5f && handleAngle < 52.5f)
            {
                RotateBody(45f);
                screen.transform.GetChild(0).GetChild(1).GetComponent<TextMeshProUGUI>().text = "Angle = 45" + "\x00B0";
                handleAngle = 45f;
            }
            else if (handleAngle > 52.5f)
            {
                RotateBody(60f);
                screen.transform.GetChild(0).GetChild(1).GetComponent<TextMeshProUGUI>().text = "Angle = 60" + "\x00B0";
                handleAngle = 60f;
            }
        }

    }
}

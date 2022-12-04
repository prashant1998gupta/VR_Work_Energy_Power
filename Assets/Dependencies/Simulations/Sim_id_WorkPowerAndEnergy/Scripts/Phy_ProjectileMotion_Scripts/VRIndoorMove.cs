using System.Collections;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class VRIndoorMove : MonoBehaviour
    {
        public Material fadeMat;
        public Transform ray;
        public Light rayLight;
        public Button moveButton;
        public AudioSource moveSound;

        private static int rayDivisions = 20;
        private Vector3[] rayOrigins = new Vector3[rayDivisions];
        private Vector3[] rayDirections = new Vector3[rayDivisions];
        public float rayDrag = 0.85f; public float rayThickness;
        private float rayStrength;

        private LineRenderer line;
        private bool canMove;
        private Vector3 moveTo;
        private bool isMoving;
        public Vector3 height;

        private void Awake()
        {
            height = new Vector3(0f, Camera.main.transform.position.y + height.y, 0f);
            line = GetComponent<LineRenderer>();
            line.positionCount = rayDivisions;

            for (int i = 0; i < rayDivisions; i++)
            {
                rayOrigins[i] = ray.position;
                rayDirections[i] = ray.forward;
            }
        }

        private void Update()
        {
            if (OVRInput.Get(OVRInput.RawButton.LThumbstick))
            {

                // See if the user is pointing at a spot in the scene (using the end of the wiggly ray)
                rayLight.enabled = true;
                line.enabled = true;
                canMove = false;

                if (!isMoving)
                {
                    Ray r = new Ray(rayOrigins[rayDivisions - 1], rayDirections[rayDivisions - 1]);
                    RaycastHit rHit;

                    if (Physics.Raycast(r, out rHit))
                    {
                        Vector3 p = rHit.point;
                        NavMeshHit nHit;
                        if (NavMesh.SamplePosition(rHit.point, out nHit, 0.1f, NavMesh.AllAreas))
                        {
                            canMove = true;
                            moveTo = nHit.position;
                        }
                    }
                }
                print("canmove" + canMove);

                //moveButton.interactable = canMove;

                // Update the line renderer and the effects for the ray point

                Vector3[] linePos = new Vector3[rayDivisions];
                float distance = (ray.position - moveTo).magnitude;

                for (int i = 0; i < rayDivisions; i++)
                {
                    Vector3 targO = i > 0 ? rayOrigins[i - 1] : ray.position;
                    Vector3 targD = i > 0 ? rayDirections[i - 1] : ray.forward;

                    rayOrigins[i] = Vector3.Lerp(rayOrigins[i], targO, rayDrag);
                    rayDirections[i] = Vector3.Slerp(rayDirections[i], targD, rayDrag);
                    linePos[i] = rayOrigins[i] + rayDirections[i] * ((float)i / rayDivisions) * distance;
                }

                float endSpeed = (line.GetPosition(0) - linePos[0]).magnitude * 0.1f;
                line.SetPositions(linePos);

                rayStrength = Mathf.MoveTowards(rayStrength, canMove ? 1 : 0, 0.25f);
                line.widthMultiplier = rayStrength * rayThickness;
                rayLight.transform.position = linePos[rayDivisions - 1] + Vector3.up * 0.05f;
                rayLight.intensity = rayStrength * 2;

            }
            // Let the user click to move to a point if they can
            if (OVRInput.GetUp(OVRInput.RawButton.LThumbstick) && canMove)
            {
                //moveSound.Play();
                StartCoroutine(MoveRoutine(moveTo));
                line.enabled = false;
                rayLight.enabled = false;
            }

        }



        private IEnumerator MoveRoutine(Vector3 moveTo)
        {
            isMoving = true;
            //Vector3 height = new Vector3(0f, 0.75f, 0f);
            float length = 0.4f;
            bool moved = false;
            for (float t = 0; t < length; t += Time.deltaTime)
            {
                float fade = Mathf.Clamp01(Mathf.Min(t, length - t) / length * 2.5f);
                fadeMat.SetColor("_Color", Color.Lerp(Color.clear, Color.black, fade));
                if (!moved && t > length / 2)
                {
                    moved = true;
                    Vector3 delta = Camera.main.transform.position - transform.position;
                    delta.y = 0;
                    transform.position = moveTo - delta + height;
                    for (int i = 0; i < rayDivisions; i++)
                    {
                        rayOrigins[i] = ray.position;
                        rayDirections[i] = ray.forward;
                    }
                }

                yield return null;
            }

            fadeMat.SetColor("_Color", Color.clear);
            isMoving = false;
        }

    }
}
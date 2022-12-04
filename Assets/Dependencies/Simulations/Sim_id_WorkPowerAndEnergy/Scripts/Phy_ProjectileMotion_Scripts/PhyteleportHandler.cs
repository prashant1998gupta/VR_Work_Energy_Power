using System;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class PhyteleportHandler : MonoBehaviour
    {
        [SerializeField] bool isViveController;
        [SerializeField] bool isQuestController;

        [Space(20)]
        [SerializeField] bool leftQuestController;
        [SerializeField] bool rightQuestController;


        [Space(20)]

        [SerializeField] GameObject player;
        [SerializeField] GameObject teleportRaycastStartPoint; // 1


        [Space(20)]


        [SerializeField] GameObject telportPointIndicatorPrefab; // 1
        GameObject telportPointIndicatorRef; // 1

        [Space(20)]


        /// <summary>
        /// Line Renderer is attached the raycastStartPos Ref Game
        /// 
        /// 
        /// 
        /// 
        /// 
        /// and is referenced here
        /// </summary>
        public LineRenderer lineRendRef;
        public Material lineRendMat;
        [Space(20)]

        [SerializeField] float raycastTrimLevel;
        Vector3 lastRaycastHitPoint;
        public bool GetLeftThumbStickPressAndHold()
        {

            if (isQuestController)
            {
                if (leftQuestController)
                {
                    return Convert.ToBoolean(OVRInput.Get(OVRInput.Button.PrimaryThumbstick));
                }
                else if (rightQuestController)
                {
                    return false;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        // Start is called before the first frame update
        void Start()
        {
            GameObject x = new GameObject();
            x.transform.parent = teleportRaycastStartPoint.transform.parent.transform;
            x.transform.localPosition = Vector3.zero;
            x.transform.localEulerAngles = Vector3.zero;
            x.AddComponent<LineRenderer>();
            lineRendRef = x.GetComponent<LineRenderer>();

            lineRendRef.material = lineRendMat;

            lineRendRef.useWorldSpace = true;


            telportPointIndicatorRef = Instantiate(telportPointIndicatorPrefab);
            telportPointIndicatorRef.SetActive(false);



            lineRendRef.enabled = false;
            telportPointIndicatorRef.SetActive(false);
        }

        // Update is called once per frame
        void Update()
        {

            if (GetLeftThumbStickPressAndHold())
            {
                print("Pad pressed");
                raycastUpdate();
            }
            else
            {
                if (lineRendRef.enabled)
                {
                    //this.gameObject.transform.parent.transform.position = lastRaycastHitPoint;



                    //this.gameObject.transform.parent.transform.position = new Vector3(
                    //    this.gameObject.transform.parent.transform.position.x - Camera.main.transform.localPosition.x,
                    //      this.gameObject.transform.parent.transform.position.y,
                    //   this.gameObject.transform.parent.transform.position.z - Camera.main.transform.localPosition.z);

                    player.transform.position = new Vector3(
                        lastRaycastHitPoint.x,
                          player.transform.position.y,
                       lastRaycastHitPoint.z);


                    lineRendRef.enabled = false;
                    telportPointIndicatorRef.SetActive(false);
                }
            }
        }

        void raycastUpdate()
        {
            lineRendRef.enabled = false;
            telportPointIndicatorRef.SetActive(false);
            RaycastHit[] hits;
            hits = Physics.RaycastAll(teleportRaycastStartPoint.transform.position, teleportRaycastStartPoint.transform.forward, Mathf.Infinity);

            //for (int i = 0; i < hits.Length; i++)
            {
                if (hits[0].collider.gameObject.name == "FloorQuad")
                {
                    lineRendRef.enabled = true;
                    lineRendRef.SetPosition(0, teleportRaycastStartPoint.transform.position);
                    //  lineRendRef.SetPosition(1, new Vector3(0, 0, hits[i].distance / raycastTrimLevel));

                    lineRendRef.SetPosition(1, hits[0].point);

                    lineRendRef.startWidth = 0.00126f * 4;
                    lineRendRef.endWidth = 0.00126f * 4;

                    telportPointIndicatorRef.transform.position = hits[0].point;
                    telportPointIndicatorRef.SetActive(true);

                    lastRaycastHitPoint = hits[0].point;
                }
                else
                {
                    lineRendRef.enabled = false;
                    telportPointIndicatorRef.SetActive(false);

                }
            }
        }

    }
}

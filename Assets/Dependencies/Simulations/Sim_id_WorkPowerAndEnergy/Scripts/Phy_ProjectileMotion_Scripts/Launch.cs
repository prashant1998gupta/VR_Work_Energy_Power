﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class Launch : MonoBehaviour
    {

        public string objectLayerName;
        [Space(20)]
        //public Transform target;
        public Vector3 acceleration;
        public float velo;
        public float angle;
        public bool isCannon;
        public PopulateGraphProjectile populateGraph;

        //public float ySpeed
        public static GameObject trailCount = null;
        public static GameObject pointReleaseReset = null;
        public static GameObject pointImpactReset = null;
        public GameObject trailobj;
        public Transform PointRelease;
        public Transform PointImpact;
        public GameObject ProjectileInfoPrefab;
        public Material lineMaterial;
        public GameObject crack;
        public float WaitTimeAfterCollision = 1f;

        Rigidbody rb;
        TrailRenderer trail;

        Vector3 spawnPosition;
        Quaternion spawnOrientation;
        Vector3 dirn;
        Vector3 orig_posn;


        Transform angleText;

        GameObject projectileInfo;
        Transform parent;

        bool markers_init = true;
        bool collided = false;
        public bool launched = false;

        // Start is called before the first frame update
        void Start()
        {
            this.gameObject.layer = LayerMask.NameToLayer("Projectile");

            trail = gameObject.GetComponent<TrailRenderer>();
            rb = gameObject.GetComponent<Rigidbody>();
            //dirn = target.transform.position - this.transform.position;
            //dirn.Normalize();
            //dirn = dirn * velocity;
            //dirn = new Vector3(dirn.x, Mathf.Abs(dirn.y * ySpeed), dirn.z);
            trail = trailobj.GetComponent<TrailRenderer>();
            PointRelease.transform.position = this.transform.position;
            spawnPosition = transform.position;
            spawnOrientation = transform.rotation;
            parent = transform.parent;
        }


        Vector3 CalculateMaxHeightPosn()
        {
            //dirn = rb.velocity;
            float u = dirn.y;
            float time = -u / Physics.gravity.y;   //Calculate time till velocity in the y-axis is 0.
            float s = (-u * u) / (2 * Physics.gravity.y);
            Vector3 maxHeightPosn = new Vector3(dirn.x * time, s, dirn.z * time);
            return maxHeightPosn;
        }

        public void LaunchProjectile(Vector3 dirn)                                      // Enables trails, sets velocity, angle and populate graphs
        {
            if (!launched)
            {
                //rb.velocity = dirn;
                if (isCannon)
                {
                    StartCoroutine(ImmediateObjectReset());
                    spawnPosition = transform.position;
                    spawnOrientation = transform.rotation;
                }
                trail.enabled = true;
                launched = true;
                trailobj.transform.position = transform.position;
                trailobj.transform.SetParent(transform);
                trailobj.GetComponent<TrailRenderer>().Clear();
                if (trailCount)
                {
                    trailCount.GetComponent<TrailRenderer>().Clear();
                    pointReleaseReset.SetActive(false);
                }
                trailCount = trailobj;
                PointRelease.gameObject.SetActive(true);
                PointImpact.gameObject.SetActive(true);
                PointRelease.transform.position = transform.position;
                orig_posn = this.transform.position;
                //acceleration = dirn * 200 / rb.mass; 
                //dirn = dirn * 200 / rb.mass * Time.deltaTime;
                this.dirn = dirn;
                velo = dirn.magnitude;
                angle = angle = Vector3.Angle(dirn, new Vector3(dirn.x, 0f, dirn.z));
                //Populate graph at this point////////////
                if (isCannon)
                {
                    populateGraph.Populate();
                    transform.SetParent(null);             //// 
                }
                collided = false;
            }
            //print(dirn);
        }

        // Update is called once per frame
        void Update()
        {
            if (angleText)
            {
                angleText.rotation = Quaternion.LookRotation(angleText.transform.position - Camera.main.transform.position, Vector3.up);
            }
        }

        void PlaceProjectileInfo(GameObject projectileInfo)
        {
            angleText = PointRelease.GetChild(0).transform.Find("Angle").GetChild(0).GetChild(0).transform;
            PlaceAngleText(PointRelease.GetChild(0).transform.Find("Angle").gameObject);
            PlaceGazeMarker(PointRelease.GetChild(0).transform.Find("Gazen").gameObject);
            PlaceVectorResolution(PointRelease.GetChild(0).transform.Find("Proj_VecRes").gameObject);
            PlaceWorldVectorResolution(PointRelease.GetChild(0).transform.Find("WorldVectorResolution").gameObject);
            PlaceRangeMarker(PointRelease.GetChild(0).transform.Find("Range").gameObject);
            if (!isCannon)
                PlaceInitHeightMarker(PointRelease.GetChild(0).transform.Find("InitHeight").gameObject);
        }
        void PlaceGazeMarker(GameObject gaze)
        {
            float height = (orig_posn + CalculateMaxHeightPosn()).y;
            if (isCannon) height = CalculateMaxHeightPosn().y;
            gaze.transform.position = orig_posn + CalculateMaxHeightPosn() + new Vector3(0f, 0.15f, 0f);
            gaze.transform.GetChild(0).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "h<sub>max</sub> = " + height.ToString("F") + "m";
            gaze.SetActive(true);
        }

        void PlaceAngleText(GameObject angleText)
        {
            angleText.transform.rotation = Quaternion.LookRotation(dirn, Vector3.up);
            angleText.transform.eulerAngles = new Vector3(0f, angleText.transform.eulerAngles.y, 0f);
            TextMeshProUGUI text = angleText.transform.GetChild(0).transform.GetChild(0).GetChild(0).gameObject.GetComponent<TextMeshProUGUI>();
            angle = Vector3.Angle(dirn, new Vector3(dirn.x, 0f, dirn.z));                                                                           //Calculates angle 
            text.text = angle.ToString("F") + "\x00B0";
        }

        void PlaceVectorResolution(GameObject vectorResolution)
        {
            vectorResolution.transform.rotation = Quaternion.LookRotation(dirn, Vector3.up);
            Transform groundArrow = vectorResolution.transform.GetChild(0).GetChild(0);
            groundArrow.eulerAngles = new Vector3(0f, groundArrow.transform.eulerAngles.y, 0f);
            velo = dirn.magnitude;
            groundArrow.parent.GetChild(1).GetChild(1).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "v = " + velo.ToString("F") + "m/s";
        }

        void PlaceInitHeightMarker(GameObject height)
        {

            height.transform.position = orig_posn + new Vector3(0f, -0.075f, 0f);
            height.transform.GetChild(0).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "h = " + height.transform.position.y.ToString("F") + "m";
            height.SetActive(true);
        }

        void PlaceWorldVectorResolution(GameObject worldVectorResolution)
        {
            //for future use
        }


        void PlaceRangeMarker(GameObject range)
        {
            //Vector3 groundPointRelease = new Vector3(PointRelease.transform.position.x, 0f, PointRelease.transform.position.z);
            //Vector3 groundPointImpact = new Vector3(PointImpact.transform.position.x, 0f, PointImpact.transform.position.z);
            
            Vector3 groundPointRelease = PointRelease.position;
            Vector3 groundPointImpact = PointImpact.position;

            range.transform.position = (groundPointRelease + groundPointImpact) / 2;
            range.transform.position = new Vector3(0f, 0.1f, 0f) + range.transform.position;
            float r = Vector3.Distance(groundPointRelease, groundPointImpact);
            if (isCannon)
            {
                float ux = Mathf.Sqrt(Mathf.Pow(dirn.x, 2) + Mathf.Pow(dirn.z, 2));
                float time = (2 * dirn.y) / (-Physics.gravity.y);
                r = ux * time;
            }
            GameObject line = range.transform.GetChild(1).gameObject;
            line.transform.position = PointRelease.transform.position;
            LineRenderer lineRenderer = line.GetComponent<LineRenderer>();
            lineRenderer.SetPosition(0, groundPointRelease);
            lineRenderer.SetPosition(1, groundPointImpact);
            lineRenderer.startWidth = 0.01f;
            lineRenderer.endWidth = 0.01f;
            lineRenderer.material = lineMaterial;
            range.transform.GetChild(0).GetChild(0).GetChild(0).gameObject.GetComponent<TextMeshProUGUI>().text = r.ToString("F") + "m";
        }

        private void OnCollisionEnter(Collision collision)
        {
            //On Collision the trail gets completed and the projectile info predab containing the arrows shows up

            //print(gameObject.name +  "Object entered = " + collision.gameObject.name);

            if (launched && !collided)
            {
                trailobj.transform.parent = null;
                PointRelease.transform.SetParent(transform.parent);
                pointReleaseReset = PointRelease.gameObject;
                PointImpact.position = transform.position;
                if (markers_init)                                                    // Instantiates markers only once for each object
                {
                    projectileInfo = Instantiate(ProjectileInfoPrefab, PointRelease);
                    projectileInfo.SetActive(true);
                    markers_init = false;
                    PointImpact.position = transform.position;
                }

                //Markers reused every other time
                PlaceProjectileInfo(projectileInfo);

                GetComponent<SoundEffectManager>().PlayStrikeSound();
                if (!isCannon)
                    StartCoroutine(ObjectReset());

                if (collision.gameObject.name == "FloorQuad")
                {
                    crack.SetActive(false);
                    crack.SetActive(true);
                }

                //crack.SetActive(false);
                //crack.SetActive(true);
                //crack.GetComponent<RFX4_EffectSettings>().IsVisible = true;
                //StartCoroutine(DistortAnim());
                crack.transform.position = new Vector3(collision.contacts[0].point.x, 0f, collision.contacts[0].point.z) + new Vector3(0f, -0.04f, 0f);
                PointRelease.transform.SetParent(null);
                if (isCannon)
                    launched = false;
                collided = true;
                //if (isCannon)
                //populateGraph.StopPopulate();
                rb.velocity = Vector3.zero;
            }
        }

        IEnumerator DistortAnim()
        {
            yield return new WaitForSeconds(WaitTimeAfterCollision);
            crack.GetComponent<RFX4_EffectSettings>().IsVisible = false;
        }


        IEnumerator ObjectReset()
        {
            yield return new WaitForSeconds(WaitTimeAfterCollision);
            transform.parent = parent;
            transform.position = spawnPosition;
            GetComponent<Rigidbody>().isKinematic = true;
            transform.rotation = spawnOrientation;
            launched = false;
            //GetComponent<Rigidbody>().isKinematic = false;
        }

        IEnumerator ImmediateObjectReset()
        {
            transform.parent = parent;
            transform.position = spawnPosition;
            //GetComponent<Rigidbody>().isKinematic = true;
            //transform.rotation = spawnOrientation;
            //launched = false;
            yield return null;
            //GetComponent<Rigidbody>().isKinematic = false;
        }
    }
}

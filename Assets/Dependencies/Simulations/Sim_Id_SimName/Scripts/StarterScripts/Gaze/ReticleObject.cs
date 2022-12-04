using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

namespace Inspirit.Simulations.Template
{
    public enum GazeStates
    {
        Default,
        Grabbable,
        Grabbed,
        Clickable,
        Clicked,
        Info
    }


    /// <summary>
    /// This script is used to control various states of GAZE UI, there are several states available to use
    /// </summary>
    public class ReticleObject : MonoBehaviour
    {
        [Header("Gaze Settings")]
        public GameObject reticleDefaultRef;
        public GameObject reticleGrabbableRef;
        public GameObject reticleGrabbedRef;
        public GameObject reticleClickableRef;
        public GameObject reticleClickedRef;
        public GameObject reticleInfoRef;
 
        public static GameObject reticleDefault;
        public static GameObject reticleGrabbable;
        public static GameObject reticleGrabbed;
        public static GameObject reticleClickable;
        public static GameObject reticleClicked;
        public static GameObject reticleInfo;
 
        static GameObject currentReticle;
        public float gazeAnimationDurationRef = 1f;
        public static float gazeAnimationDuration;

        Vector3 currentscale;
        static Tween currenttween;
        public static ReticleObject instance;

        public static ReticleObject Instance { get { return instance; } }
        void MakeInstance()
        {
            if (instance != null && instance != this)
            {
                Destroy(this.gameObject);
            }
            else
            {
                instance = this;
            }
        }

        void AssignSprites()
        {
            reticleDefault = reticleDefaultRef;
            reticleInfo = reticleInfoRef;
            reticleGrabbable = reticleGrabbableRef;
            reticleGrabbed = reticleGrabbedRef;
            reticleClickable = reticleClickableRef;
            reticleClicked = reticleClickedRef;
        }

        private void Awake()
        {
            MakeInstance();
            AssignSprites();
            reticleDefault.SetActive(true);
         }


        public static void SetGazeState(GazeStates currentstate)
        {
            HidePreviousReticle();
            GazeStates choice = currentstate;
            switch (choice)
            {
                case GazeStates.Grabbable:
                    GazeGrabbable();
                    break;
                case GazeStates.Grabbed:
                    GazeGrabbed();
                    break;
                case GazeStates.Clickable:
                    GazeClickable();
                    break;
                case GazeStates.Clicked:
                    GazeClicked();
                    break;
                case GazeStates.Info:
                    GazeInfo();
                    break;
                default:
                    GazeDefault();
                    break;
            }

        }

        static void HidePreviousReticle()
        {
            if (currentReticle)
            {
                currentReticle.SetActive(false);
            }
        }

        public static void GazeClickable()
        {
            reticleClickable.SetActive(true);
            currentReticle = reticleClickable;
        }

        public static void GazeClicked()
        {
            reticleClicked.SetActive(true);
            currentReticle = reticleClicked;
        }

        public static void GazeGrabbable()
        {
            reticleGrabbable.SetActive(true);
            currentReticle = reticleGrabbable;
        }

        public static void GazeGrabbed()
        {
            reticleGrabbed.SetActive(true);
            currentReticle = reticleGrabbed;
        }

        public static void GazeInfo()
        {
            reticleInfo.SetActive(true);
            currentReticle = reticleInfo;
        }


        public static void GazeDefault()
        {            
            reticleDefault.SetActive(true);
            currentReticle = reticleDefault;
        }


    }
}

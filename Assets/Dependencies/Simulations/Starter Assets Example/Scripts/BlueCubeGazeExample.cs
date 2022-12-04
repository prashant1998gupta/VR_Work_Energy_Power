using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Inspirit.Simulations.Template
{

    public class BlueCubeGazeExample : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
    {
        private Rigidbody rb;
        private OutlineEffect outlineEffect;
        private bool isPickedUp;
        public static bool isComplete;
        public AudioClip pickAudioClip;
        public AudioClip dropAudioClip;
        public GameObject dropAreaRegion;
        void Start()
        {
            InitialiseOutline();
            InitialiseRigidbody();
            outlineEffect.enabled = false;
        }

        void InitialiseRigidbody()
        {
            if (this.GetComponent<Rigidbody>() == null)
            {
                rb = this.gameObject.AddComponent<Rigidbody>();
                return;
            }
            rb = this.gameObject.GetComponent<Rigidbody>();
        }

        void InitialiseOutline()
        {
            if (this.GetComponent<OutlineEffect>() == null)
            {
                outlineEffect = this.gameObject.AddComponent<OutlineEffect>();
                return;
            }
            outlineEffect = this.gameObject.GetComponent<OutlineEffect>();
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            outlineEffect.enabled = true;
            ReticleObject.SetGazeState(GazeStates.Grabbable);
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            outlineEffect.enabled = false;
            ReticleObject.SetGazeState(GazeStates.Default);
            if (isPickedUp)
            {
                DropObject();
                isPickedUp = false;
            }
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            TaskUIHandler.Instance.MarkTaskAsComplete(1);
            
            if (isPickedUp)
            {
                isPickedUp = false;
                DropObject();
                AudioManager.Instance.PlayAudioClip(dropAudioClip);
            }
            else
            {
                isPickedUp = true;
                PickUpObject();
                AudioManager.Instance.PlayAudioClip(pickAudioClip);
                if (!isComplete)
                {
                    OffscreenIndicatorManager.Instance.AddTarget(dropAreaRegion);
                    isComplete = true;
                }
            }
        }

        void PickUpObject()
        {
            rb.isKinematic = true;
            outlineEffect.enabled = false;
            Utility.Copy_Parent_Pos_Rot(GazeInputModule.holderObject.transform, transform);
            this.gameObject.transform.parent = GazeInputModule.holderObject.transform;
            Debug.Log($"Object: {name} picked up", gameObject);
            ReticleObject.SetGazeState(GazeStates.Grabbed);

        }

        void DropObject()
        {
            rb.isKinematic = false;
            outlineEffect.enabled = true;
            transform.parent = null;
            Debug.Log($"Object: {name} Dropped", gameObject);
            ReticleObject.SetGazeState(GazeStates.Grabbable);
        }
    }
}
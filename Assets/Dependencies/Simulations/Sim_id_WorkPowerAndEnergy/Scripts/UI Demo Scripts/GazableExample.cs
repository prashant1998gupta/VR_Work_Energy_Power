using UnityEngine;
using UnityEngine.EventSystems;
using Inspirit.Simulations.Template;

namespace Inspirit.Simulations.VR_Test
{
    public class GazableExample : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
    {
        private Rigidbody rb;
        private OutlineEffect outlineEffect;
        private bool isPickedUp;
        public AudioClip pickAudioClip;
        public AudioClip dropAudioClip;

        private void Start()
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
            if (!isPickedUp)
            {
                outlineEffect.enabled = true;
            }
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            if (!isPickedUp)
            {
                outlineEffect.enabled = false;
            }

        }

        public void OnPointerClick(PointerEventData eventData)
        {
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
            }
        }

        void PickUpObject()
        {
            rb.isKinematic = true;
            outlineEffect.enabled = false;
            Debug.Log($"Object: {name} picked up", gameObject);
        }

        void DropObject()
        {
            rb.isKinematic = false;
            outlineEffect.enabled = true;
            transform.parent = null;
            Debug.Log($"Object: {name} Dropped", gameObject);
        }

    }
}

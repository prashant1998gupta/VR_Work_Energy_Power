using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

/// <summary>
/// This is a custom tool tip implementation
/// </summary>
namespace Inspirit.Simulations.Template
{
    public class CustomToolTip : MonoBehaviour
    {

        float scale;
        GameObject tooltipObject;
        public AudioClip audioClip;
        public float timeToScale;
        bool isOpen;
        public bool hideAtStart;
        private void Awake()
        {
            tooltipObject = this.gameObject;
        }

        private void Start()
        {
            scale = tooltipObject.transform.localScale.x;
            isOpen = false;
            if(hideAtStart)
            {
                this.gameObject.transform.localScale = Vector3.zero;
            }
        }

        /// <summary>
        /// Can be used to open Tool Tips
        /// </summary>
        public void OpenToolTip()
        {
            if(!isOpen)
            {
                isOpen = true;
                this.gameObject.transform.DOScale(scale, timeToScale);
                if(audioClip != null)
                {
                    AudioManager.Instance.PlayAudioClip(audioClip);
                }
            }
        }

        /// <summary>
        /// Can be used to close Tool Tips
        /// </summary>
        public void CloseToolTip()
        {
            isOpen = false;
            this.gameObject.transform.DOScale(0f, timeToScale);
        }

        Transform lookAt;

        /// <summary>
        /// A look at feature to make the tooltip always face the user
        /// </summary>
        public void UpdateTooltipPosition()
        {
            if(lookAt)
            {
                transform.LookAt(Camera.main.transform);
            }
            else if(Camera.main != null)
            {
                lookAt = Camera.main.transform;
            }
            else if(Camera.main == null)
            {
                return;
            }
        }

        void Update()
        {
            UpdateTooltipPosition();
        }
    }
}

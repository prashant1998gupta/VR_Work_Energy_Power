using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using DG.Tweening;

/// <summary>
/// This represents each panel of the hand menu
/// </summary>
namespace Inspirit.Simulations.Template
{
    public class HandMenuToggle : MonoBehaviour
    {
        public InputActionReference InputAction = default;
        public GameObject ToggleObject = default;
        public bool isOpen;
        Vector3 originalScale;
        public AudioClip openAudioClip;
        public AudioClip closeAudioClip;

        private void OnEnable()
        {
            InputAction.action.performed += ToggleActive;
        }

        private void OnDisable()
        {
            InputAction.action.performed -= ToggleActive;
        }

        private void Start()
        {
            originalScale = ToggleObject.transform.localScale;
        }

        public void ToggleActive(InputAction.CallbackContext context)
        {
            if (!isOpen)
            {
                ToggleObject.transform.DOScale(originalScale, 0.25f);
                AudioManager.Instance.PlayAudioClip(openAudioClip);
            }
            else
            {
                ToggleObject.transform.DOScale(0f, 0.25f);
                AudioManager.Instance.PlayAudioClip(closeAudioClip);
            }
            isOpen = !isOpen;
        }
    }
}
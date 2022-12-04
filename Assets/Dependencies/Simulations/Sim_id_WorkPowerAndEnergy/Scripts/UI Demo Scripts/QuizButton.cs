using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Inspirit.Simulations.Template;

namespace Inspirit.Simulations.VR_Test
{
    public class QuizButton : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler
    {
        [SerializeField] private bool isCursorLockingOrFullScreenButton = false;

        [SerializeField] private Image additionalImageIfAny;
        [SerializeField] private Color32 additionalImageIdleColor;
        [SerializeField] private Color32 additionalImageColorOnHover;

        [SerializeField] private bool changeSpriteColorOnHover = false;
        [SerializeField] private Color32 spriteColorOnHover;

        [SerializeField] private Sprite hoverSprite;
        [SerializeField] private Sprite pressedSprite;
        [SerializeField] private Color32 hoverTextColor;

        [SerializeField] private bool changeScaleOnHover = true;
        [SerializeField] private float scaleFactor = 1.025f;
        [SerializeField] private float scaleDuration = 0.25f;

        [SerializeField] private AudioClip audioClip;

        private Sprite idleSprite;
        private Color32 idleTextColor;
        private Color32 idleSpriteColor;
        private Vector3 idleScale;

        private Image buttonImage;
        private TextMeshProUGUI buttonText;

        public UnityEvent OnButtonClick;
        public bool isWorldSpace;

        void Awake()
        {
            buttonImage = GetComponent<Image>();
            buttonText = GetComponentInChildren<TextMeshProUGUI>();

            idleSprite = buttonImage.sprite;
            idleSpriteColor = buttonImage.color;
            idleScale = transform.localScale;

            if (buttonText)
            {
                idleTextColor = buttonText.color;
            }
        }

        void OnDisable()
        {
            if (buttonImage)
            {
                buttonImage.sprite = idleSprite;
            }

            if (buttonText)
            {
                buttonText.color = idleTextColor;
            }

            if (changeScaleOnHover)
            {
                transform.DOScale(idleScale, scaleDuration);
            }

            if (changeSpriteColorOnHover)
            {
                buttonImage.color = idleSpriteColor;
            }

            Color32 noColor = new Color32();

            if (additionalImageIfAny)
            {
                if (!additionalImageIdleColor.CompareRGB(noColor))
                {
                    additionalImageIfAny.color = additionalImageIdleColor;
                }
            }
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            if (buttonImage)
            {
                if (hoverSprite)
                {
                    buttonImage.sprite = hoverSprite;
                }
            }

            Color32 noColor = new Color32();

            if (buttonText)
            {
                if (!hoverTextColor.CompareRGB(noColor))
                {
                    buttonText.color = hoverTextColor;
                }
            }

            if (changeScaleOnHover)
            {
                transform.DOScale(idleScale * scaleFactor, scaleDuration);
            }

            if (changeSpriteColorOnHover)
            {
                if (!spriteColorOnHover.CompareRGB(noColor))
                {
                    buttonImage.color = spriteColorOnHover;
                }
            }

            if (additionalImageIfAny)
            {
                if (!additionalImageColorOnHover.CompareRGB(noColor))
                {
                    additionalImageIfAny.color = additionalImageColorOnHover;
                }
            }
            if (isWorldSpace)
            {
            }
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            if (buttonImage)
            {
                buttonImage.sprite = idleSprite;
            }

            if (buttonText)
            {
                buttonText.color = idleTextColor;
            }

            if (changeScaleOnHover)
            {
                transform.DOScale(idleScale, scaleDuration);
            }

            if (changeSpriteColorOnHover)
            {
                buttonImage.color = idleSpriteColor;
            }

            Color32 noColor = new Color32();

            if (additionalImageIfAny)
            {
                if (!additionalImageIdleColor.CompareRGB(noColor))
                {
                    additionalImageIfAny.color = additionalImageIdleColor;
                }
            }
            if (isWorldSpace)
            {
            }
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            if (buttonImage)
            {
                if (pressedSprite)
                {
                    buttonImage.sprite = pressedSprite;
                }
            }

            if (isCursorLockingOrFullScreenButton)
            {
                OnButtonClick?.Invoke();
            }
            if (isWorldSpace)
            {
            }
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            if (buttonImage)
            {
                if (hoverSprite)
                {
                    buttonImage.sprite = hoverSprite;
                }
            }
            if (isWorldSpace)
            {
            }
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            if (!isCursorLockingOrFullScreenButton)
            {
                OnButtonClick?.Invoke();
            }

            if (AudioManager.Instance)
            {
                if (audioClip)
                {
                    AudioManager.Instance.PlayAudioClip(audioClip);
                }
            }
            if (isWorldSpace)
            {
            }
        }

    }
}

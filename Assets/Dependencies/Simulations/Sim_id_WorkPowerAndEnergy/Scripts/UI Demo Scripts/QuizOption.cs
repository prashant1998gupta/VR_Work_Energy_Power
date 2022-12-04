using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Inspirit.Simulations.Template;

namespace Inspirit.Simulations.VR_Test
{
    public class QuizOption : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
    {
        [SerializeField] private Image image;
        [SerializeField] private Sprite idleSprite;
        [SerializeField] private Sprite onHoverSprite;
        [SerializeField] private Sprite correctOptionSprite;
        [SerializeField] private Sprite wrongOptionSprite;

        public AudioClip clickSound;
        private bool isClicked = false;
        [SerializeField] private bool isCorrect = false;

        public void OnPointerEnter(PointerEventData eventData)
        {
            if (!isClicked)
            {
                image.sprite = onHoverSprite;
            }
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            if (!isClicked)
            {
                image.sprite = idleSprite;
            }
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            if (!isClicked)
            {
                isClicked = true;
                AudioManager.Instance.PlayAudioClip(clickSound);
                if (isCorrect)
                {
                    image.sprite = correctOptionSprite;
                }
                else
                {
                    image.sprite = wrongOptionSprite;
                }
            }
        }

    }
}

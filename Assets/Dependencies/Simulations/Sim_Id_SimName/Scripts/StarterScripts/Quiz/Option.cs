using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Inspirit.Simulations.Template
{
    public class Option : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler 
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
                ReticleObject.SetGazeState(GazeStates.Clickable); ;
            }
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            if (!isClicked)
            {
                image.sprite = idleSprite;
            }
            ReticleObject.SetGazeState(GazeStates.Default);
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            if (!isClicked)
            {
                ReticleObject.SetGazeState(GazeStates.Clicked); ;
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

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class ButtonTransition : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler
    {
        public Color32 m_NormalColor = Color.white;
        public Color32 m_HoverColor = Color.grey;
        public Color32 m_DownColor = Color.white;

        private Image m_Image = null;

        private void Awake()
        {
            m_Image = GetComponent<Image>();
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            m_Image.color = m_HoverColor;
            GetComponent<GraphDotInfo>().Clicked();
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            m_Image.color = m_DownColor;
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            m_Image.color = m_HoverColor;
            GetComponent<GraphDotInfo>().Hovered();
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            m_Image.color = m_NormalColor;
            GetComponent<GraphDotInfo>().Unhovered();
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            throw new System.NotImplementedException();
        }


    }
}

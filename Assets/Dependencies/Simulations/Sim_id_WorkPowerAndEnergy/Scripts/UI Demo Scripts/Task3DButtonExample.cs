using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Inspirit.Simulations.Template;

namespace Inspirit.Simulations.VR_Test
{
    public class Task3DButtonExample : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler, IPointerUpHandler, IPointerDownHandler
    {
        public GameObject buttonModel;
        public GameObject prefabToInstantiate;
        public Transform spawnPoint;
        public AudioClip buttonClickSound;

        static bool isComplete;

        private void Start()
        {
            buttonModel.transform.DOScale(0.25f, 0.1f);
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            var t = Instantiate(prefabToInstantiate, spawnPoint);
            t.transform.position = spawnPoint.transform.position;
            buttonModel.transform.DOScale(0.2f, 0f);
            AudioManager.Instance.PlayAudioClip(buttonClickSound);
            if (!isComplete)
            {
                isComplete = true;
                TaskUIHandler.Instance.MarkTaskAsComplete(3);
                TaskUIHandler.Instance.AddTask("Try out the fun quiz to test your skills", TaskObject.TaskStatus.Pending);
                OffscreenIndicatorManager.Instance.ClearTargets();
            }
        }

        public void OnPointerDown(PointerEventData eventData)
        {
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            buttonModel.transform.DOScale(0.275f, 0.1f);
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            buttonModel.transform.DOScale(0.25f, 0.1f);
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            buttonModel.transform.DOScale(0.275f, 0.1f);
        }

    }
}

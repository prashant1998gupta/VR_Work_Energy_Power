using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Inspirit.Simulations.Template
{

    public class TemplateButtonExample : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler,IPointerUpHandler,IPointerDownHandler
    {
        public GameObject buttonModel;
        public GameObject prefabToInstantiate;
        public Transform spawnPoint;
        public AudioClip buttonClickSound;

        static bool isComplete;
        void Start()
        {
            buttonModel.transform.DOScale(0.25f, 0.1f);
        }

        void Update()
        {

        }

        public void OnPointerClick(PointerEventData eventData)
        {
            ReticleObject.SetGazeState(GazeStates.Clicked);
            var t =Instantiate(prefabToInstantiate, spawnPoint);
            t.transform.position = spawnPoint.transform.position;
            buttonModel.transform.DOScale(0.2f, 0f);
            AudioManager.Instance.PlayAudioClip(buttonClickSound);
            if(!isComplete)
            {
                isComplete = true;
                TaskUIHandler.Instance.MarkTaskAsComplete(3);
                TaskUIHandler.Instance.AddTask("Try out the fun quiz to test your skills", TaskObject.TaskStatus.Pending);
                OffscreenIndicatorManager.Instance.ClearTargets();
             }
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            ReticleObject.SetGazeState(GazeStates.Clicked);
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            buttonModel.transform.DOScale(0.275f, 0.1f);
            ReticleObject.SetGazeState(GazeStates.Clickable);
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            buttonModel.transform.DOScale(0.25f, 0.1f);
            ReticleObject.SetGazeState(GazeStates.Default);
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            ReticleObject.SetGazeState(GazeStates.Clickable);
            buttonModel.transform.DOScale(0.275f, 0.1f);
        }

        
    }
}
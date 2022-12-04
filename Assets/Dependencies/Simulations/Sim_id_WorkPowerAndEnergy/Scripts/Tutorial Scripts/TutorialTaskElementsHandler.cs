using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TutorialTaskElementsHandler : MonoBehaviour
    {
        [SerializeField] private List<GameObject> _tutorialTaskElements;
        [SerializeField] private TutorialTaskId _tutorialTaskId;

        private void OnEnable()
        {
        }

        public void CompletedTutorialTask(TutorialTaskId tutorialTaskId)
        {
            if(tutorialTaskId == _tutorialTaskId)
            {
                DisableElements();
            }
        }

        public void CompletedTutorialTask()
        {
            DisableElements();
        }

        private void DisableElements()
        {
            foreach(GameObject go in _tutorialTaskElements)
            {
                go.SetActive(false);
            }
        }

        public void StartedTutorialTask(TutorialTaskId tutorialTaskId)
        {
            if (tutorialTaskId == _tutorialTaskId)
            {
                EnableElements();
            }
        }

        public void JumpedToTutorialTask(TutorialTaskId tutorialTaskId)
        {
            if (tutorialTaskId == _tutorialTaskId)
                EnableElements();
            else
                DisableElements();
        }

        private void EnableElements()
        {
            foreach (GameObject go in _tutorialTaskElements)
            {
                go.SetActive(true);
            }
        }

        public void TutorialFinished()
        {
            DisableElements();
        }

        private void OnDisable()
        {
        }
    }
}

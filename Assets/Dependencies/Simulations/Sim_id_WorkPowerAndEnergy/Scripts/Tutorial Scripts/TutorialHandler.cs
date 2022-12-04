using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.Events;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TutorialHandler : MonoBehaviour
    {
        [SerializeField] UnityEvent<TutorialTaskId> TutorialTaskChangeEvent;

        [SerializeField] private TutorialTaskId _currentTutorialTask;

        [SerializeField] UnityEvent TutorialFinishedEvent;

        [SerializeField] UnityEvent<TutorialTaskId> JumpToTutorialTaskEvent;

        private void Start()
        {
            TutorialTaskChangeEvent.Invoke(_currentTutorialTask);
        }

        public void AdvanceTutorialTask(TutorialTaskId taskId)
        {
            _currentTutorialTask = taskId + 1;
            TutorialTaskChangeEvent.Invoke(_currentTutorialTask);
        }

        public void FinishTutorial()
        {
            TutorialFinishedEvent.Invoke();
        }

        public void SkipTutorial()
        {
            JumpToTutorialTaskEvent.Invoke(TutorialTaskId.TutorialFinishedScreen);
        }

        private void OnEnable()
        {
        }

        private void OnDisable()
        {
        }
    }
}

using System.Collections.Generic;
using UnityEngine;
using Inspirit.Simulations.Template;
using System;
using UnityEngine.Events;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TutorialTaskHandler : MonoBehaviour
    {
        [SerializeField] private List<TutorialInputTask> _inputTaskList;
        [SerializeField] private TutorialTask _tutorialTask;
        private bool _tutorialTaskCompleted;

        [SerializeField] UnityEvent<TutorialTaskId> TutorialTaskCompleted;

        [SerializeField] private TutorialTaskId _tutorialTaskId;

        private bool _inputTasksCompleted;

        private void OnEnable()
        {
        }

        public void CompleteInputTask(int taskId)
        {
            _inputTaskList[taskId].TaskStatus = TaskObject.TaskStatus.Completed;

            if(!_inputTasksCompleted)
                CheckTutorialComplete();
        }

        private void CheckTutorialComplete()
        {
            foreach(TutorialInputTask inputTask in _inputTaskList)
            {
                if(inputTask.TaskStatus == TaskObject.TaskStatus.Pending)
                {
                    _tutorialTaskCompleted = false;
                    break;
                }
                _tutorialTaskCompleted = true;
            }

            if (_tutorialTaskCompleted)
            {
                _tutorialTask.TaskStatus = TaskObject.TaskStatus.Completed;
                _inputTasksCompleted = true;
                TutorialTaskCompleted.Invoke(_tutorialTaskId);
            }
        }

        public void CompleteAllInputTasks()
        {
            foreach (TutorialInputTask inputTask in _inputTaskList)
            {
                inputTask.TaskStatus = TaskObject.TaskStatus.Completed;
            }
        }

        public void CompleteTutorialTask()
        {
            CompleteAllInputTasks();
            CheckTutorialComplete();
        }

        public void JumpedToTutorialTask(TutorialTaskId tutorialTaskId)
        {
            if (_tutorialTaskId != tutorialTaskId)
                CompleteTutorialTask();
        }

        private void OnDisable()
        {
        }
    }
}

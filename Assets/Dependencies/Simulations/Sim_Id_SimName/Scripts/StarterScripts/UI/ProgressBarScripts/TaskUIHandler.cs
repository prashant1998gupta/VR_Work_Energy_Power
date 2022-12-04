using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;

namespace Inspirit.Simulations.Template
{
    //A manager to control the Task Progress Bar. Add tasks or mark them as complete from here.
    public class TaskUIHandler : MonoBehaviour
    {
        [System.Serializable]
        public class TaskListObject
        {
            public string taskDescription;
            public TaskObject.TaskStatus taskStatus;
            [HideInInspector] public GameObject taskGameobject;
            public TaskListObject(string task_description, TaskObject.TaskStatus task_status, GameObject task_gameobject)
            {
                taskDescription = task_description;
                taskStatus = task_status;
                taskGameobject = task_gameobject;
            }
        }

        public string taskTitle;
        public TMP_Text taskTitleText;
        public List<TaskListObject> preAddedTasks; //This list includes pre Added Tasks
        public List<TaskListObject> allTasks; //This list includes all Tasks(both pre added and those added at runtime)
        public GameObject taskObjectPrefab;
        public static TaskUIHandler Instance;
        public Transform canvasParent;
        public TMP_Text taskNumber;


        void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(this);
            }
            else
            {
                Instance = this;
            }
        }

        private void Start()
        {
            taskTitleText.text = taskTitle;
            SpawnTasks();
            UpdateProgressBar();
        }



        //Adds the pre Added Tasks in the Task progress Bar
        void SpawnTasks()
        {
            foreach (TaskListObject task in preAddedTasks)
            {
                var temp = Instantiate(taskObjectPrefab, canvasParent);
                temp.GetComponent<TaskObject>().SetTaskProperties(task.taskDescription, task.taskStatus);
                allTasks.Add(new TaskListObject(task.taskDescription, task.taskStatus, temp));
                UpdateProgressBar();
            }
        }

        //A method to add new task to Task progress Bar
        public void AddTask(string task_description, TaskObject.TaskStatus task_status)
        {
            var temp = Instantiate(taskObjectPrefab, canvasParent);
            temp.GetComponent<TaskObject>().SetTaskProperties(task_description, task_status);
            allTasks.Add(new TaskListObject(task_description, task_status, temp));
            UpdateProgressBar();

        }

        //A method to remove a task from Task progress Bar using index
        public void RemoveTask(int task_index)
        {
            if (task_index < allTasks.Count)
            {
                GameObject taskToBeRemoved = allTasks[task_index].taskGameobject;
                taskToBeRemoved.SetActive(false);
                UpdateProgressBar();
            }
        }

        //A method to mark a task as complete in Task progress Bar using index
        public void MarkTaskAsComplete(int task_index)
        {
            if (task_index < allTasks.Count)
            {
                allTasks[task_index].taskStatus = TaskObject.TaskStatus.Completed;
                GameObject taskToBeCompleted = allTasks[task_index].taskGameobject;
                taskToBeCompleted.GetComponent<TaskObject>().SetTaskStatus(TaskObject.TaskStatus.Completed);
                UpdateProgressBar();
            }
        }

        //A method to mark a task as pending in Task progress Bar using index
        public void MarkTaskAsPending(int task_index)
        {
            if (task_index < allTasks.Count)
            {
                allTasks[task_index].taskStatus = TaskObject.TaskStatus.Pending;
                GameObject taskToBeCompleted = allTasks[task_index].taskGameobject;
                taskToBeCompleted.GetComponent<TaskObject>().SetTaskStatus(TaskObject.TaskStatus.Pending);
                UpdateProgressBar();
            }
        }

        public Image progressBarFilled;

        //A method to update progress in the Task progress Bar
        public void UpdateProgressBar()
        {
            float completedTasks = 0;
            float fillamount;
            foreach (TaskListObject task in allTasks)
            {
                if (task.taskStatus == TaskObject.TaskStatus.Completed)
                {
                    completedTasks++;
                }
            }
            fillamount = (float)completedTasks / (float)allTasks.Count;
            if (fillamount == 1)
            {
                taskNumber.text = "Completed!";
            }
            else
            {
                taskNumber.text = "Tasks " + completedTasks + "/" + allTasks.Count;
            }

            progressBarFilled.DOFillAmount(fillamount, 1f);
        }
    }

}
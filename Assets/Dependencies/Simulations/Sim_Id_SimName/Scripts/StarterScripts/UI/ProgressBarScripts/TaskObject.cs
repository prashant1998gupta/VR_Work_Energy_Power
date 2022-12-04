using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using UnityEngine.UI;

namespace Inspirit.Simulations.Template
{
    //A Object which will be showing the Task inside the Task Progress Bar
    public class TaskObject : MonoBehaviour
    {
        public enum TaskStatus
        {
            Pending = 0,
            Completed = 1,
        }

        bool isComplete;
        public AudioClip taskCompletionAudioClip;
        public Color uncheckedColorText;
        public Color checkedColorText;
        [SerializeField] private TMP_Text taskDescriptionObject;
        TaskStatus taskStatus;
        Image objectiveSprite;
        //Set the properties of Task Object like description and status
        public void SetTaskProperties(string task_description, TaskStatus current_status)
        {
            taskDescriptionObject.text = task_description;
            taskStatus = current_status;
            objectiveSprite = this.GetComponent<Image>();
            SetTaskStatus(current_status);
        }

        public GameObject completeSprite;
        public GameObject incompleteSprite;

        //Set the status of the Task Object
        public void SetTaskStatus(TaskStatus currentTaskStatus)
        {
            taskStatus = currentTaskStatus;
            if (currentTaskStatus == TaskStatus.Completed &&!isComplete)
            {
                completeSprite.SetActive(true);
                completeSprite.transform.DOScale(1f, 1f);
                incompleteSprite.SetActive(false);
                incompleteSprite.transform.localScale = Vector3.zero;
                Sequence sequence = DOTween.Sequence();
                sequence.Append(objectiveSprite.DOFade(0.5f, 0.5f));
                sequence.Append(objectiveSprite.DOFade(0f, 0.5f));
                AudioManager.Instance.SetVolume(0.75f);
                AudioManager.Instance.PlayAudioClip(taskCompletionAudioClip);
                AudioManager.Instance.SetVolume(1f);
                isComplete = true;
            }
            else if (currentTaskStatus == TaskStatus.Pending)
            {
                completeSprite.SetActive(false);
                incompleteSprite.transform.DOScale(1f, 0.25f);
                incompleteSprite.SetActive(true);
                completeSprite.transform.localScale = Vector3.zero;
                Sequence sequence = DOTween.Sequence();
                sequence.Append(objectiveSprite.DOFade(0.5f, 0.5f));
                sequence.Append(objectiveSprite.DOFade(0f, 0.5f));
            }
 
        }

    }
}
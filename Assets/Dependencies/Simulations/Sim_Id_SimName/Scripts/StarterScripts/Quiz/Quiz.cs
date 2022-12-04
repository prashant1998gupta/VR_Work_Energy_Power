using UnityEngine;

namespace Inspirit.Simulations.Template
{
    public class Quiz : MonoBehaviour
    {
        [SerializeField] private GameObject nextButton;
        [SerializeField] private GameObject previousButton;

        private Question[] questions;
        private int currentQuestionIndex = 0;
        public AudioClip clickSound;

        void Awake()
        {
            questions = GetComponentsInChildren<Question>(true);
            ActivateQuestion(currentQuestionIndex);
        }

        private void ActivateQuestion(int index)
        {
            for (int i = 0; i < questions.Length; i++)
            {
                if (i == index)
                {
                    questions[i].gameObject.SetActive(true);
                    if (i == 2)
                    {
                        TaskUIHandler.Instance.MarkTaskAsComplete(4); //Only for template example
                    }
                }
                
                else
                {
                    questions[i].gameObject.SetActive(false);
                }
            }

            if (index == 0)
            {
                // first question
                nextButton.SetActive(true);
                previousButton.SetActive(false);
            }
            else if (index == (questions.Length - 1))
            {
                // last question
                nextButton.SetActive(false);
                previousButton.SetActive(true);
            }
            else
            {
                nextButton.SetActive(true);
                previousButton.SetActive(true);
            }
        }

        public void OnClickNextButton()
        {
            ActivateQuestion(++currentQuestionIndex);
            AudioManager.Instance.PlayAudioClip(clickSound);
        }

        public void OnClickPreviousButton()
        {
            ActivateQuestion(--currentQuestionIndex);
            AudioManager.Instance.PlayAudioClip(clickSound);
        }
    }
}

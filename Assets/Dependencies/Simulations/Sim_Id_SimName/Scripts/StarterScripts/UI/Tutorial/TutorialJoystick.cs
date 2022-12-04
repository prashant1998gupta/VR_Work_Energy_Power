using System.Collections;
using System.Collections.Generic;
using HighlightPlus;
using UnityEngine;
using BNG;
using UnityEngine.Events;

namespace Inspirit.Simulations.Template
{
    public class TutorialJoystick : MonoBehaviour
    {
        public enum TutorialState { Intro, Buttons, Joysticks, Triggers, Grip }

        [Header("Buttons")]
        [SerializeField] HighlightEffect[] buttons;
        [SerializeField] HighlightEffect[] joysticks;
        [SerializeField] HighlightEffect[] triggers;
        [SerializeField] HighlightEffect[] grips;

        [Header("Joysticks")]
        [SerializeField] Transform jLeft;
        [SerializeField] Transform jRight;
        [Header("Panels")]
        [SerializeField] GameObject[] panels;

        [Header("Events")]
        [SerializeField] UnityEvent onComplete;


        public TutorialState tState = TutorialState.Intro;

        public void EnableButtons()
        {
            foreach (HighlightEffect h in buttons)
            {
                h.highlighted = true;
            }
            panels[0].SetActive(true);
        }

        public void EnableJoysticks()
        {
            foreach (HighlightEffect h in buttons)
            {
                h.highlighted = false;
            }

            foreach (HighlightEffect h in joysticks)
            {
                h.highlighted = true;
            }
            panels[0].SetActive(false);
            panels[1].SetActive(true);
        }

        public void EnableGrips()
        {
            foreach (HighlightEffect h in joysticks)
            {
                h.highlighted = false;
            }

            foreach (HighlightEffect h in grips)
            {
                h.highlighted = true;
            }

            jLeft.transform.localRotation = Quaternion.Euler(-15, 60, 45);
            jRight.transform.localRotation = Quaternion.Euler(-15, -60, -45);

            panels[1].SetActive(false);
            panels[2].SetActive(true);
        }
        public void EnableTriggers()
        {
            foreach (HighlightEffect h in grips)
            {
                h.highlighted = false;
            }

            foreach (HighlightEffect h in triggers)
            {
                h.highlighted = true;
            }

            panels[2].SetActive(false);
            panels[3].SetActive(true);
        }

        private void Awake()
        {
            EnableButtons();
            tState = TutorialState.Buttons;
        }

        void Update()
        {
            if ((
                InputBridge.Instance.GetControllerBindingValue(ControllerBinding.AButtonDown) ||
                InputBridge.Instance.GetControllerBindingValue(ControllerBinding.BButtonDown) ||
                InputBridge.Instance.GetControllerBindingValue(ControllerBinding.XButtonDown) ||
                InputBridge.Instance.GetControllerBindingValue(ControllerBinding.YButtonDown)
            ) && tState == TutorialState.Buttons)
            {
                Debug.Log("Holi");
                tState = TutorialState.Joysticks;
                EnableJoysticks();
            }

            if ((
                InputBridge.Instance.GetInputAxisValue(InputAxis.LeftThumbStickAxis) != Vector2.zero ||
                InputBridge.Instance.GetInputAxisValue(InputAxis.RightThumbStickAxis) != Vector2.zero
            ) && tState == TutorialState.Joysticks)
            {
                Debug.Log("boli");
                tState = TutorialState.Grip;
                EnableGrips();
            }

            if ((
                InputBridge.Instance.GetControllerBindingValue(ControllerBinding.LeftGripDown) ||
                InputBridge.Instance.GetControllerBindingValue(ControllerBinding.RightGripDown)
            ) && tState == TutorialState.Grip)
            {
                Debug.Log("coli");
                tState = TutorialState.Triggers;
                EnableTriggers();
            }

            if ((
                InputBridge.Instance.GetControllerBindingValue(ControllerBinding.LeftTriggerDown) ||
                InputBridge.Instance.GetControllerBindingValue(ControllerBinding.RightTriggerDown)
            ) && tState == TutorialState.Triggers)
            {
                Debug.Log("sorry");
                onComplete?.Invoke();
            }

        }

    }
}
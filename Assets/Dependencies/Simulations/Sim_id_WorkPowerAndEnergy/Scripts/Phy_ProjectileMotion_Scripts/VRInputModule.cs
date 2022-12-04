using UnityEngine;
using UnityEngine.EventSystems;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class VRInputModule : BaseInputModule
    {
        public Camera m_camera;         //camera assigned to the controller


        private GameObject currentObj = null;
        protected PointerEventData data = null;

        protected override void Awake()
        {
            base.Awake();
            data = new PointerEventData(eventSystem);
        }

        public override void Process()   // Process is like update
        {
            // Reset data, set camera
            data.Reset();
            data.position = new Vector2(m_camera.pixelWidth / 2, m_camera.pixelHeight / 2);     //data position setup to middle of the camera 

            //Raycast
            eventSystem.RaycastAll(data, m_RaycastResultCache);                                 //Fire raycast from data position
            data.pointerCurrentRaycast = FindFirstRaycast(m_RaycastResultCache);
            currentObj = data.pointerCurrentRaycast.gameObject;                                 //assign the object raycast falls on

            //ClearRaycast
            HandlePointerExitAndEnter(data, currentObj);

            //Hover states
            if (!eventSystem.currentSelectedGameObject)
                HandlePointerExitAndEnter(data, currentObj);


        }

        public PointerEventData GetData()
        {
            return data;
        }

        protected void ProcessPress(PointerEventData data)
        {
            //Set raycast
            data.pointerPressRaycast = data.pointerCurrentRaycast;

            // check for object hit, get the down handler, call
            GameObject newPointerpress = ExecuteEvents.ExecuteHierarchy(currentObj, data, ExecuteEvents.pointerDownHandler);

            //if no donw handler get click handler
            if (newPointerpress == null)
                newPointerpress = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentObj);

            //set data
            data.pressPosition = data.position;
            data.pointerPress = newPointerpress;
            data.rawPointerPress = currentObj;
        }

        protected void ProcessRelease(PointerEventData data)
        {
            // Execute pointer up
            ExecuteEvents.Execute(data.pointerPress, data, ExecuteEvents.pointerUpHandler);
            //Check for clickHandler
            GameObject pointerUpHandler = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentObj);

            //Check if acual
            if (data.pointerPress == pointerUpHandler)
            {
                ExecuteEvents.Execute(data.pointerPress, data, ExecuteEvents.pointerClickHandler);
            }
            // Clear selected gameobject
            eventSystem.SetSelectedGameObject(null);
            // Reset data
            data.pressPosition = Vector2.zero;
            data.pointerPress = null;
            data.rawPointerPress = null;
        }
    }
}

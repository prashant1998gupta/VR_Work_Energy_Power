using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

namespace Inspirit.Simulations.Template
{
    public class GazeInputModule : BaseInputModule
    {
        [Tooltip("Unity Input Action used to simulate a click or touch event")]
        [SerializeField] private InputActionReference uiInputAction;

        [Tooltip("If true a PhysicsRaycaster component will be added to the UI camera, allowing physical objects to use IPointer events such as OnPointClick, OnPointEnter, etc.")]
        [SerializeField] private bool addPhysicsRaycaster = true;

        [SerializeField] private LayerMask physicsRaycasterEventMask;

        [Header("Shown for Debug : ")]
        [SerializeField] private GameObject pressingObject;
        [SerializeField] private GameObject draggingObject;
        [SerializeField] private GameObject releasingObject;

        private PointerEventData eventData;
        private Camera cameraCaster;

        private GameObject initialPressObject;
        private bool lastInputDown;
        bool inputDown;

        public enum Modes { FreeRoam, Fixed };
        public Modes mode = Modes.Fixed;

        public GameObject holderObjectReference;
        public static GameObject holderObject;

        private static GazeInputModule instance;
        public static GazeInputModule Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = FindObjectOfType<GazeInputModule>();

                    if (instance == null)
                    {
                        // Check for existing event system
                        EventSystem eventSystem = EventSystem.current;
                        if (eventSystem == null)
                        {
                            eventSystem = new GameObject("EventSystem").AddComponent<EventSystem>(); ;
                        }

                        instance = eventSystem.gameObject.AddComponent<GazeInputModule>();
                    }
                }

                return instance;
            }
        }

        protected override void Awake()
        {
            // Adding Default layer to the layer mask
            physicsRaycasterEventMask |= (1 << 0);
            InitEventSystem();
            holderObject = holderObjectReference;
        }

        protected virtual void InitEventSystem()
        {
            UpdateCameraCaster();

            AssignCameraToAllCanvases(cameraCaster);

            eventData = new PointerEventData(eventSystem);
            eventData.position = new Vector2(cameraCaster.pixelWidth / 2, cameraCaster.pixelHeight / 2);
        }

        protected override void Start()
        {
            base.Start();
            AssignCameraToAllCanvases(cameraCaster);
            SwitchToFixedMode();
        }

        void Init()
        {
            if (cameraCaster == null)
            {
                // Create the camera required for the caster.
                // We can reduce the fov and disable the camera component for performance
                var go = new GameObject("CameraCaster");
                cameraCaster = go.AddComponent<Camera>();
                cameraCaster.stereoTargetEye = StereoTargetEyeMask.None;
                cameraCaster.fieldOfView = Camera.main.fieldOfView;
                cameraCaster.nearClipPlane = Camera.main.nearClipPlane;
                cameraCaster.farClipPlane = 10f;
                cameraCaster.clearFlags = CameraClearFlags.Nothing;
                cameraCaster.enabled = false;

                // Add PhysicsRaycaster so other objects can subscribe to IPointer events
                if (addPhysicsRaycaster)
                {
                    var pr = go.AddComponent<PhysicsRaycaster>();
                    pr.eventMask = physicsRaycasterEventMask;
                }
            }
        }

        public override void Process()
        {
            DoProcess();
        }

        public void DoProcess()
        {
            // Input isn't ready if this Camera Caster's gameObject isn't active
            if (eventData == null || !CameraCasterReady())
            {
                return;
            }

            if (mode == Modes.FreeRoam)
            {
                eventData.position = new Vector2(cameraCaster.pixelWidth / 2, cameraCaster.pixelHeight / 2);
            }
            else if (mode == Modes.Fixed)
            {
                eventData.position = Mouse.current.position.ReadValue();
            }

            eventSystem.RaycastAll(eventData, m_RaycastResultCache);

            eventData.pointerCurrentRaycast = FindFirstRaycast(m_RaycastResultCache);
            m_RaycastResultCache.Clear();

            // Handle Hover
            HandlePointerExitAndEnter(eventData, eventData.pointerCurrentRaycast.gameObject);

            // Handle Drag
            ExecuteEvents.Execute(eventData.pointerDrag, eventData, ExecuteEvents.dragHandler);

            // Press Events
            inputDown = InputReady();

            // On Trigger Down > TriggerDownValue this frame but not last
            if (inputDown && lastInputDown == false)
            {
                PressDown();
            }
            // On Held Down
            else if (inputDown)
            {
                Press();
            }
            // On Release
            else
            {
                Release();
            }

            lastInputDown = inputDown;
        }

        public virtual bool InputReady()
        {

            // Input isn't ready if this Camera Caster's gameObject isn't active
            if (!CameraCasterReady())
            {
                return false;
            }

            // Check Unity Action
            if (uiInputAction != null && uiInputAction.action.ReadValue<float>() == 1f)
            {
                return true;
            }

            return false;
        }


        /// <summary>
        /// Returns true if we have a camera caster enabled and ready to send out data
        /// Returns false if the camera caster is null or it's gameobject is disabled
        /// </summary>
        /// <returns></returns>
        public virtual bool CameraCasterReady()
        {
            if (cameraCaster != null && !cameraCaster.gameObject.activeInHierarchy)
            {
                return false;
            }

            return true;
        }

        public virtual void PressDown()
        {
            eventData.pointerPressRaycast = eventData.pointerCurrentRaycast;

            // Deselect if selection changed
            if (initialPressObject != null)
            {
                // ExecuteEvents.Execute(_initialPressObject, EventData, ExecuteEvents.deselectHandler);
                initialPressObject = null;
            }

            initialPressObject = ExecuteEvents.GetEventHandler<IPointerClickHandler>(eventData.pointerPressRaycast.gameObject);

            // Set Press Objects and Events
            SetPressingObject(initialPressObject);
            ExecuteEvents.Execute(eventData.pointerPress, eventData, ExecuteEvents.pointerDownHandler);

            // Set Drag Objects and Events
            SetDraggingObject(ExecuteEvents.GetEventHandler<IDragHandler>(eventData.pointerPressRaycast.gameObject));
            ExecuteEvents.Execute(eventData.pointerDrag, eventData, ExecuteEvents.beginDragHandler);
        }

        public virtual void Press()
        {
            eventData.pointerPressRaycast = eventData.pointerCurrentRaycast;

            // Set Press Objects and Events
            SetPressingObject(ExecuteEvents.GetEventHandler<IPointerClickHandler>(eventData.pointerPressRaycast.gameObject));
            ExecuteEvents.Execute(eventData.pointerPress, eventData, ExecuteEvents.pointerDownHandler);

            // Set Drag Objects and Events
            SetDraggingObject(ExecuteEvents.GetEventHandler<IDragHandler>(eventData.pointerPressRaycast.gameObject));
            ExecuteEvents.Execute(eventData.pointerDrag, eventData, ExecuteEvents.beginDragHandler);
        }

        public virtual void Release()
        {

            SetReleasingObject(ExecuteEvents.GetEventHandler<IPointerClickHandler>(eventData.pointerCurrentRaycast.gameObject));

            // Considered a click event if released after an initial click
            if (eventData.pointerPress == releasingObject)
            {
                ExecuteEvents.Execute(eventData.pointerPress, eventData, ExecuteEvents.pointerClickHandler);
            }

            ExecuteEvents.Execute(eventData.pointerPress, eventData, ExecuteEvents.pointerUpHandler);
            ExecuteEvents.Execute(eventData.pointerDrag, eventData, ExecuteEvents.endDragHandler);

            // Send deselect to
            // ExecuteEvents.Execute(ReleasingObject, EventData, ExecuteEvents.deselectHandler);

            ClearAll();
        }

        public virtual void ClearAll()
        {
            SetPressingObject(null);
            SetDraggingObject(null);

            eventData.pointerCurrentRaycast.Clear();
        }

        public virtual void SetPressingObject(GameObject pressing)
        {
            eventData.pointerPress = pressing;
            pressingObject = pressing;
        }

        public virtual void SetDraggingObject(GameObject dragging)
        {
            eventData.pointerDrag = dragging;
            draggingObject = dragging;
        }

        public virtual void SetReleasingObject(GameObject releasing)
        {
            releasingObject = releasing;
        }

        public virtual void AssignCameraToAllCanvases(Camera cam)
        {
            Canvas[] allCanvas = FindObjectsOfType<Canvas>();
            for (int x = 0; x < allCanvas.Length; x++)
            {
                AddCanvasToCamera(allCanvas[x], cam);
            }
        }

        public virtual void AddCanvas(Canvas canvas)
        {
            AddCanvasToCamera(canvas, cameraCaster);
        }

        public virtual void AddCanvasToCamera(Canvas canvas, Camera cam)
        {
            if (cam != null)
            {
                canvas.worldCamera = cam;
            }
        }

        public virtual void UpdateCameraCaster()
        {
            // Make sure variables exist
            Init();

            // Setup the Transform
            cameraCaster.transform.parent = Camera.main.transform;
            cameraCaster.transform.localPosition = Vector3.zero;
            cameraCaster.transform.localEulerAngles = Vector3.zero;
        }

        public void SwitchToFixedMode()
        {
            if (mode == Modes.FreeRoam)
            {
                Cursor.lockState = CursorLockMode.None;
                mode = Modes.Fixed;
            }
        }

        public void SwitchToFreeRoamMode()
        {
            if (mode == Modes.Fixed)
            {
                Cursor.lockState = CursorLockMode.Locked;
                mode = Modes.FreeRoam;
            }
        }
    }
}

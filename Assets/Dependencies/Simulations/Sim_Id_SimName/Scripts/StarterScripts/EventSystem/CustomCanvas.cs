using UnityEngine;
using UnityEngine.UI;

namespace Inspirit.Simulations.Template
{
    /// <summary>
    /// Add this Component to any Canvas to make sure it can be interacted with in World Space
    /// </summary>
    [RequireComponent(typeof(GraphicRaycaster))]
    [RequireComponent(typeof(Canvas))]
    public class CustomCanvas : MonoBehaviour
    {
        void Start()
        {
            GazeInputModule.Instance.AddCanvas(GetComponent<Canvas>());
        }
    }
}


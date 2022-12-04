using TMPro;
using UnityEngine;

namespace Inspirit.Simulations.Template
{
    public class FPSDisplay : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI fpsText;

        private float pollingTime = 1f;
        private float time;
        private int frameCount;

        /// <summary>
        /// Calculates the average fps and displays on screen.
        /// </summary>
        void Update()
        {
            time += Time.deltaTime;
            frameCount++;

            if (time >= pollingTime)
            {
                int frameRate = Mathf.RoundToInt(frameCount / time);
                fpsText.text = "FPS: " + frameRate.ToString();

                time -= pollingTime;
                frameCount = 0;
            }
        }
    }
}
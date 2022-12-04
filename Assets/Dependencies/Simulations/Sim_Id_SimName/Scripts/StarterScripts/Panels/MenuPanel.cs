using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Inspirit.Simulations.Template
{
    public class MenuPanel : MonoBehaviour
    {
        [SerializeField] private GameObject menuPanel;
        [SerializeField] private GameObject settingsPanel;
        [SerializeField] private GameObject controlsPanel;

        [SerializeField] private Slider soundVolumeSlider;
        [SerializeField] private TextMeshProUGUI soundVolumePercentage;

        [SerializeField] private Slider mouseSensitivitySlider;
        [SerializeField] private TextMeshProUGUI mouseSensitivityPercentage;

        [SerializeField] private TextMeshProUGUI maximizeButtonText;
        [SerializeField] private Image maximizeButtonImage;
        [SerializeField] private Sprite maximizeSprite;
        [SerializeField] private Sprite minimizeSprite;

        private PlayerMovementController playerMovementController;
        private MenuPanelManager menuPanelManager;

        private void Awake()
        {
            menuPanelManager = GetComponentInParent<MenuPanelManager>(true);
            soundVolumeSlider.onValueChanged.AddListener(SetVolume);
            mouseSensitivitySlider.onValueChanged.AddListener(SetMouseSensitivity);

            playerMovementController = FindObjectOfType<PlayerMovementController>();

            if (Application.platform == RuntimePlatform.WebGLPlayer)
            {
                playerMovementController.RotationSpeed = 0.1f;
            }

            mouseSensitivitySlider.value = playerMovementController.RotationSpeed;
            SetMouseSensitivity(mouseSensitivitySlider.value);
        }

        private void OnEnable()
        {
            menuPanel.SetActive(true);
            settingsPanel.SetActive(false);
            controlsPanel.SetActive(false);

            if (menuPanelManager.menuPanelCanBeShown)
            {
                GazeInputModule.Instance.SwitchToFixedMode();
                playerMovementController.SetPlayerMovement(false);
            }
        }

        private void LockCursorAndEnterFreeRoamMode()
        {
            GazeInputModule.Instance.SwitchToFreeRoamMode();
            playerMovementController.SetPlayerMovement(true);
        }

        public void OnClickSettingsButton()
        {
            menuPanel.SetActive(false);
            controlsPanel.SetActive(false);
            settingsPanel.SetActive(true);
        }

        public void OnClickControlsButton()
        {
            menuPanel.SetActive(false);
            controlsPanel.SetActive(true);
            settingsPanel.SetActive(false);
        }

        public void OnClickMaximizeButton()
        {
            Screen.fullScreen = !Screen.fullScreen;

            if (Screen.fullScreen)
            {
                maximizeButtonText.text = "MAXIMIZE";
                maximizeButtonImage.sprite = maximizeSprite;         
            }
            else
            {
                maximizeButtonText.text = "MINIMIZE";
                maximizeButtonImage.sprite = minimizeSprite;
            }
        }

        public void OnClickResumeButton()
        {
            gameObject.SetActive(false);
            LockCursorAndEnterFreeRoamMode();
        }

        public void OnClickSettingsBackButton()
        {
            menuPanel.SetActive(true);
            controlsPanel.SetActive(false);
            settingsPanel.SetActive(false);
        }

        public void OnClickControlsBackButton()
        {
            menuPanel.SetActive(true);
            controlsPanel.SetActive(false);
            settingsPanel.SetActive(false);
        }

        private void SetVolume(float value)
        {
            if (AudioManager.Instance)
            {
                AudioManager.Instance.SetVolume(value);
                int percentage = (int)(value * 100f);
                soundVolumePercentage.text = percentage + "%";
            }
        }

        private void SetMouseSensitivity(float value)
        {
            if (playerMovementController)
            {
                playerMovementController.RotationSpeed = value;
                int percentage = (int)(value * 100f);
                mouseSensitivityPercentage.text = percentage + "%";
            }
        }
    }
}

using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Inspirit.Simulations.Template
{
    public class MenuPanelManager : MonoBehaviour
    {
        private MenuPanel menuPanel;
        private InstructionPanel instructionPanel;
        public bool menuPanelCanBeShown = false;

        [SerializeField] private TextMeshProUGUI instructionText;

        void Awake()
        {
            menuPanel = GetComponentInChildren<MenuPanel>(true);
            instructionPanel = FindObjectOfType<InstructionPanel>(true);       
        }

        private void Start()
        {
            menuPanel.gameObject.SetActive(false);
            instructionText.gameObject.SetActive(false);
        }

        private void OnEnable()
        {
            instructionPanel.StartGameButtonPressed += EnableShowingMenuPanel;
        }

        private void OnDisable()
        {
            instructionPanel.StartGameButtonPressed -= EnableShowingMenuPanel;
        }

        private void EnableShowingMenuPanel()
        {
            menuPanelCanBeShown = true;
        }

        // Update is called once per frame
        void Update()
        {
            if (!menuPanelCanBeShown)
                return;

            if (Keyboard.current[Key.Tab].wasPressedThisFrame)
            {
                menuPanel.gameObject.SetActive(true);
            }

            if (menuPanel.gameObject.activeInHierarchy)
            {
                instructionText.gameObject.SetActive(false);
            }
            else
            {
                instructionText.gameObject.SetActive(true);
            }
        }
    }
}

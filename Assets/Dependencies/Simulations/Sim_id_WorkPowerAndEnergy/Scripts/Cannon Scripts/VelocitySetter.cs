using UnityEngine;
using UnityEngine.UI;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class VelocitySetter : MonoBehaviour
    {
        [SerializeField] private Slider _velocitySlider;
        [SerializeField] private Text _velocityValue;
        private float _velocity;

        private void Awake()
        {
            _velocitySlider.onValueChanged.AddListener(delegate { UpdateVelocity(); });
            UpdateVelocity();
        }

        private void UpdateVelocity()
        {
            _velocity = _velocitySlider.value;
            _velocityValue.text = _velocity.ToString();
        }
    }
}

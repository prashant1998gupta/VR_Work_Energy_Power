using UnityEngine;
using UnityEngine.UI;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class CannonTilter : MonoBehaviour
    {
        [SerializeField] private Transform _cannonBody;
        [SerializeField] private Slider _angleSlider;
        private Quaternion _cannonRotation;
        private float _cannonAngle;

        [SerializeField] private Text _angleValue;

        private void Awake()
        {
            if (CheckDependencies())
            {
                _angleSlider.onValueChanged.AddListener(delegate { TiltCannon(); });
                TiltCannon();
            }
        }

        private void TiltCannon()
        {
            _cannonAngle = _angleSlider.value;
            _angleValue.text = _cannonAngle.ToString();
            _cannonRotation = Quaternion.Euler(_cannonBody.rotation.x, _cannonBody.rotation.y, _cannonAngle);
            _cannonBody.rotation = _cannonRotation;
        }

        private bool CheckDependencies()
        {
            if ((_cannonBody != null) && (_angleSlider != null) && (_angleValue != null))
                return true;

            return false;
        }
    }
}

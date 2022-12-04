using UnityEngine;
using UnityEngine.UI;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class CannonLaunch : MonoBehaviour
    {
        [SerializeField] private Cannon _cannon;
        [SerializeField] private GameObject _cannonBall;
        [SerializeField] private GameObject _cannonPivot;
        private float _power;

        private float _cannonAngle;
        private float _velY;

        [SerializeField] private Slider _angleSlider;
        [SerializeField] private Slider _velocitySlider;

        public void LaunchProjectile()
        {
            if (_cannonBall.GetComponent<Launch>().launched == false)
            {
                //_cannonAngle = _cannon.gameObject.transform.rotation.z;
                _velY = _velocitySlider.value;
                _cannonAngle = _angleSlider.value;

                _power = _velY / Mathf.Sin(_cannonAngle * Mathf.Deg2Rad);
                _cannon.ShootProjectile(_power);
            }
            _cannonPivot.transform.rotation = Quaternion.Euler(-90f, 0f, 0f);
            transform.rotation = Quaternion.AngleAxis(0, transform.right);
        }
    }
}

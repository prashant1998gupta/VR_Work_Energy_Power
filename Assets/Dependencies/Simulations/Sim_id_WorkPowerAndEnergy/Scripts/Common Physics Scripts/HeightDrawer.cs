using UnityEngine;
using TMPro;
using UnityEngine.Events;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class HeightDrawer : MonoBehaviour
    {
        [SerializeField] GameObject _projectileInfo;
        GameObject _gaze;
        GameObject _initHeight;

        Vector3 _originalPosition;
        Vector3 _gazePosition;

        float _maxHeight;
        float _currentHeight;
        float _maxX;
        float _maxZ;

        bool _foundMaxHeight;
        bool _launched;

        Rigidbody _rigidBody;

        [SerializeField] UnityEvent ReachedMaxHeight;

        private void Start()
        {
            _rigidBody = GetComponent<Rigidbody>();
        }

        public void RememberOrigin()
        {
            _launched = true;
            _foundMaxHeight = false;
            _originalPosition = transform.position;
        }

        public void DrawHeights()
        {
            _projectileInfo.SetActive(true);

            _gaze = _projectileInfo.transform.Find("Gazen").gameObject;
            _initHeight = _projectileInfo.transform.Find("InitHeight").gameObject;

            _gazePosition = new Vector3(_maxX, _maxHeight, _maxZ);
            _gaze.transform.position = _gazePosition + new Vector3(0f, 0.15f, 0f);
            _gaze.transform.GetChild(0).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "h<sub>max</sub> = " + _maxHeight.ToString("F") + "m";
            _gaze.SetActive(true);

            _initHeight.transform.position = _originalPosition + new Vector3(0f, -0.075f, 0f);
            _initHeight.transform.GetChild(0).GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = "h = " + _originalPosition.y.ToString("F") + "m";
            _initHeight.SetActive(true);
        }

        private void FixedUpdate()
        {
            if(!_foundMaxHeight && _launched)
            {
                if(_rigidBody.velocity.y < 0 )
                {
                    _maxHeight = _currentHeight;
                    _maxX = transform.position.x;
                    _maxZ = transform.position.z;
                    _foundMaxHeight = true;

                    ReachedMaxHeight.Invoke();
                }

                _currentHeight = transform.position.y;
            }
        }

        public void HideProjectileInfo()
        {
            _projectileInfo.SetActive(false);
        }
    }
}
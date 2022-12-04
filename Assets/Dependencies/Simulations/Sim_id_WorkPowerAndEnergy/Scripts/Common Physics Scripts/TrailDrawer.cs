using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class TrailDrawer : MonoBehaviour
    {
        TrailRenderer _trailRenderer;

        [SerializeField] GameObject _trailObj;

        public static GameObject _trailCount = null;
        public static GameObject _pointReleaseReset = null;

        [SerializeField] Transform _pointRelease;
        [SerializeField] Transform _pointImpact;

        Vector3 _originalPosition;

        private void Start()
        {
            _trailRenderer = _trailObj.GetComponent<TrailRenderer>();
            _pointRelease.transform.position = this.transform.position;
        }

        public void DrawTrail()
        {
            _trailRenderer.enabled = true;

            _trailObj.transform.position = transform.position;
            _trailObj.transform.SetParent(transform);
            _trailObj.GetComponent<TrailRenderer>().Clear();

            if(_trailCount)
            {
                //_trailCount.GetComponent<TrailRenderer>().Clear();
                //_pointReleaseReset.SetActive(false);
            }

            _trailCount = _trailObj;
            _pointRelease.gameObject.SetActive(true);
            _pointImpact.gameObject.SetActive(true);
            _pointRelease.transform.position = transform.position;

            _originalPosition = this.transform.position;
        }

        public void ResetTrail()
        {
            _trailObj.transform.parent = null;
            _pointRelease.SetParent(transform.parent);
            _pointReleaseReset = _pointRelease.gameObject;
            _pointImpact.position = transform.position;

            //_pointRelease.transform.SetParent(null);
        }
    }
}

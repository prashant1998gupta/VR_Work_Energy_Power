using UnityEngine;
using TMPro;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class DistanceDrawer : MonoBehaviour
    {
        [SerializeField]GameObject _projectileInfo;
        GameObject _range;

        [SerializeField] Transform _pointRelease;
        [SerializeField] Transform _pointImpact;

        [SerializeField] float _startWidth;
        [SerializeField] float _endWidth;

        [SerializeField] Material _lineMaterial;

        Vector3 _groundPointRelease;
        Vector3 _groundPointImpact;

        public void DrawDistance()
        {
            _projectileInfo.SetActive(true);
            _projectileInfo.transform.SetParent(_pointRelease);
            _range = _projectileInfo.transform.Find("Range").gameObject;

            _groundPointRelease = _pointRelease.position;
            _groundPointImpact = _pointImpact.position;

            _range.transform.position = (_groundPointRelease + _groundPointImpact) / 2;
            _range.transform.position = new Vector3(0f, 0.1f, 0f) + _range.transform.position;

            GameObject line = _range.transform.GetChild(1).gameObject;
            line.transform.position = _pointRelease.transform.position;
            LineRenderer lineRenderer = line.GetComponent<LineRenderer>();
            lineRenderer.SetPosition(0, _groundPointRelease);
            lineRenderer.SetPosition(1, _groundPointImpact);
            lineRenderer.startWidth = _startWidth;
            lineRenderer.endWidth = _endWidth;
            lineRenderer.material = _lineMaterial;

            float distance = Vector3.Distance(_pointRelease.position, _pointImpact.position);
            _range.transform.GetChild(0).GetChild(0).GetChild(0).gameObject.GetComponent<TextMeshProUGUI>().text = distance.ToString("F") + "m";
        }

        public void HideProjectileInfo()
        {
            _projectileInfo.SetActive(false);
        }
    }
}
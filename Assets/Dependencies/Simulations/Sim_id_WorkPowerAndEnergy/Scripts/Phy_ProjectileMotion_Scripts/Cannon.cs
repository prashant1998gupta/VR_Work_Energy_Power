using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Inspirit.Simulations.ProjectileMotion
{
    public class Cannon : MonoBehaviour
    {
        public Rigidbody cannonBallRB;
        public float power;
        AudioSource audioclip;

        // Start is called before the first frame update
        void Start()
        {
            audioclip = GetComponent<AudioSource>();
        }

        // Update is called once per frame
        void Update()
        {
            //if (Input.GetKeyDown(KeyCode.Backspace) && cannonBallRB.gameObject.GetComponent<Launch>().launched == false)
            //{
            //    ShootProjectile(power);

            //}
        }

        public void ShootProjectile(float power)
        {
            cannonBallRB.isKinematic = false;
            //cannonBallRB.AddForce(-transform.GetChild(0).transform.forward * power, ForceMode.Impulse);
            audioclip.Play();
            cannonBallRB.velocity = (-transform.GetChild(0).transform.forward * power);
            //cannonBallRB.AddForce(-transform.GetChild(0).transform.forward * power, ForceMode.VelocityChange);
            //cannonBallRB.AddForce(-transform.GetChild(0).transform.forward * power, ForceMode.Force);
            cannonBallRB.transform.SetParent(null);
            cannonBallRB.gameObject.GetComponent<Launch>().LaunchProjectile(-transform.GetChild(0).transform.forward * power);
        }

    }
}

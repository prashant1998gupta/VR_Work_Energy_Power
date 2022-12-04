using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class Box_Clamp : MonoBehaviour
{
    [SerializeField] private float speed = 50f;

    [SerializeField] private float horizontalRange = 6f;

    [SerializeField] private float verticalRange = 6f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float horizontalMove = Input.GetAxis("Horizontal");
        float verticalMove = Input.GetAxis("Vertical");

        float horizontalOffset = horizontalMove * speed * Time.deltaTime;
        float verticalOffset = verticalMove * speed * Time.deltaTime;

        float rawHorizPos = transform.position.x + horizontalOffset;
        float clampedHorizPos = Mathf.Clamp(rawHorizPos,-horizontalRange, horizontalRange);

        float rawVerticalPos = transform.position.x + verticalOffset;
        float clampedVertiPos = Mathf.Clamp(rawVerticalPos,-verticalRange, verticalRange);

        transform.position = new Vector3(clampedHorizPos,  transform.position.y, clampedVertiPos);



    }
}

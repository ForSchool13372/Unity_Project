using UnityEngine;
using System.Collections;

public class Controller : MonoBehaviour
{
    public float moveSpeed;
    Vector3 direction;

    private void Update()
    {
        float v = Input.GetAxisRaw("Vertical");
        float h = Input.GetAxisRaw("Horizontal");


        if (h != 0 || v != 0)
        {
            if (Input.GetKey(KeyCode.D))
            {
                this.transform.Translate(Vector3.right * moveSpeed * Time.deltaTime);
            }
            else if (Input.GetKey(KeyCode.A))
            {
                this.transform.Translate(-Vector3.right * moveSpeed * Time.deltaTime);
            }
            else if (Input.GetKey(KeyCode.W))
            {
                this.transform.Translate(Vector3.up * moveSpeed * Time.deltaTime);
            }
            else if (Input.GetKey(KeyCode.S))
            {
                this.transform.Translate(-Vector3.up * moveSpeed * Time.deltaTime);
            }
        }
    }
}
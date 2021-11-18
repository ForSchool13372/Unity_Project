using UnityEngine;
using System.Collections;

public class Controller : MonoBehaviour
{
    public float moveSpeed;
    Vector3 direction;
    public Animator animator;

    private void Update()
    {
        float v = Input.GetAxisRaw("Vertical");
        float h = Input.GetAxisRaw("Horizontal");
        bool up = false;
        bool down = false;
        bool left = false;
        bool right = false;



        if (h != 0 || v != 0)
        {
            if (Input.GetKey(KeyCode.D))
            {
                this.transform.Translate(Vector3.right * moveSpeed * Time.deltaTime);
                animator.SetBool("Up", false);
                animator.SetBool("Down", false);
                animator.SetBool("Right", true);
                animator.SetBool("Left", false);
                right = true;
            }
            else if (Input.GetKey(KeyCode.A))
            {
                this.transform.Translate(-Vector3.right * moveSpeed * Time.deltaTime);
                animator.SetBool("Up", false);
                animator.SetBool("Down", false);
                animator.SetBool("Right", false);
                animator.SetBool("Left", true);
                left = true;
            }
            else if (Input.GetKey(KeyCode.W))
            {
                animator.SetBool("Down", false);
                animator.SetBool("Up", true);
                animator.SetBool("Right", false);
                animator.SetBool("Left", false);
                up = true;
                this.transform.Translate(Vector3.up * moveSpeed * Time.deltaTime);
            }
            else if (Input.GetKey(KeyCode.S))
            {
                this.transform.Translate(-Vector3.up * moveSpeed * Time.deltaTime);
                animator.SetBool("Up", false);
                animator.SetBool("Down", true);
                animator.SetBool("Right", false);
                animator.SetBool("Left", false);
                down = true;
            }
        }
    }
}

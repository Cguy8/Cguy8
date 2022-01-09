using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DreamCameraController : MonoBehaviour
{
    public Transform target1;
    public Transform target2;
    public Transform targetWait;
    public Animator fadeWhiteAnim;
    Transform target;
    Camera cam;
    public float lerpSpd;

    private void Start()
    {
        cam = GetComponent<Camera>();
        target = targetWait;
        Invoke("SwitchTarget", 10f);
    }



    private void FixedUpdate()
    {
        transform.position = Vector3.Lerp(transform.position, new Vector3(target.position.x, target.position.y, -10), lerpSpd * Time.fixedDeltaTime);
        if (target == target2)
        {
            cam.orthographicSize = Mathf.Lerp(cam.orthographicSize, 0.001f, lerpSpd * 0.5f * Time.fixedDeltaTime);
        }
    }

    private void SwitchTarget()
    {
        if (target == targetWait)
        {
            target = target1;
            Invoke("SwitchTarget", 10f);
        }
        else if (target == target1)
        {
            target = target2;
            lerpSpd *= 2;
            fadeWhiteAnim.Play("FadeIn");
            Invoke("LoadLevel", 4f);
        }
    }

    void LoadLevel()
    {
        SceneManager.LoadScene(2);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            CancelInvoke();
            LoadLevel();
        }
    }
}

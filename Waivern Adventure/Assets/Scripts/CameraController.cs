using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CameraController : MonoBehaviour
{
    public Transform target;
    public Vector3[] staticTargets;
    public float lerpSpd;

    private void Awake()
    {
        transform.position = staticTargets[PlayerPrefs.GetInt("WarpSpot")];
        if (SceneManager.GetActiveScene().name == "Shop")
        {
            target = transform;
        }
    }

    private void FixedUpdate()
    {
        transform.position = Vector3.Lerp(transform.position, new Vector3(target.position.x, target.position.y, -10), lerpSpd * Time.fixedDeltaTime);
    }
}

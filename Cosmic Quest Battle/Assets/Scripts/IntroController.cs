using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntroController : MonoBehaviour
{
    public Transform top;
    public Transform bottom;
    private void Start()
    {
        Invoke("End", 10f);
    }
    void Update()
    {
        top.position = new Vector2(top.position.x, top.position.y + (5.0f * Time.deltaTime));
        bottom.position = new Vector2(bottom.position.x, bottom.position.y - (5.0f * Time.deltaTime));
    }

    void End()
    {
        Destroy(top.gameObject);
        Destroy(bottom.gameObject);
        Destroy(gameObject);
    }
}

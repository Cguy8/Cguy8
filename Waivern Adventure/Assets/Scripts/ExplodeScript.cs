using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplodeScript : MonoBehaviour
{
    public float spd;
    Rigidbody2D bod;
    void Awake()
    {
        bod = GetComponent<Rigidbody2D>();
    }
    void OnEnable()
    {
        bod.AddForce(transform.up * spd);

        Invoke("Disable", 0.5f);
    }

    void Disable()
    {
        Destroy(gameObject);
    }
}

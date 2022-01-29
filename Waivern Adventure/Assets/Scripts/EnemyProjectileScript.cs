using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyProjectileScript : MonoBehaviour
{
    public float spd;
    Rigidbody2D bod;
    public int damage = 1;
    bool hasHurt;

    void Awake()
    {
        bod = GetComponent<Rigidbody2D>();
    }

    void OnEnable()
    {
        hasHurt = false;
        bod.AddForce(transform.up * spd);

        Invoke("Disable", 4f);
    }

    void Disable()
    {
        Destroy(gameObject);
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player") && !hasHurt)
        {
            collision.GetComponent<ExampleScript>().TakeDamage(damage);
            hasHurt = true;
            Destroy(gameObject);
        }

        if (collision.CompareTag("Wall"))
        {
            Destroy(gameObject);
        }
    }
}

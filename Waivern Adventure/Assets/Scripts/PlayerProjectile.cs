using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerProjectile : MonoBehaviour
{
    public float spd;
    Rigidbody2D bod;
    public int damage = 1;
    //hasHurt prevents an enemy from being damaged by the same attack multiple times
    bool hasHurt;

    public GameObject explode;

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
        if (collision.gameObject.CompareTag("Enemy") && !hasHurt)
        {
            collision.GetComponent<EnemyScript>().TakeDamage(damage);
            hasHurt = true;
            Destroy(gameObject);
        }

        if (collision.CompareTag("Wall") || collision.CompareTag("Enemy"))
        {
            //Creates an explosion of sparks when a fireball hits a solid object
            for (int i = 0; i < 4; i++)
            {
                Instantiate(explode, transform.position, transform.rotation * Quaternion.Euler(0, 0, -45f + (90 * i)));
            }
            Destroy(gameObject);
        }
    }
}

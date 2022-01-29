using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EntranceScript : MonoBehaviour
{
    public Animator anim;
    public BoxCollider2D coll;

    public int state = 0;
    void Awake()
    {
        if (!PlayerPrefs.HasKey("RevealedEntrances"))
            PlayerPrefs.SetInt("RevealedEntrances", 0);
        if ((PlayerPrefs.GetInt("RevealedEntrances") > 0 && state == 0) || (PlayerPrefs.GetInt("RevealedEntrances") > 1 && state == 2))
        {
            anim.Play("Stairs");
            state = 1;
            Invoke("Open", 1.5f);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("PlayerWeapon") && state == 0)
        {
            Invoke("Open", 1.5f);
            state = 1;
            anim.Play("EntranceReveal");
            PlayerPrefs.SetInt("RevealedEntrances", 1);
        }

        if (collision.CompareTag("Fire") && state == 2)
        {
            Invoke("Open", 1.5f);
            state = 1;
            anim.Play("EntranceReveal");
            PlayerPrefs.SetInt("RevealedEntrances", 2);
        }
    }

    public void Open()
    {
        coll.size =  new Vector2(coll.size.x, coll.size.y / 4);
        coll.isTrigger = true;
    }
}

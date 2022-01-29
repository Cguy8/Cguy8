using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightningScript : MonoBehaviour
{
    SpriteRenderer rend;
    SpriteRenderer[] childRends;

    public float fadePerSecond = 2.5f;

    void Awake()
    {
        rend = gameObject.GetComponent<SpriteRenderer>();
        childRends = gameObject.GetComponentsInChildren<SpriteRenderer>();

        Invoke("KillLightning", 2.5f);
    }

    private void Update()
    {
        rend = gameObject.GetComponent<SpriteRenderer>();
        childRends = gameObject.GetComponentsInChildren<SpriteRenderer>();

        var fadeColor = rend.color;

        rend.color = new Color(fadeColor.r, fadeColor.g, fadeColor.b, fadeColor.a - (fadePerSecond * Time.deltaTime));
        foreach (SpriteRenderer childRend in childRends)
            childRend.color = new Color(fadeColor.r, fadeColor.g, fadeColor.b, fadeColor.a - (fadePerSecond * Time.deltaTime));
    }

    void KillLightning()
    {
        Destroy(gameObject);
    }
}

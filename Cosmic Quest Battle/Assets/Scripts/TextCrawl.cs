using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TextCrawl : MonoBehaviour
{
    Rigidbody2D bod;
    Text myText;
    public GameObject fader;
    public Transform theEndPos;
    Animator anim;

    public float textSpeed;
    public float timer;
    // Start is called before the first frame update
    void Start()
    {
        Canvas.ForceUpdateCanvases();
        bod = GetComponent<Rigidbody2D>();
        myText = GetComponent<Text>();
        anim = fader.GetComponent<Animator>();
        bod.AddForce(Vector2.up * textSpeed);
    }

    void Fade()
    {
        bod.velocity = Vector2.zero;
        Invoke("Fade2", 4f);
    }

    void Fade2()
    {
        anim.Play("FadeIn");
        Invoke("LoadLevel", 1f);
    }

    void LoadLevel()
    {
        SceneManager.LoadScene(0);
    }

    private void Update()
    {
        if (theEndPos.position.y > 0) Fade();
        if (Input.GetKeyDown(KeyCode.Return))
        {
            CancelInvoke();
            Fade2();
        }
    }
}

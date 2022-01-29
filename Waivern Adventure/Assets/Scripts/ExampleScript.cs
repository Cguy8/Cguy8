using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class ExampleScript : MonoBehaviour
{
    public float spd;
    Rigidbody2D bod;
    Vector2 input;
    public GameObject projectile;

    public Text gemsText;
    int gems;

    GameController cont;

    public GameObject heartParent;
    public GameObject hpImage;
    public GameObject sword;
    public GameObject altAttackIcon;
    public GameObject clickAttackIcon;
    public GameObject shopFire;
    public GameObject shopLightning;
    public Sprite potionSprite;
    [SerializeField]
    private int hp;
    public int maxHp;

    public float iframeTime = 0.3f;
    float iframeVar;
    Animator anim;

    Vector3 dir;
    public const int UP = 0, DOWN = 1, LEFT = 2, RIGHT = 3;
    public int faceDir = DOWN;
    Vector3 right = new Vector3(1.0f, 1.0f, 1.0f);
    Vector3 left = new Vector3(-1.0f, 1.0f, 1.0f);

    public bool hasFire = false;
    public bool hasLightning = false;

    public Text displayText;

    public Vector2[] warpSpots;

    void Awake()
    {
        //Player can transition between multiple scenes. Always load appropriate data from PlayerPrefs. If no data exists, set it to base values.
        if (!PlayerPrefs.HasKey("Hearts") || PlayerPrefs.GetInt("Hearts") < 0) PlayerPrefs.SetInt("Hearts", maxHp);
        if (!PlayerPrefs.HasKey("Gems")) PlayerPrefs.SetInt("Gems", 0);
        if (!PlayerPrefs.HasKey("Powers")) PlayerPrefs.SetInt("Powers", 0);
        if (!PlayerPrefs.HasKey("WarpSpot")) PlayerPrefs.SetInt("WarpSpot", 0);

        cont = FindObjectOfType<GameController>();
        bod = GetComponent<Rigidbody2D>();
        hp = PlayerPrefs.GetInt("Hearts");
        gems = PlayerPrefs.GetInt("Gems");
        //"Powers" saves the player's progress in the game, so power-ups are maintained between scenes, and the UI displays accordingly.
        if (PlayerPrefs.GetInt("Powers") > 0) 
        { 
            hasFire = true;
            altAttackIcon.SetActive(true);
        }
        if (PlayerPrefs.GetInt("Powers") > 1) 
        {
            hasLightning = true;
            clickAttackIcon.SetActive(true);
        }
        //"WarpSpot" saves which entrance/exit the player has last taken, so they can spawn in the appropriate position in the next scene.
        //Various shop elements are also updated accordingly. A purchased power-up will not appear again.
        gameObject.GetComponent<Transform>().position = warpSpots[PlayerPrefs.GetInt("WarpSpot")];
        if (SceneManager.GetActiveScene().name == "Shop" && PlayerPrefs.GetInt("WarpSpot") == 2)
        {
            if (hasLightning)
            {
                displayText.text = "THERE IS NOTHING LEFT FOR YOU HERE.";
                Destroy(shopLightning);
            }
            else
                displayText.text = "SHH. IT'S A SECRET TO EVERYONE.";
        }
        if (SceneManager.GetActiveScene().name == "Shop" && PlayerPrefs.GetInt("WarpSpot") == 1 && hasFire)
        {
            shopFire.tag = "Potion";
            shopFire.GetComponent<SpriteRenderer>().sprite = potionSprite;
        }
            anim = GetComponent<Animator>();

        //Update UI to display a number of hearts appropriate to the player's current HP.
        for (int i = 0; i < hp; i++)
        {
            AddHeart();
        }
        gemsText.text = "x" + gems.ToString();
    }

    void AddHeart()
    {
        GameObject h = Instantiate(hpImage);
        h.transform.SetParent(heartParent.transform);
    }

    void RemoveHeart()
    {
        Destroy(heartParent.transform.GetChild(0).gameObject);
    }

    
    void Update()
    {
        input = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));

        if (input.x != 0)
        {
            bod.AddForce(Vector2.right * spd * input.x * Time.deltaTime);
            dir = Vector2.right * spd * input.x;
        }
        if (input.y != 0)
        {
            bod.AddForce(Vector2.up * spd * input.y * Time.deltaTime);
            dir = Vector2.up * spd * input.y;
        }

        if (Input.GetKeyDown(KeyCode.Space))
        {
            SwordAttack();
            float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg - 90;
            if (hasFire) Instantiate(projectile, transform.position, Quaternion.AngleAxis(angle, Vector3.forward));
        }

        if (Input.GetKeyDown(KeyCode.C))
        {
            SwordAttack();
        }

        if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
        {
            faceDir = RIGHT;
            gameObject.transform.localScale = right;
            anim.Play("PlayerIdleRight");
        }
        if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
        {
            faceDir = LEFT;
            gameObject.transform.localScale = left;
            anim.Play("PlayerIdleRight");
        }
        if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
        {
            faceDir = DOWN;
            gameObject.transform.localScale = right;
            anim.Play("PlayerIdleDown");
        }
        if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow))
        {
            faceDir = UP;
            anim.Play("PlayerIdleUp");
        }

        if (iframeVar > 0)
        {
            iframeVar -= Time.deltaTime;
            anim.SetFloat("iframes", iframeVar);
        }
    }

    public void SwordAttack()
    {
        if (faceDir == DOWN)
        {
            sword.GetComponent<Transform>().rotation = Quaternion.Euler(0, 0, 0);
            anim.Play("PlayerAttackDown");
        }
        if (faceDir == RIGHT || faceDir == LEFT)
        {
            sword.GetComponent<Transform>().rotation = Quaternion.Euler(0, 0, 90);
            anim.Play("PlayerAttackSide");
        }
        if (faceDir == UP)
        {
            sword.GetComponent<Transform>().rotation = Quaternion.Euler(0, 0, 0);
            anim.Play("PlayerAttackUp");
        }
    }

    public void TakeDamage(int dmg)
    {
        if (iframeVar <= 0)
        {
            anim.Play("BossHurt");
            for (int i = 0; i < dmg; i++)
            {
                RemoveHeart();
                hp -= dmg;

                if (hp <= 0)
                {
                    Die();
                    return;
                }
            }

            iframeVar = iframeTime;
            anim.SetFloat("iframes", iframeVar);
        }
    }

    public void ChangeGems(int amt)
    {
        gems += amt;
        gemsText.text = "x" + gems.ToString();
    }

    void Die()
    {
        gameObject.GetComponent<SpriteRenderer>().enabled = false;
        cont.pauseUI.GetComponentInChildren<Text>().text = "GAME OVER";
        cont.ClearSave();
        cont.Pause();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Item behavior is determined by the player script. Trigger with any tagged item will have appropriate outcome.
        //A heart does nothing if the player has full hearts. A shop item can't be collected if the player can't afford it.
        if (collision.CompareTag("Item"))
        {
            ChangeGems(1);
            cont.AddScore(10);
            Destroy(collision.gameObject);
        }
        if (collision.CompareTag("BigGem"))
        {
            ChangeGems(10);
            cont.AddScore(100);
            Destroy(collision.gameObject);
        }
        if (collision.CompareTag("Heart"))
        {
            if (hp < maxHp)
            {
                AddHeart();
                hp++;
            }
            Destroy(collision.gameObject);
        }
        if (collision.CompareTag("Fire Book"))
        {
            if (gems >= 10)
            {
                ChangeGems(-10);
                hasFire = true;
                Destroy(collision.gameObject);
                displayText.text = "PRESS SPACEBAR TO SHOOT FIREBALLS.";
                altAttackIcon.SetActive(true);
            }
        }
        if (collision.CompareTag("Potion"))
        {
            if (gems >= 10 && hp < maxHp)
            {
                ChangeGems(-10);
                for (int i = hp; i < maxHp; i++)
                {
                    AddHeart();
                }
                hp = maxHp;
                Destroy(collision.gameObject);
                displayText.text = "YOUR HEARTS HAVE BEEN RESTORED.";
            }
        }
        if (collision.CompareTag("Lightning Book"))
        {
            if (gems >= 50)
            {
                ChangeGems(-50);
                hasLightning = true;
                Destroy(collision.gameObject);
                displayText.text = "CLICK TO SUMMON LIGHTNING.";
                clickAttackIcon.SetActive(true);
            }
        }
        if (collision.CompareTag("Stairs") && collision.GetComponent<Collider2D>().isTrigger == true)
        {
            PlayerPrefs.SetInt("WarpSpot", 1);
            SavePrefs();
            SceneManager.LoadScene("Shop");
        }
        if (collision.CompareTag("SecretStairs") && collision.GetComponent<Collider2D>().isTrigger == true)
        {
            PlayerPrefs.SetInt("WarpSpot", 2);
            SavePrefs();
            SceneManager.LoadScene("Shop");
        }
        if (collision.CompareTag("Exit"))
        {
            SavePrefs();
            SceneManager.LoadScene("Main");
        }
    }

    //Called before any scene change. Ensures that all game data can be carried to the next scene.
    void SavePrefs()
    {
        PlayerPrefs.SetInt("Hearts", hp);
        PlayerPrefs.SetInt("Gems", gems);
        //Assumes that Fire is required to obtain Lightning. Bools are converted to Int and added together for saving.
        PlayerPrefs.SetInt("Powers", (hasFire ? 1 : 0) + (hasLightning ? 1 : 0));
        if (SceneManager.GetActiveScene().name != "Shop")
        {
            PlayerPrefs.SetInt("Score", cont.score);
            PlayerPrefs.SetFloat("TimeBetweenSpawns", cont.timeBetweenSpawns);
        }
    }
}

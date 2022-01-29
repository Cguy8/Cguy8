using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyScript : MonoBehaviour
{
    Animator anim;
    Collider2D col;
    int hp;
    public int maxHp;

    GameController cont;

    public float spd;
    //Data structure which contains a list of objects that can be dropped when an enemy is defeated, and the relative odds for each object
    //Stronger enemies will be able to drop rarer items, and at a higher frequency
    [System.Serializable]
    public struct ObjectOddsPair
    {
        [SerializeField]
        public GameObject drop;
        [SerializeField]
        public int odds;
    }
    public ObjectOddsPair[] itemDrops;
    Rigidbody2D bod;
    ExampleScript player;
    public float attackRange;
    float distance;
    float attackCools;
    public float timeBetweenAttacks = 0.3f;
    public GameObject enemyProjectile;
    public GameObject lightning;

    public float iframeTime = 0.3f;
    float iframeVar;

    void Awake()
    {
        cont = FindObjectOfType<GameController>();
        anim = GetComponent<Animator>();
        bod = GetComponent<Rigidbody2D>();
        col = GetComponent<Collider2D>();
        player = FindObjectOfType<ExampleScript>();

        hp = maxHp;
    }


    private void Update()
    {
        //If the player isn't in attack range, move closer to the player.
        //Otherwise, if the attack cooldown timer allows it, attack the player.
        if (player.isActiveAndEnabled)
        {
            distance = Vector2.Distance(transform.position, player.transform.position);
            if (distance >= attackRange)
            {
                transform.position = Vector3.MoveTowards(transform.position, player.transform.position, spd * Time.deltaTime);
            }
            if (distance < attackRange & attackCools <= 0)
            {
                Attack();
            }
        }
        if (attackCools > 0) attackCools -= Time.deltaTime;

        if (iframeVar > 0)
        {
            iframeVar -= Time.deltaTime;
            anim.SetFloat("iframes", iframeVar);
        }
        else col.enabled = true;
        //Always face the player
        Vector3 dir = player.transform.position - transform.position;
        float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg + 90;
        gameObject.transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
    }

    void Attack()
    {
        //Create a projectile facing the player
        Vector3 dir = player.transform.position - transform.position;
        float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg - 90;

        Instantiate(enemyProjectile, transform.position, Quaternion.AngleAxis(angle, Vector3.forward));
        attackCools = timeBetweenAttacks;
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("PlayerWeapon"))
        {
            TakeDamage(1);
        }
    }
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("PlayerWeapon"))
        {
            TakeDamage(1);
        }
    }
    void OnMouseDown()
    {
        if (player.hasLightning)
        {
            TakeDamage(1);
            Vector3 pos = gameObject.GetComponent<Transform>().position;
            Instantiate(lightning, pos, Quaternion.identity);
        }
    }

    public void TakeDamage(int dmg)
    {
            anim.Play("BossHurt");
            col.enabled = false;
            attackCools = timeBetweenAttacks;

        if (iframeVar <= 0)
        {
            for (int i = 0; i < dmg; i++)
            {
                hp -= dmg;

                if (hp <= 0)
                {
                    Invoke("Die", 0.03f);
                    return;
                }
            }

            iframeVar = iframeTime;
            anim.SetFloat("iframes", iframeVar);
        }
    }

    void Die()
    {
        if (maxHp == 1) cont.AddScore(100);
        if (maxHp >= 2) cont.AddScore(1000);
        RandomizeItemDrop();
        Destroy(gameObject);
    }

    void RandomizeItemDrop()
    {
        //Access the object-odds-pair data structure array for this enemy instance.
        //Add relative odds of each drop together, and create a list of partitions within that "maxRoll" number
        //Choose a random number within the maxRoll range, determine which set of partitions the number falls within, and spawn the appropriate object
        int maxRoll = 0;
        List<int> oddsChunks = new List<int>();
        oddsChunks.Add(maxRoll);
        for (int i = 0; i < itemDrops.Length; i++)
        {
            maxRoll += itemDrops[i].odds;
            oddsChunks.Add(maxRoll);
        }
        int randRoll = (Random.Range(1, maxRoll+1));
        for (int j = 0; j < itemDrops.Length; j++)
        {
                if (randRoll > oddsChunks[j] && randRoll <= oddsChunks[j+1])
                {
                    if (itemDrops[j].drop != null) Instantiate(itemDrops[j].drop, transform.position, Quaternion.AngleAxis(0, Vector3.forward));
                    break;
                }
        }
        //Debug.Log("Roll result is " + randRoll + " and maxRoll is " + maxRoll+".");
    }
}

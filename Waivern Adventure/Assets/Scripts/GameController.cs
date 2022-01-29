using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    //public int gems;
    //public static GameController cont;
    public GameObject[] enemyArray;
    public GameObject player;
    public float timeBetweenSpawns;
    public float timeReduceFactor = 0.8f;
    float spawnCools;
    public Vector3[] spawnPoint;

    public int score;

    public bool paused = false;
    public GameObject pauseUI;
    public GameObject pauseButton;
    public GameObject restartButton;
    public Text scoreText;

    public float seconds = 0f;

    private void Awake()
    {
        Time.timeScale = 1f;
        if (!PlayerPrefs.HasKey("Score")) PlayerPrefs.SetInt("Score", 0);
        if (!PlayerPrefs.HasKey("TimeBetweenSpawns")) PlayerPrefs.SetFloat("TimeBetweenSpawns", timeBetweenSpawns);
        score = PlayerPrefs.GetInt("Score");
        timeBetweenSpawns = PlayerPrefs.GetFloat("TimeBetweenSpawns");
        scoreText.text = "SCORE: " + Mathf.Clamp(score, 0, 9999999).ToString("0000000");
    }

    private void Update()
    {
        //Every minute spent in the main scene, increase the rate at which enemies spawn, until a limit is reached.
        seconds += Time.deltaTime;
        if (seconds >= 60)
        {
            seconds -= 60;
            if (timeBetweenSpawns >= 1.8) timeBetweenSpawns *= timeReduceFactor;
        }

        //Spawn a new enemy after a set period of time.
        if (spawnCools > 0) spawnCools -= Time.deltaTime;

        if (spawnCools <= 0)
        {
            SpawnEnemy();
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (player.GetComponent<SpriteRenderer>().enabled == true)
                            Pause();
        }
    }

    public void Pause()
    {
        if (paused)
        {
            Time.timeScale = 1f;
            paused = false;
            restartButton.SetActive(false);
            pauseUI.SetActive(false);
            //If the screen is a game over screen, restart the game instead of unpausing.
            if (player.GetComponent<SpriteRenderer>().enabled == false)
            {
                pauseButton.SetActive(true);
                SceneManager.LoadScene(0);
            }
        }
        else
        {
            Time.timeScale = 0f;
            paused = true;
            pauseUI.SetActive(true);
            restartButton.SetActive(true);
            //If the game has been stopped because the player lost, change the appearance of the pause screen
            if (player.GetComponent<SpriteRenderer>().enabled == false)
            {
                pauseUI.GetComponent<Image>().color = new Color(1.0f, 0, 0, pauseUI.GetComponent<Image>().color.a);
                pauseUI.GetComponentsInChildren<Text>()[1].text = "Final Score: " + Mathf.Clamp(score, 0, 9999999).ToString("0000000");
                pauseButton.SetActive(false);
            }
        }
    }

    void SpawnEnemy()
    {
        //Choose a random enemy from the available array, spawn it at a random specified position, and reset the spawn cooldown timer
        Instantiate(enemyArray[Random.Range(0, enemyArray.Length)], spawnPoint[Random.Range(0,spawnPoint.Length)], Quaternion.identity);
        spawnCools = timeBetweenSpawns;
    }

    public void ClearSave()
    {
        PlayerPrefs.DeleteAll();
    }

    public void AddScore(int pts)
    {
        score += pts;
        scoreText.text = "SCORE: " + Mathf.Clamp(score,0,9999999).ToString("0000000");
    }
}

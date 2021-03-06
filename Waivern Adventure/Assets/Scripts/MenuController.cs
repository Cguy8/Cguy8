using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    public void LoadFirstLevel()
    {
        SceneManager.LoadScene(0);
    }
    public void LoadLevel(int ind)
    {
        SceneManager.LoadScene(ind);
    }
    public void LoadLevel(string s)
    {
        SceneManager.LoadScene(s);
    }

    public void Quit()
    {
        Application.Quit();
    }

    public void LoadCurrentLevel()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}

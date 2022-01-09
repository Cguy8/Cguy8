using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BattleController : BattleFunctions
{
    public static Classes.Monster[] monsterArray = { Classes.Seluna, Classes.Terratlas, Classes.Heliosol };

    public Sprite[] spriteArray;
    public SpriteRenderer player;
    public SpriteRenderer opponent;
    public Animator playerAnim;
    public Animator opponentAnim;

    public Image playerHpBar;
    public Image opponentHpBar;

    public SpriteMask playerMask;
    public SpriteMask opponentMask;

    public Text playerName;
    public Text playerLv;
    public Text hpText;
    public Text opponentName;
    public Text opponentLv;

    public Button AttackB1;
    public Button AttackB2;
    public Button AttackB3;
    public Button AttackB4;

    public GameObject AttackButtons;

    public GameObject TextboxObject;
    private BoxCollider2D col;

    public AudioSource soundBank;
    public AudioClip faintSound;

    public static Classes.Monster playerMonster;
    public static Classes.Monster opponentMonster;
    public Classes.Attack playerChoice = Classes.Struggle;
    public Classes.Attack opponentChoice = Classes.Struggle;
    
    static int ppMax1;
    int pp1;
    static int ppMax2;
    int pp2;
    static int ppMax3;
    int pp3;
    static int ppMax4;
    int pp4;
    static int playerMaxHp;
    [Range(0,999)]
    public int playerHp;
    static int opponentMaxHp;
    [Range(0,999)]
    public int opponentHp;

    //bool isFirstHalf;
    bool playerFirst;
    bool controlLock = false;
    bool endBattle = false;
    bool hideText = false;

    public int textWaitTimer = 6;

    public bool ohpCheck;
    public bool uhpCheck;
    public bool buttonCheck;

    public float drainSpd = 10f;
    public Gradient healthGrad;

    string[] textLoop =
    {
        "A wild MissingNo. appeared!",
        "MissingNo. will fight for you!",
        "What will MissingNo. do?",
        "The attack missed!",
        "MissingNo. used",
        "A critical hit!",
        "It's super effective!",
        "It's not very effective...",
        "MissingNo. used",
        "A critical hit!",
        "It's super effective!",
        "It's not very effective...",
        "MissingNo. fainted!",
        "MissingNo. fainted!",
        "The attack missed!"
    };
    public int textPtr = 0;
    //int textQueue = 2;
    // Start is called before the first frame update
    void Awake()
    {
        col = GetComponent<BoxCollider2D>();
        int randPlayer = Random.Range(0, 3);
        playerMonster = monsterArray[randPlayer];
        opponentMonster = monsterArray[(randPlayer + Random.Range(1, 3)) % 3];

        textLoop[0] = "A wild " + opponentMonster.species + " appeared!";
        textLoop[1] = playerMonster.species + " will fight for you!";
        textLoop[2] = "What will " + playerMonster.species + " do?";
        textLoop[4] = playerMonster.species + " used";
        textLoop[8] = opponentMonster.species + " used";
        textLoop[12] = opponentMonster.species + " fainted!";
        textLoop[13] = playerMonster.species + " fainted!";


        ppMax1 = playerMonster.attack1.pp;
        pp1 = ppMax1;
        ppMax2 = playerMonster.attack2.pp;
        pp2 = ppMax2;
        ppMax3 = playerMonster.attack3.pp;
        pp3 = ppMax3;
        ppMax4 = playerMonster.attack4.pp;
        pp4 = ppMax4;
        playerMaxHp = playerMonster.hp;
        playerHp = playerMaxHp;
        opponentMaxHp = opponentMonster.hp;
        opponentHp = opponentMaxHp;

        player.sprite = spriteArray[playerMonster.imageIndex];
        playerName.text = playerMonster.species;
        playerLv.text = "Lv" + playerMonster.lvl;
        hpText.text = playerHp + " / " + playerMaxHp;
        opponent.sprite = spriteArray[opponentMonster.imageIndex];
        opponentName.text = opponentMonster.species;
        opponentLv.text = "Lv" + opponentMonster.lvl;

        AttackB1.GetComponentsInChildren<Text>()[0].text = playerMonster.attack1.name;
        //AttackB1.colors = Classes.colors[playerMonster.attack1.type1];
        SetButtonColors(AttackB1, Classes.colors[playerMonster.attack1.type1]);
        AttackB2.GetComponentsInChildren<Text>()[0].text = playerMonster.attack2.name;
        SetButtonColors(AttackB2, Classes.colors[playerMonster.attack2.type1]);
        AttackB3.GetComponentsInChildren<Text>()[0].text = playerMonster.attack3.name;
        SetButtonColors(AttackB3, Classes.colors[playerMonster.attack3.type1]);
        AttackB4.GetComponentsInChildren<Text>()[0].text = playerMonster.attack4.name;
        SetButtonColors(AttackB4, Classes.colors[playerMonster.attack4.type1]);
        UpdatePP();
        
        //Debug.Log("Button text complete.");
        HideButtons();
        ProgressText();
        //Debug.Log("Setup complete");

        //textPtr = 3;
        ProgressText();
    }
    private void OnMouseDown()
    {
        if (!controlLock)
        {
            //Debug.Log("Click registered. textPtr is " + textPtr);
            switch (textPtr)
            {
                case (0):
                    textPtr = 1;
                    ProgressText();
                    break;
                case (1):
                    textPtr = 2;
                    //Debug.Log("textPtr was set to 2 because \"Monster will fight for you\" was clicked.");
                    ProgressText();
                    break;
                case (2):
                    //Debug.Log("Buttons are about to show. Current textPtr is " + textPtr);
                    hideText = true;
                    BlockText(20);
                    Invoke("ShowButtons", 0.2f);
                    break;
                case (3):
                    missFlag = false;
                    if (!playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 8;
                        ProgressText(opponentChoice);
                        break;
                    }
                case (4):
                    hideText = true;
                    int playerDamage = (int)Calculate(playerChoice, playerMonster, opponentMonster);
                    opponentHp -= playerDamage;
                    soundBank.Play();
                    BlockText(1);
                    if (playerDamage > 0) opponentAnim.Play("Iframes");
                    //Debug.Log(playerDamage + " damage dealt to opponent.");
                    //Debug.Log("Player is attacking. PlayerFirst is " + playerFirst);
                    //Debug.Log("playerChoice is currently " + playerChoice.name);
                    if (critFlag)
                    {
                        textPtr = 5;
                        ProgressText();
                        break;
                    }
                    else if (superFlag) textPtr = 6;
                    else if (notVeryFlag) textPtr = 7;
                    else if (missFlag)
                    {
                        textPtr = 3;
                        ProgressText();
                        break;
                    }
                    else if (opponentHp <= 0)
                    {
                        //OpponentFaint();
                        break;
                    }
                    else if (!playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 8;   //the player went first, so the opponent needs to go
                        ProgressText(opponentChoice);
                        break;
                    }
                    ProgressText();
                    break;
                case (5):
                    critFlag = false;
                    if (superFlag) textPtr = 6;
                    else if (notVeryFlag) textPtr = 7;
                    else if (opponentHp <= 0)
                    {
                        //OpponentFaint();
                        break;
                    }
                    else if (!playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 8;
                        ProgressText(opponentChoice);
                        break;
                    }
                    ProgressText();
                    break;
                case (6):
                    superFlag = false;
                    if (opponentHp <= 0)
                    {
                        //OpponentFaint();
                        break;
                    }
                    else if (!playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 8;
                        ProgressText(opponentChoice);
                        break;
                    }
                case (7):
                    notVeryFlag = false;
                    if (opponentHp <= 0)
                    {
                        //OpponentFaint();
                        break;
                    }
                    else if (!playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr++;
                        ProgressText(opponentChoice);
                        break;
                    }
                case (8):
                    hideText = true;
                    int opponentDamage = (int)Calculate(opponentChoice, opponentMonster, playerMonster);
                    playerHp -= opponentDamage;
                    soundBank.Play();
                    BlockText(1);
                    if (opponentDamage > 0) playerAnim.Play("Iframes");
                    //Debug.Log(opponentDamage + " damage dealt to player.");
                    if (critFlag)
                    {
                        textPtr = 9;
                        ProgressText();
                        break;
                    }
                    else if (superFlag) textPtr = 10;
                    else if (notVeryFlag) textPtr = 11;
                    else if (missFlag)
                    {
                        textPtr = 14;
                        ProgressText();
                        break;
                    }
                    else if (playerHp <= 0)
                    {
                        //PlayerFaint();
                        break;
                    }
                    else if (playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 4;   //the player did not go first, so they still need to go.
                        ProgressText(playerChoice);
                        break;
                    }
                    ProgressText();
                    break;
                case (9):
                    critFlag = false;
                    if (superFlag) textPtr = 10;
                    else if (notVeryFlag) textPtr = 11;
                    else if (playerHp <= 0)
                    {
                        //PlayerFaint();
                        break;
                    }
                    else if (playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 4;
                        ProgressText(playerChoice);
                        break;
                    }
                    ProgressText();
                    break;
                case (10):
                    superFlag = false;
                    if (playerHp <= 0)
                    {
                        //PlayerFaint();
                        break;
                    }
                    else if (playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 4;
                        ProgressText(playerChoice);
                        break;
                    }
                case (11):
                    notVeryFlag = false;
                    if (playerHp <= 0)
                    {
                        //PlayerFaint();
                        break;
                    }
                    else if (playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 4;
                        ProgressText(playerChoice);
                        break;
                    }
                case (12):
                    textPtr = -1;
                    textbox.text = "You won the battle!\nCongratulations!";
                    Invoke("LoadCredits", 4.0f);
                    break;
                case (13):
                    textPtr = -1;
                    textbox.text = "You lost the battle...\nTry again next time!";
                    Invoke("LoadCredits", 4.0f);
                    break;
                case (14):
                    missFlag = false;
                    if (playerFirst)
                    {
                        NewTurn();
                        break;
                    }
                    else
                    {
                        textPtr = 4;
                        ProgressText(playerChoice);
                        break;
                    }
            }
        }
       
    }

    void LoadCredits()
    {
        SceneManager.LoadScene(3);
    }

    void ChooseAttack(Classes.Attack choice)
    {
        HideButtons();
        BlockText(1);
        playerChoice = choice;
        Classes.Attack winner;
        int oppRandAtk = Random.Range(0, 4);
        switch (oppRandAtk)
        {
            case (0):
                {
                    opponentChoice = opponentMonster.attack1;
                    break;
                }
            case (1):
                {
                    opponentChoice = opponentMonster.attack2;
                    break;
                }
            case (2):
                {
                    opponentChoice = opponentMonster.attack3;
                    break;
                }
            case (3):
                {
                    opponentChoice = opponentMonster.attack4;
                    break;
                }
        }
        if (SpeedWin()) playerFirst = true;
        else playerFirst = false;
        //Debug.Log("Attack has been chosen and Speed has been calculated. textPtr before is " + textPtr);
        if (playerFirst)
        {
            textPtr = 4;
            winner = playerChoice;
        }
        else
        {
            textPtr = 8;
            winner = opponentChoice;
        }
        //Debug.Log("Turn order has been chosen. Winning move is " + winner.name + ". New textPtr is " + textPtr);
        ProgressText(winner);
        return;
    }

    bool SpeedWin()
    {
        bool playerWins = false;
        if (playerMonster.spd > opponentMonster.spd) playerWins = true;
        else if (playerMonster.spd == opponentMonster.spd)
        {
            //Debug.Log("Speed tie.");
            if (Random.Range(0, 2) == 1) playerWins = true;
        }
        return playerWins;
    }
    void ProgressText()
    {
        BlockText(2);
        textbox.text = textLoop[textPtr];
        return;
    }

    void ProgressText(Classes.Attack choice)
    {
        BlockText(3);
        textbox.text = textLoop[textPtr] + " " + choice.name + "!";
        return;
    }

    void ShowButtons()
    {
        //Debug.Log("Buttons are trying to show. Current textPtr is " + textPtr);
        if (textPtr == 2)
        {
            textbox.text = "";
            AttackButtons.SetActive(true);
        }
        return;
    }
    void HideButtons()
    {
        AttackButtons.SetActive(false);
        return;
    }

    public void Attack1()
    {
        if (pp1 <= 0) return;
        else
        {
            hideText = true;
            pp1 -= 1;
            ChooseAttack(playerMonster.attack1);
        }
    }
    public void Attack2()
    {
        if (pp2 <= 0) return;
        else
        {
            hideText = true;
            pp2 -= 1;
            ChooseAttack(playerMonster.attack2);
        }
    }
    public void Attack3()
    {
        if (pp3 <= 0) return;
        else
        {
            //Debug.Log("Attack 3 was chosen.");
            hideText = true;
            pp3 -= 1;
            ChooseAttack(playerMonster.attack3);
        }
    }
    public void Attack4()
    {
        if (pp4 <= 0) return;
        else
        {
            hideText = true;
            pp4 -= 1;
            ChooseAttack(playerMonster.attack4);
        }
    }

    void NewTurn()
    {
        BlockText(1);
        textPtr = 2;
        UpdatePP();
        //Debug.Log("New turn starting");
        ProgressText();
        return;
    }

    void SetButtonColors(Button b, Color c)
    {
        ColorBlock colors = b.colors;
        colors.normalColor = c;
        colors.highlightedColor = new Color(c.r * 0.96f, c.g * 0.96f, c.b * 0.96f);
        colors.pressedColor = new Color(c.r * 0.785f, c.g * 0.785f, c.b * 0.785f);
        colors.selectedColor = colors.highlightedColor;
        colors.disabledColor = new Color(c.r * 0.785f, c.g * 0.785f, c.b * 0.785f, 0.5f);
        b.colors = colors;
    }

    void UpdatePP()
    {
        AttackB1.GetComponentsInChildren<Text>()[1].text = pp1 + "/" + ppMax1 + "     ";
        AttackB2.GetComponentsInChildren<Text>()[1].text = pp2 + "/" + ppMax2 + "     ";
        AttackB3.GetComponentsInChildren<Text>()[1].text = pp3 + "/" + ppMax3 + "     ";
        AttackB4.GetComponentsInChildren<Text>()[1].text = pp4 + "/" + ppMax4 + "     ";
        return;
    }

    void PlayerFaint() 
    {
        playerMask.enabled = true;
        soundBank.clip = faintSound;
        soundBank.Play();
        playerAnim.Play("Faint");
        textPtr = 13;
        ProgressText();
        return;
    }

    void OpponentFaint()
    {
        opponentMask.enabled = true;
        soundBank.clip = faintSound;
        soundBank.Play();
        opponentAnim.Play("EnemyFaint");
        textPtr = 12;
        ProgressText();
        return;
    }

    void BlockText(int seconds)
    {
        hideText = true;
        textWaitTimer += seconds;
        col.enabled = false;
        textbox.color = new Color(0, 0, 0, 0);
    }

    void RevealText()
    {
        hideText = false;
        col.enabled = true;
        textbox.color = new Color(0, 0, 0, 255);
    }

    // Update is called once per frame
    void Update()
    {
        if (textWaitTimer > 0) textWaitTimer--;
        else
        {
            ohpCheck = ((int)(opponentHpBar.fillAmount * opponentMaxHp) <= opponentHp || opponentHpBar.fillAmount <= 0.001);
            uhpCheck = ((int)(playerHpBar.fillAmount * playerMaxHp) <= playerHp || playerHpBar.fillAmount <= 0.001);
            buttonCheck = AttackB1.isActiveAndEnabled;
            if (ohpCheck && uhpCheck && !buttonCheck)
            {
                hideText = false;
            }
        }

        if (textWaitTimer <= 0 && hideText == false && !col.isActiveAndEnabled)
        {
            RevealText();
        }

        if (playerHpBar.fillAmount > ((float)playerHp / (float)playerMaxHp))
        {
            playerHpBar.fillAmount = Mathf.Lerp(playerHpBar.fillAmount, ((float)playerHp / (float)playerMaxHp), drainSpd * Time.deltaTime);
            playerHpBar.color = healthGrad.Evaluate(playerHpBar.fillAmount);
            hpText.text = Mathf.Clamp((int)(playerHpBar.fillAmount * playerMaxHp), 0, 999) + " / " + playerMaxHp;
            if (playerHpBar.fillAmount == 0 && !endBattle)
            {
                PlayerFaint();
                endBattle = true;
            }
        }
        if (opponentHpBar.fillAmount > ((float)opponentHp / (float)opponentMaxHp))
        {
            opponentHpBar.fillAmount = Mathf.Lerp(opponentHpBar.fillAmount, ((float)opponentHp / (float)opponentMaxHp), drainSpd * Time.deltaTime);
            opponentHpBar.color = healthGrad.Evaluate(opponentHpBar.fillAmount);
            if (opponentHpBar.fillAmount == 0 && !endBattle)
            {
                //Debug.Log("Opponent is fainting.");
                OpponentFaint();
                endBattle = true;
            }
        }
    }
}

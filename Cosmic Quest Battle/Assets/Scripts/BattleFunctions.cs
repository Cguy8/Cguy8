using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;



public class BattleFunctions : MonoBehaviour
{
    public TextMesh textbox;

    protected bool critFlag = false;
    protected bool superFlag = false;
    protected bool notVeryFlag = false;
    protected bool missFlag = false;

    public void TestAttack()
    {
        Calculate(Classes.Struggle, Classes.MissingNo, Classes.MissingNo);
    }

    public double Calculate(Classes.Attack attack, Classes.Monster user, Classes.Monster target)
    {
        //Check for a miss
        if (Random.Range(1, 101) > attack.acc)
        {
            //Miss();
            //textbox.text = "Damage dealt: 0";
            missFlag = true;
            return 0.0;
        }

        double dmg = 0;
        double mltp = 1.0;
        //Calculate basic damage
        dmg = ((((((2 * user.lvl / 5) + 2) * attack.basePower * user.atk / target.def)) / 50) + 2) * (Random.Range(85,101) * 0.01);
        //Multiply by any and all type effectiveness multipliers
        mltp *= Classes.matchup[attack.type1, target.type1];
        if (target.type2 != Classes.NULL) mltp *= Classes.matchup[attack.type1, target.type2];
        if (attack.type2 != Classes.NULL) mltp *= Classes.matchup[attack.type2, target.type1];
        if (attack.type2 != Classes.NULL && target.type2 != Classes.NULL) mltp *= Classes.matchup[attack.type2, target.type2];

        if (mltp >= 2) superFlag = true;
        else if (mltp == 0) missFlag = true;    //more accurately, this should be "does not effect" rather than "miss".
        else if (mltp < 1) notVeryFlag = true;

        dmg *= mltp;
        //Multiply by any and all Same Type Attack Bonus multipliers.
        if (attack.type1 == user.type1 || attack.type1 == user.type2) dmg *= 1.5;
        if (attack.type2 != Classes.NULL)
        {
            if (attack.type2 == user.type1 || attack.type2 == user.type2) dmg *= 1.5;
        }
        //Check for a critical hit
        if (!missFlag && Random.Range(1, 25) == 1)
        {
            critFlag = true;
            dmg *= 1.5;
        }
        //textbox.text = "Damage dealt: " + dmg;
        return dmg;
    }
}

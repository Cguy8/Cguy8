using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class Classes : MonoBehaviour
{

    public const int NORMAL = 0, FIRE = 1, WATER = 2, ELECTRIC = 3, GRASS = 4,
        ICE = 5, FIGHT = 6, POISON = 7, GROUND = 8, FLYING = 9,
        PSYCHIC = 10, BUG = 11, ROCK = 12, GHOST = 13, DRAGON = 14,
        DARK = 15, STEEL = 16, FAIRY = 17, LIGHT = 18, NULL = 19;
    public const int MISSINGNO = 0, SELUNA = 1, TERRATLAS = 2, HELIOSOL = 3;
    public static Color[] colors =
    {
        new Color(0.957f, 0.886f, 0.776f), Color.red, Color.blue, Color.yellow, Color.green,
        Color.cyan, new Color(0.647f, 0.165f, 0.165f), new Color(0.5f, 0, 0.5f), new Color(0.784f, 0.69f, 0.569f), new Color(0, 0.529f, 1.0f),
        Color.magenta, new Color(0.78f, 0.918f, 0.275f), new Color(0.529f, 0.125f, 0.125f), new Color(0.424f, 0, 0.58f), new Color(0.345f, 0, 0.659f),
        Color.grey, new Color(0.784f, 0.784f, 0.882f), new Color(1.0f, 0.49f, 0.49f), new Color(1.0f, 1.0f, 0.294f), new Color(0, 1.0f, 0.196f)
    };
    //Defines elemental effectiveness. If matchup[type1,type2] = 2, then type 1 is super effective against type 2.
    public static double[,] matchup = { 
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.5, 0, 1, 1, 0.5, 1, 1, 1 },           //Normal's effectiveness against normal, fire, water, ...
        { 1, 0.5, 0.5, 1, 2, 2, 1, 1, 1, 1, 1, 2, 0.5, 1, 0.5, 1, 2, 1, 0.5, 1 },       //Fires's effectiveness...
        { 1, 2, 0.5, 1, 0.5, 1, 1, 1, 2, 1, 1, 1, 2, 1, 0.5, 1, 1, 1, 1, 1},          //Water
        { 1, 1, 2, 0.5, 0.5, 1, 1, 1, 0, 2, 1, 1, 1, 1, 0.5, 1, 1, 1, 0.5, 1},          //Electric
        { 1, 0.5, 2, 1, 0.5, 1, 1, 0.5, 2, 0.5, 1, 0.5, 2, 1, 0.5, 1, 0.5, 1, 2, 1},  //Grass...
        { 1, 0.5, 0.5, 1, 2, 0.5, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 0.5, 1, 1, 1 },
        { 2, 1, 1, 1, 1, 2, 1, 0.5, 1, 0.5, 0.5, 0.5, 2, 0, 1, 2, 2, 0.5, 1, 1 },
        { 1, 1, 1, 1, 2, 1, 1, 0.5, 0.5, 1, 1, 1, 0.5, 0.5, 1, 1, 0, 2, 1, 1},
        { 1, 2, 1, 2, 0.5, 1, 1, 2, 1, 0, 1, 0.5, 2, 1, 1, 1, 2, 1, 1, 1 },
        { 1, 1, 1, 0.5, 2, 1, 2, 1, 1, 1, 1, 2, 0.5, 1, 1, 1, 0.5, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 0.5, 1, 1, 1, 1, 0, 0.5, 1, 1, 1 },
        { 1, 0.5, 1, 1, 2, 1, 0.5, 0.5, 1, 0.5, 2, 1, 1, 0.5, 1, 2, 0.5, 0.5, 1, 1 },
        { 1, 2, 1, 1, 1, 2, 0.5, 1, 0.5, 2, 1, 2, 1, 1, 1, 1, 0.5, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 0.5, 1, 1, 0.5, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 0.5, 0, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 0.5, 1, 1, 1, 2, 1, 1, 2, 1, 0.5, 1, 0.5, 2, 1 },
        { 1, 0.5, 0.5, 0.5, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 0.5, 2, 2, 1 },
        { 1, 0.5, 1, 1, 1, 1, 2, 0.5, 1, 1, 1, 1, 1, 1, 2, 2, 0.5, 1, 0, 1 },          //Fairy
        { 1, 1, 1, 1, 0.5, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 0.5, 1, 0.5, 1 },            //Light
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }                //Null - just in case, shouldn't be calculated
    };

    //public double tst = matchup[ELECTRIC,GROUND];

    public class Attack
    {
        public string name;
        public int type1;
        public int type2;
        public int basePower;
        public int acc;
        public int pp;
        public Attack(string n = "Struggle", int t1 = NORMAL, int t2 = NULL, int b = 10, int a = 100, int p = 999)
        {
            name = n;
            type1 = t1;
            type2 = t2;
            basePower = b;
            acc = a;
            pp = p;
        }
    }
    public static Attack Struggle = new Attack();
    public static Attack Ancient_Power = new Attack( "Ancient Power", ROCK, NULL, 60, 100, 5 );
    public static Attack Tidal_Power = new Attack( "Tidal Power", DARK, ROCK, 100, 90, 5 );
    public static Attack Cosmic_Blast = new Attack( "Cosmic Blast", PSYCHIC, NULL, 85, 100, 15 );
    public static Attack Nightstorm = new Attack("Nightstorm", DARK, NULL, 60, 85, 15);
    public static Attack Force_of_Nature = new Attack("Force of Nature", GROUND, WATER, 100, 90, 5);
    public static Attack Brine = new Attack("Brine", WATER, NULL, 65, 100, 10);
    public static Attack Seismic_Manipulation = new Attack("Seismic Manipultation", GROUND, NULL, 90, 95, 15);
    public static Attack Coronal_Storm = new Attack("Coronal Storm", FIRE, LIGHT, 100, 90, 5);
    public static Attack Solar_Force = new Attack("Solar Force", LIGHT, NULL, 60, 100, 15);
    public static Attack Heat_Wave = new Attack("Heat Wave", FIRE, NULL, 90, 90, 10);


    public class Monster
    {
        public string species;
        public int type1;
        public int type2;
        public int atk;
        public int def;
        public int spAtk;
        public int spDef;
        public int spd;
        public int hp;
        public int lvl;
        public Attack attack1;
        public Attack attack2;
        public Attack attack3;
        public Attack attack4;

        public int imageIndex;
        public Monster(string s = "MissingNo.", int t1 = NORMAL, int t2 = NULL, int h = 100, int a = 100, int d = 100, int sa = 100, int sd = 100, int sp = 100, int l = 50, Attack a1 = null, Attack a2 = null, Attack a3 = null, Attack a4 = null, int imgIndx = MISSINGNO)
        {
            species = s;
            type1 = t1;
            type2 = t2;
            atk = a;
            def = d;
            spAtk = sa;
            spDef = sd;
            spd = sp;
            hp = h;
            lvl = l;
            if (a1 != null) 
            { 
                attack1 = a1; 
            } 
            else
            {
                attack1 = Struggle;
            }

            if (a2 != null) 
            { 
                attack2 = a2; 
            } 
            else
            {
                attack2 = Struggle;
            }

            if (a3 != null) 
            { 
                attack3 = a3; 
            } 
            else
            {
                attack3 = Struggle;
            }

            if (a4 != null) 
            { 
                attack4 = a4; 
            } 
            else
            {
                attack4 = Struggle;
            }

            imageIndex = imgIndx;
        }

    }

    public static Monster MissingNo = new Monster();
    public static Monster Seluna = new Monster("Seluna", DARK, ROCK, 165, 120, 120, 170, 160, 110, 50, Tidal_Power, Cosmic_Blast, Nightstorm, Ancient_Power, SELUNA);
    public static Monster Terratlas = new Monster("Terratlas", GROUND, WATER, 175, 150, 140, 140, 130, 110, 50, Force_of_Nature, Cosmic_Blast, Brine, Seismic_Manipulation, TERRATLAS);
    public static Monster Heliosol = new Monster("Heliosol", FIRE, LIGHT, 175, 150, 140, 140, 130, 110, 50, Coronal_Storm, Cosmic_Blast, Solar_Force, Heat_Wave, HELIOSOL);

}
//165,120,120,170,160,110,50
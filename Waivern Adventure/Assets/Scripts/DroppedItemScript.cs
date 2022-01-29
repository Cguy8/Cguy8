using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DroppedItemScript : MonoBehaviour
{
    void OnEnable()
    {
        Invoke("Disable", 8f);
    }

    void Disable()
    {
        Destroy(gameObject);
    }
}

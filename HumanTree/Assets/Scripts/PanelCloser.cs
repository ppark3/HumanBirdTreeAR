using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelCloser : MonoBehaviour
{
    public GameObject PanelThing;

    public void ClosePanel(){
        PanelThing.SetActive(false);
    }
}

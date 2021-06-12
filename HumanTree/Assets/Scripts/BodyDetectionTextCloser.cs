using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BodyDetectionTextCloser : MonoBehaviour
{
    public Transform echoARPrefab;

    // Start is called before the first frame update
    void Start()
    {
        echoARPrefab = GameObject.Find("ControlledRobot(Clone)/echoAR").transform;
    }

    // Update is called once per frame
    void Update()
    {
        GameObject checker;
        checker = echoARPrefab.GetChild(0).GetChild(0).gameObject;

        if(checker != null){
            this.gameObject.SetActive(false);
        }
    }
}

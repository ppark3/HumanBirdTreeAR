using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class BodyChildLinker : MonoBehaviour
{
    private List<GameObject> children = new List<GameObject>();
    private int listSize = 0;
    private bool setChildren;
    private bool turnRemoteOff;
    private GameObject head;
    private GameObject leftShoulder;
    private GameObject rightHand;
    private GameObject arCamera;


    // Start is called before the first frame update
    void Start()
    {
        arCamera = GameObject.Find("AR Session Origin/AR Camera");
        head = GameObject.Find("ControlledRobot(Clone)/biped_robot_ace_skeleton/Root/Root/Hips/Spine1/Spine2/Spine3/Spine4/Spine5/Spine6/Spine7/Neck1/Neck2/Neck3/Neck4/Head");
        leftShoulder = GameObject.Find("ControlledRobot(Clone)/biped_robot_ace_skeleton/Root/Root/Hips/Spine1/Spine2/Spine3/Spine4/Spine5/Spine6/Spine7/LeftShoulder1");
        rightHand = GameObject.Find("ControlledRobot(Clone)/biped_robot_ace_skeleton/Root/Root/Hips/Spine1/Spine2/Spine3/Spine4/Spine5/Spine6/Spine7/RightShoulder1/RightArm/RightForearm/RightHand");
    }

    // Update is called once per frame
    void Update()
    {
        if(setChildren && !turnRemoteOff){
            for(int i = 0; i < listSize; i++){
                children[i].gameObject.GetComponent<RemoteTransformations>().enabled = false;
                turnRemoteOff= true;
            }
        }
        if(transform.GetChild(0) != null && !setChildren){
            SetTheChildren();
            setChildren = true;
        }

        for(int i = 0; i < listSize; i++){
            Vector3 direction = children[i].transform.position - arCamera.transform.position;
            children[i].transform.rotation = Quaternion.LookRotation(direction);
        }
        
        children[0].transform.position = head.transform.position + new Vector3(0, 0.25f, 0);
        children[2].transform.position = leftShoulder.transform.position + new Vector3(0.17f, 0.12f, 0);
        children[3].transform.position = rightHand.transform.position + new Vector3(0f, 0.15f, 0);

        children[1].transform.localPosition = new Vector3(0.5f, -1f, 0);
    }

    private void SetTheChildren(){
        foreach(Transform child in transform){
            children.Insert(0, child.gameObject);
            listSize++;
        }
        
        children[0].transform.SetParent(head.transform);
        children[2].transform.SetParent(leftShoulder.transform);
        children[3].transform.SetParent(rightHand.transform);
    }
}

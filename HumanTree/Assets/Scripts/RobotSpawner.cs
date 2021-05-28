using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotSpawner : MonoBehaviour
{
    public GameObject prefab;
    public List<GameObject> robots = new List<GameObject>();

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space)){
            float x = Random.Range(-10f, 10f);
            float y = Random.Range(-10f, 10f);
            float z = Random.Range(-10f, 10f);
            robots.Add(Instantiate(prefab, new Vector3(x, y, z), Quaternion.identity));
        }   

        if(Input.GetKeyDown(KeyCode.P)){
            Destroy(robots[0]);
            robots.RemoveAt(0);
        }
    }
}

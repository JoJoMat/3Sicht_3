using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class disableIfNoRotate : MonoBehaviour {

	GameObject levelManager;
	Vector3 oldVector;

	// Use this for initialization
	void Start () {
		levelManager = GameObject.Find ("LevelManager");
		oldVector = transform.localScale;
	}

	void Update () {
		if (levelManager.GetComponent<LoadLevel> ().rotateIsActive == false) {
			transform.localScale = new Vector3(0,0,0);
		} else {
			transform.localScale = oldVector;
		}
	}
}

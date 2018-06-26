using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class EnableWeiter : MonoBehaviour {

	Toggle[] toggle = new Toggle[2];
	public GameObject LevelManager;

	// Use this for initialization
	void Start () {
		toggle = LevelManager.GetComponent<LoadLevel> ().gameTyp [LevelManager.GetComponent<LoadLevel> ().j].GetComponentsInChildren<Toggle> ();

		toggle[0].onValueChanged.AddListener(delegate {
			Toggle1Active();
		});
		toggle[1].onValueChanged.AddListener(delegate {
			Toggle2Active();
		});
	}
		
	void Update () {
		if (toggle[0].isOn == false && toggle[1].isOn == false) {
			transform.localScale = new Vector3(0,0,0);
			GetComponent<Button>().enabled = false;
		}
	}

	void Toggle1Active()
	{
		if (toggle[0].isOn) {
			toggle[1].isOn = false;
			transform.localScale = new Vector3 (1, 1, 1);
			GetComponent<Button> ().enabled = true;
		}
	}

	void Toggle2Active()
	{
		if (toggle[1].isOn) {
			toggle[0].isOn = false;
			transform.localScale = new Vector3 (1, 1, 1);
			GetComponent<Button> ().enabled = true;
		}
	}
}

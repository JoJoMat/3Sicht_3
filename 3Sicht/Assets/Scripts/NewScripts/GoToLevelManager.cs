using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GoToLevelManager : MonoBehaviour {

	bool isUebung;
	public GameObject black;
	Toggle[] newToggle = new Toggle[0];

	private float alpha;
	public float alphaPlus = 0;
	float fadeDelay = 1.2f; //Fadedelay in Sekunden
	// Update is called once per frame

	void Update () {
		alpha += Time.deltaTime * alphaPlus;
		if (alpha > 0) {
			black.SetActive (true);
		} else {
			black.SetActive (false);
		}
		if (alpha >= 1) {
			alpha = 0;
			alphaPlus = 0;
			if (newToggle.Length > 0) {
				newToggle [0].isOn = false;
				newToggle [1].isOn = false;
			}
			GetComponent<LoadLevel> ().Starter ();
		}
		black.gameObject.GetComponent<Image>().color = new Color(0,0,0,alpha);
	}

	public void NextLevel()
	{
		GetComponent<LoadLevel> ().level += 1;
		GetComponent<Messung> ().WriteSimpl ("BUTTONCLICK", "weiter");
		alphaPlus =  1f /fadeDelay;
		taskSetEnd ();
	}

	public void ifYesGoBackLevel()
	{
		if (GetComponent<LoadLevel> ().list [GetComponent<LoadLevel> ().level].isLastLevel) {
			GetComponent<Messung> ().WriteSimpl ("BUTTONCLICK", "beenden");
			GetComponent<Messung> ().WriteSimpl ("APPFINISHED", "");
			GetComponent<LoadLevel> ().deleteTAN ();
		} else {
			bool isGoBack = GetComponent<LoadLevel> ().list [GetComponent<LoadLevel> ().level].oneLevelBack;
			if (isGoBack) {
				GetComponent<LoadLevel> ().level -= 1;
				GetComponent<Messung> ().WriteSimpl ("BUTTONCLICK", "nochmal");
			} else {
				GetComponent<LoadLevel> ().level += 1;
				GetComponent<Messung> ().WriteSimpl ("BUTTONCLICK", "weiter");
			}
		}
		alphaPlus =  1f /fadeDelay;
	}

	public void SimpleAnswer(bool isYes){
		bool answer = GetComponent<LoadLevel> ().list[GetComponent<LoadLevel> ().level].Answer1;

		if (isYes) {
			GetComponent<Messung> ().WriteSimpl ("BUTTONCLICK", "yes");
		} else {
			GetComponent<Messung> ().WriteSimpl ("BUTTONCLICK", "no");
		}

		if (GetComponent<LoadLevel> ().list [GetComponent<LoadLevel> ().level].TypeW.ToString () == "Tutorial") {

			if (isYes == answer) {
				GetComponent<LoadLevel> ().level += 2;
				GetComponent<Messung> ().WriteSimpl ("ANSWER", "true");
			} else {
				GetComponent<LoadLevel> ().level += 1;
				GetComponent<Messung> ().WriteSimpl ("ANSWER", "false");
			}
		} else {
			if (isYes == answer) {
				int number = PlayerPrefs.GetInt ("numberOfRightAnswer");
				PlayerPrefs.SetInt ("numberOfRightAnswer", (number + 1));
				//Debug.Log ("Number of Right Answer: " + PlayerPrefs.GetInt ("numberOfRightAnswer"));
				GetComponent<Messung> ().WriteSimpl ("ANSWER", "true");
			} else {
				//Debug.Log ("Wrong answer");
				GetComponent<Messung> ().WriteSimpl ("ANSWER", "false");
			}
			GetComponent<LoadLevel> ().level += 1;
		}
		alphaPlus =  1f /fadeDelay;
		taskSetEnd ();
	}

	public void ToggleAnswer(){

		GetComponent<Messung> ().WriteSimpl ("BUTTONCLICK", "weiter");

		bool answer1 = GetComponent<LoadLevel> ().list[GetComponent<LoadLevel> ().level].Answer1;
		bool answer2 = GetComponent<LoadLevel> ().list[GetComponent<LoadLevel> ().level].Answer2;

		newToggle = GetComponent<LoadLevel> ().gameTyp [GetComponent<LoadLevel> ().j].GetComponentsInChildren<Toggle> ();
		bool button1 = newToggle [0].isOn;
		bool button2 = newToggle [1].isOn;

		if (GetComponent<LoadLevel> ().list [GetComponent<LoadLevel> ().level].TypeW.ToString () == "Tutorial") {
			if (button1 == answer1 && button2 == answer2) {
				GetComponent<LoadLevel> ().level += 2;
				GetComponent<Messung> ().WriteSimpl ("ANSWER", "true");
			} else {
				GetComponent<LoadLevel> ().level += 1;
				GetComponent<Messung> ().WriteSimpl ("ANSWER", "false");
			}
		} else {
			if (button1 == answer1 && button2 == answer2) {
				int number = PlayerPrefs.GetInt ("numberOfRightAnswer");
				PlayerPrefs.SetInt ("numberOfRightAnswer", (number + 1));
				Debug.Log ("Number of Right Answer: " + PlayerPrefs.GetInt ("numberOfRightAnswer"));
				GetComponent<Messung> ().WriteSimpl ("ANSWER", "true");
			} else {
				Debug.Log ("Wrong answer");
				GetComponent<Messung> ().WriteSimpl ("ANSWER", "false");
			}
			GetComponent<LoadLevel> ().level += 1;
		}
		alphaPlus =  1f /fadeDelay;
		taskSetEnd ();
	}


	public void GoToLevel(int level)
	{
		GetComponent<LoadLevel> ().level = level;
		alphaPlus =  1f /fadeDelay;
	}

	void taskSetEnd(){
		if (GetComponent<LoadLevel> ().list [GetComponent<LoadLevel> ().level-1].TypeW.ToString () == "Aufgabe" && GetComponent<LoadLevel> ().list [GetComponent<LoadLevel> ().level].TypeW.ToString () != "Aufgabe") {
			print ("TASKSETEND");
			GetComponent<Messung> ().WriteSimpl ("TASKSETSTART", "Taskset " + GetComponent<LoadLevel> ().tasksetNr);
		}
	}
}

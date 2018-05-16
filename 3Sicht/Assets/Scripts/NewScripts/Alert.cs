using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Alert : MonoBehaviour {

	public GameObject alertImage;
	public GameObject alertImage2;
	public GameObject zeitBalkenImage;

	void Update(){
		zeitBalkenImage.transform.eulerAngles = new Vector3 (0, 0, zeitBalkenImage.transform.eulerAngles.z + 2);
	}

	public void showAlert(string text1, string text2, string text3){
		Text[] texte = alertImage.GetComponentsInChildren<Text> ();
		alertImage.SetActive (true);
		texte [1].text = text1;
		texte [2].text = text2;
		texte [3].text = text3;
	}
	public void disableAlert(){
		alertImage.SetActive (false);
	}

	public void showAlert2(string text1){
		Text[] texte = alertImage2.GetComponentsInChildren<Text> ();
		alertImage2.SetActive (true);
		texte [1].text = text1;
	}

	public void disableAlert2(){
		alertImage2.SetActive (false);
	}
}

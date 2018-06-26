using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LoginChecker : MonoBehaviour {

	public GameObject uploadButton;
	public GameObject beendenButton;

	public void checkTan()
	{
//		Text tanText = GetComponent<LoadLevel> ().gameTyp [11].GetComponentInChildren<Text> ();
//		if (GetComponent<LoadLevel> ().masterTan == tanText.text) {
//			GetComponent<LoadLevel> ().level += 1;
//		} else {
//			for (int i = 0; i < GetComponent<LoadLevel> ().tan.Count; i++) {
//				if (GetComponent<LoadLevel> ().tan[i] == tanText.text) { 
//					GetComponent<LoadLevel> ().tan.Remove(GetComponent<LoadLevel> ().tan[i]);
//					GetComponent<LoadLevel> ().level += 1;
//				}
//			}
//			print ("alle TANs falsch");
//		}
		GetComponent<LoadLevel> ().checkTAN();
	}

	public void checkBenutzerPW(){
//		InputField[] texte = GetComponent<LoadLevel> ().gameTyp [10].GetComponentsInChildren<InputField> ();
//		print (texte [0].text);
//		print (texte [1].text);
//		for (int i = 0; i < GetComponent<LoadLevel> ().benutzerPW.Length; i++) {
//			if (GetComponent<LoadLevel> ().benutzerPW [i].benutzer == texte [0].text) {
//				if (GetComponent<LoadLevel> ().benutzerPW [i].passwort == texte [1].text) {
//					GetComponent<LoadLevel> ().playerID = GetComponent<LoadLevel> ().benutzerPW [i].benutzer;
//					GetComponent<Messung> ().ID = GetComponent<LoadLevel> ().benutzerPW [i].benutzer;
//					GetComponent<LoadLevel> ().level += 1;
//					if (i == 0) {
//						print ("admin hat sich eingeloggt");
//						uploadButton.SetActive (true);
//					}
//				} else {
//					print ("Passwort falsch");
//				}
//			} else {
//				print ("Benutzername falsch");
//			}
//		}
//		GetComponent<LoadLevel> ().Starter ();
		//GetComponent<LoadLevel> ().checkBenutzerPW();

		GetComponent<LoadLevel> ().checkPW();
	} 

//	public void checkEinstellungPW()
//	{
//		Text einstellungPWText = GetComponent<LoadLevel> ().gameTyp [12].GetComponentInChildren<Text> ();
//		if (GetComponent<LoadLevel> ().einstellungPW == einstellungPWText.text) {
//			GetComponent<LoadLevel> ().level += 1;
//		} else {
//			print ("PW hat nicht geklappt");
//		}
//		GetComponent<LoadLevel> ().Starter ();
//	}
}

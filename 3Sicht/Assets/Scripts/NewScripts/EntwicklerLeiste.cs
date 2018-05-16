using UnityEngine;
using System.Collections;
using System.IO;
using System;
using UnityEngine.SceneManagement;

public class EntwicklerLeiste : MonoBehaviour {

	bool hide = true; //damit wird das komplette Fenster ein und ausgeblendet
	bool mode = false; //damit wird das mode-Fenster ein und ausgeblendet
	int modiNumber = 1; //Nummer des aktuellen Modus

	// Use this for initialization
	void Start () {
		PlayerPrefs.SetInt("numberOfRightAnswer", 0);
	}

	// Update is called once per frame
	void Update () {

	}

	//die kompletten Gui-Sachen
	void OnGUI () {
		float width = 1.0f;
		Color colorLine = Color.green;



		if (hide) {
			if (GUI.Button (new Rect (20, 20, 280, 20), "Show DeveloperList")) {
				hide = false;
			}
		} else {
			if (GUI.Button (new Rect (20, 20, 280, 20), "Level")) {
				mode = mode ? false : true;
			}
			GUI.Box (new Rect (10, 10, 300, 480), "");

			GUI.color = Color.white;
			if (GUI.Button (new Rect (20, 460, 280, 20), "Hide")) {
				hide = true;
			}


			print (mode);
			if (mode) {
				if (GUI.Button (new Rect (320, 20, 280, 20), "Tutorial")) {
					modiNumber = 1;
				}

				if (GUI.Button (new Rect (320, 40, 280, 20), "Aufg. Lv. 1")) {
					modiNumber = 2;
				}

				if (GUI.Button (new Rect (320, 60, 280, 20), "Aufg. Lv. 2")) {
					modiNumber = 3;
				}

				if (GUI.Button (new Rect (320, 80, 280, 20), "Aufg. Lv. 3")) {
					modiNumber = 4;
				}

				//alles wird gelesen, wenn du auf irgeneinen Gui-Button klickst, womit du den Modus änderst
				for (int x = 0; x < 10; x++) {
					if (modiNumber == 1) {
					} else {
						if (GUI.Button (new Rect (620, x * 20 + 20, 280, 20), "Aufg " + (modiNumber - 1) + "." + (x + 1))) {
							if (modiNumber == 2) {
								SceneManager.LoadScene (x + 9);
							} else if (modiNumber == 3) {
								SceneManager.LoadScene (x + 25);
							} else {
								SceneManager.LoadScene (x + 39);
							}
						}
					}

				}
			}
		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[System.Serializable]
public struct TogglesTut {
	public Toggle toggle;
	public bool value;
}

public class EventLogToggleTutorial : MonoBehaviour {

	Scene scene;
	public TogglesTut[] t;
	Button button;

	void Start()
	{
		button = GetComponent<Button>();
		button.onClick.AddListener(checkRightAnswer);
	}

	//Output the new state of the Toggle into Text
	void checkRightAnswer()
	{
		//bei falsch
		for(int i = 0; i < t.Length; i++){
			if (t[i].toggle.isOn != t[i].value) {
				scene = SceneManager.GetActiveScene();
				if (scene.name == "Tutorial 3.2") {
					SceneManager.LoadScene (50);
				} else {
					SceneManager.LoadScene (51);
				}
				return;
			}
		}

		//bei richtig
		scene = SceneManager.GetActiveScene();
		if (scene.name == "Tutorial 3.2") {
			SceneManager.LoadScene (37);
		} else {
			SceneManager.LoadScene (38);
		}
	}
}

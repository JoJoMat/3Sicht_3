using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[System.Serializable]
public struct Toggles {
	public Toggle toggle;
	public bool value;
}

public class EventLogToggle : MonoBehaviour {

	Scene scene;
	public Toggles[] t;
	Button button;

	void Start()
	{
		button = GetComponent<Button>();
		button.onClick.AddListener(checkRightAnswer);
	}

	//Output the new state of the Toggle into Text
	void checkRightAnswer()
	{
		for(int i = 0; i < t.Length; i++){
			if (t[i].toggle.isOn != t[i].value) {
				return;
			}
		}
		int number = PlayerPrefs.GetInt ("numberOfRightAnswer");
		PlayerPrefs.SetInt("numberOfRightAnswer", (number+1));

		scene = SceneManager.GetActiveScene();
		Debug.Log("Right Answer on '" + scene.name + "'.");
		Debug.Log("Number of Right Answer: " + number);
	}
}

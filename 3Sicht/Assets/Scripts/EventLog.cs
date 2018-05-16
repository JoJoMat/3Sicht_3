using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class EventLog : MonoBehaviour {

	public Scene scene;
	public Button yourButton;
	 
	// Use this for initialization
	void Start () {

		scene = SceneManager.GetActiveScene();
		Button btn = yourButton.GetComponent<Button>();
		btn.onClick.AddListener(TaskOnClick);
	}
	
	// Update is called once per frame
	void TaskOnClick()
	{
//		int number = PlayerPrefs.GetInt ("numberOfRightAnswer");
//		PlayerPrefs.SetInt("numberOfRightAnswer", (number+1));
//		Debug.Log("Right Answer on '" + scene.name + "'.");
//		Debug.Log("Number of Right Answer: " + PlayerPrefs.GetInt ("numberOfRightAnswer"));
	}
		

}

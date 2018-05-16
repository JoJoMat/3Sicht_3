using UnityEngine;
using System.Collections;

public class ApplicationManager : MonoBehaviour {
	

	public void Quit () 
	{

		int number = PlayerPrefs.GetInt ("numberOfRightAnswer");
		Debug.Log("Number of Right Answer: " + number);
		Debug.Log("Number of False Answer: " + (30-number));

		#if UNITY_EDITOR
		UnityEditor.EditorApplication.isPlaying = false;
		#else
		Application.Quit();
		#endif
	}
}

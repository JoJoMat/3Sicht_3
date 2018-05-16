using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadSceneOnClick : MonoBehaviour {

	void Start(){
		
//		countScore.AddScore (value);
//		Debug.Log (countScore);
	}
	// Use this for initialization
	public void LoadByIndex(int sceneIndex)
	{
		SceneManager.LoadScene (sceneIndex);
	
	}
	
	// Update is called once per frame
	
}

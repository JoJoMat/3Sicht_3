﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadSceneWithSpecialIndex : MonoBehaviour {
	public int sceneIndex;
	// Use this for initialization
	void Start () {
		
	}
	
	public void LoadByIndex(int sceneIndex)
	{
		SceneManager.LoadScene (sceneIndex);

	}
}

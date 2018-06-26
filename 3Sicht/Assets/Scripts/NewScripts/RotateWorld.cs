using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using UnityEngine.EventSystems;

public class RotateWorld : MonoBehaviour {

	public float rotateSpeed = 10;
	float pointerX;
	GameObject levelManager;
	Vector3 originalRad;
	GameObject currentSelection; /*= EventSystem.current.currentSelectedGameObject;*/

	void Start(){    
		originalRad = transform.eulerAngles;
		levelManager = GameObject.Find ("LevelManager");
	}
	 
	void Update(){

		if (levelManager.GetComponent<LoadLevel> ().rotateIsActive == true && levelManager.GetComponent<GoToLevelManager> ().alphaPlus == 0) {
			pointerX = Input.GetAxis ("Mouse X");
			if (Input.touchCount > 0) {
				pointerX = Input.touches [0].deltaPosition.x / 30;
			}

			//print (EventSystem.current.currentSelectedGameObject);
			if (Input.GetMouseButton (0) && EventSystem.current.currentSelectedGameObject == currentSelection) {
				float rotateX = pointerX * Mathf.Deg2Rad * rotateSpeed;
				//float rotateY = Input.GetAxis("Mouse Y")*Mathf.Deg2Rad*rotateSpeed;
				transform.RotateAround (Vector3.up, -rotateX);
				//transform.RotateAround(Vector3.right, rotateY);
				levelManager.GetComponent<Messung> ().WriteCompl ("UPDATE", Input.mousePosition.x.ToString () + "," + Input.mousePosition.y.ToString (), GetWorldRad (), levelManager.GetComponent<LoadLevel> ().GetTimer ());
			}
		}
	}

	//	string GetWorldRad(){
	//		print (transform.eulerAngles - originalRad);
	//		return (transform.eulerAngles.y - originalRad.y).ToString();
	//	}

	string GetWorldRad(){
		//print (transform.rotation.ToString ("f7"));
		return (transform.rotation.ToString("f7").Replace(" ", "").Replace("(","").Replace(")",""));
	}
}
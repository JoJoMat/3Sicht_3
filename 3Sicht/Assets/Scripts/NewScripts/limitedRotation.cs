using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class limitedRotation : MonoBehaviour {

	float rotateSpeed = 5;

	float yMinLimit = -60f;
	float yMaxLimit = 80f;
	float pointerX;

	private float x = 0.0f;
	private float y = 0.0f;
	private float z = 0.0f;

	GameObject levelManager;
	Vector3 originalRad;

	void Start() 
	{
		originalRad = transform.eulerAngles;
		levelManager = GameObject.Find ("LevelManager");
		x = transform.eulerAngles.x;
		y = transform.eulerAngles.y;
		z = transform.eulerAngles.z;
	}

	void Update() 
	{
		if (levelManager.GetComponent<LoadLevel> ().rotateIsActive == true && levelManager.GetComponent<GoToLevelManager> ().alphaPlus == 0) {

			if (Input.GetMouseButton (0)) {
				pointerX = Input.GetAxis ("Mouse X");
				if (Input.touchCount > 0) {
					pointerX = Input.touches [0].deltaPosition.x;
					y -= pointerX * Mathf.Deg2Rad * rotateSpeed;
				}
				y -= pointerX * Mathf.Deg2Rad * rotateSpeed * 15;
			}
			y = ClampAngle (y, yMinLimit, yMaxLimit);
			Quaternion newRot = Quaternion.Euler (x, y, z);
			transform.rotation = newRot;
		}
	}

	float ClampAngle( float angle, float min, float max )
	{
		if ( angle < -360 )
			angle += 360;
		if ( angle > 360 )
			angle -= 360;

		return Mathf.Clamp( angle, min, max );
	}

	string GetWorldRad(){
		print (transform.rotation.ToString ("f7"));
		return (transform.rotation.ToString("f7").Replace(" ", "").Replace("(","").Replace(")",""));
	}
}

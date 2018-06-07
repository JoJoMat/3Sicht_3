using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.IO;
using SimpleJSON;
using System.Xml;
using System.Text;
using System.Runtime.Serialization.Formatters.Binary;


[System.Serializable]
public struct Models {
	public GameObject model;
	public Vector3 position;
	public Vector3 scale;
	public Vector3 rotation;
}

[System.Serializable]
public struct Worlds {
	public GameObject world;
	//public Vector3 rotation;
}

[System.Serializable]
public struct Level {
	public string nameLevel;
	public string gameTyp; //0 = Menü ; 1 = Intro (Beispiele 3D) ; 2 = TutErk1 ; 3 = TutErk2;
	public string text; 
	public bool isIntro;
	public bool isUebung;
	public int timeInSec;
	public Worlds[] w;
	public Models[] m;
}

[System.Serializable]
public struct BenutzerPW {
	public string benutzer;
	public string passwort;
	//public Vector3 rotation;
}

[System.Serializable]
public struct LevelManagerList {  
	public enum Scene {
		Menu,
		Explanation,
		Tutorial,
		Aufgabe,
		SimpleText,
		Beispiele,
		Video,
		BenutzerPW,
		Tan,
		TutorialText
	}
	public enum GameType {
		SideView,
		TopView,
		Toggle,
		None
	}

	public Scene TypeW; //
	public GameType TypeG; //
	public int index; //
	public int numberOfPrefabs; //nur für Toggle
	public string titel;
	public string titelSize;
	public string text;
	public string textSize;
	public string buttonText;
	public string buttonTextSize;
	public string notAvailableText;
	public GameObject MainPrefab;
	public GameObject Prefab1;
	public GameObject Prefab2;
	public GameObject Prefab3;
	//public GameObject Prefab4;
	public bool Answer1;
	public bool Answer2;
	public bool Answer3;
	//public bool Answer4;
	public bool oneLevelBack;
	public bool isTime;
	public bool isInvisibleTime;
	public float timeInSec;
	public bool isLastLevel;
	public bool isImage; //nur für Video - noch nicht eingeführt
	public string status;
	public bool noRotate;
	public bool zufall;
	public bool skipScene;
}

public class LoadLevel : MonoBehaviour {

	//public List<LevelManagerList> list2 = new List<LevelManagerList>();
	//public Level[] l;
	GameObject Prefab;
	//List<int> zufallList = new List<int>(); 

	public LevelManagerList[] list;
	private List<LevelManagerList> zufallList = new List<LevelManagerList>();

	public int level;
	public string playerID;
	public string version; //Type A oder B

	//LOGINDATEN
	public string masterTan;
	public List<string> tan = new List<string>();
	public string aktuelleTan;
	public BenutzerPW[] benutzerPW;
	public string einstellungPW;

	public GameObject[] gameTyp;
	public GameObject zeitBalkenImage;
	public GameObject zeitBalken;
	public Text zeitText;
	public int j; 
	public string uploadBackendLink = "http://aodserver.mobi/3Sicht/UploadBackend.php"; 
	public string downloadBackendLink = "http://aodserver.mobi/3Sicht/DownloadBackend.php"; 
	public string downloadSimplBackendLink = "http://aodserver.mobi/3Sicht/DownloadSimplBackend.php"; 
	public string uploadMeasurementLink = "http://aodserver.mobi/3Sicht/UploadMeasurement.php"; 
	public string deleteBackendLink = "http://aodserver.mobi/3Sicht/DeleteAllRows.php"; 
	public string uploadFilesLink = "http://www.aodserver.mobi/3Sicht/Files"; 
	public string checkTANLink = "http://www.aodserver.mobi/3Sicht/checkTan.php";
	public string deleteTANLink = "http://www.aodserver.mobi/3Sicht/deleteTan.php";
	public string checkPWLink = "http://www.aodserver.mobi/3Sicht/checkPW.php";
	public string generateTANLink = "http://www.aodserver.mobi/3Sicht/generateTAN.php";

	public bool rotateIsActive = true;

	int betaActive = -1;
	float value = 0;

	public int tasksetNr = 0;

	bool admin = false;

	Vector3 originalRad;

	SimpleJSON.JSONNode sBL = JSON.Parse(""); //simpleBackLimitation;
	bool zufallListisRandom = false;
	void Start(){

		createZufallList ();

		PlayerPrefs.SetInt ("numberOfRightAnswer", (0));
		//betaActive = int.Parse(N["Beta-Active"].Value);
	}

	void Update () {
		//InvokeUpdate ();
		//Debug.Log (list2.IndexOf(Scene));
		//.Log (list [level].TypeW.ToString());
		//Debug.Log (nameof(MyEnum.EnumValue));

		if (list [level].isTime) {
			zeitBalkenImage.transform.eulerAngles = new Vector3 (0, 0, zeitBalkenImage.transform.eulerAngles.z + 1);
			if (GetComponent<GoToLevelManager> ().alphaPlus == 0) {
				list [level].timeInSec -= Time.deltaTime;
			}
			//zeitText.text = (Mathf.RoundToInt (list [level].timeInSec - timer)).ToString ();
			zeitText.text = Mathf.RoundToInt(list [level].timeInSec).ToString ();
			if (list [level].timeInSec <= 0) {
				GetComponent<Messung> ().WriteSimpl ("TIMEOUT", list [level].status.Replace(" ", ""));
				if (list [level].TypeW.ToString () == "Tutorial") {
					level += 2;
				} else {
					level += 1;
				}
				Starter ();
			}

			if (value <= 0.5) {
				value += 0.01f;
			} else if (value < 1 && betaActive >= 0) {
				value += 0.01f;
			} 
		} else {
			list [level].timeInSec = 0; 
		}

		//encoder(list[level].Prefab1);
	}

	public string GetTimer(){
		print ("GETTIMER : " + list [level].timeInSec);
		if (list [level].timeInSec <= 0) {
			return "noTimer";
		}
		//else
		return (list [level].timeInSec).ToString();
	}

	public string GetMousePosition(){
		return Input.mousePosition.ToString ();
	}


	//	void InetCheck(){
	//		if (value < 1) {
	//			print ("kein Internet");
	//			//Start ();
	//		} else {
	//			print ("Internet verfügbar");
	//		}
	//	}

	void OnValidate () {
		if (Application.isPlaying) {
			//Starter ();
		}
	}



	void createZufallList(){
		//addiere alle Indexe, die zufällig sein sollen zu zufallList
		 
		bool ifNewLoop = true;
		int ifRandom = 0;
		bool zufallOld = false;
		int newI = 0;
		int startI = 0;
		while (ifNewLoop == true) {
			zufallList.Clear ();

			for (int i = newI; i < list.Length; i++) {
				print (i);
				if (list [i].zufall) {
					zufallList.Add (list [i]);
				}
				if (zufallOld != list [i].zufall) {
					print ("ifRandomPlus - i:" + i + " zufallOld:" + zufallOld + " list [i].zufall:" + list [i].zufall);
					ifRandom += 1;
					zufallOld = list [i].zufall;
					if (ifRandom >= 2){
						print ("new List :" + i);
						ifNewLoop = true;
						newI = i;
						break;
					}
				}
				if (i == 55) {
					ifNewLoop = false;
				}
			}
			//zufallList wird durcheinandergemischt
			for (int i = 0; i < zufallList.Count; i++) {
				LevelManagerList temp = zufallList [i];
				int randomIndex = Random.Range (i, zufallList.Count);
				zufallList [i] = zufallList [randomIndex];
				zufallList [randomIndex] = temp;
			}

			//die Werte von zufallList werden zurück in die Indexe gebracht in neuer Reihenfolge
			for (int i = startI; i < newI; i++) {
				if (list [i].zufall) {
					print ("zufallList [0]: " + zufallList [0]);
					list [i] = zufallList [0];
					//print ("zufallList: " + i + " : " + zufallList [0] + " | " + list [i].index);
					zufallList.RemoveAt (0);
				}
				startI = newI;
			}
		}
	}

	public void checkLimitations(){
		if (sBL["noRotate"]=="1"){ 
			list [level].noRotate = true;
		}
		if (sBL["timer"]=="1"){ 
			list [level].isTime = true;
			if (list [level].TypeW.ToString () == "Aufgabe" ||
			    list [level].TypeW.ToString () == "Tutorial") {
				list [level].timeInSec = 30;
			} else if (list [level].TypeW.ToString () == "Tan" ||
			           list [level].TypeW.ToString () == "Menu") {
				list [level].isTime = false;
				// Tan und Menü bekommen keinen Countdown (BenutzerPW hat sowieso keins)
			}
			else {
				list [level].timeInSec = 60;
				list [level].isInvisibleTime = true;
			} 
		} else {
			list [level].isTime = false;
		}
		if (sBL["invisibleTimer"]=="1"){ 
			list [level].isInvisibleTime = true;
		} else {
			list [level].isInvisibleTime = false;
		}
		if (sBL["randomLevel"]=="1" && zufallListisRandom == false){ 
			for (int i = 0; i < list.Length; i++) {
				if (list [i].TypeW.ToString () == "Aufgabe") {
					print (i);
					list [i].zufall = true;
				}
			}
			print ("update?");
			createZufallList ();
			zufallListisRandom = true;
		}
		if (sBL["skipTutorial"]=="1"){
			if (list [level].TypeW.ToString () == "Explanation" ||
			    list [level].TypeW.ToString () == "Tutorial" ||
			    list [level].TypeW.ToString () == "Video" ||
			    list [level].TypeW.ToString () == "Beispiele" ||
			    list [level].TypeW.ToString () == "TutorialText") {
				list [level].skipScene = true;
			}
		}
		print ("checkLimitations");
	}

	public void Starter(){
		if (sBL ["activateThisBackend"] == "1") {
			checkLimitations ();
		}

		if (list [level].isLastLevel) {
			list [level].text = list [level].text + "Korrekte Antworten: " + PlayerPrefs.GetInt ("numberOfRightAnswer") + "/30";
		}

		if (list [level].skipScene) {
			level += 1;
			Starter ();
			return;
		}

		if (admin == true && list [level].TypeW.ToString() == "Tan") {
			level += 1;
			Starter ();
			return;
		}

		if (list [level].noRotate) {
			rotateIsActive = false;
		} else {
			rotateIsActive = true;
		}

		changeGameTyp ();
		if (j > 2 && j < 10) {
			changeText ();
			if (j < 7) {
				loadModels ();
			} else if (j == 8) {
				loadExamples ();
			}
		} 
		print ("SCREEN: " + list [level].status);
		GetComponent<Messung> ().WriteSimpl ("SCREEN", list [level].status.Replace(" ", ""));
	}

	//	public void InvokeUpdate(){
	//		if (Input.GetMouseButton (0) && j > 2 && j < 7) {
	//			GetComponent<Messung> ().Write ("UPDATE", ("[[" + GetWorldRad() + "],[" + Input.mousePosition.x.ToString() + "," + Input.mousePosition.y.ToString() + "],[" + /*GetTimer () + */ "]]"));
	//		}
	//	}



	void changeGameTyp(){

		zeitBalken.SetActive(false);

		for (int i = 0; i < gameTyp.Length; i++) {
			gameTyp [i].SetActive (false);
		}

		if (list [level].TypeW.ToString () == "Aufgabe" && list [level - 1].TypeW.ToString () != "Aufgabe") {
			tasksetNr += 1;
			print ("TASKSETSTART");
			GetComponent<Messung> ().WriteSimpl ("TASKSETSTART", "Taskset " + tasksetNr);
		}


		switch (list [level].TypeW.ToString())
		{
		case "Menu":
			j = 0;
			break;
		case "Explanation":
			j = 1;
			break;
		case "Tutorial":
			j = 4;
			break;
		case "Aufgabe":
			j = 4;
			break;
		case "SimpleText":
			j = 7;
			break;
		case "Beispiele":
			j = 8;
			break;
		case "Video":
			j = 9;
			break;
		case "BenutzerPW":
			j = 10;
			break;
		case "Tan":
			j = 11;
			break;
		case "TutorialText":
			j = 7;
			break;
		default:
			j = 0;
			break;
		}
		if (j == 1 || j == 4) {
			switch (list [level].TypeG.ToString ()) {
			case "SideView":
				j += 0;
				break;
			case "TopView":
				j += 1;
				break;
			case "Toggle":
				j += 2;
				break;
			default:
				j = 1;
				break;
			}
		} else {
			list [level].TypeG = LevelManagerList.GameType.None;
		}
		Invoke("Activate", 0.0001f); //um den Issue zu beheben, dass unity zu langsam ist ein gameObject zu deaktivieren und sofort wieder zu aktivieren
	}

	void Activate()
	{
		gameTyp [j].SetActive (true);
	}

	void changeText(){
		Text[] newText = gameTyp [j].GetComponentsInChildren<Text> ();
		if (!(list [level].TypeW.ToString () == "Aufgabe" || 
			  list [level].TypeW.ToString () == "Beispiele" ||
			  list [level].TypeW.ToString () == "Video")) {
			newText [0].text = "" + list [level].titel;
			newText [0].fontSize = int.Parse (list [level].titelSize);
		} else {
			newText [0].text = "";
		}
		if (!(list [level].TypeW.ToString () == "Beispiele" ||
		      list [level].TypeW.ToString () == "Video")) {
			newText [1].text = "" + list [level].text;
			newText [1].fontSize = int.Parse (list [level].textSize);
		}
	}

	void loadModels (){

		if (list [level].isTime && list [level].isInvisibleTime == false) {
			zeitBalken.SetActive(true);
		} else {
			zeitBalken.SetActive(false);
		}

		GameObject[] world = new GameObject[list[level].numberOfPrefabs+1];
		for(int i = 0; i <= list[level].numberOfPrefabs; i++)
		{
			if (i == 0) {
				Prefab = list [level].MainPrefab;
			} else if (i == 1) {
				Prefab = list [level].Prefab1;
			} else if (i == 2) {
				Prefab = list [level].Prefab2;
			} else if (i == 3) {
				Prefab = list [level].Prefab3;
			}
			world[i] = gameTyp [j].transform.Find("World" + (i+1)).gameObject;
			GameObject newObject;
			newObject = Instantiate(Prefab);
			newObject.name = world[i].name;
			newObject.transform.position = world[i].transform.position;
			world[i].transform.rotation = newObject.transform.rotation; //in Prefab gespeicherte Transformation wird überschrieben

			//werde ich vermutlich noch gebrauchen 
			//			MonoBehaviour[] scripts;
			//			scripts = world[i].GetComponents<MonoBehaviour>();
			//			foreach (MonoBehaviour script in scripts) {
			//				//print (script.GetType());
			//				System.Type MyScriptType = System.Type.GetType (script.GetType() + ",Assembly-CSharp");
			//				newObject.AddComponent(MyScriptType);
			//				//MonoBehaviour c = gameObject.AddComponent<MonoBehaviour> ();
			//			}
			//newObject.AddComponent(world[i].GetComponents<MonoBehaviour>());
			newObject.transform.parent = world[i].transform.parent;
			Destroy(world[i]);
		}
	}
	void loadExamples (){
//		GameObject world;
//		world = gameTyp [j].transform.Find("World1").gameObject;
//		GameObject newObject;
//		newObject = Instantiate(list [level].MainPrefab);
//		newObject.name = world.name;
//		newObject.transform.position = world.transform.position;
//		newObject.transform.rotation = world.transform.rotation;
//		newObject.transform.parent = world.transform.parent;
//		Destroy(world);
	}

	public string encoder(GameObject prefab){
		byte[] bytes;
		using (MemoryStream ms = new MemoryStream())
		{
			BinaryFormatter bf = new BinaryFormatter();
			bf.Serialize(ms, prefab);
			bytes = ms.ToArray();
		}
		string enc = System.Convert.ToBase64String(bytes);
		return enc;
	}

//	public void generateTAN()
//	{
//		string newTan = "";
//		string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
//		for (int i = 0; i < 5; i++) {
//			char c = chars[Random.Range(0,chars.Length)]; 
//			newTan = newTan + c; //5 mal wird ein neues Zeichen hinzugefügt
//		}
//		tan.Add (newTan);
//	}

	public void uploadDatabase()
	{
		StartCoroutine("uploadDatabaseE");
	}

	IEnumerator uploadDatabaseE()
	{
		var form2 = new WWWForm(); //here you create a new form connection
		form2.AddField( "Version", version);
		WWW www = new WWW(deleteBackendLink,form2); 
		GetComponent<Alert> ().showAlert2("VERBINDUNG WIRD HERGESTELLT");
		yield return www;
		GetComponent<Alert> ().disableAlert2();
		if (www.error != null) {
			GetComponent<Alert> ().showAlert("ERROR", "Kein Internet?", "Ok");
		} else {
			print(www.text); //Ausgabe PHP
		}
		for (int i = 0; i < list.Length; i++) {
			var form = new WWWForm(); //here you create a new form connection
			form.AddField( "Version", version);
			form.AddField( "Scene", list[i].TypeW.ToString()); //add your hash code to the field myform_hash, check that this variable name is the same as in PHP file
			if (list [i].Prefab1.ToString () != "null") {
				form.AddField ("MainPrefab", list [i].Prefab1.name);
			} else {
				form.AddField ("MainPrefab", "null");
			}
			form.AddField( "GameType", list[i].TypeG.ToString());
			form.AddField( "title", list[i].titel);
			form.AddField( "titleSize", list[i].titelSize);
			form.AddField( "text", list[i].text);
			form.AddField( "textSize", list[i].textSize);
			form.AddField( "buttonText", list[i].buttonText);
			form.AddField( "buttonTextSize", list[i].buttonTextSize);
			if (list [i].Prefab2.ToString () != "null") {
				form.AddField ("Prefab2", list [i].Prefab2.name);
			} else {
				form.AddField ("Prefab2", "null");
			}
			if (list [i].Prefab3.ToString () != "null") {
				form.AddField ("Prefab3", list [i].Prefab3.name);
			} else {
				form.AddField ("Prefab3", "null");
			}
			form.AddField( "Prefab4", "");
			form.AddField( "Answer1", boolToBinary(list[i].Answer1));
			form.AddField( "Answer2", boolToBinary(list[i].Answer2));
			form.AddField( "Answer3", boolToBinary(list[i].Answer3));
			form.AddField( "Answer4", "");
			form.AddField( "oneLevelBack", boolToBinary(list[i].oneLevelBack));
			form.AddField( "isTime", boolToBinary(list[i].isTime));
			form.AddField( "isInvisibleTime", boolToBinary(list[i].isInvisibleTime));
			form.AddField( "timeInSec", list[i].timeInSec.ToString());
			form.AddField( "isLastLevel", boolToBinary(list[i].isLastLevel));
			form.AddField( "isSceneExists", boolToBinary(list[i].skipScene));
			form.AddField( "status", list[i].status);
			form.AddField( "noRotate", boolToBinary(list[i].noRotate));
			form.AddField( "zufall", boolToBinary(list[i].zufall));
			WWW www2 = new WWW(uploadBackendLink,form); 
			yield return www2;
			if (www2.error != null) {
				print(www2.error); 
			} else {
				print(www2.text); //Ausgabe PHP
			}
		}

	}

	int boolToBinary(bool Bool){
		return Bool == true ? 1 : 0;
	}

	public void uploadMeasurementDatabase()
	{
		//if (EditorUtility.DisplayDialog ("Bei Upload-Erfolg werden die Speicherdaten komplett vom Gerät gelöscht", "", "Ok", "Abgelehnt!!!")) {

		GetComponent<Messung> ().s.Close();
		GetComponent<Messung> ().fs.Close();
		//Destroy(GetComponent<Messung>());
		StartCoroutine("UploadFile");
		print ("test");
		//}
		//
	}

	IEnumerator UploadFile()
	{
		print ("Daten werden hochgeladen");
		var sr = new StreamReader (Application.persistentDataPath + "/0.json");
		var fileContents = sr.ReadToEnd ();
		sr.Close ();
		print (fileContents);

		var form = new WWWForm ();
		form.AddField ("Benutzer", playerID); 
		form.AddField ("Text", fileContents);
		WWW www = new WWW (uploadMeasurementLink, form); 
		GetComponent<Alert> ().showAlert2("VERBINDUNG WIRD HERGESTELLT");
		yield return www;
		GetComponent<Alert> ().disableAlert2();
		if (www.error != null) {
			GetComponent<Alert> ().showAlert("ERROR", "Kein Internet?", "Ok");
		} else {
			print (www.text); //Ausgabe PHP
			if (www.text == "Finished") {
				print ("destroy Text"); 
				GetComponent<Messung> ().DeleteFile ();
				GetComponent<LoginChecker> ().uploadButton.SetActive(false);
			}
		}
	}

	public void checkTAN()
	{
		StartCoroutine("checkTANE");
	}

	IEnumerator checkTANE()
	{
		aktuelleTan = GetComponent<LoadLevel> ().gameTyp [11].GetComponentInChildren<Text> ().text;
		var form = new WWWForm ();
		print ("aktuelleTan: " + aktuelleTan);
		form.AddField ("Tan", aktuelleTan); 
		WWW www = new WWW (checkTANLink, form); 
		GetComponent<Alert> ().showAlert2("VERBINDUNG WIRD HERGESTELLT");
		yield return www;
		GetComponent<Alert> ().disableAlert2();
		if (www.error != null) {
			GetComponent<Alert> ().showAlert("ERROR", "Kein Internet?", "Ok");
		} else {
			playerID = aktuelleTan;
			GetComponent<Messung> ().ID = aktuelleTan;
			print (www.text);
			if (www.text != "") {
				if (www.text.Contains ("admin")) {
					print ("MasterTAN eingesetzt");
					aktuelleTan = "unmöglichzuentfernenderTANblaundnochnpaarZeichen*$%/§€‰jodassolltereichen";
					version = www.text;

				} else {
					print ("Tan korrekt");
					version = www.text;
				}
				GetComponent<Alert> ().showAlert2 ("DATEN WERDEN GELADEN");
				downloadBackend ();
			} else {
				GetComponent<Alert> ().showAlert("ERROR", "TAN falsch!", "Ok");
			}
		}
	}

	public void deleteTAN()
	{
		StartCoroutine("deleteTANE");
	}

	IEnumerator deleteTANE()
	{
		var form = new WWWForm ();
		form.AddField ("tan", aktuelleTan); 
		WWW www = new WWW (deleteTANLink, form); 
		GetComponent<Alert> ().showAlert2("VERBINDUNG WIRD HERGESTELLT");
		yield return www;
		GetComponent<Alert> ().disableAlert2();
		if (www.error != null) {
			print (www.error); 
		} else {
			print (www.text); //Ausgabe PHP
			Application.Quit();
			#if UNITY_EDITOR
			UnityEditor.EditorApplication.isPlaying = false;
			#endif
		}
	}

	public void generateTAN()
	{
		StartCoroutine("generateTANE");
	}

	IEnumerator generateTANE()
	{
		WWW www = new WWW (generateTANLink); 
		GetComponent<Alert> ().showAlert2("VERBINDUNG WIRD HERGESTELLT");
		yield return www;
		GetComponent<Alert> ().disableAlert2();
		if (www.error != null) {
			print (www.error); 
		} else {
			print (www.text); //Ausgabe PHP
		}
	}

	public void checkPW()
	{
		StartCoroutine("checkPWE");
	}

	IEnumerator checkPWE()
	{
		InputField[] texte = GetComponent<LoadLevel> ().gameTyp [10].GetComponentsInChildren<InputField> ();
		var form = new WWWForm ();
		form.AddField ("Benutzer", texte [0].text); 
		form.AddField ("PW", texte [1].text); 
		WWW www = new WWW (checkPWLink, form); 
		GetComponent<Alert> ().showAlert2("VERBINDUNG WIRD HERGESTELLT");
		yield return www;
		GetComponent<Alert> ().disableAlert2();
		if (www.error != null) {
			GetComponent<Alert> ().showAlert("ERROR", "Passwortcheck gescheitert! - Kein Internet?", "Ok");
		} else {
			print (www.text);
			if (www.text != ""){
				if (www.text.Contains ("admin")) {
					print ("admin hat sich eingeloggt");
					admin = true;
					playerID = "admin"; //da TAN bei admin-Login übersprungen wird
					GetComponent<Messung> ().ID = "admin";
					level += 1;
					GetComponent<GoToLevelManager> ().alphaPlus = 0.5f;
					GetComponent<LoginChecker> ().uploadButton.SetActive (true);
				} else {
					admin = false;
					print ("normal");
					level += 1;
					GetComponent<GoToLevelManager> ().alphaPlus = 0.5f;
					GetComponent<LoginChecker> ().uploadButton.SetActive (false);
				}
			} else {
				GetComponent<Alert> ().showAlert("ERROR", "Benutzer oder Passwort falsch!", "Ok");
			}
		}
	}

	public void downloadBackend()
	{
		StartCoroutine("downloadBackendE");
	}

	IEnumerator downloadBackendE()
	{
		version = version.Replace ("admin", "");
		print ("Version: " + version);

		var form2 = new WWWForm ();
		form2.AddField ("Version", version);  
		WWW www2 = new WWW (downloadSimplBackendLink, form2); 
		yield return www2;
		if (www2.error != null) {
			GetComponent<Alert> ().showAlert("ERROR", "Download Backend gescheitert! - Kein Internet?", "Ok");
		} else {
			string jsonString2 = www2.text; 
			print (jsonString2);
			sBL = JSON.Parse(jsonString2);  //string wird geteilt in einzelne Datentypen

			print (sBL.GetType ());
			print (sBL ["noRotate"]);
			print (sBL ["timer"]);
			print (sBL ["invisibleTimer"]);
			print (sBL ["randomLevel"]);
			print (sBL ["skipTutorial"]);
			print (sBL ["activateThisBackend"]);

			if (sBL["activateThisBackend"] == "1") {
				if (jsonString2 != "") {
					level += 1;
					GetComponent<GoToLevelManager> ().alphaPlus = 0.5f;
					GetComponent<Alert> ().disableAlert2();
				}
			} else {

				var form = new WWWForm ();
				form.AddField ("Version", version);  
				WWW www = new WWW (downloadBackendLink, form); 
				yield return www;
				if (www.error != null) {
					GetComponent<Alert> ().showAlert("ERROR", "Download Backend gescheitert! - Kein Internet?", "Ok");
				} else {
					string jsonString = www.text; //jsonData wird zu String umgewandelt
					//InvokeRepeating ("InetCheck", 1,10); //eine andere Funktion überprüft regelmäßig das Internet
					print (jsonString);
					if (jsonString != "") {
						level += 1;
						GetComponent<GoToLevelManager> ().alphaPlus = 0.5f;
						GetComponent<Alert> ().disableAlert2();
					}

					//Daten werden ersetzt!

				}

			}



			//Daten werden ersetzt!

		}


		//betaActive = int.Parse(N["Beta-Active"].Value);
	}
}

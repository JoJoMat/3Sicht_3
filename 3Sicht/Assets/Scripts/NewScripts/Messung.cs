using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using System.Globalization;

[Serializable]
public class jsonObject
{
	public string PlayerID ;
	public string Date;
	public string Eventtype;
	public string value;
}

public class Messung : MonoBehaviour {

	public BinaryWriter s;
	public FileStream fs;
	public string ID;
	jsonObject obj;

	void Start(){
		Vorbereitung ();
		StartApp ();
	}

	void Vorbereitung(){
		//obj = new jsonObject();
		string savePath = Application.persistentDataPath + "/0.json";
		fs = new FileStream(savePath, FileMode.Append);
		s = new BinaryWriter (fs);
		ID = "-";
	}

	void StartApp (){
//		obj.PlayerID = ID;
//		obj.Date = DateTime.Now.ToString();
//		obj.Eventtype = "APPSTART";
//		obj.value = "";
		string timestamp = DateTime.UtcNow.ToString("yyyy-MM-dd_HH:mm:ss.fff", CultureInfo.InvariantCulture);
		byte[] text = System.Text.Encoding.Unicode.GetBytes("" + ID + " " + timestamp + " " + "APPSTART" + " " + "-" + "|");
//		byte[] text = System.Text.Encoding.Unicode.GetBytes("" + Environment.NewLine + DateTime.Now + "|" + "APPSTART|" + Environment.NewLine);
//		byte[] text = System.Text.Encoding.Unicode.GetBytes("[" + JsonUtility.ToJson(obj) + ",");
		s.Write(text);
	}

	public void WriteSimpl(string type, string String){
		string timestamp = DateTime.UtcNow.ToString("yyyy-MM-dd_HH:mm:ss.fff", CultureInfo.InvariantCulture);
		byte[] text = System.Text.Encoding.Unicode.GetBytes(ID + " " + timestamp + " " + type + " " + String + " - - -|");
		s.Write(text);
	}

	public void WriteCompl(string type, string position, string quaternion, string countdown){
		string timestamp = DateTime.UtcNow.ToString("yyyy-MM-dd_HH:mm:ss.fff", CultureInfo.InvariantCulture);
		byte[] text = System.Text.Encoding.Unicode.GetBytes(ID + " " + timestamp + " " + type + " M " + position + " " + quaternion + " " + countdown + "|");
		s.Write(text);
	}

	void EndApp (){
//		obj.PlayerID = ID;
//		obj.Date = DateTime.Now.ToString();
//		obj.Eventtype = "APPFINISHED";
//		obj.value = "";
		string timestamp = DateTime.UtcNow.ToString("yyyy-MM-dd_HH:mm:ss.fff", CultureInfo.InvariantCulture);
		byte[] text = System.Text.Encoding.Unicode.GetBytes("" + ID + " " + timestamp + " " + "APPFINISHED" + " " + "-" + "|");
		//byte[] text = System.Text.Encoding.Unicode.GetBytes("" + Environment.NewLine + DateTime.Now + "|" + "APPSTART|" + Environment.NewLine);
		//byte[] text = System.Text.Encoding.Unicode.GetBytes(JsonUtility.ToJson(obj) + "]");
		s.Write(text);
	}

	public void DeleteFile (){
		string savePath = Application.persistentDataPath + "/0.json";
		fs = new FileStream(savePath, FileMode.Create);
		s = new BinaryWriter (fs);
		s.Write("");
	}

	void Save(){
		//GetMousePosition ();
		//GetWorldRotate();
	}

//	Vector2 GetMousePosition(){
//	}
//
//	Vector3 GetWorldRotate(){
//	}

	void SaveOld(){
		//		var sw = new StreamWriter(Application.dataPath + "/" + fileName,true);
		//		sw.Write ("testingagain"); 
		//		sw.Close();
		//
		//		if (!Directory.Exists (savePath)) {    
		//			s = new BinaryWriter (File.OpenWrite (savePath));
		//		} else {
		//			s = new BinaryWriter()
		//		}
		//		using(var w = new BinaryWriter(File.OpenWrite(savePath))){
		//			w.Write(System.Convert.ToString("test")); 
		//			w.Write(System.Convert.ToString("test2"));
		//		}
		//File.AppendAllText(savePath, "test");
		s.Write("Test" + Environment.NewLine);
		//		print(Application.persistentDataPath);
		//		Debug.Log("Save complete");
	}

	//	void Load(){
	//		string loadPath = Application.persistentDataPath + "/savefile.sav";
	//		using(var r = new BinaryReader(File.OpenRead(loadPath))){
	//			//Load ammo and health
	//			ammo = r.ReadInt32();
	//			health = r.ReadInt32();
	//		}
	//		Debug.Log("Load complete");
	//	}

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEditor;
using UnityEditorInternal;
using System.IO;


[CustomEditor(typeof(LoadLevel))]
public class MyScriptEditor2 : Editor
{

	private ReorderableList list;
	private ReorderableList benutzerPW;
	protected static bool showManager = true;
	protected static bool showEinstellung = true;
	public Level[] m;
	SerializedProperty none;

	private void OnEnable() {
		showManager = false;
		list = new ReorderableList(serializedObject, serializedObject.FindProperty("list"), true, true, true, true);
		list.drawElementCallback = (Rect rect, int index, bool isActive, bool isFocused) => {
			var element = list.serializedProperty.GetArrayElementAtIndex(index);
			rect.y += 2;

			element.FindPropertyRelative("index").intValue = index;
			if (element.FindPropertyRelative("numberOfPrefabs").intValue < 2 || element.FindPropertyRelative("numberOfPrefabs").intValue > 3){
				element.FindPropertyRelative("numberOfPrefabs").intValue = 2;
			}
			if (element.FindPropertyRelative("TypeG").enumValueIndex != 2){
				element.FindPropertyRelative("numberOfPrefabs").intValue = 1;
			}


			EditorGUI.BeginDisabledGroup(true);
			EditorGUI.PropertyField(new Rect(rect.x, rect.y, 20, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("index"), GUIContent.none);
			EditorGUI.EndDisabledGroup(); 
			EditorGUI.PropertyField(new Rect(rect.x + 21, rect.y, 75, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("TypeW"), GUIContent.none);
			EditorGUI.PropertyField(new Rect(rect.x + rect.width - 170, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("status"), GUIContent.none);
			EditorGUI.PropertyField(new Rect(rect.x + rect.width - 190, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("skipScene"), GUIContent.none);
			EditorGUI.PropertyField(new Rect(rect.x + rect.width - 210, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("zufall"), GUIContent.none);
			EditorGUI.PropertyField(new Rect(rect.x + rect.width - 230, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("noRotate"), GUIContent.none);
			EditorGUI.PropertyField(new Rect(rect.x + rect.width - 60, rect.y, 30, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("isTime"), GUIContent.none);
			if (element.FindPropertyRelative("isTime").boolValue == true ){
				EditorGUI.PropertyField(new Rect(rect.x + rect.width - 40, rect.y, 20, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("isInvisibleTime"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + rect.width - 25, rect.y, 20, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("timeInSec"), GUIContent.none);
			}

			if (element.FindPropertyRelative("TypeW").enumValueIndex == 0 || element.FindPropertyRelative("TypeW").enumValueIndex == 7 || element.FindPropertyRelative("TypeW").enumValueIndex == 8){
				//MENU, TAN, BENUTZERPW
			} else if (element.FindPropertyRelative("TypeW").enumValueIndex == 1 || element.FindPropertyRelative("TypeW").enumValueIndex == 2 || element.FindPropertyRelative("TypeW").enumValueIndex == 3){
				//EXPLANATION, TUTORIAL, LEVEL
				EditorGUI.PropertyField(new Rect(rect.x + 97, rect.y, 50, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("MainPrefab"), GUIContent.none);

				EditorGUI.PropertyField(new Rect(rect.x + 148, rect.y, 65, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("TypeG"), GUIContent.none);

				if (element.FindPropertyRelative("TypeG").enumValueIndex == 2){
					EditorGUI.PropertyField(new Rect(rect.x + 214, rect.y, 19, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("numberOfPrefabs"), GUIContent.none);
				}
				EditorGUI.PropertyField(new Rect(rect.x + 235, rect.y, 50, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("Prefab1"), GUIContent.none);
				if (element.FindPropertyRelative("TypeW").enumValueIndex != 1){
					EditorGUI.PropertyField(new Rect(rect.x + 285, rect.y, 10, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("Answer1"), GUIContent.none);
				}
				if (element.FindPropertyRelative("numberOfPrefabs").intValue >= 2){
					EditorGUI.PropertyField(new Rect(rect.x + 305, rect.y, 50, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("Prefab2"), GUIContent.none);
					if (element.FindPropertyRelative("TypeW").enumValueIndex != 1){
						EditorGUI.PropertyField(new Rect(rect.x + 355, rect.y, 10, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("Answer2"), GUIContent.none);
					}
					if (element.FindPropertyRelative("numberOfPrefabs").intValue >= 3 ){
						EditorGUI.PropertyField(new Rect(rect.x + 375, rect.y, 50, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("Prefab3"), GUIContent.none);
						if (element.FindPropertyRelative("TypeW").enumValueIndex != 1){
							EditorGUI.PropertyField(new Rect(rect.x + 425, rect.y, 10, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("Answer3"), GUIContent.none);
						}
					}
				}

				//				if (element.FindPropertyRelative("numberOfPrefabs").intValue == 4 ){
				//					EditorGUI.PropertyField(new Rect(rect.x + 385, rect.y, 50, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("Prefab4"), GUIContent.none);
				//				}
				if (element.FindPropertyRelative("TypeW").enumValueIndex != 3){
					EditorGUI.PropertyField(new Rect(rect.x + 455, rect.y, 75, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("titel"), GUIContent.none);
					EditorGUI.PropertyField(new Rect(rect.x + 535, rect.y, 20, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("titelSize"), GUIContent.none);
				}
				EditorGUI.PropertyField(new Rect(rect.x + 570, rect.y, 75, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("text"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 650, rect.y, 20, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("textSize"), GUIContent.none);

			} else if (element.FindPropertyRelative("TypeW").enumValueIndex == 4){
				//SIMPLE TEXT
				EditorGUI.PropertyField(new Rect(rect.x + 100, rect.y, 75, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("text"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 180, rect.y, 20, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("textSize"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 205, rect.y, 75, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("titel"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 285, rect.y, 20, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("titelSize"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 310, rect.y, 30, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("oneLevelBack"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 340, rect.y, 30, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("isLastLevel"), GUIContent.none);

			} else if (element.FindPropertyRelative("TypeW").enumValueIndex == 5){
				//BEISPIELE
				EditorGUI.PropertyField(new Rect(rect.x + 97, rect.y, 50, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("MainPrefab"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 150, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("titel"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 255, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("text"), GUIContent.none);

			} else if (element.FindPropertyRelative("TypeW").enumValueIndex == 6){
				//VIDEO
				EditorGUI.PropertyField(new Rect(rect.x + 100, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("titel"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 205, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("text"), GUIContent.none);
				EditorGUI.PropertyField(new Rect(rect.x + 310, rect.y, 100, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("buttonText"), GUIContent.none);
			}

		};
		list.drawHeaderCallback = (Rect rect) => {
			EditorGUI.LabelField(rect, "");
		};
		list.onSelectCallback = (ReorderableList l) => {
			var prefab = l.serializedProperty.GetArrayElementAtIndex(l.index).FindPropertyRelative("MainPrefab").objectReferenceValue as GameObject;
			if (prefab) EditorGUIUtility.PingObject(prefab.gameObject);
		};
		list.onCanRemoveCallback = (ReorderableList l) => {
			return l.count > 1;
		};
		list.onRemoveCallback = (ReorderableList l) => {
			if (EditorUtility.DisplayDialog("Warning!", "Sicher, dass du diese Zeile löschen willst?", "Ja", "Nein"))
			{
				ReorderableList.defaultBehaviours.DoRemoveButton(l);
			}
		};

		list.onAddCallback = (ReorderableList l) => {
			var index = l.serializedProperty.arraySize;
			l.serializedProperty.arraySize++;
			l.index = index;
			//					var element = l.serializedProperty.GetArrayElementAtIndex(index);
			//					element.FindPropertyRelative("TypeW").enumValueIndex = 0;
			//					//element.FindPropertyRelative("Time").intValue = 20;
			//					element.FindPropertyRelative("Prefab").objectReferenceValue = AssetDatabase.LoadAssetAtPath("Assets/Prefabs/Mobs/Cube.prefab", typeof(GameObject)) as GameObject;
		};
		//				list.onAddDropdownCallback = (Rect buttonRect, ReorderableList l) => {
		//					var menu = new GenericMenu();
		//					var guids = AssetDatabase.FindAssets("", new[]{"Assets/Prefabs/Mobs"});
		//					foreach (var guid in guids) {
		//		//				var path = AssetDatabase.GUIDToAssetPath(guid);
		//		//				menu.AddItem(new GUIContent("Mobs/" + Path.GetFileNameWithoutExtension(path)), false, clickHandler, new WaveCreationParams() {TypeW = MobWave.Scene.Mobs, Path = path});
		//					}
		//					guids = AssetDatabase.FindAssets("", new[]{"Assets/Prefabs/Bosses"});
		//					foreach (var guid in guids) {
		//		//				var path = AssetDatabase.GUIDToAssetPath(guid);
		//						//				menu.AddItem(new GUIContent("Bosses/" + Path.GetFileNameWithoutExtension(path)), false, clickHandler, new WaveCreationParams() {TypeW = MobWave.Scene.Boss, Path = path});
		//					}
		//					menu.ShowAsContext();
		//				};

		benutzerPW = new ReorderableList(serializedObject, serializedObject.FindProperty("benutzerPW"), true, true, true, true);
		benutzerPW.drawElementCallback = (Rect rect, int index, bool isActive, bool isFocused) => {
			var element = benutzerPW.serializedProperty.GetArrayElementAtIndex(index);
			rect.y += 2;

			EditorGUI.PropertyField(new Rect(rect.x, rect.y, 200, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("benutzer"), GUIContent.none);			
			EditorGUI.PropertyField(new Rect(rect.x + 201, rect.y, 200, EditorGUIUtility.singleLineHeight), element.FindPropertyRelative("passwort"), GUIContent.none);


		};
		benutzerPW.drawHeaderCallback = (Rect rect) => {
			EditorGUI.LabelField(rect, "Benutzer + Passwort");
		};
	}

	override public void OnInspectorGUI()
	{

		LoadLevel loadLevel = target as LoadLevel;

		GUIStyle myFoldoutStyle = new GUIStyle(EditorStyles.foldout);
		myFoldoutStyle.fontStyle = FontStyle.Bold;
		myFoldoutStyle.fontSize = 14;
		Color myStyleColor = Color.red;
		myFoldoutStyle.normal.textColor = myStyleColor;
		myFoldoutStyle.onNormal.textColor = myStyleColor;
		myFoldoutStyle.hover.textColor = myStyleColor;
		myFoldoutStyle.onHover.textColor = myStyleColor;
		myFoldoutStyle.focused.textColor = myStyleColor;
		myFoldoutStyle.onFocused.textColor = myStyleColor;
		myFoldoutStyle.active.textColor = myStyleColor;
		myFoldoutStyle.onActive.textColor = myStyleColor;

		GUIStyle myFoldoutStyle2 = new GUIStyle(EditorStyles.foldout);
		myFoldoutStyle2.fontStyle = FontStyle.Bold;
		myFoldoutStyle2.fontSize = 14;
		Color myStyleColor2 = Color.blue;
		myFoldoutStyle2.normal.textColor = myStyleColor2;
		myFoldoutStyle2.onNormal.textColor = myStyleColor2;
		myFoldoutStyle2.hover.textColor = myStyleColor2;
		myFoldoutStyle2.onHover.textColor = myStyleColor2;
		myFoldoutStyle2.focused.textColor = myStyleColor2;
		myFoldoutStyle2.onFocused.textColor = myStyleColor2;
		myFoldoutStyle2.active.textColor = myStyleColor2;
		myFoldoutStyle2.onActive.textColor = myStyleColor2;

		showManager = EditorGUILayout.Foldout(showManager, "Level Manager",myFoldoutStyle);
		//myScript.l = EditorGUILayout.PropertyField (myScript.l);

		loadLevel.level = EditorGUILayout.IntField("aktueller Index:", loadLevel.level);
		if (showManager) {
			serializedObject.Update();
			list.DoLayoutList();
			serializedObject.ApplyModifiedProperties();
		}

		showEinstellung = EditorGUILayout.Foldout(showEinstellung, "Einstellungen",myFoldoutStyle2);
		if (showEinstellung) {

			loadLevel.downloadBackendLink = EditorGUILayout.TextField("DOWNLOADBACKENDLINK", loadLevel.downloadBackendLink);
			loadLevel.uploadBackendLink = EditorGUILayout.TextField("UPLOADBACKENDLINK", loadLevel.uploadBackendLink);
			loadLevel.uploadMeasurementLink = EditorGUILayout.TextField("UPLOADMEASUREMENTLINK", loadLevel.uploadMeasurementLink);
			loadLevel.deleteBackendLink = EditorGUILayout.TextField("DELETEBACKENDDATABASE", loadLevel.deleteBackendLink);
			loadLevel.uploadFilesLink = EditorGUILayout.TextField("UPLOADFILESLINK", loadLevel.uploadFilesLink);
			LoadLevel myScript = (LoadLevel)target;

			if(GUILayout.Button("upload Backend to DataBase"))
			{
				if (EditorUtility.DisplayDialog ("Warning! Das hier löscht die ausgewählte Upload-Datenbank! Sicher, dass du fortfahren willst?", "", "Ja", "Nein")) {
					myScript.uploadDatabase();
				}
			}

			if(GUILayout.Button("upload Measurement to DataBase"))
			{
				myScript.uploadMeasurementDatabase();
			}

			loadLevel.version = EditorGUILayout.TextField("Version:", loadLevel.version);
			//EditorGUILayout.PropertyField(serializedObject.FindProperty("tan"), true);
			//EditorGUILayout.PropertyField(serializedObject.FindProperty("benutzerPW"), true);

			if(GUILayout.Button("generate TAN"))
			{
				myScript.generateTAN();
			}

			serializedObject.Update();
			benutzerPW.DoLayoutList();
			serializedObject.ApplyModifiedProperties();

			loadLevel.einstellungPW = EditorGUILayout.TextField("EinstellungPW:", loadLevel.einstellungPW);
			serializedObject.ApplyModifiedProperties();
			//myScript.tan = EditorGUILayout.PropertyField (myScript.tan,true);
			//DrawDefaultInspector();
		}
	}

	//	private void clickHandler(object target) {
	//		var data = (LevelManagerParams)target;
	//		var index = list.serializedProperty.arraySize;
	//		list.serializedProperty.arraySize++;
	//		list.index = index;
	//		var element = list.serializedProperty.GetArrayElementAtIndex(index);
	//		element.FindPropertyRelative("TypeW").enumValueIndex = (int)data.Type;
	//		//element.FindPropertyRelative("Prefab").objectReferenceValue = AssetDatabase.LoadAssetAtPath(data.Path, typeof(GameObject)) as GameObject;
	//		serializedObject.ApplyModifiedProperties();
	//	}

	private struct LevelManagerParams {
		public LevelManagerList.Scene Type;
		public string Path;
	}
}

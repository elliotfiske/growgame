using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TextScaler : MonoBehaviour {

	// Set font size
	void Start () {
		var text = GetComponent<Text> ();
		var new_size = (int) (text.fontSize * PixelPerfectCamera.scale);
		print ("new size: " + new_size);
		text.fontSize = (int) (text.fontSize * PixelPerfectCamera.scale);
	}

	void Awake () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

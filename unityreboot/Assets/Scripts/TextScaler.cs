using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TextScaler : MonoBehaviour {

	// Set font size
	private int baseFontSize;
	void Start () {
		var text = GetComponent<Text> ();
		var new_size = (int) (text.fontSize * PixelPerfectCamera.scale);
		print ("new size: " + new_size);
		text.fontSize = (int) (text.fontSize * PixelPerfectCamera.scale);

		baseFontSize = new_size;
	}

	public void Biggify() {
		GetComponent<Text> ().fontSize = (int)(baseFontSize * 1.3f);
	}

	public void Normalify() {
		GetComponent<Text> ().fontSize = (int) baseFontSize;
	}

	void Awake () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

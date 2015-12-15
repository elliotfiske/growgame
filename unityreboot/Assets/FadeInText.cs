using UnityEngine;
using System.Collections;

public class FadeInText : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GetComponent<CanvasRenderer> ().SetAlpha (0f);
	}
	
	// Update is called once per frame
	void Update () {
		GetComponent<CanvasRenderer> ().SetAlpha (
			GetComponent<CanvasRenderer> ().GetAlpha() + 0.005f);
	
	}
}

using UnityEngine;
using System.Collections;

public class BadTouch : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other) {
		print ("OH NO BLOOD CLOT SON");
	}
}

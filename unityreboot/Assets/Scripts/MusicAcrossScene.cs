using UnityEngine;
using System.Collections;

public class MusicAcrossScene : MonoBehaviour {

	public static MusicAcrossScene instance;

	// Use this for initialization
	void Start () {
		DontDestroyOnLoad (this);

		if (!instance) {
			instance = this;
		}
	}

	public void NewMusic() {
		instance = this;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

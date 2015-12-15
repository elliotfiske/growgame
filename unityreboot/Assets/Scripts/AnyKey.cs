using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class AnyKey : MonoBehaviour {

	// Use this for initialization
	void Start () {
		MusicAcrossScene.Stop ();
	}
	public string nextScene;
	// Update is called once per frame
	void Update () {
		if (Input.anyKey) {
			SceneManager.LoadScene (nextScene);
		}
	}
}

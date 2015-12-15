using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class KILLER : MonoBehaviour {

	public Transform player;
	// Use this for initialization
	void Start () {
		player = FindObjectOfType<CharController2D> ().transform;
	}

	bool ded = false;
	int frameDelay = 24;
	
	// Update is called once per frame
	void Update () {
		var dist = Mathf.Abs (player.position.y - transform.position.y);
	
		if (dist < 10f && !ded) {
			ded = true;
			GameObject.Find ("player_death").GetComponent<AudioSource> ().Play ();
		}

		if (ded) {
			Time.timeScale = 0;
			frameDelay--;
		}

		if (ded && frameDelay <= 0) {
			SceneManager.LoadScene ("GameOver");
		}
	}
}

using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Bell : MonoBehaviour {

	public Transform player;
	public Image fadePanel;
	private float fade = 0f;
	public float fadespeed = 10f;
	public bool dong = false;

	public bool murderbell = false;

	public string nextScene;

	// Use this for initialization
	void Start () {
		player = FindObjectOfType<CharController2D> ().transform;
		fadePanel = GameObject.Find ("FadePanel").GetComponent<Image> ();
	}
	
	// Update is called once per frame
	void Update () {

		if (dong) {
			if (murderbell) {
				if (fade > 0.3f) {
					GameObject.Find ("splorch").GetComponent<AudioSource> ().Play ();
					FindObjectOfType<BanditSplode> ().Asplode ();
					Destroy(FindObjectOfType<BanditSplode>().gameObject);
					murderbell = false;
				}
			}

			if (GetComponent<AudioSource> ().isPlaying) {
				fadePanel.color = new Color (0, 0, 0, fade);
				fade += fadespeed;
			} else {
				MusicAcrossScene.Stop ();
				SceneManager.LoadScene (nextScene);
			}
		}
		if (Input.GetKeyDown (KeyCode.Z)) {
			var dist = Vector3.Distance (player.position, transform.position);

			if (dist < 60f) {
				if (!dong) {
					GetComponent<AudioSource> ().Play ();
					dong = true;
				}
			}
		}
	}
}

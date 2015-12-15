using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BadTouch : MonoBehaviour {

	// Use this for initialization
	void Start () {
		shaker = FindObjectOfType<ScreenShake> ();
		player = FindObjectOfType<CharController2D> ();
		hintPanel = GameObject.Find ("HintPanel").GetComponent<Image> ();
		hintText = GameObject.Find ("HintText").GetComponent<Text> ();

		hintPanel.canvasRenderer.SetAlpha (0);
		hintText.canvasRenderer.SetAlpha (0);
	}

	public AudioSource spooky_sound;
	public static ScreenShake shaker;

	public static CharController2D player;
	public static Image hintPanel;
	public static Text hintText;

	float intensity = 0f;
	float max_intensity = 100f;

	bool yOU_IS_BAD = false;

	void Update () {
		if (player.GetComponent<BoxCollider2D> ().bounds.Intersects (GetComponent<BoxCollider2D> ().bounds)) {
			yOU_IS_BAD = true;
		}

		if (yOU_IS_BAD) {
			intensity += 4;
		} else {
			intensity -= 4;
		}

		intensity = Mathf.Clamp (intensity, 0, max_intensity);

		spooky_sound.volume = intensity / max_intensity;

		if (intensity > 0) {
			hintPanel.canvasRenderer.SetAlpha (intensity / max_intensity);
			hintText.canvasRenderer.SetAlpha (intensity / max_intensity);
		}
	}

	void LateUpdate() {
		shaker.intensity = Mathf.Max (shaker.intensity, intensity);
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Finish") {
			other.gameObject.GetComponent<Follow> ().shake = true;
		} else {
			yOU_IS_BAD = true;
		}
	}

	void OnTriggerExit2D(Collider2D other) {
		if (other.tag == "Finish") {
			other.gameObject.GetComponent<Follow> ().shake = false;
		} else {
			yOU_IS_BAD = false;
		}
	}
}

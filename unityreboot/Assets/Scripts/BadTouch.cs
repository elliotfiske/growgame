using UnityEngine;
using System.Collections;

public class BadTouch : MonoBehaviour {

	// Use this for initialization
	void Start () {
		shaker = FindObjectOfType<ScreenShake> ();
	}

	public AudioSource spooky_sound;
	public static ScreenShake shaker;

	float intensity = 0f;
	float max_intensity = 100f;

	bool yOU_IS_BAD = false;

	void Update () {
		if (yOU_IS_BAD) {
			intensity += 4;
		} else {
			intensity -= 4;
		}

		intensity = Mathf.Clamp (intensity, 0, max_intensity);

		spooky_sound.volume = intensity / max_intensity;
	}

	void LateUpdate() {
		shaker.intensity = Mathf.Max (shaker.intensity, intensity);
	}

	void OnTriggerEnter2D(Collider2D other) {
		print ("OH NO BLOOD CLOT SON");
		yOU_IS_BAD = true;
	}

	void OnTriggerExit2D(Collider2D other) {
		yOU_IS_BAD = false;
	}
}

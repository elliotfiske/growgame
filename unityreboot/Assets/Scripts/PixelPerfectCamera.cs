using UnityEngine;
using System.Collections;

public class PixelPerfectCamera : MonoBehaviour {

	public float YMAX = 1000f;

	public float pixelsToUnits = 1f;
	public static float scale = 30f;

	public Vector2 nativeResolution = new Vector2(400, 700);

	public Transform target;
	private Vector3 velocity = Vector3.zero;
	public float dampTime = 0.15f;

	public bool cutscene = false;

	void Awake() {
		var camera = GetComponent<Camera> ();

		scale = Screen.height / nativeResolution.y;
		pixelsToUnits *= scale;
		camera.orthographicSize = (Screen.height / 2.0f) / pixelsToUnits;
		print ("Camera size; " + camera.orthographicSize + " scale: " + scale);
	}

	void Update() {
		var huh = FindObjectsOfType<AudioSource> ();

		var camera = GetComponent<Camera> ();
		Vector3 point = camera.WorldToViewportPoint (target.position);
		Vector3 delta = target.position - camera.ViewportToWorldPoint(new Vector3(point.x, 0.5f, point.z));
		Vector3 destination = transform.position + delta + (cutscene ? new Vector3(0f, -200f, 0f) : Vector3.zero);
		transform.position = Vector3.SmoothDamp(transform.position, destination, ref velocity, dampTime);

		if (transform.position.y < 350f) {
			transform.position = new Vector3 (transform.position.x, 350f, transform.position.z);
		}

		if (transform.position.y > YMAX) {
			transform.position = new Vector3 (transform.position.x, YMAX, transform.position.z);
		}
	}
}

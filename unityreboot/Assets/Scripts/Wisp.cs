using UnityEngine;
using System.Collections;

public class Wisp : MonoBehaviour {


	private Vector3 defaultPos;
	private Color baseColor;

	public SpriteRenderer body;

	private float baseRandom;

	// Use this for initialization
	void Start () {
		defaultPos = body.transform.position;
		baseRandom = Random.Range (-100, 100);
	}

	public float updown_amp = 1f;
	public float updown_per = 1f;

	private float fade_amp = 1f;
	public float fade_per = 1f;

	// Update is called once per frame
	void Update () {
		var dy = Mathf.Cos (Time.realtimeSinceStartup * updown_per + baseRandom) * updown_amp;

		body.transform.position = defaultPos + new Vector3 (0, dy, 0);

		var fade = Mathf.Sin (Time.realtimeSinceStartup * fade_per + baseRandom) * fade_amp + 0.5f;
		var newColor = new Color(255, 255, 255, fade);
		GetComponent<SpriteRenderer> ().color = newColor;
		body.color = newColor;
	}
}

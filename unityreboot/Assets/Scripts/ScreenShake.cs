using UnityEngine;
using System.Collections;

public class ScreenShake : MonoBehaviour {

	public float intensity = 0f;
	public float damp = 5f;

	private Vector3 origPos;

	// Use this for initialization
	void Start () {
		origPos = transform.position;
	}

	// Update is called once per frame
	void Update () {
		var i = intensity / damp;
		transform.position = origPos + new Vector3 (Random.Range (-i, i), Random.Range (-i, i), Random.Range (-i, i));
		intensity = 0;
	}
}

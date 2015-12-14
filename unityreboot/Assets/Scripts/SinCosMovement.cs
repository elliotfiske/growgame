using UnityEngine;
using System.Collections;

public class SinCosMovement : MonoBehaviour {

	public float sinAmp = 1f;
	public float sinPer = 1f;

	public float d_sinAmp = 1f;
	public float d_sinPer = 1f;

	public float cosAmp = 1f;
	public float cosPer = 1f;

	private Vector3 defaultPos;

	// Use this for initialization
	void Start () {
		defaultPos = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		var dx = Mathf.Sin (Time.realtimeSinceStartup * sinPer) * sinAmp + Mathf.Sin(Time.realtimeSinceStartup * d_sinPer) * d_sinAmp;
		var dy = Mathf.Cos (Time.realtimeSinceStartup * cosPer) * cosAmp;

		transform.position = defaultPos + new Vector3 (dx, dy, 0);
	}
}

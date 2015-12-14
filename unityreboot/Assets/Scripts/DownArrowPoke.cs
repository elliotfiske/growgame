using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DownArrowPoke : MonoBehaviour {

	public Sprite arrow_high;
	public Sprite arrow_low;

	public float switch_timeout;

	private float next_switch;

	// Use this for initialization
	void Start () {
		next_switch = Time.realtimeSinceStartup + switch_timeout;
	}
	
	// Update is called once per frame
	void Update () {
		if (Time.realtimeSinceStartup > next_switch) {
			var img = GetComponent<Image> ();

			if (img.sprite == arrow_high) {
				img.sprite = arrow_low;
			} else {
				img.sprite = arrow_high;
			}

			next_switch = Time.realtimeSinceStartup + switch_timeout;
		}
	}
}

using UnityEngine;
using System.Collections;

public class Follow : MonoBehaviour {

	public GameObject target;
	public float speed = 1f;

	public bool shake = false;
	public Vector3 baseSpritePosn;

	// Use this for initialization
	void Start () {
		target = FindObjectOfType<CharController2D> ().gameObject;
	}
	
	// Update is called once per frame
	void Update () {
		GameObject.Find ("bandit-sprite").transform.position = transform.position;

		var diff = target.transform.position - transform.position;
		diff.Normalize ();

		if (shake) {
			GameObject.Find("bandit-sprite").transform.position += new Vector3 (Random.Range (-5f, 5f), Random.Range (-5f, 5f), 0f);

			transform.position = transform.position + diff * speed * 0.5f;
		} else {
			transform.position = transform.position + diff * speed;
		}
	}
}

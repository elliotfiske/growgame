using UnityEngine;
using System.Collections;

public class BanditSpriteAnimator : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	public float walking = 100;

	// Update is called once per frame
	void Update () {
		GetComponent<Animator> ().SetFloat ("walking", walking);
	}
}

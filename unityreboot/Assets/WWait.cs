using UnityEngine;
using System.Collections;

public class WWait : MonoBehaviour {

	// Use this for initialization
	void OnTriggerEnter2D (Collider2D other) {
		FindObjectOfType<Follow> ().speed = 0f;

		string[] kid = {
			"W... Wait..",
			"<color=red>Pay</color> was an awfully strong word...",
			"I meant.. y'know... pay.. attention?",
			"P-Please don't ring that <color=#898989>bell...</color>",
		};
		DialogManager.GlobalShowDialog(kid);

		Destroy (this.gameObject);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

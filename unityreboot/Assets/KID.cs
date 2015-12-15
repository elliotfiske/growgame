using UnityEngine;
using System.Collections;

public class KID : MonoBehaviour {

	// Use this for initialization
	void Start () {
		string[] kid = {
			"You little freak... I don't know what that was...",
			"But you're gonna <color=red>pay.</color>",
		};
		FindObjectOfType<Follow> ().speed = 0f;

		DialogManager.KIIID = true;

		DialogManager.GlobalShowDialog(kid);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

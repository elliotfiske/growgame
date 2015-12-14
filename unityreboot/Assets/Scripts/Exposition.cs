using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Exposition : MonoBehaviour {



	// Use this for initialization
	void Start () {
		string[] introStrings = {
			"Listen up, kid, it's time you learned how we give back to the forest.",
			"The forest doesn't need much, but it does need one thing - <color=red>attention</color>.",
		};

		DialogManager.GlobalShowDialog (introStrings);
	}
	
	// Update is called once per frame
	void Update () {
		if (Time.timeScale == 0) {
			return;
		}

		SceneManager.LoadScene ("GameScene1");
	}
}

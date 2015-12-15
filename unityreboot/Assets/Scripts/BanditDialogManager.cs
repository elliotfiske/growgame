using UnityEngine;
using System.Collections;

public class BanditDialogManager : MonoBehaviour {

	public float dialog1 = 0;
	public float dialog2 = 0;
	public float dialog3 = 0;
	public float dialog4 = 0;

	public static int dialog1_s = 0;
	public static int dialog2_s = 0;
	public static int dialog3_s = 0;
	public static int dialog4_s = 0;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (dialog1 > 1 && dialog1_s == 0) {
			dialog1_s = 1;

			string[] strings = {
				"Hey buddy, what's the rush? Me and my friends here, see, we noticed something.",
				"We noticed that YOU keep coming down here, every month...",
				"All by yourself, in this secluded area of the forest...",
				"With nobody around to hear you if, say...",
				"<color=red>We killed you and took all your stuff!</color>",
				"...",
				"Hey man, nothing personal! You know how tough it is to be a bandit right now?",
				"Aww, don't give me that look. <color=red>We'll be sure to make it quick.</color>",
			};

			DialogManager.GlobalShowDialog (strings);

			DialogManager.run_music = true;
			GetComponent<Animator> ().SetTrigger ("bandit2");
			GameObject.Find ("bandit-follower-1-mover").GetComponent<Animator> ().SetTrigger ("bandit2");
		}


		if (dialog2 > 1 && dialog2_s == 0) {
			dialog2_s = 1;

			string[] strings = {
				"What the...",
				"Something... grabbed me... it's pulling me d-",
			};

			DialogManager.killBandit2 = true;
			DialogManager.GlobalShowDialog (strings);
		}
	}
}

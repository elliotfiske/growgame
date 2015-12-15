using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Exposition : MonoBehaviour {

	public int level;

	// Use this for initialization
	void Start () {
		string[] introStrings1 = {
			"Listen closely, now.",
			"I know you kids can’t appreciate it, but we owe everything we have to the <color=#007433>forest.</color>",
			"It’s protected us for thousands of years.",
			"Deep in the forest, there’s an ancient <b><color=#898989>bell</color></b> that symbolizes our duty to the forest. We",
			"maintain balance and help the forest <color=#007433>grow.</color> In return, it gives us stability.",
			"It’s now your time to demonstrate our <color=#AE2200>respect</color> for the forest.",
			"Enter the forest.",
			"Ring the bell.",
			"But remember <color=#AE2200>THESE 3 THINGS.</color>",
			"...",
			"Listening?",
			"+\n<color=#E3BB35>1. STAY ON THE PATH</color>",
													      /*Invisible text-spacing*/
			"+<color=#007433>2. TREAD THE FLOWERS <color=#07033B># .</color>IN THIS ORDER:</color>",
			"+<color=red>\nRED</color>",
			"+<color=green>\n    GREEN</color>",
			"+<color=blue>\n          BLUE</color>",
									   /*Invisible text-spacing*/
			"+3. RING THE BELL <color=#07033B>asdf 3 .</color>WITH <color=#007433>[Z]</color>",

			"Got all that? Heh. You'll do fine, stop shaking. Your father could do it, and so can you.",
			"I'll see you by morning. <color=#005B28>May the forest be with you.</color>",
		};


		string[] introStrings2 = {
			"YOU NAIVE IDIOT",
			"DID YOU REALLY THINK YOU WERE THE ONLY ONE WITH THAT POWER?",
			"THE POWER TO MEME",
			"THE POWER TO <color=#AE2200>JOHN CENA</color>",
			"+<color=#AE2200>JOHN CENA</color>",
			"+<color=#FE2200>JOHN CENA</color>",
			"+<color=#FF2200>JOHN CENA</color>",
//			"maintain balance and help the forest <color=#007433>grow.</color> In return, it gives us stability.",
//			"It’s now your time to demonstrate our <color=#AE2200>respect</color> for the forest.",
//			"Enter the forest.",
//			"Ring the bell.",
//			"But remember <color=#AE2200>THESE 3 THINGS.</color>",
//			"...",
//			"Listening?",
//			"+\n<color=#E3BB35>1. STAY ON THE PATH</color>",
//			/*Invisible text-spacing*/
//			"+<color=#007433>2. TREAD THE FLOWERS <color=#07033B># .</color>IN THIS ORDER:</color>",
//			"+<color=red>\nRED</color>",
//			"+<color=green>\n    GREEN</color>",
//			"+<color=blue>\n          BLUE</color>",
//			/*Invisible text-spacing*/
//			"+3. RING THE BELL <color=#07033B>asdf 3 .</color><color=#007433>THREE TIMES</color>",
//
//			"Got all that? Heh. You'll do fine, stop shaking. Your father could do it, and so can you.",
//			"I'll see you by morning. <color=#005B28>May the forest be with you.</color>",
		};

		string[] introStrings3 = {
			"Hmm...",
			"Something seems... off... this time.  The forest is awfully quiet.",
			"Keep an eye out for anything strange.",
		};

		if (level == 1) {
			DialogManager.GlobalShowDialog (introStrings1);
		} else if (level == 2) {
			DialogManager.GlobalShowDialog (introStrings2);
		} else if (level == 3) {
			DialogManager.GlobalShowDialog (introStrings3);
		}

			
	}

	public string nextScene;
	
	// Update is called once per frame
	void Update () {
		if (Time.timeScale == 0) {
			return;
		}

		SceneManager.LoadScene (nextScene);
	}
}

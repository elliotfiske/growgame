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
			"You did great last month.",
			"Don't get too comfortable, though. The forest is <color=#898989>restless</color> tonight.",
			"Remember the <color=#007433>3 rules...</color> I'm sure I don't have to repeat them for you.",
			"Be careful tonight.",
		};

		string[] introStrings3 = {
			"Now I know last month was scary, but...",
			"The <color=#007433>forest</color> always has our best interest at heart.",
			"In fact...",
			"It's <color=#898989>better</color> that the forest be busy...",
			"Tonight it seems... still.",
			"Keep an eye out for anything... bad.",
		};

		string[] introStrings4 = {
			"Remember.",
			"+The forest protects.",
			"+The forest provides.",
			"And, well...",
			"We help it <color=#00E906>grow.</color> One way or the other.",
			"<color=#007433>Those bandits will make good</color> <color=brown>fertilizer.</color>",
			"...",
			"Go tell your father that dinner's ready.",
		};

		if (level == 1) {
			DialogManager.GlobalShowDialog (introStrings1);
		} else if (level == 2) {
			DialogManager.GlobalShowDialog (introStrings2);
		} else if (level == 3) {
			DialogManager.GlobalShowDialog (introStrings3);
		} else if (level == 4) {
			DialogManager.GlobalShowDialog (introStrings4);
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

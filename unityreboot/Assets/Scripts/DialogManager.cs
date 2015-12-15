using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DialogManager : MonoBehaviour {

	public static bool killBandit2 = false;
	public static bool run_music = false;

	public static bool showingDialog = false;
	public Text dialogText;
	private float baseFontSize;
	public Image downArrow;

	// Which string in 'strings' we're currently displaying
	private int dialogNdx = 0;
	public string[] strings;

	// Use this for initialization
	void Awake () {
		GetComponent<CanvasRenderer> ().SetAlpha (0);
		downArrow.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Z)) {
			dialogNdx++;

			if (dialogNdx >= strings.Length) {
				DismissDialog ();
			} else {
				var resultString = strings [dialogNdx];

				if (resultString [0] == '+') {
					dialogText.GetComponent<TextScaler> ().Biggify ();
					resultString = resultString.Substring (1);
				} else {
					dialogText.GetComponent<TextScaler> ().Normalify ();
				}

				dialogText.text = resultString;

				if (dialogNdx == strings.Length - 1) {
					downArrow.enabled = false;
				}
			}
		}
	}

	// Shows the specified dialog
	public void ShowDialog(string[] text) {
		Time.timeScale = 1f;

		showingDialog = true;
		GetComponent<CanvasRenderer> ().SetAlpha (1f);
		downArrow.enabled = true;

		dialogText.text = text [0];
		dialogNdx = 0;
		strings = text;

		Time.timeScale = 0;
	}

	// Helper that grabs the current dialog box
	public static void GlobalShowDialog(string[] text) {
		FindObjectOfType<DialogManager> ().ShowDialog (text);
	}

	// Hide this dialog box
	public void DismissDialog() {
		showingDialog = false;
		GetComponent<CanvasRenderer> ().SetAlpha (0);
		downArrow.enabled = false;

		dialogText.text = "";

		Time.timeScale = 1;

		CharController2D.cutsceneOFF ();

		if (killBandit2) {
			Destroy (GameObject.Find ("bandit-follower-1-mover"));
			print ("BLOOD EVERYWHERE AHAHAHA");
			GameObject.Find ("HintText").GetComponent<Text> ().canvasRenderer.SetAlpha (1f);
			killBandit2 = false;
		}

		if (run_music) {
			GameObject.Find ("music_tension").GetComponent<AudioSource> ().Stop ();
			GameObject.Find ("music_run").GetComponent<AudioSource> ().Play ();
			print ("RUN! URN!U! RU!R ");
			run_music = false;
		}
	}
}

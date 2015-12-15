using UnityEngine;
using System.Collections;

public class Feels : MonoBehaviour {

	// Use this for initialization
	void Start () {
		string[] s = { "You feel like...", "<color=#898989>Something is watching you.</color>" };
		DialogManager.GlobalShowDialog(s);

		BanditDialogManager.dialog1_s = 0;
		BanditDialogManager.dialog2_s = 0;
		BanditDialogManager.dialog3_s = 0;

		BanditDialogManager.dialog4_s = 0;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

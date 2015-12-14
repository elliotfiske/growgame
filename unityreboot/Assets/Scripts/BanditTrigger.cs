using UnityEngine;
using System.Collections;

public class BanditTrigger : MonoBehaviour {


	private Animator bandit_leader;
	private Animator bandit_2;
	private Animator bandit_3;

	public string my_trigger;

	// Use this for initialization
	void Start () {
		bandit_leader = GameObject.Find ("bandit-leader-mover").GetComponent<Animator> ();
//		bandit_2 = GameObject.Find ("bandit-2").GetComponent<Animator> ();
//		bandit_3 = GameObject.Find ("bandit-3").GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other) {
		CharController2D.cutsceneON ();
		bandit_leader.SetTrigger (my_trigger);
//		bandit_2.SetTrigger (my_trigger);
//		bandit_3.SetTrigger (my_trigger);

		Destroy (this.gameObject);
	}
}

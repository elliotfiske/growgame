using UnityEngine;
using System.Collections;

public class CharController2D : MonoBehaviour {
	
	public float move_speed = 60f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		var horiz = Input.GetAxisRaw ("Horizontal");
		var vert = Input.GetAxisRaw ("Vertical");

		GetComponent<Rigidbody2D> ().velocity = new Vector2 (horiz * move_speed, vert * move_speed);

		var direction_angle = Mathf.Atan2 (vert, horiz);

		var animator = GetComponent<Animator> ();
		transform.localScale = new Vector3 (1.5f, 1.5f, 1.5f);

		if (Mathf.Abs(horiz) <= 0.01 && Mathf.Abs(vert) <= 0.01) {
			animator.SetTrigger ("idle");
		}
		else if (direction_angle <= Mathf.PI / 4f && direction_angle >= -Mathf.PI / 4f) {
			animator.SetTrigger ("side");
		} else if (direction_angle >= Mathf.PI / 4f && direction_angle <= 3f * Mathf.PI / 4f) {
			animator.SetTrigger ("up");
		} else if (direction_angle <= -Mathf.PI / 4f && direction_angle >= -3f * Mathf.PI / 4f) {
			animator.SetTrigger ("down");
		} else {
			animator.SetTrigger ("side");
			transform.localScale = new Vector3 (-1.5f, 1.5f, 1.5f);
		}

		if (Input.GetKeyDown (KeyCode.Space)) {
			string[] strings = {
				"Hey buddy, whattaya lookin' at? I'm walkin' hereeeee!",
				"THIS IS THE SECOND GUY",
				"HEYYYY I'm still talkin' here"
			};

			DialogManager.GlobalShowDialog (strings);
		}
	}
}

using UnityEngine;
using System.Collections;

public class CharController2D : MonoBehaviour {
	
	public float move_speed = 100f;
	public bool cutscene = false;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		var horiz = Input.GetAxisRaw ("Horizontal");
		var vert = Input.GetAxisRaw ("Vertical");

		var animator = GetComponent<Animator> ();
		transform.localScale = new Vector3 (1.5f, 1.5f, 1.5f);

		if (cutscene) {
			animator.SetTrigger ("idle");
			GetComponent<Rigidbody2D> ().velocity = Vector2.zero;
			return;
		}

		GetComponent<Rigidbody2D> ().velocity = new Vector2 (horiz * move_speed, vert * move_speed);

		var direction_angle = Mathf.Atan2 (vert, horiz);


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
	}

	public static void cutsceneON() {
		var me = FindObjectOfType<CharController2D> ();
		var cam = FindObjectOfType<PixelPerfectCamera> ();

		if (me != null && cam != null) {
			me.cutscene = true;
			cam.cutscene = true;
		}
	}


	public static void cutsceneOFF() {
		var me = FindObjectOfType<CharController2D> ();
		var cam = FindObjectOfType<PixelPerfectCamera> ();

		if (me != null && cam != null) {
			me.cutscene = false;
			cam.cutscene = false;
		}
	}
}

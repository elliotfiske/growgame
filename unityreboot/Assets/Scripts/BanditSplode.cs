using UnityEngine;
using System.Collections;

public class BanditSplode : MonoBehaviour {



	public GameObject bloodParticles;

	// Use this for initialization
	void Start () {
	
	}

	public void Asplode() {
		Instantiate (bloodParticles, transform.position, Quaternion.identity);
	}
	
	// Update is called once per frame
	void Update () {
	}
}

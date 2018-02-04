using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Right : MonoBehaviour {

	public bool clicked;
	public Left left;
	public GameObject blackGameObj;
	public GameObject pintoGameObj;
	public UnityEngine.UI.Text scoreText;

	// Use this for initialization
	void Start () {
		clicked = false;
	}
	
	// Update is called once per frame
	void Update () {
		//scoreText.text = "Score: " + scoreValue;
	}

	public void Clicked () {
		SetClicked (true);
		blackGameObj.SetActive (true);
		pintoGameObj.SetActive (true);
	}
		
	public void SetClicked(bool tf) {
		clicked = tf;
		left.clicked = !tf;
	}

	public bool WasClicked() {
		return clicked;
	}

	public void Reset() {
		clicked = false;
	}
}

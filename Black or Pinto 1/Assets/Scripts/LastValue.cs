using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LastValue : MonoBehaviour {

	public UnityEngine.UI.Text lastValue;
	public Left left;
	int last;

	// Use this for initialization
	void Start () {
		last = 0;
	}
	
	// Update is called once per frame
	void Update () {
		lastValue.text = last.ToString ();
	}

	public void SetLast (int last){
		this.last = last;
	}

}

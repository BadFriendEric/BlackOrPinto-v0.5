using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TopValue : MonoBehaviour {

	public UnityEngine.UI.Text topValue;
	public Left left;
	int top;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		topValue.text = top.ToString ();
	}

	public int currentTop() {
		return top;
	}

	public void setTop(int top){
		this.top = top;
	}
}

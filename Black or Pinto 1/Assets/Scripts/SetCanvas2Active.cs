using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetCanvas2Active : MonoBehaviour {
	public GameObject ComingSoon; 
	// Use this for initialization
	void Start () 
	{
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void tellEmLater()
	{
		ComingSoon.SetActive (true);
	}
}

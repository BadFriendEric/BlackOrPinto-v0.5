using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mapButtonScript : MonoBehaviour {

	public void changeToMap(string scene) {
		Application.LoadLevel (scene);
	}
}

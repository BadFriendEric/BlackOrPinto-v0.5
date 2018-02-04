using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StreakValue : MonoBehaviour {

	public UnityEngine.UI.Text streakValue;
	public Left left;
	int streak;

	// Use this for initialization
	void Start () {
		streak = 0;
	}
	
	// Update is called once per frame
	void Update () {
		streak = left.GetScore ();
		streakValue.text = streak.ToString();
	}

	public int getStreak(){
		return streak;
	}


}

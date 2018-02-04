using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PercentValue : MonoBehaviour {
	
	public UnityEngine.UI.Text percentValue;
	public StreakValue streakValue;
	public Left left;
	private float percentOdds;
	// Use this for initialization
	void Start () {
		percentOdds = 0.0f;
	}
	
	// Update is called once per frame
	void Update () {
		setOdds ();
		percentValue.text = percentOdds.ToString ("n2") + "%";
	}

	public void setOdds(){
		int streak = streakValue.getStreak ();
		float odds = calculateOdds (streak);
		percentOdds = odds;
	}

	private float calculateOdds(int streak){
		float odds = 0;

		if (streak == 0) {
			odds = 0.0f;
		} else {
			odds = Mathf.Pow (0.5f, streak);
		}
		return odds;
	}
		
}

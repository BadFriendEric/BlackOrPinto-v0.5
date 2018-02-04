using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spmValue : MonoBehaviour {

	float counter;
	float initialTime;
	float currentTime;
	public float currentMoney;
	public float initialMoney;
	public float updateTime;
	public float sixtySeconds = 60;
	public float sixtySecondsCounter;
	float scorePerMinute;
	float newScorePerMinute;

	public UnityEngine.UI.Text spmText;

	public Left left;

	public MoneyValue moneyValue;

	public bool minimumUpdateTime;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		//print (moneyValue.getMoney());

		if (minimumUpdateTime) {
			updateTime = Time.time;
		}

		if (sixtySecondsCounter < updateTime) {
			sixtySecondsCounter += Time.time;
			//print ("counting up" + sixtySecondsCounter);
			//float testSPM = (moneyValue.getMoney() - )/();
			//print ();
		} else {
			
			currentTime = Time.time;
			currentMoney = moneyValue.getMoney ();

			newScorePerMinute = (currentMoney) / (currentTime);  //  $/m
			newScorePerMinute = newScorePerMinute * 60;  //  scorePerminute = scorePerMinute * 60s

			//print (currentTime);
			//print (newScorePerMinute + " = new spm");
			//print (currentMoney - initialMoney + " = delta money");
			//print (currentTime - initialTime + " = delta time");

			initialTime = Time.time;
			initialMoney = moneyValue.getMoney ();  //its getting this every .5 seconds, i need a better way to tell the difference...
			counter = 0;

		}
		/*
		if (newScorePerMinute > scorePerMinute) {
			scorePerMinute = newScorePerMinute;
		}

		if (counter < updateTime) {
			counter += Time.deltaTime;
		} else {

			initialMoney = moneyValue.getMoney ();
			initialTime = Time.deltaTime;
			counter = 0;
		}
		*/

		spmText.text = "$" + newScorePerMinute.ToString("n2") + "\n/min";

	}
}

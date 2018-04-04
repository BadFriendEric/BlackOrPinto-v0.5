using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Black : MonoBehaviour {

	private bool clicked;
	public GameObject blackGameObj;
	//public UnityEngine.UI.Button leftHandButton;
	//public UnityEngine.UI.Button rightHandButton;
	//public UnityEngine.UI.Text shuffleText;
	public Left left;
	public Right right;
	public Black black;
	public Pinto pinto;
	public UnityEngine.UI.Text scoreText;
	public UnityEngine.UI.Text winLoseText;
	public StreakValue streakValue;

	// Use this for initialization
	void Start () {
		clicked = false;
		blackGameObj.SetActive (false);
		winLoseText.enabled = false;
		//shuffleText.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		//scoreText.text = "Score: " + scoreValue;
	}

	public void Clicked () {
		int[] guess;
		int[] solution;
		int bonusMoney = 0;
		SetClicked (true);
		guess = SetAnswer ();
		solution = RollBeans (); 
		if (CheckAnswer (guess, solution)) {
			left.AddScore (1);
			winLoseText.text = "Correct!";
			winLoseText.enabled = true;
			//print (streakValue.getStreak ());
			bonusMoney = (int)Mathf.Pow(2, streakValue.getStreak ());
			left.addMoney (bonusMoney);
			ResetAll ();
		} else {
			bonusMoney = 1;
			left.addMoney (bonusMoney);
			//print (bonusMoney);
			left.SetLast ();
			left.SetScore (0);
			winLoseText.text = "Wrong..";
			winLoseText.enabled = true;
			ResetAll ();
		}
	}
		
	public void SetClicked(bool tf) {
		clicked = tf;
	}

	public bool WasClicked() {
		return clicked;
	}

	public void Reset() {
		blackGameObj.SetActive (false);
		clicked = false;
	}

	public void ResetAll() {
		black.Reset ();
		pinto.Reset ();
		left.Reset ();
		right.Reset ();

		//ShuffleBeans ();

		//print ("resetting all...");
	}
	/*
	private void ShuffleBeans (){
		float counter = 0;
		print ("SHUFFLING BEANS");

		leftHandButton.interactable = false;
		rightHandButton.interactable = false;
		shuffleText.enabled = true;

		float currentTime = Time.time;
		counter = Time.time;
		while(counter < currentTime + 3){
			counter = Time.time;
			print ("SHUFFLING BEANS");
		}
		leftHandButton.interactable = true;
		rightHandButton.interactable = true;
		shuffleText.enabled = false;

	}
*/
	public int[] RollBeans() {
		int[] solution = {0,0};

		int leftOrRight = Random.Range (1,3);
		int blackOrPinto = Random.Range (1,3);
		solution [0] = leftOrRight;
		solution [1] = blackOrPinto;
		print (leftOrRight);
		print (blackOrPinto);


		return solution;
	}

	public bool CheckAnswer(int[] guess, int[]solution) {
		if(guess[0] == solution[0]){
			if (guess [1] == solution [1]) {
				return true;
			} else {
				return false;
			}
		} else {
			if (guess [1] == solution [1]) {
				return false;
			} else {
				return true;
			}
		}
	}

	public int[] SetAnswer() {
		int[] guess = {0,0};
		if (left.WasClicked ()) {
			guess [0] = 1;
			if (black.WasClicked ()) {
				guess [1] = 1;
			} else if (pinto.WasClicked()) {
				guess [1] = 2;
			} else {
				print ("wtf setAnswer()...");
			}
		} else if (right.WasClicked ()) {
			guess [0] = 2;
			if (black.WasClicked ()) {
				guess [1] = 1;
			} else if (pinto.WasClicked()) {
				guess [1] = 2;
			} else {
				print ("wtf setAnswer()...");
			}
		} else {
			print ("wtf setAnswer()...");
		}
		return guess;
	}
}

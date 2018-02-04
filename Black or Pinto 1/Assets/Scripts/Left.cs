using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Left : MonoBehaviour {

	public bool clicked;
	public TopValue topValue;
	public MoneyValue moneyValue;
	public LastValue lastValue;
	public GameObject blackGameObj;
	public GameObject pintoGameObj;
	public Left left;
	public Right right;
	public Black black;
	public Pinto pinto;
	public UnityEngine.UI.Text scoreText;
	public int scoreValue = 0;

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

	public int GetScore() {
		return scoreValue;
	}

	public void SetScore(int value) {
		scoreValue = value;
	}

	public void AddScore(int add) {
		scoreValue = scoreValue + add;
		if (scoreValue > topValue.currentTop()) {
			topValue.setTop (scoreValue);
		}
	}

	public void addMoney(int money){
		moneyValue.addMoney (money);
	}
				
	public void SetClicked(bool tf) {
		clicked = tf;
		right.clicked = !tf;
	}

	public bool WasClicked() {
		return clicked;
	}

	public void Reset() {
		clicked = false;
	}

	public void SetLast() {
		lastValue.SetLast(scoreValue);
	}
}

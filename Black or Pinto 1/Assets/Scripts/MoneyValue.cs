using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyValue : MonoBehaviour {

	public UnityEngine.UI.Text moneyValue;
	public Left left;
	private float money;
	//private int score;

	// Use this for initialization
	void Start () {
		money = 0;
		//score = 0;
	}
	
	// Update is called once per frame
	void Update () {
		//score = left.GetScore ();
		moneyValue.text = "$" + money.ToString("n2");
	}

	public void setMoney(float money){
		this.money = money;
	}

	public void addMoney(float money){
		this.money = this.money + money;
	}

	public void subtractMoney(float money){
		this.money = this.money - money;
	}

	public float getMoney(){
		return money;
	}
}

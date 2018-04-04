using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
// This code is to show or hide a panel, in this case, it is for the coming soon panel. 

public class ComingSoonPanel : MonoBehaviour {
	int counter;

	//public GameObject Panel;

	public void hidePanel(GameObject Panel)
	{
		counter++;
		if (counter % 2 == 1) 
		{
			Panel.gameObject.SetActive (false);
		}
			else
			{
				Panel.gameObject.SetActive(true);
			}

		}
			
	}



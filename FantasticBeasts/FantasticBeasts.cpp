
#include "pch.h"
#include <iostream>
#include "Dragon.h"
#include "Welsh.h"
#include "Fireball.h"
#include "Horntail.h"
#include "FantasticBeasts.h"
#include "DragonLinkedList.h"
// ---------------------------------------------------------------------------
//    
//                   University of Wisconsin-Stout
//            Mathematics, Statistics & Computer Science
//                CS-244 Data Structures -- Fall 2018
//
// This software is student work for CSS-244 Data Structures and may not
// be copied except by the original author and instructor.
// Copyright 2018
//
// FantasticBeasts.cpp
//
// Runs the dragon game. 
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------

int main()
{
	DragonLinkedList list;
	list.addDragons;
	while (list.size() < 10 && list.size() > 0) {
		cout << "Input 'harvest', 'feed', 'seek', or 'give up'" << endl;
		string method;
		cin >> method;
		if (method == "harvest") {
			cout << "Choose which number dragon to help harvest:" << endl;
			list.printDragonList;
			string chosen;
			cin >> chosen;
			try {
				int chosenInt = stoi(chosen);
				if (chosenInt > list.size || chosenInt < 0) {
					cout << "Invalid choice, please enter valid number" << endl;
					string chosen;
					cin >> chosen;
				}
			}
			catch (invalid_argument) {
				cout << "Invalid choice, please enter valid number" << endl;
				string chosen;
				cin >> chosen;
			}
			Dragon* chosenDrag;
			chosenDrag->harvest;
			list.ageAll;
		}
		if (method == "feed") {
			list.feedAll;
			list.ageAll;
		}
		if (method == "seek") {
			cout << "Choose a dragon to go seeking:" << endl;
			list.printDragonList;
			string chosen;
			cin >> chosen;
			int chosenInt = stoi(chosen);
			Dragon* chosenDrag;
			chosenDrag = list.findDragon(chosenInt);
			chosenDrag->seek;
			list.ageAll;

		}
		if (method == "give up") {
			cout << "Choose a dragon to give up:" << endl;
			list.printDragonList;
			string chosen;
			cin >> chosen;
			int chosenInt = stoi(chosen);
			Dragon* chosenDrag;
			chosenDrag = list.findDragon(chosenInt);
			chosenDrag->giveUp;
			list.ageAll;

		}
		else {
			cout << "Unrecognized command, please type again:" << endl;
			cin >> method;
		}
	}
	if (list.size() <= 0) {
		cout << "You lose!" << endl;
	}

	if (list.size() >= 10) {
		cout<<"You win!"<< endl;
	}
	return 0;
}
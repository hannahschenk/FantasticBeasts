#include "pch.h"
#include "Dragon.h"


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
// Dragon.cpp
//
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------

//Prints the information the dragon has to the console
void Dragon::print() {

}

//Constructor for the Dragon class
Dragon::Dragon()
{

}

//Adds to the dragon's health a removes a dragonfruit from the silo
void Dragon::feed(Silo s) {

}

//Adds dragonfruit to the silo and removes health from the dragon the harvested the fruit
void Dragon::harvest(Dragon* d) {
	d->health -= rand() % 35 + 10;
	S_.addFruit;
	if (d->health <= 0) {
		dragonList.removeDragon(d);
	}
	dragonList.push_front(d);
}
	
//Sends a dragon to look for another dragon to recruit using their charisma
void Dragon::seek(Dragon* d) {
	int chance = rand() % 100;
	if (chance <= charisma) {
		dragonList.foundDragon;
		charisma += 10;
		if (charisma > 100) {
			charisma = 100;
		}
	}
	d->health -= 10;
	if (d->health <= 0) {
		dragonList.removeDragon(d);
	}
}


//Removes a dragon from the linked list
void Dragon::giveUp(Dragon* d) {
	dragonList.removeDragon(d);

}

//Removes 5 health from the dragon after a round
void Dragon::age() {
	health -= 5;
}


void Dragon::print() {
	cout << skinColor << endl;
	cout << nativeRange << endl;
	cout << health << endl;
}

//Destructor
Dragon::~Dragon()
{
}




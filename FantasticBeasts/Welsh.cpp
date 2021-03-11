#include "pch.h"
#include "Welsh.h"

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
// Welsh.cpp
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------


//Constructor for the Welsh class
Welsh::Welsh()
{
	charisma = rand() % 75 + 25;
	skinColor = "Green";
	nativeRange = "Wales";
	health = (rand() % 25) + 75;
}


//Adds health to the dragon and removes a dragonfruit from the silo
void Welsh::feed(Silo s) {
	s.removeFruit;
	S_ = s;

	if (s.dragonFruit_ = 0) {
		health += 0;
	}

	else if (health >= 100) {
		health = 100;
	}
	else {
		health += healthIncrement;
		healthIncrement = (healthIncrement % 50) + 5;
		if (healthIncrement >= 50) {
			healthIncrement = 5;
			if (health > 100) {
				health = 100;
			}
		}
	}
}


//Destructor
Welsh::~Welsh()
{
}

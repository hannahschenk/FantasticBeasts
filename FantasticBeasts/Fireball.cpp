#include "pch.h"
#include "Fireball.h"

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
// Fireball.cpp
//
// Calls the different classes' readData and print functions to display file information on the console.
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------

//Constructor for the Fireball class
Fireball::Fireball()
{
	charisma = rand() % 75 + 25;
	skinColor = "Scarlet";
	nativeRange = "China";
	health = (rand() % 100);
}

//Destructor
Fireball::~Fireball()
{
}


//Adds to the health of the fireball and removes a dragonfruit from the silo
void Fireball::feed(Silo s) {
	s.removeFruit;
	S_ = s;
	if (s.dragonFruit_ = 0) {
		health += 0;
	}
	else if (health < 25) { 
		health += 5; 
		if (health >= 100) {
			health = 100;
		}
	}
	else {
		health += (rand() % 15) + 10;
		if (health >= 100) {
			health = 100;
		}
	}

}


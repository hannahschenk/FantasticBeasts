#include "pch.h"
#include "Horntail.h"

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
// Horntail.cpp
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------

//Constructor for the Horntail class
Horntail::Horntail()
{
	charisma = rand() % 75 + 25;
	skinColor = "Black";
	nativeRange = "Hungary";
	health = (rand() % 50) + 50;
}


//Adds to the Horntail's health and removes a dragonfruit from the silo
void Horntail::feed(Silo s) {
	s.removeFruit;
	S_ = s;

	if (s.dragonFruit_ = 0) {
		health += 0;
	}
	else if(health < 10) 
	{ 
		health += 10; 
		if (health >= 100) {
			health = 100;
		}
	}
	else {
		health += (rand() % 20) + 10;
		if (health >= 100) {
			health = 100;
		}
	}
}

//Destructor
Horntail::~Horntail()
{
}

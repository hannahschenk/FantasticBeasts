#pragma once
#include <time.h>
#include <random>
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
// Represents a silo that contains dragonfruit to feed dragons.
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------

class Silo
{
public:
	int dragonFruit_;

	//Constructor for the silo class
	Silo() {
		dragonFruit_ = 0;
	};

	//Adds a random amount of dragonfruit from 0-10
	void addFruit() {
		dragonFruit_ += rand() % 10;
	};

	//Subtracts one dragonfruit
	void removeFruit() {
		dragonFruit_ -= 1;
	};

	//Destructor
	virtual ~Silo();
};


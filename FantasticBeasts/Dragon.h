#pragma once

#include <string>
#include <iostream>
#include<random>
#include<time.h>
#include "Silo.h"
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
// Contains all of the common attributes and behaviors of dragon types. 
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------
using namespace std;

class Dragon
{

protected:
	Silo S_;
	string skinColor;
	string nativeRange;
	int charisma;
	DragonLinkedList dragonList;
	int health;
public:
	void print();
	Dragon();
	void harvest(Dragon * d);
	void seek(Dragon* d);
	void giveUp(Dragon* d);
	void age();
	void feed(Silo s);
	virtual ~Dragon();
};
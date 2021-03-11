#pragma once

#include "dragon.h"
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
// Fireball.h
//
// Represents a Fireball dragon
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------
using namespace std;

class Fireball : public Dragon
{

public:
	Fireball();
	~Fireball();
	void feed(Silo s);

};


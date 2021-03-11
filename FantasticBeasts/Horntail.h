#pragma once
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
// Horntail.h
//
// Represents a Hungrarian Horntail dragon
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------
class Horntail : public Dragon
{
	
public:
	Horntail();
	~Horntail();
	void feed(Silo s);
};


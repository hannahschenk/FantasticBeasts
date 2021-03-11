#pragma once
#include <list>
#include "Dragon.h"
#include "Horntail.h"
#include "Welsh.h"
#include "Fireball.h"
#include "Silo.h"
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
// DragonLinkedList.h
//
// Contains methods to interact with a linked list containing Dragon poninters
//
// Instructor: Jocelyn Richardt
// Assignment: Fantastical Beasts of Harry Potter
// Student: Hannah Schenk
// Date: 10/16/18
//
// ---------------------------------------------------------------------------

class DragonLinkedList
{
protected:
	list<Dragon*>dragonList;
	list<Dragon*>::iterator currentItem;
	Silo s;

public:
	DragonLinkedList();
	~DragonLinkedList();

	//Moves a dragon pointer to the front of the linked list
	void push_front(Dragon* d) {
		removeDragon(d);
		push_front(d);
	}
	
	//Returns the size of the linked list
	int size() {
		return dragonList.size;
	}

	//Prints the linked list to the console
	void printDragonList() {
		int x = 1;
		for (Dragon* i = dragonList.begin; i != dragonList.end; i++) {
			cout << x + i->print << endl;
			x++;
		}

	}

	//Removes the parameter dragon pointer from the linked list
	void removeDragon(Dragon* d) {	
		currentItem = dragonList.begin;
		for (Dragon* i = dragonList.begin; i != dragonList.end; ++i) {
			if (*currentItem == d) {
				list<Dragon*>::iterator temp= currentItem;
				dragonList.erase(temp);
			}
			currentItem++;
		}
	}

	//Adds a dragon to the end of the linked list when a dragon is found using the seek method
	Dragon* foundDragon() {
		Dragon* a = getDragon();
		dragonList.push_back(a);
	}

	//Generates a random dragon pointer type
	Dragon* getDragon() {
		int i = rand() % 2;
		switch (i) {
		case 0: return new Horntail;
		case 1: return new Welsh;
		case 2: return new Fireball;

		}
	}

	//Adds the original two dragons to the linked list, used only at beginning of game
	void addDragons() {
		Dragon* a = getDragon();
		Dragon* b = getDragon();
		dragonList.push_back(a);
		dragonList.push_back(b);
	}

	//Finds a dragon in the linked list based on its position
	Dragon* findDragon(int x) {
		currentItem = dragonList.begin;
		int count = 0;
		for (Dragon* i = dragonList.begin; i != dragonList.end; ++i) {
			if (count = x-1) {
				return *currentItem;
			}
			count++;
		}
	}


	//Feeds as many dragons in the list as there are dragonfruit in the silo
	void feedAll() {
		list<Dragon*>::iterator currentItem = dragonList.begin;
		for (Dragon* i = dragonList.begin; i != dragonList.end; ++i) {
			i->feed;
			s.removeFruit;
			if (s.dragonFruit_ = 0) {
				i = dragonList.end;
			}
		}
	}

	//Calls the age method on every dragon in the linked list
	void ageAll() {
		list<Dragon*>::iterator currentItem = dragonList.begin;
		for (Dragon* i = dragonList.begin; i != dragonList.end; ++i) {
			i->age;
		}

	}


};



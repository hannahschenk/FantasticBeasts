#include "pch.h"
#include "DragonLinkedList.h"
#include "Dragon.h"
#include "Fireball.h"
#include "Horntail.h"
#include "Welsh.h"



DragonLinkedList::DragonLinkedList()
{
}


DragonLinkedList::~DragonLinkedList()
{
}


Dragon DragonLinkedList::getDragon() {
	int i = rand() % 2;
	switch (i) {
	case 0: return Horntail();
	case 1: return Welsh();
	case 2: return Fireball();
	}
		
}

void DragonLinkedList::addDragons() {
	Dragon d = getDragon();
}

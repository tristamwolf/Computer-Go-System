#include <iostream>
#include "Goban.h"
#ifndef GOBOT_H
#define GOBOT_H

class GoBot{
	GoBot();
	void DetermineNextMove(int&, int&);
	bool IsJoseki(Goban);
	bool IsFuseki(Goban);
	bool WeakGroupsExist(Goban);
	
}
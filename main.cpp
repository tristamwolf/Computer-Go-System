/*	Computer Go Project by Tristamwolf
 * Lead Programmer:  	John Corbin Waters
 * Known Bugs:			NONE
 * Project To-Do list:
 * 
 * 
 * Program Description:
 * This is a program which plays Computer Go against certain opponents online.  Once completed
 * This program will be able to consistently select good moves by using known patterns and by
 * selecting moves based on a series of calculations.
 * Features Currently Implemented:
 * Features to implement:
 * Score Estimations
 * Find the Line of the Moyo for:
 * 	-  Straight Lines
 * 	-  Diagonal lines
 * Improved Tsumego
 */
#include <iostream>
#include "Goban.h"
//#include all classes for game
using namespace std;
//bool AnotherGame();
//void PrintMainMenu();
//void SelectOpening();


int main(/*int argc, char **argv*/)
{
	
	int len, width, handi;
	cin >> len;
	cin >> width;
	cin >> handi;
	Goban NewGame(handi);;
	NewGame.PlaceAStone(len, width);
	NewGame.DisplayBoard();
	cin >> len;
	cin >> width;
	cin >> handi;
	NewGame.PlaceAStone(len, width);
	NewGame.DisplayBoard();
	cin >> len;
	cin >> width;
	cin >> handi;
	NewGame.PlaceAStone(len, width);
	NewGame.DisplayBoard();
	return 0;
}

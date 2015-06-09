#include <iostream>
#ifndef GOBAN_H
#define GOBAN_H
struct stone{
	char color;
	int numOfLiberties;
	bool operator = (char rhs){
		return (color = rhs);
	}
};

class Goban{
public:
	//creates a blank board with no handicap
	Goban();
	//copies a given board
	Goban(const Goban&);
	//creates a blank board, black has a handicap of a given number of stones
	//therefore black takes that many turns before white
	Goban(int);
	//places a stone on the board unless there is already a stone there
	bool PlaceAStone(int, int);
	//destructor
	~Goban();
	//displays the board
	void DisplayBoard();
	//determines the number of liberties for each stone, and assigns it to the stone's 'liberty' count
	void UpdateLiberties();
	//counts a single stone's liberties
	int CountLiberties(int, int);
	//removes any stones with 0 liberties
	void RemoveDeadStones();
	//removes all stones from the board, and resets the score
	void ClearTheBoard();
protected:
	stone liberties[19][19];
	int wScore;
	int bScore;
	int handicap;
	char Turn;
};
#endif
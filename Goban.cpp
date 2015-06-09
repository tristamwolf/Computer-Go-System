#include <iostream>
#include "Goban.h"
using namespace std;

Goban::Goban(){
	handicap = 0;
	ClearTheBoard();
	Turn = 'B';
}
Goban::Goban(int handi){
	handicap = handi;
	ClearTheBoard();
	Turn = 'B';
	if(handicap>0){
		handicap--;
	}
}
Goban::Goban(const Goban & rhs){
	for(int a = 0; a < 19; a++){
		for (int b = 0; b < 19; b++){
			liberties[a][b] = rhs.liberties[a][b];
		}
	}
	handicap = rhs.handicap;
	Turn = rhs.Turn;
}
bool Goban::PlaceAStone(int len, int width){
	bool TurnEnd = false;
	len--, width--;
	if(liberties[len][width].color!='B'	&&
	   liberties[len][width].color!='W'){
		   liberties[len][width] = Turn;
		   if (Turn == 'B' && handicap==0){
			   Turn = 'W';
		   }else if (handicap > 0){
			   handicap--;
		   }else{
			   Turn = 'W';
		   }
		   TurnEnd = true;
	   }
	return TurnEnd;
}
void Goban::ClearTheBoard(){
	for(int a = 0; a < 19; a++){
		for (int b = 0; b < 19; b++){
			liberties[a][b].color = '*';
		}
	}
	bScore = wScore = 0;
}
void Goban::DisplayBoard(){
		for(int a = 0; a < 19; a++){
		for (int b = 0; b < 19; b++){
			cout << liberties[a][b].color;
		}
		cout << endl;
	}
}
void Goban::UpdateLiberties(){
int c, d;								//extra searching variables
for(int a = 0; a < 19; a++){			//for each row
for (int b = 0; b < 19; b++){		//and each column
	if(liberties[a][b].color!='*'){	//when you find a stone
		if(liberties[a-1][b].color==liberties[a][b].color){//check stones to it's left and top for a completed search
			liberties[a][b].numOfLiberties = liberties[a-1][b].numOfLiberties;
			break;
		}else if(liberties[a][b-1].color==liberties[a][b].color){
			liberties[a][b].numOfLiberties = liberties[a][b-1].numOfLiberties;
			break;
		}else{
			int counter = 0;					//set a counter to 0
			c = a;
			d = b;								//set the searching intergers
			bool AllStonesCounted = false;	//and search each connected same color stone
			while (!AllStonesCounted){
				AllStonesCounted = true;
				counter += CountLiberties(c, d);
				
			}
		}
	}
}}}

int Goban::CountLiberties(int c, int d){
	int counter = 0;
	if(liberties[c-1][d].color== '*'){	//check each liberty for open space
	counter++;
	liberties[c-1][d].color= 'x';	//mark checked liberties
	}
if(liberties[c+1][d].color== '*'){
	counter++;
	liberties[c-1][d].color= 'x';
	}
if(liberties[c][d-1].color== '*'){
	counter++;
	liberties[c-1][d].color= 'x';
	}
if(liberties[c][d+1].color== '*'){
	counter++;
	liberties[c-1][d].color= 'x';
	}
	return counter;
}
void Goban::RemoveDeadStones(){
	
}
Goban::~Goban(){
}
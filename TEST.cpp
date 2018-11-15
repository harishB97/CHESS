/*
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int board[8][8];
map < int, pair <int,int> > location;

#include "MOVE.h"
#include "defineMove.h"


map <int,MOVE> move;

int main()
{
	defineAllMoves(move);
	
	int j;
	cout<<endl<<"WHITE MOVES"<<endl;
	for(j=1;j<225;j++)
	{
		cout<<"MOVE: "<<j<<"	";
		move[j].details();
	}
	cout<<endl<<"BLACK MOVES"<<endl;
	for(j=301;j<525;j++)
	{		
		cout<<"MOVE: "<<j<<"	";
		move[j].details();
	}
}
*/

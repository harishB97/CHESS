#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
using namespace std;


/*----------------------------------------------------------------------------------------------------------------------------------

IRRESPECTIVE OF THE SIDE(BLACK OR WHITE) HUMAN CHOOSES TO PLAY -
INTERNALLY THE COMPUTER IS ALWAYS REFERRED AS BLACK (IN BOOLEAN AS FALSE)
AND HUMAN IS ALWAYS REFERRED AS WHITE (IN BOOLEAN AS TRUE)

----------------------------------------------------------------------------------------------------------------------------------*/

/*
Pieces are represented by integers.
1 to 8 -- WHITE PAWNS
9,16 -- WHITE ROOK
10,15 -- WHITE KNIGHT
11,14 -- WHITE BISHOP
12 -- WHITE QUEEN
13 -- WHITE KING

21 TO 28 -- BLACK PAWNS
29,36 -- BLACK ROOK
30,35 -- BLACK KNIGHT
31,34 -- BLACK BISHOP
32 -- BLACK QUEEN
33 -- BLACK KING

0 -- EMPTY
*/


int board[8][8] = { {29,30,31,32,33,34,35,36}, 
		    {21,22,23,24,25,26,27,28}, 
		    {0,0,0,0,0,0,0,0}, 
		    {0,0,0,0,0,0,0,0}, 
		    {0,0,0,0,0,0,0,0}, 
		    {0,0,0,0,0,0,0,0}, 
		    {1,2,3,4,5,6,7,8}, 
		    {9,10,11,12,13,14,15,16} };


/* Location of all pieces are stored in this 'location' map.
   If any pieces are moved in the board, there location is parallelly updated in this map.
   It maps integer(piece) to a pair of integers(row and column)   
*/
map < int, pair<int,int> > location;

/* The value of each piece is stored in this map */ 
map <int,int> value;

// This specifies the depth upto which the search is done.
int moveLimit;

/*
numLetter and letterNum are for printing the board and for taking input from the user respectively.
*/
map <int,string> numLetter;
map <string,int> letterNum;

/*
nodes -> nodes searched during shallow search 
nodesAB -> nodes searched during full search
*/
long long int nodes=0,nodesAB=0;

int valueOfMoveMade,plyCount=0;

/* After shallow search, all possible moves are stored in this vector (Moves are represented by integers) */
vector <int> posMoves;

#include "MOVE.h"
/*
All moves that can be made are represented by integers.
These integers are mapped to an object of CLASS MOVE. 
These objects have two main information  
1.Piece to be moved and 
2.The position to which it should be moved relative to its current postion.
*/
map <int,MOVE> move;

#include "underAttack.h"
#include "checkmate.h"
#include "defineMove.h"
#include "shallowSearch.h"
#include "randomize.h"
#include "bestMove.h"
#include "setToZero.h"
#include "execute.h"
#include "display.h"


void human();
void computer();
void computer()
{
		int i,moveToMake;
		
		/* time noted before search for best move starts*/
		time_t t1 = time(0);	

		nodes=0;	// Nodes searched during shallow search 
		nodesAB=0;	// Nodes searched during full search with alpha beta pruning
		
		moveToMake = bestBlackMove();	//Looking for best move for the computer to make
		move[moveToMake].implement();
		
		
		cout<<endl<<"COMPUTER -- "<<endl;
		display();
		plyCount++;
		cout<<"Ply count: "<<plyCount<<endl;
		cout<<"Nodes reached: "<<nodes<<" ; "<<"Nodes reachedAB: "<<nodesAB<<endl;
		

		for(i=0;i<posMoves.size();i++)
		{
			cout<<posMoves[i]<<"-"<<"("<<move[posMoves[i]].value<<")"<<"  ";
		}
		cout<<"END"<<endl;
		
		
		cout<<"MOVELABEL: "<<moveToMake<<" ; MOVEVALUE: "<<valueOfMoveMade<<endl;
		cout<<"PIECE MOVED: "<<numLetter[move[moveToMake].piece]<<" ; TO LOCATION: "<<location[move[moveToMake].piece].first<<","<<location[move[moveToMake].piece].second<<endl;
		/* A rought estimate of the time taken by the computer to make the next move */
		cout<<"TIME TAKEN: "<<time(0)-t1<<" s"<<endl;		
		
		
		setToZero();		// The value of each move is set back to zero
		posMoves.clear();	
		if(checkmate(true))
		{
			cout<<endl<<"------------ COMPUTER WINS ------------ "<<endl;
			return;
		}
		
		human();
}

void human()
{
		string piece;
		pair <int,int> goTo;
		
		cout<<endl<<"YOUR TURN -- "<<endl;
		cout<< "PIECE TO MOVE :";
		cin>>piece;
		cout<<"MOVE TO ROW :";
		cin>>goTo.first;
		cout<<"MOVE TO COLUMN :";
		cin>>goTo.second;
				
		execute(letterNum[piece],goTo);
		display();
		plyCount++;
		cout<<"Ply count: "<<plyCount<<endl;
		
		if(checkmate(false))
		{
			cout<<endl<<" ------------ YOU WIN ------------ "<<endl;
			return;
		}
		
		computer();
}



int main()
{
	bool side;
	cout<<"PLAY AS BLACK(0) OR WHITE(1)? : ";
	cin>>side;
	location[29].first = 0;
	location[29].second = 0;

	location[30].first = 0;
	location[30].second = 1;

	location[31].first = 0;
	location[31].second = 2;
	
	if(side == true)
	{
	location[32].first = 0;
	location[32].second = 3;

	location[33].first = 0;
	location[33].second = 4;
	}
	
	else if(side == false)
	{
	location[32].first = 0;
	location[32].second = 4;

	location[33].first = 0;
	location[33].second = 3;
		
	board[0][4] = 32;
	board[0][3] = 33;
	}

	location[34].first = 0;
	location[34].second = 5;

	location[35].first = 0;
	location[35].second = 6;

	location[36].first = 0;
	location[36].second = 7;

	location[21].first = 1;
	location[21].second = 0;

	location[22].first = 1;
	location[22].second = 1;

	location[23].first = 1;
	location[23].second = 2;

	location[24].first = 1;
	location[24].second = 3;

	location[25].first = 1;
	location[25].second = 4;

	location[26].first = 1;
	location[26].second = 5;

	location[27].first = 1;
	location[27].second = 6;

	location[28].first = 1;
	location[28].second = 7;

	location[1].first = 6;
	location[1].second = 0;

	location[2].first = 6;
	location[2].second = 1;

	location[3].first = 6;
	location[3].second = 2;

	location[4].first = 6;
	location[4].second = 3;

	location[5].first = 6;
	location[5].second = 4;

	location[6].first = 6;
	location[6].second = 5;

	location[7].first = 6;
	location[7].second = 6;

	location[8].first = 6;
	location[8].second = 7;

	location[9].first = 7;
	location[9].second = 0;

	location[10].first = 7;
	location[10].second = 1;

	location[11].first = 7;
	location[11].second = 2;

	if(side == true)
	{
	location[12].first = 7;
	location[12].second = 3;

	location[13].first = 7;
	location[13].second = 4;
	}
	
	else if(side == false)
	{
	location[12].first = 7;
	location[12].second = 4;

	location[13].first = 7;
	location[13].second = 3;
		
	board[7][4] = 12;
	board[7][3] = 13;
	}

	location[14].first = 7;
	location[14].second = 5;

	location[15].first = 7;
	location[15].second = 6;

	location[16].first = 7;
	location[16].second = 7;
	
	value[1] = 1;		value[21] = 1;
	value[2] = 1;		value[22] = 1;
	value[3] = 1;		value[23] = 1;
	value[4] = 1;		value[24] = 1;
	value[5] = 1;		value[25] = 1;
	value[6] = 1;		value[26] = 1;
	value[7] = 1;		value[27] = 1;
	value[8] = 1;		value[28] = 1;
	
	value[9] = 5;		value[29] = 6;
	value[10] = 3;		value[30] = 4;		
	value[11] = 4;		value[31] = 5;
	value[12] = 12;		value[32] = 13;
	value[14] = 4;		value[34] = 5;
	value[15] = 3;		value[35] = 4;
	value[16] = 5;		value[36] = 6;
	value[13] = 1000;	value[33] = 1001;
	
	
	numLetter[0] = "oo";
	numLetter[1] = "p1";			
	numLetter[2] = "p2";			
	numLetter[3] = "p3";			
	numLetter[4] = "p4";			
	numLetter[5] = "p5";		
	numLetter[6] = "p6";			
	numLetter[7] = "p7";			
	numLetter[8] = "p8";			
	numLetter[21] = "P1";			
	numLetter[22] = "P2";			
	numLetter[23] = "P3";			
	numLetter[24] = "P4";			
	numLetter[25] = "P5";			
	numLetter[26] = "P6";			
	numLetter[27] = "P7";			
	numLetter[28] = "P8";			
	
	numLetter[9] = "r1";
	numLetter[10] = "k1";
	numLetter[11] = "b1";
	numLetter[12] = "qq";
	numLetter[13] = "mm";
	numLetter[14] = "b2";
	numLetter[15] = "k2";
	numLetter[16] = "r2";
	
	numLetter[29] = "R1";
	numLetter[30] = "K1";
	numLetter[31] = "B1";
	numLetter[32] = "QQ";
	numLetter[33] = "MM";
	numLetter[34] = "B2";
	numLetter[35] = "K2";
	numLetter[36] = "R2";
	
	letterNum["p1"] = 1;
	letterNum["p2"] = 2;
	letterNum["p3"] = 3;
	letterNum["p4"] = 4;
	letterNum["p5"] = 5;
	letterNum["p6"] = 6;
	letterNum["p7"] = 7;
	letterNum["p8"] = 8;
	letterNum["P1"] = 21;
	letterNum["P2"] = 22;
	letterNum["P3"] = 23;
	letterNum["P4"] = 24;
	letterNum["P5"] = 25;
	letterNum["P6"] = 26;
	letterNum["P7"] = 27;
	letterNum["P8"] = 28;
	
	letterNum["r1"] = 9;
	letterNum["k1"] = 10;
	letterNum["b1"] = 11;
	letterNum["qq"] = 12;
	letterNum["mm"] = 13;
	letterNum["b2"] = 14;
	letterNum["k2"] = 15;
	letterNum["r2"] = 16;
	
	letterNum["R1"] = 29;
	letterNum["K1"] = 30;
	letterNum["B1"] = 31;
	letterNum["QQ"] = 32;
	letterNum["MM"] = 33;
	letterNum["B2"] = 34;
	letterNum["K2"] = 35;
	letterNum["R2"] = 36;
	
	
	// The depth upto which the full search is done.
	moveLimit = 5;
	
	/*
	All 224 moves for each side are defined in this function.
	White moves are from 1 to 224 and Black moves are from 301 to 524.
	This does not include special moves like en passant, castling, and pawn promotion (They are yet to be done).
	*/
	defineAllMoves();
	
	srand(time(0));		
	/*
	Seeding the  rand() function. (This function generates a pseudo-random number).
	If after shallow search, several possible next moves are found with equal move value, 
	the order of these moves are changed randomly , before going for a full search involving alpha beta pruning. 	
	*/
	
	cout<<endl;
	display();


	if(side == true) // if human is playing white - call human() to make the first move
	{	
		human();
	}
	else if(side == false)	// if human is playing black - call computer() to make the first move
	{
		computer();
	}

	
	return 0;
	
}


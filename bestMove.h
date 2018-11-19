#include "evaluationAB.h"
#include "whiteMovesAB.h"
#include "blackMovesAB.h"


int bestBlackMove()
{
	
	shallowSearch();
	int moveToMake;
	int SIZE = posMoves.size();
	int i,j,start=0,end=0;
	int temp;
	
	
	
	//sorting the possibleMoves in descending order
	for(i=0;i<SIZE-1;i++)
	{
		for(j=0;j<SIZE-i-1;j++)
		{
			if(move[posMoves[j]].value < move[posMoves[j+1]].value)
			{
				temp = posMoves[j];
				posMoves[j] = posMoves[j+1];
				posMoves[j+1] = temp;
			}
		}
	}
	
	//randomizing the order of moves that have equal move value
	for(i=0;i<SIZE-1;i++)
	{
		if((move[posMoves[i]].value != move[posMoves[i+1]].value))
		{
			end = i;
			randomize(posMoves,start,end);
			start = end+1;
			end = end+1;
		}
	}
	end = i;
	randomize(posMoves,start,end);
	
	for(i=0;i<SIZE;i++)
	{
		cout<<posMoves[i]<<"-"<<"("<<move[posMoves[i]].value<<")"<<"  ";
	}
	cout<<" END"<<endl;
	
	int finalResult = -1000,result;
	for(i=0;i<SIZE;i++)
	{
		move[posMoves[i]].value =  evaluationAB(posMoves[i],false,1,finalResult);
		if (move[posMoves[i]].value > finalResult)
		{
			finalResult = move[posMoves[i]].value;
			moveToMake = posMoves[i];
		}
	}
	
	valueOfMoveMade = finalResult;
	
	return moveToMake;
	
}

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
	for(i=0;i<SIZE;i++)
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
	
	int finalResult = -1000,result;
	for(i=0;i<SIZE;i++)
	{
		result =  evaluationAB(posMoves[i],false,1,finalResult);
		if (result > finalResult)
		{
			finalResult = result;
			moveToMake = posMoves[i];
		}
	}
	
	move[moveToMake].value = finalResult;
	
	return moveToMake;
	
}

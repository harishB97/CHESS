
int whiteMovesAB(int moveCount,int bestSoFar);
int blackMovesAB(int moveCount,int bestSoFar);
int evaluationAB(int moveLabel,bool side,int moveCount,int bestSoFar)
{
	
	int effect=0,pieceCaptured = 0,a;
	
	//------------------------------------------------------------------IMPLEMENTING THE MOVE--------------------------------------------------------------------//
	pieceCaptured = move[moveLabel].implement();
	
	//-----------------------------------------------------------------EVALUATING THE MOVE-----------------------------------------------------------------------//
	if(side == false) // side is black
	{
		if(checkmate(true)) //checking if the move made by black side puts the white king in checkmate
		{
			move[moveLabel].revert(pieceCaptured);
			return 1000; 			// value for checkmate
		}
		
		else
		{
			//calculating the effect of the move made
			if(pieceCaptured != 0)
			{
				effect = value[pieceCaptured];
			}
			
			if (moveCount < moveLimit)
			{
				a = whiteMovesAB(moveCount,bestSoFar);
				//----------------------------------REVERTING THE CHANGES MADE IN THE BOARD------------------------------------------------------------------//
				move[moveLabel].revert(pieceCaptured);
				return (a+effect);
			}
			else
			{
				move[moveLabel].revert(pieceCaptured);
				return effect;
			}
			
		}
		
	}
	
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//
	else if(side == true) // side is white
	{
		if(checkmate(false)) //checking if the move made by white side puts the black king in checkmate
		{
			move[moveLabel].revert(pieceCaptured);
			return (-1000); 			// value for checkmate
		}
		
		else
		{
			//calculating the effect of the move made
			if(pieceCaptured != 0)
			{
				effect = value[pieceCaptured];
			}
			
			if (moveCount < moveLimit)
			{
				a = blackMovesAB(moveCount,bestSoFar);
				//----------------------------------REVERTING THE CHANGES MADE IN THE BOARD------------------------------------------------------------------//
				move[moveLabel].revert(pieceCaptured);
				return (a-effect);
			}
			else
			{
				move[moveLabel].revert(pieceCaptured);
				return (-effect);
			}
			
		}
		
	}
	
}

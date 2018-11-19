
int whiteMovesAB(int moveCount,int bestSoFar);
int blackMovesAB(int moveCount,int bestSoFar);
int evaluationAB(int moveLabel,bool side,int moveCount,int bestSoFar)
{
	
	int effect=0,capture = 0,a;
	
	int piece = move[moveLabel].piece;
	//------------------------------------------------------------------IMPLEMENTING THE MOVE--------------------------------------------------------------------//
	//capture = move.implement();
			capture = board[location[piece].first+move[moveLabel].goTo.first][location[piece].second+move[moveLabel].goTo.second];
			if(capture != 0)
			{
				location[capture].first = -1;
				location[capture].second = -1;
			}
			
			board[location[piece].first][location[piece].second] = 0;
			board[location[piece].first+move[moveLabel].goTo.first][location[piece].second+move[moveLabel].goTo.second] = piece;
			location[piece].first += move[moveLabel].goTo.first;
			location[piece].second += move[moveLabel].goTo.second;
	
	//-----------------------------------------------------------------EVALUATING THE MOVE-----------------------------------------------------------------------//
	if(side == false) // side is black
	{
		if(checkmate(true)) //checking if the move made by black side puts the white king in checkmate
		{
			board[location[piece].first][location[piece].second] = capture;
			if(capture != 0)
			{
				location[capture] = location[piece];
			}
			board[location[piece].first-move[moveLabel].goTo.first][location[piece].second-move[moveLabel].goTo.second] = piece;
			location[piece].first -= move[moveLabel].goTo.first;
			location[piece].second -= move[moveLabel].goTo.second;
			return 1000; 			// value for checkmate
		}
		
		else
		{
			//calculating the effect of the move made
			if(capture != 0)
			{
				effect = value[capture];
			}
			
			if (moveCount < moveLimit)
			{
				a = whiteMovesAB(moveCount,bestSoFar);
				//----------------------------------REVERTING THE CHANGES MADE IN THE BOARD------------------------------------------------------------------//
				board[location[piece].first][location[piece].second] = capture;
				if(capture != 0)
				{
					location[capture] = location[piece];
				}
				board[location[piece].first-move[moveLabel].goTo.first][location[piece].second-move[moveLabel].goTo.second] = piece;
				location[piece].first -= move[moveLabel].goTo.first;
				location[piece].second -= move[moveLabel].goTo.second;
				return (a+effect);
			}
			else
			{
				board[location[piece].first][location[piece].second] = capture;
				if(capture != 0)
				{
					location[capture] = location[piece];
				}
				board[location[piece].first-move[moveLabel].goTo.first][location[piece].second-move[moveLabel].goTo.second] = piece;
				location[piece].first -= move[moveLabel].goTo.first;
				location[piece].second -= move[moveLabel].goTo.second;
				return effect;
			}
			
		}
		
	}
	
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//
	else if(side == true) // side is white
	{
		if(checkmate(false)) //checking if the move made by white side puts the black king in checkmate
		{
			board[location[piece].first][location[piece].second] = capture;
			if(capture != 0)
			{
				location[capture] = location[piece];
			}
			board[location[piece].first-move[moveLabel].goTo.first][location[piece].second-move[moveLabel].goTo.second] = piece;
			location[piece].first -= move[moveLabel].goTo.first;
			location[piece].second -= move[moveLabel].goTo.second;
			return (-1000); 			// value for checkmate
		}
		
		else
		{
			//calculating the effect of the move made
			if(capture != 0)
			{
				effect = value[capture];
			}
			
			if (moveCount < moveLimit)
			{
				a = blackMovesAB(moveCount,bestSoFar);
				//----------------------------------REVERTING THE CHANGES MADE IN THE BOARD------------------------------------------------------------------//
				board[location[piece].first][location[piece].second] = capture;
				if(capture != 0)
				{
					location[capture] = location[piece];
				}
				board[location[piece].first-move[moveLabel].goTo.first][location[piece].second-move[moveLabel].goTo.second] = piece;
				location[piece].first -= move[moveLabel].goTo.first;
				location[piece].second -= move[moveLabel].goTo.second;
				return (a-effect);
			}
			else
			{
				board[location[piece].first][location[piece].second] = capture;
				if(capture != 0)
				{
					location[capture] = location[piece];
				}
				board[location[piece].first-move[moveLabel].goTo.first][location[piece].second-move[moveLabel].goTo.second] = piece;
				location[piece].first -= move[moveLabel].goTo.first;
				location[piece].second -= move[moveLabel].goTo.second;
				return (-effect);
			}
			
		}
		
	}
	
}

int whiteMoves(int moveCount);
int blackMoves(int moveCount);
int evaluation(MOVE move,bool side,int moveCount)
{
	
	int effect=0,capture = 0,a;
	int piece = move.piece;
	//cout<<"check e "<<moveCount<<" "<<side<<" "<<endl;
	//------------------------------------------------------------------IMPLEMENTING THE MOVE--------------------------------------------------------------------//
	//cout << "		" <<moveCount<<endl;
	capture = move.implement();
		/*	if( (location[piece].first+move.goTo.first < 0 || location[piece].first+move.goTo.first > 7) || (location[piece].second+move.goTo.second < 0 || location[piece].second+move.goTo.second > 7) )
			{
				cout << "IMPLEMENTATION SEGMENTATION FALULT: " << location[piece].first+move.goTo.first << " " << location[piece].second+move.goTo.second << " " << piece <<" "<< location[piece].first <<" "<< location[piece].second <<" "<<capture<<  endl;
			}
			capture = board[location[piece].first+move.goTo.first][location[piece].second+move.goTo.second];
			if(capture != 0)
			{
				location[capture].first = -1;
				location[capture].second = -1;
			}
			
			board[location[piece].first][location[piece].second] = 0;
			board[location[piece].first+move.goTo.first][location[piece].second+move.goTo.second] = piece;
			location[piece].first += move.goTo.first;
			location[piece].second += move.goTo.second;*/
	
	//-----------------------------------------------------------------EVALUATING THE MOVE-----------------------------------------------------------------------//
	if(side == false) // side is black
	{
		/*if(checkmate(true)) //checking if the move made by black side puts the white king in checkmate
		{
			return 1000; 			// value for checkmate
		}*/
		
		//else
		{
			//calculating the effect of the move made
			if(capture != 0)
			{
				effect = value[capture];
			}
			
			if (moveCount < 3)
			{
				a = whiteMoves(moveCount);
				//----------------------------------REVERTING THE CHANGES MADE IN THE BOARD------------------------------------------------------------------//
				//cout << "		" <<moveCount<<endl;
				move.revert(capture);
				/*board[location[piece].first][location[piece].second] = capture;
				if(capture != 0)
				{
					location[capture] = location[piece];
				}
				if( (location[piece].first-move.goTo.first < 0 || location[piece].first-move.goTo.first > 7) || (location[piece].second-move.goTo.second < 0 || location[piece].second-move.goTo.second > 7) )
				{
					cout << "REVERTING SEGMENTATION FALULT: " << location[piece].first-move.goTo.first <<" "<< location[piece].second-move.goTo.second << " " << piece <<" "<< location[piece].first <<" "<< location[piece].second <<" "<<capture << endl;
				}
				board[location[piece].first-move.goTo.first][location[piece].second-move.goTo.second] = piece;
				location[piece].first -= move.goTo.first;
				location[piece].second -= move.goTo.second;*/
				return (a+effect);
			}
			else
			{
				move.revert(capture);
				return effect;
			}
			
		}
		
	}
	
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------//
	else if(side == true) // side is white
	{
		/*if(checkmate(false)) //checking if the move made by white side puts the black king in checkmate
		{
			return (-1000); 			// value for checkmate
		}*/
		
		//else
		{
			//calculating the effect of the move made
			if(capture != 0)
			{
				effect = value[capture];
			}
			
			if (moveCount < 3)
			{
				a = blackMoves(moveCount);
				//----------------------------------REVERTING THE CHANGES MADE IN THE BOARD------------------------------------------------------------------//
				//cout << "		" <<moveCount<<endl;
				move.revert(capture);
				/*board[location[piece].first][location[piece].second] = capture;
				if(capture != 0)
				{
					location[capture] = location[piece];
				}
				if( (location[piece].first-move.goTo.first < 0 || location[piece].first-move.goTo.first > 7) || (location[piece].second-move.goTo.second < 0 || location[piece].second-move.goTo.second > 7) )
				{
					cout << "REVERTING SEGMENTATION FALULT: " << location[piece].first-move.goTo.first <<" "<< location[piece].second-move.goTo.second << " " << piece <<" "<< location[piece].first <<" "<< location[piece].second <<" "<<capture << endl;
				}
				board[location[piece].first-move.goTo.first][location[piece].second-move.goTo.second] = piece;
				location[piece].first -= move.goTo.first;
				location[piece].second -= move.goTo.second;*/
				return (a-effect);
			}
			else
			{
				move.revert(capture);
				return (-effect);
			}
			
		}
		
	}
	
}


/*

--> This function is to check whether the move made by the human is valid.
--> Here side is set to true.

NOTE:
WITHIN THE CODE HUMAN IS ALWAYS REFERRED AS WHITE (IN BOOLEAN AS TRUE)
AND THE COMPUTER IS ALWAYS REFERRED AS BLACK (IN BOOLEAN AS FALSE)
IRRESPECTIVE OF THE SIDE THE HUMAN CHOOSES AS HIS/HER OWN.

RETURN VALUE
1  -> The move is valid
-1 -> The piece name entered is wrong
-2 -> The piece is already captured
-3 -> The "goTo" position is not within the board
-4 -> The entered piece can't make that move
-5 -> The entered move is putting king under attack

*/

int moveIsValid(int piece,pair <int,int> goTo)
{
	
	bool side = true;
	int match = 0;		

	
	if( piece == 0 )
	{
		/*The piece name entered is wrong*/
		return -1;
	}
	
	if( location[piece].first == -1 && location[piece].first == -1 )
	{
		/*The piece is already captured*/
		return -2;
	}
	
	if( (goTo.first<0 || goTo.first>7) || (goTo.second<0 || goTo.second>7) )
	{
		/*The "goTo" position is not within the board*/
		return -3;
	}
	
	
	
	
	//----------------------------------------------------PAWNS--------------------------------------------------------------------------//
	
	//pawn-1
	if( piece == 1)
	{
		
	if((location[1].first >= 0) && (location[1].second >= 0))		//if exists
	{
		//forward move 
		if((location[1].first != 0))
		{
			if((board[location[1].first-1][location[1].second] == 0))
			{
				if( move[1].goTo.first+location[piece].first == goTo.first && move[1].goTo.second+location[piece].second == goTo.second )
				{
					match = 1;
				}
			}
		}
		
		//forward move - two steps
		if(location[1].first == 6)
		{
			if( (board[location[1].first-1][location[1].second] == 0) && (board[location[1].first-2][location[1].second] == 0) )
			{
				if( move[2].goTo.first+location[piece].first == goTo.first && move[2].goTo.second+location[piece].second == goTo.second )
				{
					match = 2;
				}
			}
		}
		
		//diagonal capture - left
		if((location[1].first != 0) && (location[1].second != 0))
		{
			if((board[location[1].first-1][location[1].second-1] < 37) && (board[location[1].first-1][location[1].second-1] > 20))
			{
				if( move[3].goTo.first+location[piece].first == goTo.first && move[3].goTo.second+location[piece].second == goTo.second )
				{
					match = 3;
				}
			}
		}
		
		//diagonal capture - right
		if((location[1].first != 0) && (location[1].second != 7))
		{
			if((board[location[1].first-1][location[1].second+1] < 37) && (board[location[1].first-1][location[1].second+1] > 20))
			{
				if( move[4].goTo.first+location[piece].first == goTo.first && move[4].goTo.second+location[piece].second == goTo.second )
				{
					match = 4;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
		

	}
	
	}

	
	//pawn-2
	if( piece == 2 )
	{
	
	if((location[2].first >= 0) && (location[2].second >= 0))		//if exists
	{
		//forward move 
		if((location[2].first != 0))
		{
			if((board[location[2].first-1][location[2].second] == 0))
			{
				if( move[5].goTo.first+location[piece].first == goTo.first && move[5].goTo.second+location[piece].second == goTo.second )
				{
					match = 5;
				}
			}
		}
		
		//forward move - two steps
		if(location[2].first == 6)
		{
			if( (board[location[2].first-1][location[2].second] == 0) && (board[location[2].first-2][location[2].second] == 0) )
			{
				if( move[6].goTo.first+location[piece].first == goTo.first && move[6].goTo.second+location[piece].second == goTo.second )
				{
					match = 6;
				}
			}
		}
		
		//diagonal capture - left
		if((location[2].first != 0) && (location[2].second != 0))
		{
			if((board[location[2].first-1][location[2].second-1] < 37) && (board[location[2].first-1][location[2].second-1] > 20))
			{
				if( move[7].goTo.first+location[piece].first == goTo.first && move[7].goTo.second+location[piece].second == goTo.second )
				{
					match = 7;
				}
			}
		}
		
		//diagonal capture - right
		if((location[2].first != 0) && (location[2].second != 7))
		{
			if((board[location[2].first-1][location[2].second+1] < 37) && (board[location[2].first-1][location[2].second+1] > 20))
			{
				if( move[8].goTo.first+location[piece].first == goTo.first && move[8].goTo.second+location[piece].second == goTo.second )
				{
					match = 8;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;

	}	
	
	}


	//pawn-3
	if( piece == 3 )
	{
		
	if((location[3].first >= 0) && (location[3].second >= 0))		//if exists
	{
		//forward move 
		if((location[3].first != 0))
		{
			if((board[location[3].first-1][location[3].second] == 0))
			{
				if( move[9].goTo.first+location[piece].first == goTo.first && move[9].goTo.second+location[piece].second == goTo.second )
				{
					match = 9;
				}
			}
		}
		
		//forward move - two steps
		if(location[3].first == 6)
		{
			if( (board[location[3].first-1][location[3].second] == 0) && (board[location[3].first-2][location[3].second] == 0) )
			{
				if( move[10].goTo.first+location[piece].first == goTo.first && move[10].goTo.second+location[piece].second == goTo.second )
				{
					match = 10;
				}
			}
		}
		
		//diagonal capture - left
		if((location[3].first != 0) && (location[3].second != 0))
		{
			if((board[location[3].first-1][location[3].second-1] < 37) && (board[location[3].first-1][location[3].second-1] > 20))
			{
				if( move[11].goTo.first+location[piece].first == goTo.first && move[11].goTo.second+location[piece].second == goTo.second )
				{
					match = 11;
				}
			}
		}
		
		//diagonal capture - right
		if((location[3].first != 0) && (location[3].second != 7))
		{
			if((board[location[3].first-1][location[3].second+1] < 37) && (board[location[3].first-1][location[3].second+1] > 20))
			{
				if( move[12].goTo.first+location[piece].first == goTo.first && move[12].goTo.second+location[piece].second == goTo.second )
				{
					match = 12;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;

	}	
		
	}
	

	//pawn-4
	if( piece == 4 )
	{
		
	if((location[4].first >= 0) && (location[4].second >= 0))		//if exists
	{
		//forward move 
		if((location[4].first != 0))
		{
			if((board[location[4].first-1][location[4].second] == 0))
			{
				if( move[13].goTo.first+location[piece].first == goTo.first && move[13].goTo.second+location[piece].second == goTo.second )
				{
					match = 13;
				}
			}
		}
		
		//forward move - two steps
		if(location[4].first == 6)
		{
			if( (board[location[4].first-1][location[4].second] == 0) && (board[location[4].first-2][location[4].second] == 0) )
			{
				if( move[14].goTo.first+location[piece].first == goTo.first && move[14].goTo.second+location[piece].second == goTo.second )
				{
					match = 14;
				}
			}
		}
		
		//diagonal capture - left
		if((location[4].first != 0) && (location[4].second != 0))
		{
			if((board[location[4].first-1][location[4].second-1] < 37) && (board[location[4].first-1][location[4].second-1] > 20))
			{
				if( move[15].goTo.first+location[piece].first == goTo.first && move[15].goTo.second+location[piece].second == goTo.second )
				{
					match = 15;
				}
			}
		}
		
		//diagonal capture - right
		if((location[4].first != 0) && (location[4].second != 7))
		{
			if((board[location[4].first-1][location[4].second+1] < 37) && (board[location[4].first-1][location[4].second+1] > 20))
			{
				if( move[16].goTo.first+location[piece].first == goTo.first && move[16].goTo.second+location[piece].second == goTo.second )
				{
					match = 16;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;

	}	
		
	}


	//pawn-5
	if( piece == 5 )
	{
		
	if((location[5].first >= 0) && (location[5].second >= 0))		//if exists
	{
		//forward move 
		if((location[5].first != 0))
		{
			if((board[location[5].first-1][location[5].second] == 0))
			{
				if( move[17].goTo.first+location[piece].first == goTo.first && move[17].goTo.second+location[piece].second == goTo.second )
				{
					match = 17;
				}
			}
		}
		
		//forward move - two steps
		if(location[5].first == 6)
		{
			if( (board[location[5].first-1][location[5].second] == 0) && (board[location[5].first-2][location[5].second] == 0) )
			{
				if( move[18].goTo.first+location[piece].first == goTo.first && move[18].goTo.second+location[piece].second == goTo.second )
				{
					match = 18;
				}
			}
		}
		
		//diagonal capture - left
		if((location[5].first != 0) && (location[5].second != 0))
		{
			if((board[location[5].first-1][location[5].second-1] < 37) && (board[location[5].first-1][location[5].second-1] > 20))
			{
				if( move[19].goTo.first+location[piece].first == goTo.first && move[19].goTo.second+location[piece].second == goTo.second )
				{
					match = 19;
				}
			}
		}
		
		//diagonal capture - right
		if((location[5].first != 0) && (location[5].second != 7))
		{
			if((board[location[5].first-1][location[5].second+1] < 37) && (board[location[5].first-1][location[5].second+1] > 20))
			{
				if( move[20].goTo.first+location[piece].first == goTo.first && move[20].goTo.second+location[piece].second == goTo.second )
				{
					match = 20;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;

	}	
		
	}


	//pawn-6
	if( piece == 6 )
	{
		
	if((location[6].first >= 0) && (location[6].second >= 0))		//if exists
	{
		//forward move 
		if((location[6].first != 0))
		{
			if((board[location[6].first-1][location[6].second] == 0))
			{
				if( move[21].goTo.first+location[piece].first == goTo.first && move[21].goTo.second+location[piece].second == goTo.second )
				{
					match = 21;
				}
			}
		}
		
		//forward move - two steps
		if(location[6].first == 6)
		{
			if( (board[location[6].first-1][location[6].second] == 0) && (board[location[6].first-2][location[6].second] == 0) )
			{
				if( move[22].goTo.first+location[piece].first == goTo.first && move[22].goTo.second+location[piece].second == goTo.second )
				{
					match = 22;
				}
			}
		}
		
		//diagonal capture - left
		if((location[6].first != 0) && (location[6].second != 0))
		{
			if((board[location[6].first-1][location[6].second-1] < 37) && (board[location[6].first-1][location[6].second-1] > 20))
			{
				if( move[23].goTo.first+location[piece].first == goTo.first && move[23].goTo.second+location[piece].second == goTo.second )
				{
					match = 23;
				}
			}
		}
		
		//diagonal capture - right
		if((location[6].first != 0) && (location[6].second != 7))
		{
			if((board[location[6].first-1][location[6].second+1] < 37) && (board[location[6].first-1][location[6].second+1] > 20))
			{
				if( move[24].goTo.first+location[piece].first == goTo.first && move[24].goTo.second+location[piece].second == goTo.second )
				{
					match = 24;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;

	}	
		
	}


	//pawn-7
	if( piece == 7 )
	{
		
	if((location[7].first >= 0) && (location[7].second >= 0))		//if exists
	{
		//forward move 
		if((location[7].first != 0))
		{
			if((board[location[7].first-1][location[7].second] == 0))
			{
				if( move[25].goTo.first+location[piece].first == goTo.first && move[25].goTo.second+location[piece].second == goTo.second )
				{
					match = 25;
				}
			}
		}
		
		//forward move - two steps
		if(location[7].first == 6)
		{
			if( (board[location[7].first-1][location[7].second] == 0) && (board[location[7].first-2][location[7].second] == 0) )
			{
				if( move[26].goTo.first+location[piece].first == goTo.first && move[26].goTo.second+location[piece].second == goTo.second )
				{
					match = 26;
				}
			}
		}
		
		//diagonal capture - left
		if((location[7].first != 0) && (location[7].second != 0))
		{
			if((board[location[7].first-1][location[7].second-1] < 37) && (board[location[7].first-1][location[7].second-1] > 20))
			{
				if( move[27].goTo.first+location[piece].first == goTo.first && move[27].goTo.second+location[piece].second == goTo.second )
				{
					match = 27;
				}
			}
		}
		
		//diagonal capture - right
		if((location[7].first != 0) && (location[7].second != 7))
		{
			if((board[location[7].first-1][location[7].second+1] < 37) && (board[location[7].first-1][location[7].second+1] > 20))
			{
				if( move[28].goTo.first+location[piece].first == goTo.first && move[28].goTo.second+location[piece].second == goTo.second )
				{
					match = 28;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;

	}	
		
	}


	//pawn-8
	if( piece == 8 )
	{
		
	if((location[8].first >= 0) && (location[8].second >= 0))		//if exists
	{
		//forward move 
		if((location[8].first != 0))
		{
			if((board[location[8].first-1][location[8].second] == 0))
			{
				if( move[29].goTo.first+location[piece].first == goTo.first && move[29].goTo.second+location[piece].second == goTo.second )
				{
					match = 29;
				}
			}
		}
		
		//forward move - two steps
		if(location[8].first == 6)
		{
			if( (board[location[8].first-1][location[8].second] == 0) && (board[location[8].first-2][location[8].second] == 0) )
			{
				if( move[30].goTo.first+location[piece].first == goTo.first && move[30].goTo.second+location[piece].second == goTo.second )
				{
					match = 30;
				}
			}
		}
		
		//diagonal capture - left
		if((location[8].first != 0) && (location[8].second != 0))
		{
			if((board[location[8].first-1][location[8].second-1] < 37) && (board[location[8].first-1][location[8].second-1] > 20))
			{
				if( move[31].goTo.first+location[piece].first == goTo.first && move[31].goTo.second+location[piece].second == goTo.second )
				{
					match = 31;
				}
			}
		}
		
		//diagonal capture - right
		if((location[8].first != 0) && (location[8].second != 7))
		{
			if((board[location[8].first-1][location[8].second+1] < 37) && (board[location[8].first-1][location[8].second+1] > 20))
			{
				if( move[32].goTo.first+location[piece].first == goTo.first && move[32].goTo.second+location[piece].second == goTo.second )
				{
					match = 32;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;

	}	
		
	}

	
	//---------------------------------------------------------ROOK-9--------------------------------------------------------------------//
	
	if( piece == 9 )
	{
		
	if((location[9].first >= 0) && (location[9].second >= 0))		
	{
		
		int su=1;
		//forward moves
		while( (location[9].first-su >= 0) )
		{
			if( (board[location[9].first-su][location[9].second] > 0) && (board[location[9].first-su][location[9].second] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[9].first-su][location[9].second] > 20) && (board[location[9].first-su][location[9].second] < 37) ) //opposite kind
			{
				if( move[32+su].goTo.first+location[piece].first == goTo.first && move[32+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 32+su;
				}
				break;
			}
			else if(board[location[9].first-su][location[9].second] == 0) //empty
			{
				if( move[32+su].goTo.first+location[piece].first == goTo.first && move[32+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 32+su;
				}
			}
			su++;
		}
		
		su = 1;
		//backward moves
		while( (location[9].first+su <= 7) )
		{
			if( (board[location[9].first+su][location[9].second] > 0) && (board[location[9].first+su][location[9].second] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[9].first+su][location[9].second] > 20) && (board[location[9].first+su][location[9].second] < 37) ) //opposite kind
			{
				if( move[39+su].goTo.first+location[piece].first == goTo.first && move[39+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 39+su;
				}
				break;
			}
			else if(board[location[9].first+su][location[9].second] == 0) //empty
			{
				if( move[39+su].goTo.first+location[piece].first == goTo.first && move[39+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 39+su;
				}
			}
			su++;
		}
		
		su = 1;
		//left moves
		while( (location[9].second-su >= 0) )	
		{
			if( (board[location[9].first][location[9].second-su] > 0) && (board[location[9].first][location[9].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[9].first][location[9].second-su] > 20) && (board[location[9].first][location[9].second-su] < 37) ) //opposite kind
			{
				if( move[46+su].goTo.first+location[piece].first == goTo.first && move[46+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 46+su;
				}
				break;
			}
			else if(board[location[9].first][location[9].second-su] == 0) //empty
			{
				if( move[46+su].goTo.first+location[piece].first == goTo.first && move[46+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 46+su;
				}
			}
			su++;
		}
		
		
		su = 1;
		//right moves
		while( (location[9].second+su <= 7) )	
		{
			if( (board[location[9].first][location[9].second+su] > 0) && (board[location[9].first][location[9].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[9].first][location[9].second+su] > 20) && (board[location[9].first][location[9].second+su] < 37) ) //opposite kind
			{
				if( move[53+su].goTo.first+location[piece].first == goTo.first && move[53+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 53+su;
				}
				break;
			}
			else if(board[location[9].first][location[9].second+su] == 0) //empty
			{
				if( move[53+su].goTo.first+location[piece].first == goTo.first && move[53+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 53+su;
				}
			}
			su++;
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
		
	}
		
	}

	
	//---------------------------------------------------------ROOK-16--------------------------------------------------------------------//
	
	if( piece == 16 )
	{
		
	if((location[16].first >= 0) && (location[16].second >= 0))		
	{
		
		int su=1;
		//forward moves
		while( (location[16].first-su >= 0) )
		{
			if( (board[location[16].first-su][location[16].second] > 0) && (board[location[16].first-su][location[16].second] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[16].first-su][location[16].second] > 20) && (board[location[16].first-su][location[16].second] < 37) ) //opposite kind
			{
				if( move[60+su].goTo.first+location[piece].first == goTo.first && move[60+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 60+su;
				}
				break;
			}
			else if(board[location[16].first-su][location[16].second] == 0) //empty
			{
				if( move[60+su].goTo.first+location[piece].first == goTo.first && move[60+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 60+su;
				}
			}
			su++;
		}
		
		su = 1;
		//backward moves
		while( (location[16].first+su <= 7) )
		{
			if( (board[location[16].first+su][location[16].second] > 0) && (board[location[16].first+su][location[16].second] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[16].first+su][location[16].second] > 20) && (board[location[16].first+su][location[16].second] < 37) ) //opposite kind
			{
				if( move[67+su].goTo.first+location[piece].first == goTo.first && move[67+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 67+su;
				}
				break;
			}
			else if(board[location[16].first+su][location[16].second] == 0) //empty
			{
				if( move[67+su].goTo.first+location[piece].first == goTo.first && move[67+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 67+su;
				}
			}
			su++;
		}
		
		su = 1;
		//left moves
		while( (location[16].second-su >= 0) )	
		{
			if( (board[location[16].first][location[16].second-su] > 0) && (board[location[16].first][location[16].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[16].first][location[16].second-su] > 20) && (board[location[16].first][location[16].second-su] < 37) ) //opposite kind
			{
				if( move[74+su].goTo.first+location[piece].first == goTo.first && move[74+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 74+su;
				}
				break;
			}
			else if(board[location[16].first][location[16].second-su] == 0) //empty
			{
				if( move[74+su].goTo.first+location[piece].first == goTo.first && move[74+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 74+su;
				}
			}
			su++;
		}
		
		
		su = 1;
		//right moves
		while( (location[16].second+su <= 7) )	
		{
			if( (board[location[16].first][location[16].second+su] > 0) && (board[location[16].first][location[16].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[16].first][location[16].second+su] > 20) && (board[location[16].first][location[16].second+su] < 37) ) //opposite kind
			{
				if( move[81+su].goTo.first+location[piece].first == goTo.first && move[81+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 81+su;
				}
				break;
			}
			else if(board[location[16].first][location[16].second+su] == 0) //empty
			{
				if( move[81+su].goTo.first+location[piece].first == goTo.first && move[81+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 81+su;
				}
			}
			su++;
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
		
	}
		
	}
	
	
	//----------------------------------------------------------BISHOP-11----------------------------------------------------------------//
	
	if( piece == 11 )
	{
		
	if( (location[11].first >= 0) && (location[11].second >= 0) )
	{
		
		int su = 1;
		//forward-right move
		while( (location[11].first-su >= 0) && (location[11].second+su <= 7) )
		{
			if( (board[location[11].first-su][location[11].second+su] > 0) && (board[location[11].first-su][location[11].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[11].first-su][location[11].second+su] > 20) && (board[location[11].first-su][location[11].second+su] < 37) ) //opposite kind
			{
				if( move[88+su].goTo.first+location[piece].first == goTo.first && move[88+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 88+su;
				}
				break;
			}
			else if(board[location[11].first-su][location[11].second+su] == 0) //empty
			{
				if( move[88+su].goTo.first+location[piece].first == goTo.first && move[88+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 88+su;
				}
			}
			su++;
		}
		
		su = 1;
		//forward-left move
		while( (location[11].first-su >= 0) && (location[11].second-su >= 0) )
		{
			if( (board[location[11].first-su][location[11].second-su] > 0) && (board[location[11].first-su][location[11].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[11].first-su][location[11].second-su] > 20) && (board[location[11].first-su][location[11].second-su] < 37) ) //opposite kind
			{
				if( move[95+su].goTo.first+location[piece].first == goTo.first && move[95+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 95+su;
				}
				break;
			}
			else if(board[location[11].first-su][location[11].second-su] == 0) //empty
			{
				if( move[95+su].goTo.first+location[piece].first == goTo.first && move[95+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 95+su;
				}
			}
			su++;
		}
		
		su = 1;
		//backward-right move
		while( (location[11].first+su <= 7) && (location[11].second+su <= 7) )
		{
			if( (board[location[11].first+su][location[11].second+su] > 0) && (board[location[11].first+su][location[11].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[11].first+su][location[11].second+su] > 20) && (board[location[11].first+su][location[11].second+su] < 37) ) //opposite kind
			{
				if( move[102+su].goTo.first+location[piece].first == goTo.first && move[102+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 102+su;
				}
				break;
			}
			else if(board[location[11].first+su][location[11].second+su] == 0) //empty
			{
				if( move[102+su].goTo.first+location[piece].first == goTo.first && move[102+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 102+su;
				}
			}
			su++;
		}
		
		
		su = 1;
		//backward-left move
		while( (location[11].first+su <= 7) && (location[11].second-su >= 0) )
		{
			if( (board[location[11].first+su][location[11].second-su] > 0) && (board[location[11].first+su][location[11].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[11].first+su][location[11].second-su] > 20) && (board[location[11].first+su][location[11].second-su] < 37) ) //opposite kind
			{
				if( move[109+su].goTo.first+location[piece].first == goTo.first && move[109+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 109+su;
				}
				break;
			}
			else if(board[location[11].first+su][location[11].second-su] == 0) //empty
			{
				if( move[109+su].goTo.first+location[piece].first == goTo.first && move[109+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 109+su;
				}
			}
			su++;
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
		
	}
		
	}
	
	
	//----------------------------------------------------------BISHOP-14----------------------------------------------------------------//
	
	if( piece == 14 )
	{
		
	if( (location[14].first >= 0) && (location[14].second >= 0) )
	{
		
		int su = 1;
		//forward-right move
		while( (location[14].first-su >= 0) && (location[14].second+su <= 7) )
		{
			if( (board[location[14].first-su][location[14].second+su] > 0) && (board[location[14].first-su][location[14].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[14].first-su][location[14].second+su] > 20) && (board[location[14].first-su][location[14].second+su] < 37) ) //opposite kind
			{
				if( move[116+su].goTo.first+location[piece].first == goTo.first && move[116+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 116+su;
				}
				break;
			}
			else if(board[location[14].first-su][location[14].second+su] == 0) //empty
			{
				if( move[116+su].goTo.first+location[piece].first == goTo.first && move[116+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 116+su;
				}
			}
			su++;
		}
		
		su = 1;
		//forward-left move
		while( (location[14].first-su >= 0) && (location[14].second-su >= 0) )
		{
			if( (board[location[14].first-su][location[14].second-su] > 0) && (board[location[14].first-su][location[14].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[14].first-su][location[14].second-su] > 20) && (board[location[14].first-su][location[14].second-su] < 37) ) //opposite kind
			{
				if( move[123+su].goTo.first+location[piece].first == goTo.first && move[123+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 123+su;
				}
				break;
			}
			else if(board[location[14].first-su][location[14].second-su] == 0) //empty
			{
				if( move[123+su].goTo.first+location[piece].first == goTo.first && move[123+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 123+su;
				}
			}
			su++;
		}
		
		su = 1;
		//backward-right move
		while( (location[14].first+su <= 7) && (location[14].second+su <= 7) )
		{
			if( (board[location[14].first+su][location[14].second+su] > 0) && (board[location[14].first+su][location[14].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[14].first+su][location[14].second+su] > 20) && (board[location[14].first+su][location[14].second+su] < 37) ) //opposite kind
			{
				if( move[130+su].goTo.first+location[piece].first == goTo.first && move[130+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 130+su;
				}
				break;
			}
			else if(board[location[14].first+su][location[14].second+su] == 0) //empty
			{
				if( move[130+su].goTo.first+location[piece].first == goTo.first && move[130+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 130+su;
				}
			}
			su++;
		}
		
		
		su = 1;
		//backward-left move
		while( (location[14].first+su <= 7) && (location[14].second-su >= 0) )
		{
			if( (board[location[14].first+su][location[14].second-su] > 0) && (board[location[14].first+su][location[14].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[14].first+su][location[14].second-su] > 20) && (board[location[14].first+su][location[14].second-su] < 37) ) //opposite kind
			{
				if( move[137+su].goTo.first+location[piece].first == goTo.first && move[137+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 137+su;
				}
				break;
			}
			else if(board[location[14].first+su][location[14].second-su] == 0) //empty
			{
				if( move[137+su].goTo.first+location[piece].first == goTo.first && move[137+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 137+su;
				}
			}
			su++;
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
		
	}
		
	}
	
	
	//------------------------------------------------------------KNIGHT-10--------------------------------------------------------------//
	
	if( piece == 10 )
	{
		
	if( (location[10].first >= 0) && (location[10].second >= 0) )
	{
		
		//forward-right move
		if( (location[10].first-2 >= 0) && (location[10].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first-2][location[10].second+1] == 0) || ( (board[location[10].first-2][location[10].second+1] > 20 ) && (board[location[10].first-2][location[10].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[145].goTo.first+location[piece].first == goTo.first && move[145].goTo.second+location[piece].second == goTo.second )
				{
					match = 145;
				}
			}
		}
		
		//forward-left move
		if( (location[10].first-2 >= 0) && (location[10].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first-2][location[10].second-1] == 0) || ( (board[location[10].first-2][location[10].second-1] > 20 ) && (board[location[10].first-2][location[10].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[146].goTo.first+location[piece].first == goTo.first && move[146].goTo.second+location[piece].second == goTo.second )
				{
					match = 146;
				}
			}
		}
		
		//backward-right move
		if( (location[10].first+2 <= 7) && (location[10].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first+2][location[10].second+1] == 0) || ( (board[location[10].first+2][location[10].second+1] > 20 ) && (board[location[10].first+2][location[10].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[147].goTo.first+location[piece].first == goTo.first && move[147].goTo.second+location[piece].second == goTo.second )
				{
					match = 147;
				}
			}
		}
		
		//backward-left move
		if( (location[10].first+2 <= 7) && (location[10].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first+2][location[10].second-1] == 0) || ( (board[location[10].first+2][location[10].second-1] > 20 ) && (board[location[10].first+2][location[10].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[148].goTo.first+location[piece].first == goTo.first && move[148].goTo.second+location[piece].second == goTo.second )
				{
					match = 148;
				}
			}
		}
		
		//right-forward move
		if( (location[10].first-1 >= 0) && (location[10].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first-1][location[10].second+2] == 0) || ( (board[location[10].first-1][location[10].second+2] > 20 ) && (board[location[10].first-1][location[10].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[149].goTo.first+location[piece].first == goTo.first && move[149].goTo.second+location[piece].second == goTo.second )
				{
					match = 149;
				}
			}
		}
		
		//right-backward move
		if( (location[10].first+1 <= 7) && (location[10].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first+1][location[10].second+2] == 0) || ( (board[location[10].first+1][location[10].second+2] > 20 ) && (board[location[10].first+1][location[10].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[150].goTo.first+location[piece].first == goTo.first && move[150].goTo.second+location[piece].second == goTo.second )
				{
					match = 150;
				}
			}
		}
		
		//left-forward move
		if( (location[10].first-1 >= 0) && (location[10].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first-1][location[10].second-2] == 0) || ( (board[location[10].first-1][location[10].second-2] > 20 ) && (board[location[10].first-1][location[10].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[151].goTo.first+location[piece].first == goTo.first && move[151].goTo.second+location[piece].second == goTo.second )
				{
					match = 151;
				}
			}
		}
		
		//left-backward move
		if( (location[10].first+1 <= 7) && (location[10].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first+1][location[10].second-2] == 0) || ( (board[location[10].first+1][location[10].second-2] > 20 ) && (board[location[10].first+1][location[10].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[152].goTo.first+location[piece].first == goTo.first && move[152].goTo.second+location[piece].second == goTo.second )
				{
					match = 152;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
			
	}
		
	}
	
	
	//------------------------------------------------------------KNIGHT-15--------------------------------------------------------------//
	
	if( piece == 15 )
	{
		
	if( (location[15].first >= 0) && (location[15].second >= 0) )
	{
		
		//forward-right move
		if( (location[15].first-2 >= 0) && (location[15].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first-2][location[15].second+1] == 0) || ( (board[location[15].first-2][location[15].second+1] > 20 ) && (board[location[15].first-2][location[15].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[153].goTo.first+location[piece].first == goTo.first && move[153].goTo.second+location[piece].second == goTo.second )
				{
					match = 153;
				}
			}
		}
		
		//forward-left move
		if( (location[15].first-2 >= 0) && (location[15].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first-2][location[15].second-1] == 0) || ( (board[location[15].first-2][location[15].second-1] > 20 ) && (board[location[15].first-2][location[15].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[154].goTo.first+location[piece].first == goTo.first && move[154].goTo.second+location[piece].second == goTo.second )
				{
					match = 154;
				}
			}
		}
		
		//backward-right move
		if( (location[15].first+2 <= 7) && (location[15].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first+2][location[15].second+1] == 0) || ( (board[location[15].first+2][location[15].second+1] > 20 ) && (board[location[15].first+2][location[15].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[155].goTo.first+location[piece].first == goTo.first && move[155].goTo.second+location[piece].second == goTo.second )
				{
					match = 155;
				}
			}
		}
		
		//backward-left move
		if( (location[15].first+2 <= 7) && (location[15].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first+2][location[15].second-1] == 0) || ( (board[location[15].first+2][location[15].second-1] > 20 ) && (board[location[15].first+2][location[15].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[156].goTo.first+location[piece].first == goTo.first && move[156].goTo.second+location[piece].second == goTo.second )
				{
					match = 156;
				}
			}
		}
		
		//right-forward move
		if( (location[15].first-1 >= 0) && (location[15].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first-1][location[15].second+2] == 0) || ( (board[location[15].first-1][location[15].second+2] > 20 ) && (board[location[15].first-1][location[15].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[157].goTo.first+location[piece].first == goTo.first && move[157].goTo.second+location[piece].second == goTo.second )
				{
					match = 157;
				}
			}
		}
		
		//right-backward move
		if( (location[15].first+1 <= 7) && (location[15].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first+1][location[15].second+2] == 0) || ( (board[location[15].first+1][location[15].second+2] > 20 ) && (board[location[15].first+1][location[15].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[158].goTo.first+location[piece].first == goTo.first && move[158].goTo.second+location[piece].second == goTo.second )
				{
					match = 158;
				}
			}
		}
		
		//left-forward move
		if( (location[15].first-1 >= 0) && (location[15].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first-1][location[15].second-2] == 0) || ( (board[location[15].first-1][location[15].second-2] > 20 ) && (board[location[15].first-1][location[15].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[159].goTo.first+location[piece].first == goTo.first && move[159].goTo.second+location[piece].second == goTo.second )
				{
					match = 159;
				}
			}
		}
		
		//left-backward move
		if( (location[15].first+1 <= 7) && (location[15].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first+1][location[15].second-2] == 0) || ( (board[location[15].first+1][location[15].second-2] > 20 ) && (board[location[15].first+1][location[15].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				if( move[160].goTo.first+location[piece].first == goTo.first && move[160].goTo.second+location[piece].second == goTo.second )
				{
					match = 160;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
		
			
	}
		
	}
	
	
	//---------------------------------------------------------QUEEN-12------------------------------------------------------------------//
	
	if( piece == 12 )
	{
		
	if( (location[12].first >= 0) && (location[12].second >= 0) )
	{
		
		int su=1;
		//forward moves
		while( (location[12].first-su >= 0) )
		{
			if( (board[location[12].first-su][location[12].second] > 0) && (board[location[12].first-su][location[12].second] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[12].first-su][location[12].second] > 20) && (board[location[12].first-su][location[12].second] < 37) ) //opposite kind
			{
				if( move[160+su].goTo.first+location[piece].first == goTo.first && move[160+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 160+su;
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second] == 0) //empty
			{
				if( move[160+su].goTo.first+location[piece].first == goTo.first && move[160+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 160+su;
				}
			}
			su++;
		}
		
		su = 1;
		//backward moves
		while( (location[12].first+su <= 7) )
		{
			if( (board[location[12].first+su][location[12].second] > 0) && (board[location[12].first+su][location[12].second] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[12].first+su][location[12].second] > 20) && (board[location[12].first+su][location[12].second] < 37) ) //opposite kind
			{
				if( move[167+su].goTo.first+location[piece].first == goTo.first && move[167+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 167+su;
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second] == 0) //empty
			{
				if( move[167+su].goTo.first+location[piece].first == goTo.first && move[167+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 167+su;
				}
			}
			su++;
		}
		
		su = 1;
		//left moves
		while( (location[12].second-su >= 0) )	
		{
			if( (board[location[12].first][location[12].second-su] > 0) && (board[location[12].first][location[12].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[12].first][location[12].second-su] > 20) && (board[location[12].first][location[12].second-su] < 37) ) //opposite kind
			{
				if( move[174+su].goTo.first+location[piece].first == goTo.first && move[174+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 174+su;
				}
				break;
			}
			else if(board[location[12].first][location[12].second-su] == 0) //empty
			{
				if( move[174+su].goTo.first+location[piece].first == goTo.first && move[174+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 174+su;
				}
			}
			su++;
		}
		
		
		su = 1;
		//right moves
		while( (location[12].second+su <= 7) )	
		{
			if( (board[location[12].first][location[12].second+su] > 0) && (board[location[12].first][location[12].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[12].first][location[12].second+su] > 20) && (board[location[12].first][location[12].second+su] < 37) ) //opposite kind
			{
				if( move[181+su].goTo.first+location[piece].first == goTo.first && move[181+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 181+su;
				}
				break;
			}
			else if(board[location[12].first][location[12].second+su] == 0) //empty
			{
				if( move[181+su].goTo.first+location[piece].first == goTo.first && move[181+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 181+su;
				}
			}
			su++;
		}
		
		
		su = 1;
		//forward-right move
		while( (location[12].first-su >= 0) && (location[12].second+su <= 7) )
		{
			if( (board[location[12].first-su][location[12].second+su] > 0) && (board[location[12].first-su][location[12].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[12].first-su][location[12].second+su] > 20) && (board[location[12].first-su][location[12].second+su] < 37) ) //opposite kind
			{
				if( move[188+su].goTo.first+location[piece].first == goTo.first && move[188+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 188+su;
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second+su] == 0) //empty
			{
				if( move[188+su].goTo.first+location[piece].first == goTo.first && move[188+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 188+su;
				}
			}
			su++;
		}
		
		su = 1;
		//forward-left move
		while( (location[12].first-su >= 0) && (location[12].second-su >= 0) )
		{
			if( (board[location[12].first-su][location[12].second-su] > 0) && (board[location[12].first-su][location[12].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[12].first-su][location[12].second-su] > 20) && (board[location[12].first-su][location[12].second-su] < 37) ) //opposite kind
			{
				if( move[195+su].goTo.first+location[piece].first == goTo.first && move[195+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 195+su;
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second-su] == 0) //empty
			{
				if( move[195+su].goTo.first+location[piece].first == goTo.first && move[195+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 195+su;
				}
			}
			su++;
		}
		
		su = 1;
		//backward-right move
		while( (location[12].first+su <= 7) && (location[12].second+su <= 7) )
		{
			if( (board[location[12].first+su][location[12].second+su] > 0) && (board[location[12].first+su][location[12].second+su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[12].first+su][location[12].second+su] > 20) && (board[location[12].first+su][location[12].second+su] < 37) ) //opposite kind
			{
				if( move[202+su].goTo.first+location[piece].first == goTo.first && move[202+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 202+su;
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second+su] == 0) //empty
			{
				if( move[202+su].goTo.first+location[piece].first == goTo.first && move[202+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 202+su;
				}
			}
			su++;
		}
		
		
		su = 1;
		//backward-left move
		while( (location[12].first+su <= 7) && (location[12].second-su >= 0) )
		{
			if( (board[location[12].first+su][location[12].second-su] > 0) && (board[location[12].first+su][location[12].second-su] < 17) ) //same kind
			{
				break;
			}
			else if( (board[location[12].first+su][location[12].second-su] > 20) && (board[location[12].first+su][location[12].second-su] < 37) ) //opposite kind
			{
				if( move[209+su].goTo.first+location[piece].first == goTo.first && move[209+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 209+su;
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second-su] == 0) //empty
			{
				if( move[209+su].goTo.first+location[piece].first == goTo.first && move[209+su].goTo.second+location[piece].second == goTo.second )
				{
					match = 209+su;
				}
			}
			su++;
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first,location[13].second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
		
		
	}
		
	}
	
	
	//---------------------------------------------------------KING-13-------------------------------------------------------------------//
	
	if( piece == 13 )
	{
		
	if( (location[13].first >= 0) && (location[13].second >= 0) )
	{
		
		//forward move
		if( location[13].first-1 >=0 )  //check if not out of bound
		{
			if((board[location[13].first-1][location[13].second] == 0) || ((board[location[13].first-1][location[13].second] < 37) && (board[location[13].first-1][location[13].second] > 20))) // check if empty (or) opposite kind 
			{
				if( move[217].goTo.first+location[piece].first == goTo.first && move[217].goTo.second+location[piece].second == goTo.second )
				{
					match = 217;
				}
			}
		}
		
		//backward move
		if( location[13].first+1 <= 7 ) //check if not out of bound
		{
			if((board[location[13].first+1][location[13].second] == 0) || ((board[location[13].first+1][location[13].second] < 37) && (board[location[13].first+1][location[13].second] > 20))) // check if empty (or) opposite kind
			{
				if( move[218].goTo.first+location[piece].first == goTo.first && move[218].goTo.second+location[piece].second == goTo.second )
				{
					match = 218;
				}
			}
		}
		
		//right move
		if( location[13].second+1 <= 7 ) //check if not out of bound
		{
			if((board[location[13].first][location[13].second+1] == 0) || ((board[location[13].first][location[13].second+1] < 37) && (board[location[13].first][location[13].second+1] > 20))) // check if empty (or) opposite kind
			{
				if( move[219].goTo.first+location[piece].first == goTo.first && move[219].goTo.second+location[piece].second == goTo.second )
				{
					match = 219;
				}
			}
		}
		
		//left move
		if( location[13].second-1 >= 0 ) //check if not out of bound
		{
			if((board[location[13].first][location[13].second-1] == 0) || ((board[location[13].first][location[13].second-1] < 37) && (board[location[13].first][location[13].second-1] > 20))) // check if empty (or) opposite kind
			{
				if( move[220].goTo.first+location[piece].first == goTo.first && move[220].goTo.second+location[piece].second == goTo.second )
				{
					match = 220;
				}
			}
		}
		
		//forward right move
		if( (location[13].first-1 >=0) && (location[13].second+1 <= 7) )  //check if not out of bound
		{
			if((board[location[13].first-1][location[13].second+1] == 0) || ((board[location[13].first-1][location[13].second+1] < 37) && (board[location[13].first-1][location[13].second+1] > 20))) // check if empty (or) opposite kind 
			{
				if( move[221].goTo.first+location[piece].first == goTo.first && move[221].goTo.second+location[piece].second == goTo.second )
				{
					match = 221;
				}
			}
		}
		
		//backward left move
		if( (location[13].first+1 <= 7) && (location[13].second-1 >= 0) ) //check if not out of bound
		{
			if((board[location[13].first+1][location[13].second-1] == 0) || ((board[location[13].first+1][location[13].second-1] < 37) && (board[location[13].first+1][location[13].second-1] > 20))) // check if empty (or) opposite kind
			{
				if( move[222].goTo.first+location[piece].first == goTo.first && move[222].goTo.second+location[piece].second == goTo.second )
				{
					match = 222;
				}
			}
		}
		
		//backward right move
		if( (location[13].first+1 <= 7) && (location[13].second+1 <= 7) ) //check if not out of bound
		{
			if((board[location[13].first+1][location[13].second+1] == 0) || ((board[location[13].first+1][location[13].second+1] < 37) && (board[location[13].first+1][location[13].second+1] > 20))) // check if empty (or) opposite kind
			{
				if( move[223].goTo.first+location[piece].first == goTo.first && move[223].goTo.second+location[piece].second == goTo.second )
				{
					match = 223;
				}
			}
		}
		
		//forward left move
		if( (location[13].first-1 >=0) && (location[13].second-1 >= 0) )  //check if not out of bound
		{
			if((board[location[13].first-1][location[13].second-1] == 0) || ((board[location[13].first-1][location[13].second-1] < 37) && (board[location[13].first-1][location[13].second-1] > 20))) // check if empty (or) opposite kind 
			{
				if( move[224].goTo.first+location[piece].first == goTo.first && move[224].goTo.second+location[piece].second == goTo.second )
				{
					match = 224;
				}
			}
		}
		
		if (match == 0)
		{
			/*The entered piece can't make that move*/
			return -4;
		}
		
		if( underAttack(location[13].first+move[match].goTo.first,location[13].second+move[match].goTo.second,match,side) )
		{
			/*The entered move is putting king under attack*/
			return -5;
		}
		
		return 1;
		
		
	}
		
	}
	
	

}




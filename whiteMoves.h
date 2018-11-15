
int whiteMoves(int moveCount)
{
	nodes++;
	int result,finalResult = 1000;
	bool side = true;
	
	//----------------------------------------------------PAWNS--------------------------------------------------------------------------//
	
	//pawn-1
	if((location[1].first >= 0) && (location[1].second >= 0))		//if exists
	{
		//forward move 
		if((location[1].first != 0))
		{
			if((board[location[1].first-1][location[1].second] == 0))
			{
				//if(!(underAttack(location[13].first,location[13].second,1,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[1],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[1].first == 6)
		{
			if( (board[location[1].first-1][location[1].second] == 0) && (board[location[1].first-2][location[1].second] == 0) )
			{
				//if(!(underAttack(location[13].first,location[13].second,2,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[2],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[1].first != 0) && (location[1].second != 0))
		{
			if((board[location[1].first-1][location[1].second-1] < 37) && (board[location[1].first-1][location[1].second-1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,3,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[3],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[1].first != 0) && (location[1].second != 7))
		{
			if((board[location[1].first-1][location[1].second+1] < 37) && (board[location[1].first-1][location[1].second+1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,4,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[4],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}

	}

	
	//pawn-2
	if((location[2].first >= 0) && (location[2].second >= 0))		//if exists
	{
		//forward move 
		if((location[2].first != 0))
		{
			if((board[location[2].first-1][location[2].second] == 0))
			{
				//if(!(underAttack(location[13].first,location[13].second,5,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[5],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[2].first == 6)
		{
			if( (board[location[2].first-1][location[2].second] == 0) && (board[location[2].first-2][location[2].second] == 0) )
			{
				//if(!(underAttack(location[13].first,location[13].second,6,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[6],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[2].first != 0) && (location[2].second != 0))
		{
			if((board[location[2].first-1][location[2].second-1] < 37) && (board[location[2].first-1][location[2].second-1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,7,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[7],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[2].first != 0) && (location[2].second != 7))
		{
			if((board[location[2].first-1][location[2].second+1] < 37) && (board[location[2].first-1][location[2].second+1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,8,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[8],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}

	}	


	//pawn-3
	if((location[3].first >= 0) && (location[3].second >= 0))		//if exists
	{
		//forward move 
		if((location[3].first != 0))
		{
			if((board[location[3].first-1][location[3].second] == 0))
			{
				//if(!(underAttack(location[13].first,location[13].second,9,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[9],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[3].first == 6)
		{
			if( (board[location[3].first-1][location[3].second] == 0) && (board[location[3].first-2][location[3].second] == 0) )
			{
				//if(!(underAttack(location[13].first,location[13].second,10,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[10],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[3].first != 0) && (location[3].second != 0))
		{
			if((board[location[3].first-1][location[3].second-1] < 37) && (board[location[3].first-1][location[3].second-1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,11,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[11],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[3].first != 0) && (location[3].second != 7))
		{
			if((board[location[3].first-1][location[3].second+1] < 37) && (board[location[3].first-1][location[3].second+1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,12,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[12],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}

	}	
	

	//pawn-4
	if((location[4].first >= 0) && (location[4].second >= 0))		//if exists
	{
		//forward move 
		if((location[4].first != 0))
		{
			if((board[location[4].first-1][location[4].second] == 0))
			{
				//if(!(underAttack(location[13].first,location[13].second,13,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[13],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[4].first == 6)
		{
			if( (board[location[4].first-1][location[4].second] == 0) && (board[location[4].first-2][location[4].second] == 0) )
			{
				//if(!(underAttack(location[13].first,location[13].second,14,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[14],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[4].first != 0) && (location[4].second != 0))
		{
			if((board[location[4].first-1][location[4].second-1] < 37) && (board[location[4].first-1][location[4].second-1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,15,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[15],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[4].first != 0) && (location[4].second != 7))
		{
			if((board[location[4].first-1][location[4].second+1] < 37) && (board[location[4].first-1][location[4].second+1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,16,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[16],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}

	}	


	//pawn-5
	if((location[5].first >= 0) && (location[5].second >= 0))		//if exists
	{
		//forward move 
		if((location[5].first != 0))
		{
			if((board[location[5].first-1][location[5].second] == 0))
			{
				//if(!(underAttack(location[13].first,location[13].second,17,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[17],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[5].first == 6)
		{
			if( (board[location[5].first-1][location[5].second] == 0) && (board[location[5].first-2][location[5].second] == 0) )
			{
				//if(!(underAttack(location[13].first,location[13].second,18,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[18],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[5].first != 0) && (location[5].second != 0))
		{
			if((board[location[5].first-1][location[5].second-1] < 37) && (board[location[5].first-1][location[5].second-1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,19,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[19],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[5].first != 0) && (location[5].second != 7))
		{
			if((board[location[5].first-1][location[5].second+1] < 37) && (board[location[5].first-1][location[5].second+1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,20,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[20],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}

	}	


	//pawn-6
	if((location[6].first >= 0) && (location[6].second >= 0))		//if exists
	{
		//forward move 
		if((location[6].first != 0))
		{
			if((board[location[6].first-1][location[6].second] == 0))
			{
				//if(!(underAttack(location[13].first,location[13].second,21,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[21],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[6].first == 6)
		{
			if( (board[location[6].first-1][location[6].second] == 0) && (board[location[6].first-2][location[6].second] == 0) )
			{
				//if(!(underAttack(location[13].first,location[13].second,22,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[22],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[6].first != 0) && (location[6].second != 0))
		{
			if((board[location[6].first-1][location[6].second-1] < 37) && (board[location[6].first-1][location[6].second-1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,23,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[23],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[6].first != 0) && (location[6].second != 7))
		{
			if((board[location[6].first-1][location[6].second+1] < 37) && (board[location[6].first-1][location[6].second+1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,24,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[24],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}

	}	


	//pawn-7
	if((location[7].first >= 0) && (location[7].second >= 0))		//if exists
	{
		//forward move 
		if((location[7].first != 0))
		{
			if((board[location[7].first-1][location[7].second] == 0))
			{
				//if(!(underAttack(location[13].first,location[13].second,25,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[25],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[7].first == 6)
		{
			if( (board[location[7].first-1][location[7].second] == 0) && (board[location[7].first-2][location[7].second] == 0) )
			{
				//if(!(underAttack(location[13].first,location[13].second,26,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[26],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[7].first != 0) && (location[7].second != 0))
		{
			if((board[location[7].first-1][location[7].second-1] < 37) && (board[location[7].first-1][location[7].second-1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,27,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[27],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[7].first != 0) && (location[7].second != 7))
		{
			if((board[location[7].first-1][location[7].second+1] < 37) && (board[location[7].first-1][location[7].second+1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,28,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[28],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}

	}	


	//pawn-8
	if((location[8].first >= 0) && (location[8].second >= 0))		//if exists
	{
		//forward move 
		if((location[8].first != 0))
		{
			if((board[location[8].first-1][location[8].second] == 0))
			{
				//if(!(underAttack(location[13].first,location[13].second,29,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[29],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[8].first == 6)
		{
			if( (board[location[8].first-1][location[8].second] == 0) && (board[location[8].first-2][location[8].second] == 0) )
			{
				//if(!(underAttack(location[13].first,location[13].second,30,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[30],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[8].first != 0) && (location[8].second != 0))
		{
			if((board[location[8].first-1][location[8].second-1] < 37) && (board[location[8].first-1][location[8].second-1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,31,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[31],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[8].first != 0) && (location[8].second != 7))
		{
			if((board[location[8].first-1][location[8].second+1] < 37) && (board[location[8].first-1][location[8].second+1] > 20))
			{
				//if(!(underAttack(location[13].first,location[13].second,32,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluation(move[32],side,moveCount+1);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}

	}	

	
	//---------------------------------------------------------ROOK-9--------------------------------------------------------------------//
	
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
				//if(!(underAttack(location[13].first,location[13].second,32+su,side)))
				{
					result = evaluation(move[32+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[9].first-su][location[9].second] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,32+su,side)))
				{
					result = evaluation(move[32+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,39+su,side)))
				{
					result = evaluation(move[39+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[9].first+su][location[9].second] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,39+su,side)))
				{
					result = evaluation(move[39+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,46+su,side)))
				{
					result = evaluation(move[46+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[9].first][location[9].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,46+su,side)))
				{
					result = evaluation(move[46+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,53+su,side)))
				{
					result = evaluation(move[53+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[9].first][location[9].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,53+su,side)))
				{
					result = evaluation(move[53+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
			su++;
		}
		
	}

	
	//---------------------------------------------------------ROOK-16--------------------------------------------------------------------//
	
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
				//if(!(underAttack(location[13].first,location[13].second,60+su,side)))
				{
					result = evaluation(move[60+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[16].first-su][location[16].second] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,60+su,side)))
				{
					result = evaluation(move[60+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,67+su,side)))
				{
					result = evaluation(move[67+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[16].first+su][location[16].second] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,67+su,side)))
				{
					result = evaluation(move[67+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,74+su,side)))
				{
					result = evaluation(move[74+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[16].first][location[16].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,74+su,side)))
				{
					result = evaluation(move[74+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,81+su,side)))
				{
					result = evaluation(move[81+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[16].first][location[16].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,81+su,side)))
				{
					result = evaluation(move[81+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
			su++;
		}
		
	}
	
	
	//----------------------------------------------------------BISHOP-11----------------------------------------------------------------//
	
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
				//if(!(underAttack(location[13].first,location[13].second,88+su,side)))
				{
					result = evaluation(move[88+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[11].first-su][location[11].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,88+su,side)))
				{
					result = evaluation(move[88+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,95+su,side)))
				{
					result = evaluation(move[95+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[11].first-su][location[11].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,95+su,side)))
				{
					result = evaluation(move[95+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,102+su,side)))
				{
					result = evaluation(move[102+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[11].first+su][location[11].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,102+su,side)))
				{
					result = evaluation(move[102+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,109+su,side)))
				{
					result = evaluation(move[109+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[11].first+su][location[11].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,109+su,side)))
				{
					result = evaluation(move[109+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
			su++;
		}
		
	}
	
	
	//----------------------------------------------------------BISHOP-14----------------------------------------------------------------//
	
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
				//if(!(underAttack(location[13].first,location[13].second,116+su,side)))
				{
					result = evaluation(move[116+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[14].first-su][location[14].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,116+su,side)))
				{
					result = evaluation(move[116+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,123+su,side)))
				{
					result = evaluation(move[123+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[14].first-su][location[14].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,123+su,side)))
				{
					result = evaluation(move[123+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,130+su,side)))
				{
					result = evaluation(move[130+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[14].first+su][location[14].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,130+su,side)))
				{
					result = evaluation(move[130+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,137+su,side)))
				{
					result = evaluation(move[137+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[14].first+su][location[14].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,137+su,side)))
				{
					result = evaluation(move[137+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
			su++;
		}
		
	}
	
	
	//------------------------------------------------------------KNIGHT-10--------------------------------------------------------------//
	
	if( (location[10].first >= 0) && (location[10].second >= 0) )
	{
		
		//forward-right move
		if( (location[10].first-2 >= 0) && (location[10].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first-2][location[10].second+1] == 0) || ( (board[location[10].first-2][location[10].second+1] > 20 ) && (board[location[10].first-2][location[10].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,145,side)))
				{
					result = evaluation(move[145],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward-left move
		if( (location[10].first-2 >= 0) && (location[10].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first-2][location[10].second-1] == 0) || ( (board[location[10].first-2][location[10].second-1] > 20 ) && (board[location[10].first-2][location[10].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,146,side)))
				{
					result = evaluation(move[146],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//backward-right move
		if( (location[10].first+2 <= 7) && (location[10].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first+2][location[10].second+1] == 0) || ( (board[location[10].first+2][location[10].second+1] > 20 ) && (board[location[10].first+2][location[10].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,147,side)))
				{
					result = evaluation(move[147],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//backward-left move
		if( (location[10].first+2 <= 7) && (location[10].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first+2][location[10].second-1] == 0) || ( (board[location[10].first+2][location[10].second-1] > 20 ) && (board[location[10].first+2][location[10].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,148,side)))
				{
					result = evaluation(move[148],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//right-forward move
		if( (location[10].first-1 >= 0) && (location[10].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first-1][location[10].second+2] == 0) || ( (board[location[10].first-1][location[10].second+2] > 20 ) && (board[location[10].first-1][location[10].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,149,side)))
				{
					result = evaluation(move[149],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//right-backward move
		if( (location[10].first+1 <= 7) && (location[10].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first+1][location[10].second+2] == 0) || ( (board[location[10].first+1][location[10].second+2] > 20 ) && (board[location[10].first+1][location[10].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,150,side)))
				{
					result = evaluation(move[150],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//left-forward move
		if( (location[10].first-1 >= 0) && (location[10].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first-1][location[10].second-2] == 0) || ( (board[location[10].first-1][location[10].second-2] > 20 ) && (board[location[10].first-1][location[10].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,151,side)))
				{
					result = evaluation(move[151],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//left-backward move
		if( (location[10].first+1 <= 7) && (location[10].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first+1][location[10].second-2] == 0) || ( (board[location[10].first+1][location[10].second-2] > 20 ) && (board[location[10].first+1][location[10].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,152,side)))
				{
					result = evaluation(move[152],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
			
	}
	
	
	//------------------------------------------------------------KNIGHT-15--------------------------------------------------------------//
	
	if( (location[15].first >= 0) && (location[15].second >= 0) )
	{
		
		//forward-right move
		if( (location[15].first-2 >= 0) && (location[15].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first-2][location[15].second+1] == 0) || ( (board[location[15].first-2][location[15].second+1] > 20 ) && (board[location[15].first-2][location[15].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,153,side)))
				{
					result = evaluation(move[153],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward-left move
		if( (location[15].first-2 >= 0) && (location[15].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first-2][location[15].second-1] == 0) || ( (board[location[15].first-2][location[15].second-1] > 20 ) && (board[location[15].first-2][location[15].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,154,side)))
				{
					result = evaluation(move[154],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//backward-right move
		if( (location[15].first+2 <= 7) && (location[15].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first+2][location[15].second+1] == 0) || ( (board[location[15].first+2][location[15].second+1] > 20 ) && (board[location[15].first+2][location[15].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,155,side)))
				{
					result = evaluation(move[155],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//backward-left move
		if( (location[15].first+2 <= 7) && (location[15].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first+2][location[15].second-1] == 0) || ( (board[location[15].first+2][location[15].second-1] > 20 ) && (board[location[15].first+2][location[15].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,156,side)))
				{
					result = evaluation(move[156],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//right-forward move
		if( (location[15].first-1 >= 0) && (location[15].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first-1][location[15].second+2] == 0) || ( (board[location[15].first-1][location[15].second+2] > 20 ) && (board[location[15].first-1][location[15].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,157,side)))
				{
					result = evaluation(move[157],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//right-backward move
		if( (location[15].first+1 <= 7) && (location[15].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first+1][location[15].second+2] == 0) || ( (board[location[15].first+1][location[15].second+2] > 20 ) && (board[location[15].first+1][location[15].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,158,side)))
				{
					result = evaluation(move[158],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//left-forward move
		if( (location[15].first-1 >= 0) && (location[15].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first-1][location[15].second-2] == 0) || ( (board[location[15].first-1][location[15].second-2] > 20 ) && (board[location[15].first-1][location[15].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,159,side)))
				{
					result = evaluation(move[159],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//left-backward move
		if( (location[15].first+1 <= 7) && (location[15].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first+1][location[15].second-2] == 0) || ( (board[location[15].first+1][location[15].second-2] > 20 ) && (board[location[15].first+1][location[15].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second,160,side)))
				{
					result = evaluation(move[160],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
			
	}
	
	
	//---------------------------------------------------------QUEEN-12------------------------------------------------------------------//
	
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
				//if(!(underAttack(location[13].first,location[13].second,160+su,side)))
				{
					result = evaluation(move[160+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,160+su,side)))
				{
					result = evaluation(move[160+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,167+su,side)))
				{
					result = evaluation(move[167+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,167+su,side)))
				{
					result = evaluation(move[167+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,174+su,side)))
				{
					result = evaluation(move[174+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[12].first][location[12].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,174+su,side)))
				{
					result = evaluation(move[174+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,181+su,side)))
				{
					result = evaluation(move[181+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[12].first][location[12].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,181+su,side)))
				{
					result = evaluation(move[181+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,188+su,side)))
				{
					result = evaluation(move[188+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,188+su,side)))
				{
					result = evaluation(move[188+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,195+su,side)))
				{
					result = evaluation(move[195+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,195+su,side)))
				{
					result = evaluation(move[195+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,202+su,side)))
				{
					result = evaluation(move[202+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second+su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,202+su,side)))
				{
					result = evaluation(move[202+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
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
				//if(!(underAttack(location[13].first,location[13].second,209+su,side)))
				{
					result = evaluation(move[209+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second-su] == 0) //empty
			{
				//if(!(underAttack(location[13].first,location[13].second,209+su,side)))
				{
					result = evaluation(move[209+su],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
			su++;
		}
		
	
		
	}
	
	
	//---------------------------------------------------------KING-13-------------------------------------------------------------------//
	
	if( (location[13].first >= 0) && (location[13].second >= 0) )
	{
		
		//forward move
		if( location[13].first-1 >=0 )  //check if not out of bound
		{
			if((board[location[13].first-1][location[13].second] == 0) || ((board[location[13].first-1][location[13].second] < 37) && (board[location[13].first-1][location[13].second] > 20))) // check if empty (or) opposite kind 
			{
				if(!(underAttack(location[13].first-1,location[13].second,217,side))) //check if it is under attack
				{
					result = evaluation(move[217],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//backward move
		if( location[13].first+1 <= 7 ) //check if not out of bound
		{
			if((board[location[13].first+1][location[13].second] == 0) || ((board[location[13].first+1][location[13].second] < 37) && (board[location[13].first+1][location[13].second] > 20))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[13].first+1,location[13].second,218,side))) //check if it is under attack
				{
					result = evaluation(move[218],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//right move
		if( location[13].second+1 <= 7 ) //check if not out of bound
		{
			if((board[location[13].first][location[13].second+1] == 0) || ((board[location[13].first][location[13].second+1] < 37) && (board[location[13].first][location[13].second+1] > 20))) // check if empty (or) opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second+1,219,side))) //check if it is under attack
				{
					result = evaluation(move[219],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//left move
		if( location[13].second-1 >= 0 ) //check if not out of bound
		{
			if((board[location[13].first][location[13].second-1] == 0) || ((board[location[13].first][location[13].second-1] < 37) && (board[location[13].first][location[13].second-1] > 20))) // check if empty (or) opposite kind
			{
				//if(!(underAttack(location[13].first,location[13].second-1,220,side))) //check if it is under attack
				{
					result = evaluation(move[220],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward right move
		if( (location[13].first-1 >=0) && (location[13].second+1 <= 7) )  //check if not out of bound
		{
			if((board[location[13].first-1][location[13].second+1] == 0) || ((board[location[13].first-1][location[13].second+1] < 37) && (board[location[13].first-1][location[13].second+1] > 20))) // check if empty (or) opposite kind 
			{
				if(!(underAttack(location[13].first-1,location[13].second+1,221,side))) //check if it is under attack
				{
					result = evaluation(move[221],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//backward left move
		if( (location[13].first+1 <= 7) && (location[13].second-1 >= 0) ) //check if not out of bound
		{
			if((board[location[13].first+1][location[13].second-1] == 0) || ((board[location[13].first+1][location[13].second-1] < 37) && (board[location[13].first+1][location[13].second-1] > 20))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[13].first+1,location[13].second-1,222,side))) //check if it is under attack
				{
					result = evaluation(move[222],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//backward right move
		if( (location[13].first+1 <= 7) && (location[13].second+1 <= 7) ) //check if not out of bound
		{
			if((board[location[13].first+1][location[13].second+1] == 0) || ((board[location[13].first+1][location[13].second+1] < 37) && (board[location[13].first+1][location[13].second+1] > 20))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[13].first+1,location[13].second+1,223,side))) //check if it is under attack
				{
					result = evaluation(move[223],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		//forward left move
		if( (location[13].first-1 >=0) && (location[13].second-1 >= 0) )  //check if not out of bound
		{
			if((board[location[13].first-1][location[13].second-1] == 0) || ((board[location[13].first-1][location[13].second-1] < 37) && (board[location[13].first-1][location[13].second-1] > 20))) // check if empty (or) opposite kind 
			{
				if(!(underAttack(location[13].first-1,location[13].second-1,224,side))) //check if it is under attack
				{
					result = evaluation(move[224],side,moveCount+1);
					if(result < finalResult)
					{
						finalResult = result;
					}
				}
			}
		}
		
		
	}
	
	
	return finalResult;

}




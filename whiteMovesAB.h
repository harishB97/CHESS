
int whiteMovesAB(int moveCount,int bestSoFar)
{
	nodesAB++;
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
				if(!(underAttack(location[13].first,location[13].second,1,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(1,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[1].first == 6)
		{
			if( (board[location[1].first-1][location[1].second] == 0) && (board[location[1].first-2][location[1].second] == 0) )
			{
				if(!(underAttack(location[13].first,location[13].second,2,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(2,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[1].first != 0) && (location[1].second != 0))
		{
			if((board[location[1].first-1][location[1].second-1] < 37) && (board[location[1].first-1][location[1].second-1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,3,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(3,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[1].first != 0) && (location[1].second != 7))
		{
			if((board[location[1].first-1][location[1].second+1] < 37) && (board[location[1].first-1][location[1].second+1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,4,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(4,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,5,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(5,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[2].first == 6)
		{
			if( (board[location[2].first-1][location[2].second] == 0) && (board[location[2].first-2][location[2].second] == 0) )
			{
				if(!(underAttack(location[13].first,location[13].second,6,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(6,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[2].first != 0) && (location[2].second != 0))
		{
			if((board[location[2].first-1][location[2].second-1] < 37) && (board[location[2].first-1][location[2].second-1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,7,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(7,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[2].first != 0) && (location[2].second != 7))
		{
			if((board[location[2].first-1][location[2].second+1] < 37) && (board[location[2].first-1][location[2].second+1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,8,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(8,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,9,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(9,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[3].first == 6)
		{
			if( (board[location[3].first-1][location[3].second] == 0) && (board[location[3].first-2][location[3].second] == 0) )
			{
				if(!(underAttack(location[13].first,location[13].second,10,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(10,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[3].first != 0) && (location[3].second != 0))
		{
			if((board[location[3].first-1][location[3].second-1] < 37) && (board[location[3].first-1][location[3].second-1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,11,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(11,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[3].first != 0) && (location[3].second != 7))
		{
			if((board[location[3].first-1][location[3].second+1] < 37) && (board[location[3].first-1][location[3].second+1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,12,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(12,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,13,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(13,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[4].first == 6)
		{
			if( (board[location[4].first-1][location[4].second] == 0) && (board[location[4].first-2][location[4].second] == 0) )
			{
				if(!(underAttack(location[13].first,location[13].second,14,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(14,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[4].first != 0) && (location[4].second != 0))
		{
			if((board[location[4].first-1][location[4].second-1] < 37) && (board[location[4].first-1][location[4].second-1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,15,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(15,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[4].first != 0) && (location[4].second != 7))
		{
			if((board[location[4].first-1][location[4].second+1] < 37) && (board[location[4].first-1][location[4].second+1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,16,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(16,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,17,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(17,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[5].first == 6)
		{
			if( (board[location[5].first-1][location[5].second] == 0) && (board[location[5].first-2][location[5].second] == 0) )
			{
				if(!(underAttack(location[13].first,location[13].second,18,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(18,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[5].first != 0) && (location[5].second != 0))
		{
			if((board[location[5].first-1][location[5].second-1] < 37) && (board[location[5].first-1][location[5].second-1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,19,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(19,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[5].first != 0) && (location[5].second != 7))
		{
			if((board[location[5].first-1][location[5].second+1] < 37) && (board[location[5].first-1][location[5].second+1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,20,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(20,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,21,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(21,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[6].first == 6)
		{
			if( (board[location[6].first-1][location[6].second] == 0) && (board[location[6].first-2][location[6].second] == 0) )
			{
				if(!(underAttack(location[13].first,location[13].second,22,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(22,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[6].first != 0) && (location[6].second != 0))
		{
			if((board[location[6].first-1][location[6].second-1] < 37) && (board[location[6].first-1][location[6].second-1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,23,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(23,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[6].first != 0) && (location[6].second != 7))
		{
			if((board[location[6].first-1][location[6].second+1] < 37) && (board[location[6].first-1][location[6].second+1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,24,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(24,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,25,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(25,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[7].first == 6)
		{
			if( (board[location[7].first-1][location[7].second] == 0) && (board[location[7].first-2][location[7].second] == 0) )
			{
				if(!(underAttack(location[13].first,location[13].second,26,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(26,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[7].first != 0) && (location[7].second != 0))
		{
			if((board[location[7].first-1][location[7].second-1] < 37) && (board[location[7].first-1][location[7].second-1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,27,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(27,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[7].first != 0) && (location[7].second != 7))
		{
			if((board[location[7].first-1][location[7].second+1] < 37) && (board[location[7].first-1][location[7].second+1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,28,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(28,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,29,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(29,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[8].first == 6)
		{
			if( (board[location[8].first-1][location[8].second] == 0) && (board[location[8].first-2][location[8].second] == 0) )
			{
				if(!(underAttack(location[13].first,location[13].second,30,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(30,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[8].first != 0) && (location[8].second != 0))
		{
			if((board[location[8].first-1][location[8].second-1] < 37) && (board[location[8].first-1][location[8].second-1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,31,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(31,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[8].first != 0) && (location[8].second != 7))
		{
			if((board[location[8].first-1][location[8].second+1] < 37) && (board[location[8].first-1][location[8].second+1] > 20))
			{
				if(!(underAttack(location[13].first,location[13].second,32,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result = evaluationAB(32,side,moveCount+1,finalResult);		//(moveLabel,side,moveCount)
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,32+su,side)))
				{
					result = evaluationAB(32+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[9].first-su][location[9].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,32+su,side)))
				{
					result = evaluationAB(32+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,39+su,side)))
				{
					result = evaluationAB(39+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[9].first+su][location[9].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,39+su,side)))
				{
					result = evaluationAB(39+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,46+su,side)))
				{
					result = evaluationAB(46+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[9].first][location[9].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,46+su,side)))
				{
					result = evaluationAB(46+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,53+su,side)))
				{
					result = evaluationAB(53+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[9].first][location[9].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,53+su,side)))
				{
					result = evaluationAB(53+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,60+su,side)))
				{
					result = evaluationAB(60+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[16].first-su][location[16].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,60+su,side)))
				{
					result = evaluationAB(60+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,67+su,side)))
				{
					result = evaluationAB(67+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[16].first+su][location[16].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,67+su,side)))
				{
					result = evaluationAB(67+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,74+su,side)))
				{
					result = evaluationAB(74+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[16].first][location[16].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,74+su,side)))
				{
					result = evaluationAB(74+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,81+su,side)))
				{
					result = evaluationAB(81+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[16].first][location[16].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,81+su,side)))
				{
					result = evaluationAB(81+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,88+su,side)))
				{
					result = evaluationAB(88+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[11].first-su][location[11].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,88+su,side)))
				{
					result = evaluationAB(88+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,95+su,side)))
				{
					result = evaluationAB(95+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[11].first-su][location[11].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,95+su,side)))
				{
					result = evaluationAB(95+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,102+su,side)))
				{
					result = evaluationAB(102+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[11].first+su][location[11].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,102+su,side)))
				{
					result = evaluationAB(102+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,109+su,side)))
				{
					result = evaluationAB(109+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[11].first+su][location[11].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,109+su,side)))
				{
					result = evaluationAB(109+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,116+su,side)))
				{
					result = evaluationAB(116+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[14].first-su][location[14].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,116+su,side)))
				{
					result = evaluationAB(116+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,123+su,side)))
				{
					result = evaluationAB(123+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[14].first-su][location[14].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,123+su,side)))
				{
					result = evaluationAB(123+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,130+su,side)))
				{
					result = evaluationAB(130+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[14].first+su][location[14].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,130+su,side)))
				{
					result = evaluationAB(130+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,137+su,side)))
				{
					result = evaluationAB(137+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[14].first+su][location[14].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,137+su,side)))
				{
					result = evaluationAB(137+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,145,side)))
				{
					result = evaluationAB(145,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward-left move
		if( (location[10].first-2 >= 0) && (location[10].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first-2][location[10].second-1] == 0) || ( (board[location[10].first-2][location[10].second-1] > 20 ) && (board[location[10].first-2][location[10].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,146,side)))
				{
					result = evaluationAB(146,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//backward-right move
		if( (location[10].first+2 <= 7) && (location[10].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first+2][location[10].second+1] == 0) || ( (board[location[10].first+2][location[10].second+1] > 20 ) && (board[location[10].first+2][location[10].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,147,side)))
				{
					result = evaluationAB(147,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//backward-left move
		if( (location[10].first+2 <= 7) && (location[10].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first+2][location[10].second-1] == 0) || ( (board[location[10].first+2][location[10].second-1] > 20 ) && (board[location[10].first+2][location[10].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,148,side)))
				{
					result = evaluationAB(148,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//right-forward move
		if( (location[10].first-1 >= 0) && (location[10].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first-1][location[10].second+2] == 0) || ( (board[location[10].first-1][location[10].second+2] > 20 ) && (board[location[10].first-1][location[10].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,149,side)))
				{
					result = evaluationAB(149,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//right-backward move
		if( (location[10].first+1 <= 7) && (location[10].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[10].first+1][location[10].second+2] == 0) || ( (board[location[10].first+1][location[10].second+2] > 20 ) && (board[location[10].first+1][location[10].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,150,side)))
				{
					result = evaluationAB(150,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//left-forward move
		if( (location[10].first-1 >= 0) && (location[10].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first-1][location[10].second-2] == 0) || ( (board[location[10].first-1][location[10].second-2] > 20 ) && (board[location[10].first-1][location[10].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,151,side)))
				{
					result = evaluationAB(151,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//left-backward move
		if( (location[10].first+1 <= 7) && (location[10].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[10].first+1][location[10].second-2] == 0) || ( (board[location[10].first+1][location[10].second-2] > 20 ) && (board[location[10].first+1][location[10].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,152,side)))
				{
					result = evaluationAB(152,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,153,side)))
				{
					result = evaluationAB(153,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//forward-left move
		if( (location[15].first-2 >= 0) && (location[15].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first-2][location[15].second-1] == 0) || ( (board[location[15].first-2][location[15].second-1] > 20 ) && (board[location[15].first-2][location[15].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,154,side)))
				{
					result = evaluationAB(154,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//backward-right move
		if( (location[15].first+2 <= 7) && (location[15].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first+2][location[15].second+1] == 0) || ( (board[location[15].first+2][location[15].second+1] > 20 ) && (board[location[15].first+2][location[15].second+1] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,155,side)))
				{
					result = evaluationAB(155,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//backward-left move
		if( (location[15].first+2 <= 7) && (location[15].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first+2][location[15].second-1] == 0) || ( (board[location[15].first+2][location[15].second-1] > 20 ) && (board[location[15].first+2][location[15].second-1] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,156,side)))
				{
					result = evaluationAB(156,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//right-forward move
		if( (location[15].first-1 >= 0) && (location[15].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first-1][location[15].second+2] == 0) || ( (board[location[15].first-1][location[15].second+2] > 20 ) && (board[location[15].first-1][location[15].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,157,side)))
				{
					result = evaluationAB(157,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//right-backward move
		if( (location[15].first+1 <= 7) && (location[15].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[15].first+1][location[15].second+2] == 0) || ( (board[location[15].first+1][location[15].second+2] > 20 ) && (board[location[15].first+1][location[15].second+2] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,158,side)))
				{
					result = evaluationAB(158,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//left-forward move
		if( (location[15].first-1 >= 0) && (location[15].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first-1][location[15].second-2] == 0) || ( (board[location[15].first-1][location[15].second-2] > 20 ) && (board[location[15].first-1][location[15].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,159,side)))
				{
					result = evaluationAB(159,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//left-backward move
		if( (location[15].first+1 <= 7) && (location[15].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[15].first+1][location[15].second-2] == 0) || ( (board[location[15].first+1][location[15].second-2] > 20 ) && (board[location[15].first+1][location[15].second-2] < 37 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second,160,side)))
				{
					result = evaluationAB(160,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,160+su,side)))
				{
					result = evaluationAB(160+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,160+su,side)))
				{
					result = evaluationAB(160+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,167+su,side)))
				{
					result = evaluationAB(167+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,167+su,side)))
				{
					result = evaluationAB(167+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,174+su,side)))
				{
					result = evaluationAB(174+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[12].first][location[12].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,174+su,side)))
				{
					result = evaluationAB(174+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,181+su,side)))
				{
					result = evaluationAB(181+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[12].first][location[12].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,181+su,side)))
				{
					result = evaluationAB(181+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,188+su,side)))
				{
					result = evaluationAB(188+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,188+su,side)))
				{
					result = evaluationAB(188+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,195+su,side)))
				{
					result = evaluationAB(195+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,195+su,side)))
				{
					result = evaluationAB(195+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,202+su,side)))
				{
					result = evaluationAB(202+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,202+su,side)))
				{
					result = evaluationAB(202+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
				if(!(underAttack(location[13].first,location[13].second,209+su,side)))
				{
					result = evaluationAB(209+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,209+su,side)))
				{
					result = evaluationAB(209+su,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
					result = evaluationAB(217,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
					result = evaluationAB(218,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//right move
		if( location[13].second+1 <= 7 ) //check if not out of bound
		{
			if((board[location[13].first][location[13].second+1] == 0) || ((board[location[13].first][location[13].second+1] < 37) && (board[location[13].first][location[13].second+1] > 20))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second+1,219,side))) //check if it is under attack
				{
					result = evaluationAB(219,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		//left move
		if( location[13].second-1 >= 0 ) //check if not out of bound
		{
			if((board[location[13].first][location[13].second-1] == 0) || ((board[location[13].first][location[13].second-1] < 37) && (board[location[13].first][location[13].second-1] > 20))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[13].first,location[13].second-1,220,side))) //check if it is under attack
				{
					result = evaluationAB(220,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
					result = evaluationAB(221,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
					result = evaluationAB(222,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
					result = evaluationAB(223,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
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
					result = evaluationAB(224,side,moveCount+1,finalResult);
					if(result < finalResult)
					{
						finalResult = result;
						if(finalResult <= bestSoFar)
						{
							return -600;
						}
					}
				}
			}
		}
		
		
	}
	
	
	return finalResult;

}




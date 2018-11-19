
bool stalemate(bool side)
{
	
int result;

if(side == false) // side is black
{
	
	//---------------------------------------------------------KING-13-------------------------------------------------------------------//
	
	if( (location[33].first >= 0) && (location[33].second >= 0) )
	{
		
		//forward move
		if( location[33].first-1 >=0 )  //check if not out of bound
		{
			if((board[location[33].first-1][location[33].second] == 0) || ((board[location[33].first-1][location[33].second] < 17) && (board[location[33].first-1][location[33].second] > 0))) // check if empty (or) opposite kind 
			{
				if(!(underAttack(location[33].first-1,location[33].second,300+217,side))) //check if it is under attack
				{
					return false;
				}
			}
		}
		
		//backward move
		if( location[33].first+1 <= 7 ) //check if not out of bound
		{
			if((board[location[33].first+1][location[33].second] == 0) || ((board[location[33].first+1][location[33].second] < 17) && (board[location[33].first+1][location[33].second] > 0))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[33].first+1,location[33].second,300+218,side))) //check if it is under attack
				{
					return false;
				}
			}
		}
		
		//right move
		if( location[33].second+1 <= 7 ) //check if not out of bound
		{
			if((board[location[33].first][location[33].second+1] == 0) || ((board[location[33].first][location[33].second+1] < 17) && (board[location[33].first][location[33].second+1] > 0))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second+1,300+219,side))) //check if it is under attack
				{
					return false;
				}
			}
		}
		
		//left move
		if( location[33].second-1 >= 0 ) //check if not out of bound
		{
			if((board[location[33].first][location[33].second-1] == 0) || ((board[location[33].first][location[33].second-1] < 17) && (board[location[33].first][location[33].second-1] > 0))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second-1,300+220,side))) //check if it is under attack
				{
					return false;
				}
			}
		}
		
		//forward right move
		if( (location[33].first-1 >=0) && (location[33].second+1 <= 7) )  //check if not out of bound
		{
			if((board[location[33].first-1][location[33].second+1] == 0) || ((board[location[33].first-1][location[33].second+1] < 17) && (board[location[33].first-1][location[33].second+1] > 0))) // check if empty (or) opposite kind 
			{
				if(!(underAttack(location[33].first-1,location[33].second+1,300+221,side))) //check if it is under attack
				{
					return false;
				}
			}
		}
		
		//backward left move
		if( (location[33].first+1 <= 7) && (location[33].second-1 >= 0) ) //check if not out of bound
		{
			if((board[location[33].first+1][location[33].second-1] == 0) || ((board[location[33].first+1][location[33].second-1] < 17) && (board[location[33].first+1][location[33].second-1] > 0))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[33].first+1,location[33].second-1,300+222,side))) //check if it is under attack
				{
					return false;
				}
			}
		}
		
		//backward right move
		if( (location[33].first+1 <= 7) && (location[33].second+1 <= 7) ) //check if not out of bound
		{
			if((board[location[33].first+1][location[33].second+1] == 0) || ((board[location[33].first+1][location[33].second+1] < 17) && (board[location[33].first+1][location[33].second+1] > 0))) // check if empty (or) opposite kind
			{
				if(!(underAttack(location[33].first+1,location[33].second+1,300+223,side))) //check if it is under attack
				{
					return false;
				}
			}
		}
		
		//forward left move
		if( (location[33].first-1 >=0) && (location[33].second-1 >= 0) )  //check if not out of bound
		{
			if((board[location[33].first-1][location[33].second-1] == 0) || ((board[location[33].first-1][location[33].second-1] < 17) && (board[location[33].first-1][location[33].second-1] > 0))) // check if empty (or) opposite kind 
			{
				if(!(underAttack(location[33].first-1,location[33].second-1,300+224,side))) //check if it is under attack
				{
					return false;
					{
						
					}
				}
			}
		}
		
		
	}
	
	//---------------------------------------------------------ROOK-9--------------------------------------------------------------------//
	
	if((location[29].first >= 0) && (location[29].second >= 0))		
	{
		
		int su=1;
		//forward moves
		while( (location[29].first-su >= 0) )
		{
			if( (board[location[29].first-su][location[29].second] > 20) && (board[location[29].first-su][location[29].second] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[29].first-su][location[29].second] > 0) && (board[location[29].first-su][location[29].second] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+32+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[29].first-su][location[29].second] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+32+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		su = 1;
		//backward moves
		while( (location[29].first+su <= 7) )
		{
			if( (board[location[29].first+su][location[29].second] > 20) && (board[location[29].first+su][location[29].second] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[29].first+su][location[29].second] > 0) && (board[location[29].first+su][location[29].second] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+39+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[29].first+su][location[29].second] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+39+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		su = 1;
		//left moves
		while( (location[29].second-su >= 0) )	
		{
			if( (board[location[29].first][location[29].second-su] > 20) && (board[location[29].first][location[29].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[29].first][location[29].second-su] > 0) && (board[location[29].first][location[29].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+46+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[29].first][location[29].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+46+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		
		su = 1;
		//right moves
		while( (location[29].second+su <= 7) )	
		{
			if( (board[location[29].first][location[29].second+su] > 20) && (board[location[29].first][location[29].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[29].first][location[29].second+su] > 0) && (board[location[29].first][location[29].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+53+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[29].first][location[29].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+53+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
	}

	
	//---------------------------------------------------------ROOK-16--------------------------------------------------------------------//
	
	if((location[36].first >= 0) && (location[36].second >= 0))		
	{
		
		int su=1;
		//forward moves
		while( (location[36].first-su >= 0) )
		{
			if( (board[location[36].first-su][location[36].second] > 20) && (board[location[36].first-su][location[36].second] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[36].first-su][location[36].second] > 0) && (board[location[36].first-su][location[36].second] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+60+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[36].first-su][location[36].second] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+60+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		su = 1;
		//backward moves
		while( (location[36].first+su <= 7) )
		{
			if( (board[location[36].first+su][location[36].second] > 20) && (board[location[36].first+su][location[36].second] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[36].first+su][location[36].second] > 0) && (board[location[36].first+su][location[36].second] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+67+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[36].first+su][location[36].second] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+67+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		su = 1;
		//left moves
		while( (location[36].second-su >= 0) )	
		{
			if( (board[location[36].first][location[36].second-su] > 20) && (board[location[36].first][location[36].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[36].first][location[36].second-su] > 0) && (board[location[36].first][location[36].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+74+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[36].first][location[36].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+74+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		
		su = 1;
		//right moves
		while( (location[36].second+su <= 7) )	
		{
			if( (board[location[36].first][location[36].second+su] > 20) && (board[location[36].first][location[36].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[36].first][location[36].second+su] > 0) && (board[location[36].first][location[36].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+81+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[36].first][location[36].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+81+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
	}
	
	
	//----------------------------------------------------------BISHOP-11----------------------------------------------------------------//
	
	if( (location[31].first >= 0) && (location[31].second >= 0) )
	{
		
		int su = 1;
		//forward-right move
		while( (location[31].first-su >= 0) && (location[31].second+su <= 7) )
		{
			if( (board[location[31].first-su][location[31].second+su] > 20) && (board[location[31].first-su][location[31].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[31].first-su][location[31].second+su] > 0) && (board[location[31].first-su][location[31].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+88+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[31].first-su][location[31].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+88+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		su = 1;
		//forward-left move
		while( (location[31].first-su >= 0) && (location[31].second-su >= 0) )
		{
			if( (board[location[31].first-su][location[31].second-su] > 20) && (board[location[31].first-su][location[31].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[31].first-su][location[31].second-su] > 0) && (board[location[31].first-su][location[31].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+95+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[31].first-su][location[31].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+95+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		su = 1;
		//backward-right move
		while( (location[31].first+su <= 7) && (location[31].second+su <= 7) )
		{
			if( (board[location[31].first+su][location[31].second+su] > 20) && (board[location[31].first+su][location[31].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[31].first+su][location[31].second+su] > 0) && (board[location[31].first+su][location[31].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+102+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[31].first+su][location[31].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+102+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		
		su = 1;
		//backward-left move
		while( (location[31].first+su <= 7) && (location[31].second-su >= 0) )
		{
			if( (board[location[31].first+su][location[31].second-su] > 20) && (board[location[31].first+su][location[31].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[31].first+su][location[31].second-su] > 0) && (board[location[31].first+su][location[31].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+109+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[31].first+su][location[31].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+109+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
	}
	
	
	//----------------------------------------------------------BISHOP-14----------------------------------------------------------------//
	
	if( (location[34].first >= 0) && (location[34].second >= 0) )
	{
		
		int su = 1;
		//forward-right move
		while( (location[34].first-su >= 0) && (location[34].second+su <= 7) )
		{
			if( (board[location[34].first-su][location[34].second+su] > 20) && (board[location[34].first-su][location[34].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[34].first-su][location[34].second+su] > 0) && (board[location[34].first-su][location[34].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+116+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[34].first-su][location[34].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+116+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		su = 1;
		//forward-left move
		while( (location[34].first-su >= 0) && (location[34].second-su >= 0) )
		{
			if( (board[location[34].first-su][location[34].second-su] > 20) && (board[location[34].first-su][location[34].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[34].first-su][location[34].second-su] > 0) && (board[location[34].first-su][location[34].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+123+su,side)))
				{
					return false;
				}
				break;
			}
			else if(board[location[34].first-su][location[34].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+123+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
		su = 1;
		//backward-right move
		while( (location[34].first+su <= 7) && (location[34].second+su <= 7) )
		{
			if( (board[location[34].first+su][location[34].second+su] > 20) && (board[location[34].first+su][location[34].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[34].first+su][location[34].second+su] > 0) && (board[location[34].first+su][location[34].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+130+su,side)))
				{
					result =300+130+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[34].first+su][location[34].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+130+su,side)))
				{
					result =300+130+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
		
		su = 1;
		//backward-left move
		while( (location[34].first+su <= 7) && (location[34].second-su >= 0) )
		{
			if( (board[location[34].first+su][location[34].second-su] > 20) && (board[location[34].first+su][location[34].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[34].first+su][location[34].second-su] > 0) && (board[location[34].first+su][location[34].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+137+su,side)))
				{
					result =300+137+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[34].first+su][location[34].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+137+su,side)))
				{
					result =300+137+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
	}
	
	
	//------------------------------------------------------------KNIGHT-10--------------------------------------------------------------//
	
	if( (location[30].first >= 0) && (location[30].second >= 0) )
	{
		
		//forward-right move
		if( (location[30].first-2 >= 0) && (location[30].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[30].first-2][location[30].second+1] == 0) || ( (board[location[30].first-2][location[30].second+1] > 0 ) && (board[location[30].first-2][location[30].second+1] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+145,side)))
				{
					result =300+145;
					return false;
					{
						
					}
				}
			}
		}
		
		//forward-left move
		if( (location[30].first-2 >= 0) && (location[30].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[30].first-2][location[30].second-1] == 0) || ( (board[location[30].first-2][location[30].second-1] > 0 ) && (board[location[30].first-2][location[30].second-1] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+146,side)))
				{
					result =300+146;
					return false;
					{
						
					}
				}
			}
		}
		
		//backward-right move
		if( (location[30].first+2 <= 7) && (location[30].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[30].first+2][location[30].second+1] == 0) || ( (board[location[30].first+2][location[30].second+1] > 0 ) && (board[location[30].first+2][location[30].second+1] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+147,side)))
				{
					result =300+147;
					return false;
					{
						
					}
				}
			}
		}
		
		//backward-left move
		if( (location[30].first+2 <= 7) && (location[30].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[30].first+2][location[30].second-1] == 0) || ( (board[location[30].first+2][location[30].second-1] > 0 ) && (board[location[30].first+2][location[30].second-1] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+148,side)))
				{
					result =300+148;
					return false;
					{
						
					}
				}
			}
		}
		
		//right-forward move
		if( (location[30].first-1 >= 0) && (location[30].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[30].first-1][location[30].second+2] == 0) || ( (board[location[30].first-1][location[30].second+2] > 0 ) && (board[location[30].first-1][location[30].second+2] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+149,side)))
				{
					result =300+149;
					return false;
					{
						
					}
				}
			}
		}
		
		//right-backward move
		if( (location[30].first+1 <= 7) && (location[30].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[30].first+1][location[30].second+2] == 0) || ( (board[location[30].first+1][location[30].second+2] > 0 ) && (board[location[30].first+1][location[30].second+2] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+150,side)))
				{
					result =300+150;
					return false;
					{
						
					}
				}
			}
		}
		
		//left-forward move
		if( (location[30].first-1 >= 0) && (location[30].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[30].first-1][location[30].second-2] == 0) || ( (board[location[30].first-1][location[30].second-2] > 0 ) && (board[location[30].first-1][location[30].second-2] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+151,side)))
				{
					result =300+151;
					return false;
					{
						
					}
				}
			}
		}
		
		//left-backward move
		if( (location[30].first+1 <= 7) && (location[30].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[30].first+1][location[30].second-2] == 0) || ( (board[location[30].first+1][location[30].second-2] > 0 ) && (board[location[30].first+1][location[30].second-2] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+152,side)))
				{
					result =300+152;
					return false;
					{
						
					}
				}
			}
		}
		
			
	}
	
	
	//------------------------------------------------------------KNIGHT-15--------------------------------------------------------------//
	
	if( (location[35].first >= 0) && (location[35].second >= 0) )
	{
		
		//forward-right move
		if( (location[35].first-2 >= 0) && (location[35].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[35].first-2][location[35].second+1] == 0) || ( (board[location[35].first-2][location[35].second+1] > 0 ) && (board[location[35].first-2][location[35].second+1] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+153,side)))
				{
					result =300+153;
					return false;
					{
						
					}
				}
			}
		}
		
		//forward-left move
		if( (location[35].first-2 >= 0) && (location[35].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[35].first-2][location[35].second-1] == 0) || ( (board[location[35].first-2][location[35].second-1] > 0 ) && (board[location[35].first-2][location[35].second-1] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+154,side)))
				{
					result =300+154;
					return false;
					{
						
					}
				}
			}
		}
		
		//backward-right move
		if( (location[35].first+2 <= 7) && (location[35].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[35].first+2][location[35].second+1] == 0) || ( (board[location[35].first+2][location[35].second+1] > 0 ) && (board[location[35].first+2][location[35].second+1] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+155,side)))
				{
					result =300+155;
					return false;
					{
						
					}
				}
			}
		}
		
		//backward-left move
		if( (location[35].first+2 <= 7) && (location[35].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[35].first+2][location[35].second-1] == 0) || ( (board[location[35].first+2][location[35].second-1] > 0 ) && (board[location[35].first+2][location[35].second-1] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+156,side)))
				{
					result =300+156;
					return false;
					{
						
					}
				}
			}
		}
		
		//right-forward move
		if( (location[35].first-1 >= 0) && (location[35].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[35].first-1][location[35].second+2] == 0) || ( (board[location[35].first-1][location[35].second+2] > 0 ) && (board[location[35].first-1][location[35].second+2] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+157,side)))
				{
					result =300+157;
					return false;
					{
						
					}
				}
			}
		}
		
		//right-backward move
		if( (location[35].first+1 <= 7) && (location[35].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[35].first+1][location[35].second+2] == 0) || ( (board[location[35].first+1][location[35].second+2] > 0 ) && (board[location[35].first+1][location[35].second+2] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+158,side)))
				{
					result =300+158;
					return false;
					{
						
					}
				}
			}
		}
		
		//left-forward move
		if( (location[35].first-1 >= 0) && (location[35].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[35].first-1][location[35].second-2] == 0) || ( (board[location[35].first-1][location[35].second-2] > 0 ) && (board[location[35].first-1][location[35].second-2] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+159,side)))
				{
					result =300+159;
					return false;
					{
						
					}
				}
			}
		}
		
		//left-backward move
		if( (location[35].first+1 <= 7) && (location[35].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[35].first+1][location[35].second-2] == 0) || ( (board[location[35].first+1][location[35].second-2] > 0 ) && (board[location[35].first+1][location[35].second-2] < 17 ) ) ) //check if empty or opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+160,side)))
				{
					result =300+160;
					return false;
					{
						
					}
				}
			}
		}
		
			
	}
	
	
	//---------------------------------------------------------QUEEN-12------------------------------------------------------------------//
	
	if( (location[32].first >= 0) && (location[32].second >= 0) )
	{
		
		int su=1;
		//forward moves
		while( (location[32].first-su >= 0) )
		{
			if( (board[location[32].first-su][location[32].second] > 20) && (board[location[32].first-su][location[32].second] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[32].first-su][location[32].second] > 0) && (board[location[32].first-su][location[32].second] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+160+su,side)))
				{
					result =300+160+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[32].first-su][location[32].second] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+160+su,side)))
				{
					result =300+160+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
		su = 1;
		//backward moves
		while( (location[32].first+su <= 7) )
		{
			if( (board[location[32].first+su][location[32].second] > 20) && (board[location[32].first+su][location[32].second] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[32].first+su][location[32].second] > 0) && (board[location[32].first+su][location[32].second] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+167+su,side)))
				{
					result =300+167+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[32].first+su][location[32].second] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+167+su,side)))
				{
					result =300+167+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
		su = 1;
		//left moves
		while( (location[32].second-su >= 0) )	
		{
			if( (board[location[32].first][location[32].second-su] > 20) && (board[location[32].first][location[32].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[32].first][location[32].second-su] > 0) && (board[location[32].first][location[32].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+174+su,side)))
				{
					result =300+174+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[32].first][location[32].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+174+su,side)))
				{
					result =300+174+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
		
		su = 1;
		//right moves
		while( (location[32].second+su <= 7) )	
		{
			if( (board[location[32].first][location[32].second+su] > 20) && (board[location[32].first][location[32].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[32].first][location[32].second+su] > 0) && (board[location[32].first][location[32].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+181+su,side)))
				{
					result =300+181+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[32].first][location[32].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+181+su,side)))
				{
					result =300+181+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
		
		su = 1;
		//forward-right move
		while( (location[32].first-su >= 0) && (location[32].second+su <= 7) )
		{
			if( (board[location[32].first-su][location[32].second+su] > 20) && (board[location[32].first-su][location[32].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[32].first-su][location[32].second+su] > 0) && (board[location[32].first-su][location[32].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+188+su,side)))
				{
					result =300+188+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[32].first-su][location[32].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+188+su,side)))
				{
					result =300+188+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
		su = 1;
		//forward-left move
		while( (location[32].first-su >= 0) && (location[32].second-su >= 0) )
		{
			if( (board[location[32].first-su][location[32].second-su] > 20) && (board[location[32].first-su][location[32].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[32].first-su][location[32].second-su] > 0) && (board[location[32].first-su][location[32].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+195+su,side)))
				{
					result =300+195+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[32].first-su][location[32].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+195+su,side)))
				{
					result =300+195+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
		su = 1;
		//backward-right move
		while( (location[32].first+su <= 7) && (location[32].second+su <= 7) )
		{
			if( (board[location[32].first+su][location[32].second+su] > 20) && (board[location[32].first+su][location[32].second+su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[32].first+su][location[32].second+su] > 0) && (board[location[32].first+su][location[32].second+su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+202+su,side)))
				{
					result =300+202+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[32].first+su][location[32].second+su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+202+su,side)))
				{
					result =300+202+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
		
		su = 1;
		//backward-left move
		while( (location[32].first+su <= 7) && (location[32].second-su >= 0) )
		{
			if( (board[location[32].first+su][location[32].second-su] > 20) && (board[location[32].first+su][location[32].second-su] < 37) ) //same kind
			{
				break;
			}
			else if( (board[location[32].first+su][location[32].second-su] > 0) && (board[location[32].first+su][location[32].second-su] < 17) ) //opposite kind
			{
				if(!(underAttack(location[33].first,location[33].second,300+209+su,side)))
				{
					result =300+209+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[32].first+su][location[32].second-su] == 0) //empty
			{
				if(!(underAttack(location[33].first,location[33].second,300+209+su,side)))
				{
					result =300+209+su;
					return false;
					{
						
					}
				}
			}
			su++;
		}
		
	
		
	}
	
	//----------------------------------------------------PAWNS--------------------------------------------------------------------------//
	
	//pawn-1
	if((location[21].first >= 0) && (location[21].second >= 0))		//if exists
	{
		//forward move 
		if((location[21].first != 7))
		{
			if((board[location[21].first+1][location[21].second] == 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+1,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+1;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[21].first == 1)
		{
			if( (board[location[21].first+1][location[21].second] == 0) && (board[location[21].first+2][location[21].second] == 0) )
			{
				if(!(underAttack(location[33].first,location[33].second,300+2,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+2;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[21].first != 7) && (location[21].second != 0))
		{
			if((board[location[21].first+1][location[21].second-1] < 17) && (board[location[21].first+1][location[21].second-1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+3,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+3;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[21].first != 7) && (location[21].second != 7))
		{
			if((board[location[21].first+1][location[21].second+1] < 17) && (board[location[21].first+1][location[21].second+1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+4,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+4;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}

	}

	
	//pawn-2
	if((location[22].first >= 0) && (location[22].second >= 0))		//if exists
	{
		//forward move 
		if((location[22].first != 7))
		{
			if((board[location[22].first+1][location[22].second] == 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+5,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+5;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[22].first == 1)
		{
			if( (board[location[22].first+1][location[22].second] == 0) && (board[location[22].first+2][location[22].second] == 0) )
			{
				if(!(underAttack(location[33].first,location[33].second,300+6,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+6;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[22].first != 7) && (location[22].second != 0))
		{
			if((board[location[22].first+1][location[22].second-1] < 17) && (board[location[22].first+1][location[22].second-1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+7,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+7;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[22].first != 7) && (location[22].second != 7))
		{
			if((board[location[22].first+1][location[22].second+1] < 17) && (board[location[22].first+1][location[22].second+1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+8,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+8;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}

	}	


	//pawn-3
	if((location[23].first >= 0) && (location[23].second >= 0))		//if exists
	{
		//forward move 
		if((location[23].first != 7))
		{
			if((board[location[23].first+1][location[23].second] == 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+9,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+9;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[23].first == 1)
		{
			if( (board[location[23].first+1][location[23].second] == 0) && (board[location[23].first+2][location[23].second] == 0) )
			{
				if(!(underAttack(location[33].first,location[33].second,300+10,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+10;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[23].first != 7) && (location[23].second != 0))
		{
			if((board[location[23].first+1][location[23].second-1] < 17) && (board[location[23].first+1][location[23].second-1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+11,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+11;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[23].first != 7) && (location[23].second != 7))
		{
			if((board[location[23].first+1][location[23].second+1] < 17) && (board[location[23].first+1][location[23].second+1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+12,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+12;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}

	}	
	

	//pawn-4
	if((location[24].first >= 0) && (location[24].second >= 0))		//if exists
	{
		//forward move 
		if((location[24].first != 7))
		{
			if((board[location[24].first+1][location[24].second] == 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+13,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+13;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[24].first == 1)
		{
			if( (board[location[24].first+1][location[24].second] == 0) && (board[location[24].first+2][location[24].second] == 0) )
			{
				if(!(underAttack(location[33].first,location[33].second,300+14,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+14;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[24].first != 7) && (location[24].second != 0))
		{
			if((board[location[24].first+1][location[24].second-1] < 17) && (board[location[24].first+1][location[24].second-1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+15,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+15;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[24].first != 7) && (location[24].second != 7))
		{
			if((board[location[24].first+1][location[24].second+1] < 17) && (board[location[24].first+1][location[24].second+1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+16,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+16;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}

	}	


	//pawn-5
	if((location[25].first >= 0) && (location[25].second >= 0))		//if exists
	{
		//forward move 
		if((location[25].first != 7))
		{
			if((board[location[25].first+1][location[25].second] == 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+17,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+17;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[25].first == 1)
		{
			if( (board[location[25].first+1][location[25].second] == 0) && (board[location[25].first+2][location[25].second] == 0) )
			{
				if(!(underAttack(location[33].first,location[33].second,300+18,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+18;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[25].first != 7) && (location[25].second != 0))
		{
			if((board[location[25].first+1][location[25].second-1] < 17) && (board[location[25].first+1][location[25].second-1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+19,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+19;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[25].first != 7) && (location[25].second != 7))
		{
			if((board[location[25].first+1][location[25].second+1] < 17) && (board[location[25].first+1][location[25].second+1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+20,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+20;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}

	}	


	//pawn-6
	if((location[26].first >= 0) && (location[26].second >= 0))		//if exists
	{
		//forward move 
		if((location[26].first != 7))
		{
			if((board[location[26].first+1][location[26].second] == 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+21,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+21;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[26].first == 1)
		{
			if( (board[location[26].first+1][location[26].second] == 0) && (board[location[26].first+2][location[26].second] == 0) )
			{
				if(!(underAttack(location[33].first,location[33].second,300+22,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+22;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[26].first != 7) && (location[26].second != 0))
		{
			if((board[location[26].first+1][location[26].second-1] < 17) && (board[location[26].first+1][location[26].second-1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+23,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+23;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[26].first != 7) && (location[26].second != 7))
		{
			if((board[location[26].first+1][location[26].second+1] < 17) && (board[location[26].first+1][location[26].second+1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+24,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+24;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}

	}	


	//pawn-7
	if((location[27].first >= 0) && (location[27].second >= 0))		//if exists
	{
		//forward move 
		if((location[27].first != 7))
		{
			if((board[location[27].first+1][location[27].second] == 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+25,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+25;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[27].first == 1)
		{
			if( (board[location[27].first+1][location[27].second] == 0) && (board[location[27].first+2][location[27].second] == 0) )
			{
				if(!(underAttack(location[33].first,location[33].second,300+26,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+26;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[27].first != 7) && (location[27].second != 0))
		{
			if((board[location[27].first+1][location[27].second-1] < 17) && (board[location[27].first+1][location[27].second-1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+27,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+27;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[27].first != 7) && (location[27].second != 7))
		{
			if((board[location[27].first+1][location[27].second+1] < 17) && (board[location[27].first+1][location[27].second+1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+28,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+28;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}

	}	


	//pawn-8
	if((location[28].first >= 0) && (location[28].second >= 0))		//if exists
	{
		//forward move 
		if((location[28].first != 7))
		{
			if((board[location[28].first+1][location[28].second] == 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+29,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+29;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//forward move - two steps
		if(location[28].first == 1)
		{
			if( (board[location[28].first+1][location[28].second] == 0) && (board[location[28].first+2][location[28].second] == 0) )
			{
				if(!(underAttack(location[33].first,location[33].second,300+30,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+30;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - left
		if((location[28].first != 7) && (location[28].second != 0))
		{
			if((board[location[28].first+1][location[28].second-1] < 17) && (board[location[28].first+1][location[28].second-1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+31,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+31;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}
		
		//diagonal capture - right
		if((location[28].first != 7) && (location[28].second != 7))
		{
			if((board[location[28].first+1][location[28].second+1] < 17) && (board[location[28].first+1][location[28].second+1] > 0))
			{
				if(!(underAttack(location[33].first,location[33].second,300+32,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					result =300+32;		//(moveLabel,side,moveCount)
					return false;
					{
						
					}
				}
			}
		}

	}	

	
	return true;
	
}





//------------------------------------------------------------------W-H-I-T-E----------------------------------------------------------------------------------------//


else if(side == true) //white
{
	
		
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
					result = 217;
					return false;
					{
						
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
					result = 218;
					return false;
					{
						
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
					result = 219;
					return false;
					{
						
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
					result = 220;
					return false;
					{
						
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
					result = 221;
					return false;
					{
						
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
					result = 222;
					return false;
					{
						
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
					result = 223;
					return false;
					{
						
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
					result = 224;
					return false;
					{
						
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
					result = 32+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[9].first-su][location[9].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,32+su,side)))
				{
					result = 32+su;
					return false;
					{
						
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
					result = 39+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[9].first+su][location[9].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,39+su,side)))
				{
					result = 39+su;
					return false;
					{
						
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
					result = 46+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[9].first][location[9].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,46+su,side)))
				{
					result = 46+su;
					return false;
					{
						
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
					result = 53+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[9].first][location[9].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,53+su,side)))
				{
					result = 53+su;
					return false;
					{
						
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
					result = 60+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[16].first-su][location[16].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,60+su,side)))
				{
					result = 60+su;
					return false;
					{
						
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
					result = 67+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[16].first+su][location[16].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,67+su,side)))
				{
					result = 67+su;
					return false;
					{
						
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
					result = 74+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[16].first][location[16].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,74+su,side)))
				{
					result = 74+su;
					return false;
					{
						
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
					result = 81+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[16].first][location[16].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,81+su,side)))
				{
					result = 81+su;
					return false;
					{
						
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
					result = 88+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[11].first-su][location[11].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,88+su,side)))
				{
					result = 88+su;
					return false;
					{
						
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
					result = 95+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[11].first-su][location[11].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,95+su,side)))
				{
					result = 95+su;
					return false;
					{
						
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
					result = 102+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[11].first+su][location[11].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,102+su,side)))
				{
					result = 102+su;
					return false;
					{
						
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
					result = 109+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[11].first+su][location[11].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,109+su,side)))
				{
					result = 109+su;
					return false;
					{
						
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
					result = 116+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[14].first-su][location[14].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,116+su,side)))
				{
					result = 116+su;
					return false;
					{
						
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
					result = 123+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[14].first-su][location[14].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,123+su,side)))
				{
					result = 123+su;
					return false;
					{
						
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
					result = 130+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[14].first+su][location[14].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,130+su,side)))
				{
					result = 130+su;
					return false;
					{
						
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
					result = 137+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[14].first+su][location[14].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,137+su,side)))
				{
					result = 137+su;
					return false;
					{
						
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
					result = 145;
					return false;
					{
						
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
					result = 146;
					return false;
					{
						
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
					result = 147;
					return false;
					{
						
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
					result = 148;
					return false;
					{
						
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
					result = 149;
					return false;
					{
						
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
					result = 150;
					return false;
					{
						
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
					result = 151;
					return false;
					{
						
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
					result = 152;
					return false;
					{
						
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
					result = 153;
					return false;
					{
						
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
					result = 154;
					return false;
					{
						
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
					result = 155;
					return false;
					{
						
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
					result = 156;
					return false;
					{
						
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
					result = 157;
					return false;
					{
						
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
					result = 158;
					return false;
					{
						
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
					result = 159;
					return false;
					{
						
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
					result = 160;
					return false;
					{
						
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
					result = 160+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,160+su,side)))
				{
					result = 160+su;
					return false;
					{
						
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
					result = 167+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,167+su,side)))
				{
					result = 167+su;
					return false;
					{
						
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
					result = 174+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[12].first][location[12].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,174+su,side)))
				{
					result = 174+su;
					return false;
					{
						
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
					result = 181+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[12].first][location[12].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,181+su,side)))
				{
					result = 181+su;
					return false;
					{
						
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
					result = 188+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,188+su,side)))
				{
					result = 188+su;
					return false;
					{
						
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
					result = 195+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[12].first-su][location[12].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,195+su,side)))
				{
					result = 195+su;
					return false;
					{
						
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
					result = 202+su;
					return false;
					{
						
					}
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second+su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,202+su,side)))
				{
					result = 202+su;
					return false;
					{
						
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
					return false;
				}
				break;
			}
			else if(board[location[12].first+su][location[12].second-su] == 0) //empty
			{
				if(!(underAttack(location[13].first,location[13].second,209+su,side)))
				{
					return false;
				}
			}
			su++;
		}
		
	
		
	}
	
	
	
	
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
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
					return false;
				}
			}
		}

	}
	
	
	return true;
	
	
}


} // end of function

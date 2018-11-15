#include "evaluation.h"
#include "whiteMoves.h"
#include "blackMoves.h"


shallowSearch(int moveCount = 0)
{
	bool side = false;
	
	//----------------------------------------------------PAWNS--------------------------------------------------------------------------//
	
	//pawn-1
	if((location[21].first >= 0) && (location[21].second >= 0))		//if exists
	{
		//forward move 
		if((location[21].first != 7))
		{
			if((board[location[21].first+1][location[21].second] == 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+1,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+1].value = evaluation(move[300+1],side,moveCount+1);		//(moveLabel,side,moveCount)
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+1);
				}
			}
		}
		
		//forward move - two steps
		if(location[21].first == 1)
		{
			if( (board[location[21].first+1][location[21].second] == 0) && (board[location[21].first+2][location[21].second] == 0) )
			{
				//if(!(underAttack(location[33].first,location[33].second,300+2,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+2].value = evaluation(move[300+2],side,moveCount+1);		//(moveLabel,side,moveCount)
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+2);
				}
			}
		}
		
		//diagonal capture - left
		if((location[21].first != 7) && (location[21].second != 0))
		{
			if((board[location[21].first+1][location[21].second-1] < 17) && (board[location[21].first+1][location[21].second-1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+3,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+3].value = evaluation(move[300+3],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+3);
				}
			}
		}
		
		//diagonal capture - right
		if((location[21].first != 7) && (location[21].second != 7))
		{
			if((board[location[21].first+1][location[21].second+1] < 17) && (board[location[21].first+1][location[21].second+1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+4,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+4].value = evaluation(move[300+4],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+4);
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
				//if(!(underAttack(location[33].first,location[33].second,300+5,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+5].value = evaluation(move[300+5],side,moveCount+1);		//(moveLabel,side,moveCount)
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+5);
				}
			}
		}
		
		//forward move - two steps
		if(location[22].first == 1)
		{
			if( (board[location[22].first+1][location[22].second] == 0) && (board[location[22].first+2][location[22].second] == 0) )
			{
				//if(!(underAttack(location[33].first,location[33].second,300+6,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+6].value = evaluation(move[300+6],side,moveCount+1);		//(moveLabel,side,moveCount)
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+6);
				}
			}
		}
		
		//diagonal capture - left
		if((location[22].first != 7) && (location[22].second != 0))
		{
			if((board[location[22].first+1][location[22].second-1] < 17) && (board[location[22].first+1][location[22].second-1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+7,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+7].value = evaluation(move[300+7],side,moveCount+1);		//(moveLabel,side,moveCount)
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+7);
				}
			}
		}
		
		//diagonal capture - right
		if((location[22].first != 7) && (location[22].second != 7))
		{
			if((board[location[22].first+1][location[22].second+1] < 17) && (board[location[22].first+1][location[22].second+1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+8,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+8].value = evaluation(move[300+8],side,moveCount+1);		//(moveLabel,side,moveCount)
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+8);
				}
			}
		}

	}	
	
	//cout<<"check m"<<k<<endl;
	//;

	//pawn-3
	if((location[23].first >= 0) && (location[23].second >= 0))		//if exists
	{
		//forward move 
		if((location[23].first != 7))
		{
			if((board[location[23].first+1][location[23].second] == 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+9,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+9].value = evaluation(move[300+9],side,moveCount+1);		//(moveLabel,side,moveCount)
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+9);
				}
			}
		}
		
		//forward move - two steps
		if(location[23].first == 1)
		{
			if( (board[location[23].first+1][location[23].second] == 0) && (board[location[23].first+2][location[23].second] == 0) )
			{
				//if(!(underAttack(location[33].first,location[33].second,300+10,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+10].value = evaluation(move[300+10],side,moveCount+1);		//(moveLabel,side,moveCount)
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+10);
				}
			}
		}
		
		//diagonal capture - left
		if((location[23].first != 7) && (location[23].second != 0))
		{
			if((board[location[23].first+1][location[23].second-1] < 17) && (board[location[23].first+1][location[23].second-1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+11,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+11].value = evaluation(move[300+11],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+11);
				}
			}
		}
		
		//diagonal capture - right
		if((location[23].first != 7) && (location[23].second != 7))
		{
			if((board[location[23].first+1][location[23].second+1] < 17) && (board[location[23].first+1][location[23].second+1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+12,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+12].value = evaluation(move[300+12],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+12);
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
				//if(!(underAttack(location[33].first,location[33].second,300+13,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+13].value = evaluation(move[300+13],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+13);
				}
			}
		}
		
		//forward move - two steps
		if(location[24].first == 1)
		{
			if( (board[location[24].first+1][location[24].second] == 0) && (board[location[24].first+2][location[24].second] == 0) )
			{
				//if(!(underAttack(location[33].first,location[33].second,300+14,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+14].value = evaluation(move[300+14],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+14);
				}
			}
		}
		
		//diagonal capture - left
		if((location[24].first != 7) && (location[24].second != 0))
		{
			if((board[location[24].first+1][location[24].second-1] < 17) && (board[location[24].first+1][location[24].second-1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+15,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+15].value = evaluation(move[300+15],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+15);
				}
			}
		}
		
		//diagonal capture - right
		if((location[24].first != 7) && (location[24].second != 7))
		{
			if((board[location[24].first+1][location[24].second+1] < 17) && (board[location[24].first+1][location[24].second+1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+16,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+16].value = evaluation(move[300+16],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+16);
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
				//if(!(underAttack(location[33].first,location[33].second,300+17,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+17].value = evaluation(move[300+17],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+17);
				}
			}
		}
		
		//forward move - two steps
		if(location[25].first == 1)
		{
			if( (board[location[25].first+1][location[25].second] == 0) && (board[location[25].first+2][location[25].second] == 0) )
			{
				//if(!(underAttack(location[33].first,location[33].second,300+18,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+18].value = evaluation(move[300+18],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+18);
				}
			}
		}
		
		//diagonal capture - left
		if((location[25].first != 7) && (location[25].second != 0))
		{
			if((board[location[25].first+1][location[25].second-1] < 17) && (board[location[25].first+1][location[25].second-1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+19,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+19].value = evaluation(move[300+19],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+19);
				}
			}
		}
		
		//diagonal capture - right
		if((location[25].first != 7) && (location[25].second != 7))
		{
			if((board[location[25].first+1][location[25].second+1] < 17) && (board[location[25].first+1][location[25].second+1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+20,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+20].value = evaluation(move[300+20],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+20);
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
				//if(!(underAttack(location[33].first,location[33].second,300+21,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+21].value = evaluation(move[300+21],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+21);
				}
			}
		}
		
		//forward move - two steps
		if(location[26].first == 1)
		{
			if( (board[location[26].first+1][location[26].second] == 0) && (board[location[26].first+2][location[26].second] == 0) )
			{
				//if(!(underAttack(location[33].first,location[33].second,300+22,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+22].value = evaluation(move[300+22],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+22);
				}
			}
		}
		
		//diagonal capture - left
		if((location[26].first != 7) && (location[26].second != 0))
		{
			if((board[location[26].first+1][location[26].second-1] < 17) && (board[location[26].first+1][location[26].second-1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+23,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+23].value = evaluation(move[300+23],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+23);
				}
			}
		}
		
		//diagonal capture - right
		if((location[26].first != 7) && (location[26].second != 7))
		{
			if((board[location[26].first+1][location[26].second+1] < 17) && (board[location[26].first+1][location[26].second+1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+24,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+24].value = evaluation(move[300+24],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+24);
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
				//if(!(underAttack(location[33].first,location[33].second,300+25,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+25].value = evaluation(move[300+25],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+25);
				}
			}
		}
		
		//forward move - two steps
		if(location[27].first == 1)
		{
			if( (board[location[27].first+1][location[27].second] == 0) && (board[location[27].first+2][location[27].second] == 0) )
			{
				//if(!(underAttack(location[33].first,location[33].second,300+26,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+26].value = evaluation(move[300+26],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+26);
				}
			}
		}
		
		//diagonal capture - left
		if((location[27].first != 7) && (location[27].second != 0))
		{
			if((board[location[27].first+1][location[27].second-1] < 17) && (board[location[27].first+1][location[27].second-1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+27,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+27].value = evaluation(move[300+27],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+27);
				}
			}
		}
		
		//diagonal capture - right
		if((location[27].first != 7) && (location[27].second != 7))
		{
			if((board[location[27].first+1][location[27].second+1] < 17) && (board[location[27].first+1][location[27].second+1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+28,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+28].value = evaluation(move[300+28],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+28);
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
				//if(!(underAttack(location[33].first,location[33].second,300+29,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+29].value = evaluation(move[300+29],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+29);
				}
			}
		}
		
		//forward move - two steps
		if(location[28].first == 1)
		{
			if( (board[location[28].first+1][location[28].second] == 0) && (board[location[28].first+2][location[28].second] == 0) )
			{
				//if(!(underAttack(location[33].first,location[33].second,300+30,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+30].value = evaluation(move[300+30],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+30);
				}
			}
		}
		
		//diagonal capture - left
		if((location[28].first != 7) && (location[28].second != 0))
		{
			if((board[location[28].first+1][location[28].second-1] < 17) && (board[location[28].first+1][location[28].second-1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+31,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+31].value = evaluation(move[300+31],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+31);
				}
			}
		}
		
		//diagonal capture - right
		if((location[28].first != 7) && (location[28].second != 7))
		{
			if((board[location[28].first+1][location[28].second+1] < 17) && (board[location[28].first+1][location[28].second+1] > 0))
			{
				//if(!(underAttack(location[33].first,location[33].second,300+32,side)))		//(rowOfKing,colOfKing,moveLabel,side)
				{
					move[300+32].value = evaluation(move[300+32],side,moveCount+1);		//(moveLabel,side,moveCount)
					posMoves.push_back(300+32);
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
				//if(!(underAttack(location[33].first,location[33].second,300+32+su,side)))
				{
					move[300+32+su].value = evaluation(move[300+32+su],side,moveCount+1);
					posMoves.push_back(300+32+su);
				}
				break;
			}
			else if(board[location[29].first-su][location[29].second] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+32+su,side)))
				{
					move[300+32+su].value = evaluation(move[300+32+su],side,moveCount+1);
					posMoves.push_back(300+32+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+39+su,side)))
				{
					move[300+39+su].value = evaluation(move[300+39+su],side,moveCount+1);
					posMoves.push_back(300+39+su);
				}
				break;
			}
			else if(board[location[29].first+su][location[29].second] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+39+su,side)))
				{
					move[300+39+su].value = evaluation(move[300+39+su],side,moveCount+1);
					posMoves.push_back(300+39+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+46+su,side)))
				{
					move[300+46+su].value = evaluation(move[300+46+su],side,moveCount+1);
					posMoves.push_back(300+46+su);
				}
				break;
			}
			else if(board[location[29].first][location[29].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+46+su,side)))
				{
					move[300+46+su].value = evaluation(move[300+46+su],side,moveCount+1);
					posMoves.push_back(300+46+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+53+su,side)))
				{
					move[300+53+su].value = evaluation(move[300+53+su],side,moveCount+1);
					posMoves.push_back(300+53+su);
				}
				break;
			}
			else if(board[location[29].first][location[29].second+su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+53+su,side)))
				{
					move[300+53+su].value = evaluation(move[300+53+su],side,moveCount+1);
					posMoves.push_back(300+53+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+60+su,side)))
				{
					move[300+60+su].value = evaluation(move[300+60+su],side,moveCount+1);
					posMoves.push_back(300+60+su);
				}
				break;
			}
			else if(board[location[36].first-su][location[36].second] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+60+su,side)))
				{
					move[300+60+su].value = evaluation(move[300+60+su],side,moveCount+1);
					posMoves.push_back(300+60+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+67+su,side)))
				{
					move[300+67+su].value = evaluation(move[300+67+su],side,moveCount+1);
					posMoves.push_back(300+67+su);
				}
				break;
			}
			else if(board[location[36].first+su][location[36].second] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+67+su,side)))
				{
					move[300+67+su].value = evaluation(move[300+67+su],side,moveCount+1);
					posMoves.push_back(300+67+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+74+su,side)))
				{
					move[300+74+su].value = evaluation(move[300+74+su],side,moveCount+1);
					posMoves.push_back(300+74+su);
				}
				break;
			}
			else if(board[location[36].first][location[36].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+74+su,side)))
				{
					move[300+74+su].value = evaluation(move[300+74+su],side,moveCount+1);
					posMoves.push_back(300+74+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+81+su,side)))
				{
					move[300+81+su].value = evaluation(move[300+81+su],side,moveCount+1);
					posMoves.push_back(300+81+su);
				}
				break;
			}
			else if(board[location[36].first][location[36].second+su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+81+su,side)))
				{
					move[300+81+su].value = evaluation(move[300+81+su],side,moveCount+1);
					posMoves.push_back(300+81+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+88+su,side)))
				{
					move[300+88+su].value = evaluation(move[300+88+su],side,moveCount+1);
					posMoves.push_back(300+88+su);
				}
				break;
			}
			else if(board[location[31].first-su][location[31].second+su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+88+su,side)))
				{
					move[300+88+su].value = evaluation(move[300+88+su],side,moveCount+1);
					posMoves.push_back(300+88+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+95+su,side)))
				{
					move[300+95+su].value = evaluation(move[300+95+su],side,moveCount+1);
					posMoves.push_back(300+95+su);
				}
				break;
			}
			else if(board[location[31].first-su][location[31].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+95+su,side)))
				{
					move[300+95+su].value = evaluation(move[300+95+su],side,moveCount+1);
					posMoves.push_back(300+95+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+102+su,side)))
				{
					move[300+102+su].value = evaluation(move[300+102+su],side,moveCount+1);
					posMoves.push_back(300+102+su);
				}
				break;
			}
			else if(board[location[31].first+su][location[31].second+su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+102+su,side)))
				{
					move[300+102+su].value = evaluation(move[300+102+su],side,moveCount+1);
					posMoves.push_back(300+102+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+109+su,side)))
				{
					move[300+109+su].value = evaluation(move[300+109+su],side,moveCount+1);
					posMoves.push_back(300+109+su);
				}
				break;
			}
			else if(board[location[31].first+su][location[31].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+109+su,side)))
				{
					move[300+109+su].value = evaluation(move[300+109+su],side,moveCount+1);
					posMoves.push_back(300+109+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+116+su,side)))
				{
					move[300+116+su].value = evaluation(move[300+116+su],side,moveCount+1);
					posMoves.push_back(300+116+su);
				}
				break;
			}
			else if(board[location[34].first-su][location[34].second+su] == 0) //empty 
			{
				//if(!(underAttack(location[33].first,location[33].second,300+116+su,side)))
				{
					move[300+116+su].value = evaluation(move[300+116+su],side,moveCount+1);
					posMoves.push_back(300+116+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+123+su,side)))
				{
					move[300+123+su].value = evaluation(move[300+123+su],side,moveCount+1);
					posMoves.push_back(300+123+su);
				}
				break;
			}
			else if(board[location[34].first-su][location[34].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+123+su,side)))
				{
					move[300+123+su].value = evaluation(move[300+123+su],side,moveCount+1);
					posMoves.push_back(300+123+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+130+su,side)))
				{
					move[300+130+su].value = evaluation(move[300+130+su],side,moveCount+1);
					posMoves.push_back(300+130+su);
				}
				break;
			}
			else if(board[location[34].first+su][location[34].second+su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+130+su,side)))
				{
					move[300+130+su].value = evaluation(move[300+130+su],side,moveCount+1);
					posMoves.push_back(300+130+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+137+su,side)))
				{
					move[300+137+su].value = evaluation(move[300+137+su],side,moveCount+1);
					posMoves.push_back(300+137+su);
				}
				break;
			}
			else if(board[location[34].first+su][location[34].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+137+su,side)))
				{
					move[300+137+su].value = evaluation(move[300+137+su],side,moveCount+1);
					posMoves.push_back(300+137+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+145,side)))
				{
					move[300+145].value = evaluation(move[300+145],side,moveCount+1);
					posMoves.push_back(300+145);
				}
			}
		}
		
		//forward-left move
		if( (location[30].first-2 >= 0) && (location[30].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[30].first-2][location[30].second-1] == 0) || ( (board[location[30].first-2][location[30].second-1] > 0 ) && (board[location[30].first-2][location[30].second-1] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+146,side)))
				{
					move[300+146].value = evaluation(move[300+146],side,moveCount+1);
					posMoves.push_back(300+146);
				}
			}
		}
		
		//backward-right move
		if( (location[30].first+2 <= 7) && (location[30].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[30].first+2][location[30].second+1] == 0) || ( (board[location[30].first+2][location[30].second+1] > 0 ) && (board[location[30].first+2][location[30].second+1] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+147,side)))
				{
					move[300+147].value = evaluation(move[300+147],side,moveCount+1);
					posMoves.push_back(300+147);
				}
			}
		}
		
		//backward-left move
		if( (location[30].first+2 <= 7) && (location[30].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[30].first+2][location[30].second-1] == 0) || ( (board[location[30].first+2][location[30].second-1] > 0 ) && (board[location[30].first+2][location[30].second-1] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+148,side)))
				{
					move[300+148].value = evaluation(move[300+148],side,moveCount+1);
					posMoves.push_back(300+148);
				}
			}
		}
		
		//right-forward move
		if( (location[30].first-1 >= 0) && (location[30].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[30].first-1][location[30].second+2] == 0) || ( (board[location[30].first-1][location[30].second+2] > 0 ) && (board[location[30].first-1][location[30].second+2] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+149,side)))
				{
					move[300+149].value = evaluation(move[300+149],side,moveCount+1);
					posMoves.push_back(300+149);
				}
			}
		}
		
		//right-backward move
		if( (location[30].first+1 <= 7) && (location[30].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[30].first+1][location[30].second+2] == 0) || ( (board[location[30].first+1][location[30].second+2] > 0 ) && (board[location[30].first+1][location[30].second+2] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+150,side)))
				{
					move[300+150].value = evaluation(move[300+150],side,moveCount+1);
					posMoves.push_back(300+150);
				}
			}
		}
		
		//left-forward move
		if( (location[30].first-1 >= 0) && (location[30].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[30].first-1][location[30].second-2] == 0) || ( (board[location[30].first-1][location[30].second-2] > 0 ) && (board[location[30].first-1][location[30].second-2] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+151,side)))
				{
					move[300+151].value = evaluation(move[300+151],side,moveCount+1);
					posMoves.push_back(300+151);
				}
			}
		}
		
		//left-backward move
		if( (location[30].first+1 <= 7) && (location[30].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[30].first+1][location[30].second-2] == 0) || ( (board[location[30].first+1][location[30].second-2] > 0 ) && (board[location[30].first+1][location[30].second-2] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+152,side)))
				{
					move[300+152].value = evaluation(move[300+152],side,moveCount+1);
					posMoves.push_back(300+152);
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
				//if(!(underAttack(location[33].first,location[33].second,300+153,side)))
				{
					move[300+153].value = evaluation(move[300+153],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+153);
				}
			}
		}
		
		//forward-left move
		if( (location[35].first-2 >= 0) && (location[35].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[35].first-2][location[35].second-1] == 0) || ( (board[location[35].first-2][location[35].second-1] > 0 ) && (board[location[35].first-2][location[35].second-1] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+154,side)))
				{
					move[300+154].value = evaluation(move[300+154],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+154);
				}
			}
		}
		
		//backward-right move
		if( (location[35].first+2 <= 7) && (location[35].second+1 <= 7) ) // check if it is within the board
		{
			if( (board[location[35].first+2][location[35].second+1] == 0) || ( (board[location[35].first+2][location[35].second+1] > 0 ) && (board[location[35].first+2][location[35].second+1] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+155,side)))
				{
					move[300+155].value = evaluation(move[300+155],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+155);
				}
			}
		}
		
		//backward-left move
		if( (location[35].first+2 <= 7) && (location[35].second-1 >= 0) ) // check if it is within the board
		{
			if( (board[location[35].first+2][location[35].second-1] == 0) || ( (board[location[35].first+2][location[35].second-1] > 0 ) && (board[location[35].first+2][location[35].second-1] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+156,side)))
				{
					move[300+156].value = evaluation(move[300+156],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+156);
				}
			}
		}
		
		//right-forward move
		if( (location[35].first-1 >= 0) && (location[35].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[35].first-1][location[35].second+2] == 0) || ( (board[location[35].first-1][location[35].second+2] > 0 ) && (board[location[35].first-1][location[35].second+2] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+157,side)))
				{
					move[300+157].value = evaluation(move[300+157],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+157);
				}
			}
		}
		
		//right-backward move
		if( (location[35].first+1 <= 7) && (location[35].second+2 <= 7) ) // check if it is within the board
		{
			if( (board[location[35].first+1][location[35].second+2] == 0) || ( (board[location[35].first+1][location[35].second+2] > 0 ) && (board[location[35].first+1][location[35].second+2] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+158,side)))
				{
					move[300+158].value = evaluation(move[300+158],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+158);
				}
			}
		}
		
		//left-forward move
		if( (location[35].first-1 >= 0) && (location[35].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[35].first-1][location[35].second-2] == 0) || ( (board[location[35].first-1][location[35].second-2] > 0 ) && (board[location[35].first-1][location[35].second-2] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+159,side)))
				{
					move[300+159].value = evaluation(move[300+159],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+159);
				}
			}
		}
		
		//left-backward move
		if( (location[35].first+1 <= 7) && (location[35].second-2 >= 0) ) // check if it is within the board
		{
			if( (board[location[35].first+1][location[35].second-2] == 0) || ( (board[location[35].first+1][location[35].second-2] > 0 ) && (board[location[35].first+1][location[35].second-2] < 17 ) ) ) //check if empty or opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second,300+160,side)))
				{
					move[300+160].value = evaluation(move[300+160],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+160);
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
				//if(!(underAttack(location[33].first,location[33].second,300+160+su,side)))
				{
					move[300+160+su].value = evaluation(move[300+160+su],side,moveCount+1);
					//cout<<"check s "<<k<<endl;

					posMoves.push_back(300+160+su);
				}
				break;
			}
			else if(board[location[32].first-su][location[32].second] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+160+su,side)))
				{
					move[300+160+su].value = evaluation(move[300+160+su],side,moveCount+1);
					posMoves.push_back(300+160+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+167+su,side)))
				{
					move[300+167+su].value = evaluation(move[300+167+su],side,moveCount+1);
					posMoves.push_back(300+167+su);
				}
				break;
			}
			else if(board[location[32].first+su][location[32].second] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+167+su,side)))
				{
					move[300+167+su].value = evaluation(move[300+167+su],side,moveCount+1);
					posMoves.push_back(300+167+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+174+su,side)))
				{
					move[300+174+su].value = evaluation(move[300+174+su],side,moveCount+1);
					posMoves.push_back(300+174+su);
				}
				break;
			}
			else if(board[location[32].first][location[32].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+174+su,side)))
				{
					move[300+174+su].value = evaluation(move[300+174+su],side,moveCount+1);
					posMoves.push_back(300+174+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+181+su,side)))
				{
					move[300+181+su].value = evaluation(move[300+181+su],side,moveCount+1);
					posMoves.push_back(300+181+su);
				}
				break;
			}
			else if(board[location[32].first][location[32].second+su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+181+su,side)))
				{
					move[300+181+su].value = evaluation(move[300+181+su],side,moveCount+1);
					posMoves.push_back(300+181+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+188+su,side)))
				{
					move[300+188+su].value = evaluation(move[300+188+su],side,moveCount+1);
					posMoves.push_back(300+188+su);
				}
				break;
			}
			else if(board[location[32].first-su][location[32].second+su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+188+su,side)))
				{
					move[300+188+su].value = evaluation(move[300+188+su],side,moveCount+1);
					posMoves.push_back(300+188+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+195+su,side)))
				{
					move[300+195+su].value = evaluation(move[300+195+su],side,moveCount+1);
					posMoves.push_back(300+195+su);
				}
				break;
			}
			else if(board[location[32].first-su][location[32].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+195+su,side)))
				{
					move[300+195+su].value = evaluation(move[300+195+su],side,moveCount+1);
					posMoves.push_back(300+195+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+202+su,side)))
				{
					move[300+202+su].value = evaluation(move[300+202+su],side,moveCount+1);
					posMoves.push_back(300+202+su);
				}
				break;
			}
			else if(board[location[32].first+su][location[32].second+su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+202+su,side)))
				{
					move[300+202+su].value = evaluation(move[300+202+su],side,moveCount+1);
					posMoves.push_back(300+202+su);
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
				//if(!(underAttack(location[33].first,location[33].second,300+209+su,side)))
				{
					move[300+209+su].value = evaluation(move[300+209+su],side,moveCount+1);
					posMoves.push_back(300+209+su);
				}
				break;
			}
			else if(board[location[32].first+su][location[32].second-su] == 0) //empty
			{
				//if(!(underAttack(location[33].first,location[33].second,300+209+su,side)))
				{
					move[300+209+su].value = evaluation(move[300+209+su],side,moveCount+1);
					posMoves.push_back(300+209+su);
				}
			}
			su++;
		}
		
	
		
	}
	
	
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
					move[300+217].value = evaluation(move[300+217],side,moveCount+1);
					posMoves.push_back(300+217);
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
					move[300+218].value = evaluation(move[300+218],side,moveCount+1);
					posMoves.push_back(300+218);
				}
			}
		}
		
		//right move
		if( location[33].second+1 <= 7 ) //check if not out of bound
		{
			if((board[location[33].first][location[33].second+1] == 0) || ((board[location[33].first][location[33].second+1] < 17) && (board[location[33].first][location[33].second+1] > 0))) // check if empty (or) opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second+1,300+219,side))) //check if it is under attack
				{
					move[300+219].value = evaluation(move[300+219],side,moveCount+1);
					posMoves.push_back(300+219);
				}
			}
		}
		
		//left move
		if( location[33].second-1 >= 0 ) //check if not out of bound
		{
			if((board[location[33].first][location[33].second-1] == 0) || ((board[location[33].first][location[33].second-1] < 17) && (board[location[33].first][location[33].second-1] > 0))) // check if empty (or) opposite kind
			{
				//if(!(underAttack(location[33].first,location[33].second-1,300+220,side))) //check if it is under attack
				{
					move[300+220].value = evaluation(move[300+220],side,moveCount+1);
					posMoves.push_back(300+220);
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
					move[300+221].value = evaluation(move[300+221],side,moveCount+1);
					posMoves.push_back(300+221);
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
					move[300+222].value = evaluation(move[300+222],side,moveCount+1);
					posMoves.push_back(300+222);
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
					move[300+223].value = evaluation(move[300+223],side,moveCount+1);
					posMoves.push_back(300+223);
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
					move[300+224].value = evaluation(move[300+224],side,moveCount+1);
					posMoves.push_back(300+224);
				}
			}
		}
		
		
	}
	
	

}



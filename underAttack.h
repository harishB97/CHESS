
bool underAttack(int row,int column,int moveLabel,bool side)
{
	
	//------------------------------------------------------------------IMPLEMENTING THE MOVE--------------------------------------------------------------------//
	
	int pieceCaptured = move[moveLabel].implement();


	
	//-----------------------------------------------------------------CHECKING----------------------------------------------------------------------------------//
	int temp_row = row;
	int temp_col = column;
	if(side == false)
	{
		
		//------------------------------------------------------------START OF CHECKING--------------------------------------------------------------------------//
		
		//------------------------------------------------------------------PAWN---------------------------------------------------------------------------------//
		if( (row+1 <= 7) && (column-1 >= 0) )
		{
			if( (board[row+1][column-1] >= 1) && (board[row+1][column-1] <= 8) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		
		
		if( (row+1 <= 7) && (column+1 <= 7) )
		{
			if( (board[row+1][column+1] >= 1) && (board[row+1][column+1] <= 8) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		
		//------------------------------------------------------------------BISHOP OR QUEEN----------------------------------------------------------------------//
		
		//check for attack by bishop or queen -- forward right
		while( (row < 7) && (column < 7) )
		{
			row++;
			column++;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 11) || (board[row][column] == 14) || (board[row][column] == 12))
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by bishop or queen -- forward left
		while( (row < 7) && (column > 0) )
		{
			row++;
			column--;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 11) || (board[row][column] == 14) || (board[row][column] == 12))
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by bishop or queen -- backward right
		while( (row > 0) && (column < 7) )
		{
			row--;
			column++;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 11) || (board[row][column] == 14) || (board[row][column] == 12))
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by bishop or queen -- backward left
		while( (row > 0) && (column > 0) )
		{
			row--;
			column--;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 11) || (board[row][column] == 14) || (board[row][column] == 12))
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//-------------------------------------------------------ROOK OR QUEEN-----------------------------------------------------------------------------------//
		
		//check for attack by rook or queen -- forward
		while( (row < 7) )
		{
			row++;
			if( board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 9) || (board[row][column] == 16) || (board[row][column] == 12) )
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by rook or queen -- backward
		while( (row > 0) )
		{
			row--;
			if( board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 9) || (board[row][column] == 16) || (board[row][column] == 12) )
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by rook or queen -- leftward
		while(column > 0)
		{
			column--;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 9) || (board[row][column] == 16) || (board[row][column] == 12) )
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by rook or queen -- rightward
		while(column < 7)
		{
			column++;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 9) || (board[row][column] == 16) || (board[row][column] == 12) )
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//---------------------------------------------------------------------------KNIGHT----------------------------------------------------------------------//
		
		//check for attack by knight -- forward-right
		row = row+2;
		column = column+1;
		
		if( (row <= 7) && (column <= 7) )
		{
			if( (board[row][column] == 10) || (board[row][column] == 15) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- forward-left
		row = row+2;
		column = column-1;
		
		if( (row <= 7) && (column >= 0) )
		{
			if( (board[row][column] == 10) || (board[row][column] == 15) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- backward-right
		row = row-2;
		column = column+1;
		
		if( (row >= 0) && (column <= 7) )
		{
			if( (board[row][column] == 10) || (board[row][column] == 15) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- backward-left
		row = row-2;
		column = column-1;
		
		if( (row >= 0) && (column >= 0) )
		{
			if( (board[row][column] == 10) || (board[row][column] == 15) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- right-forward
		row = row+1;
		column = column+2;
		
		if( (row <= 7) && (column <= 7) )
		{
			if( (board[row][column] == 10) || (board[row][column] == 15) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- right-backward
		row = row-1;
		column = column+2;
		
		if( (row >= 0) && (column <= 7) )
		{
			if( (board[row][column] == 10) || (board[row][column] == 15) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- left-forward
		row = row+1;
		column = column-2;
		
		if( (row <= 7) && (column >= 0) )
		{
			if( (board[row][column] == 10) || (board[row][column] == 15) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- left-backward
		row = row-1;
		column = column-2;
		
		if( (row >= 0) && (column >= 0) )
		{
			if( (board[row][column] == 10) || (board[row][column] == 15) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//--------------------------------------------------------------END OF CHECKING--------------------------------------------------------------------------//
		move[moveLabel].revert(pieceCaptured);
		return false;
		
	}
	
	else if(side == true)
	{
		//------------------------------------------------------------START OF CHECKING--------------------------------------------------------------------------//
		
		//------------------------------------------------------------------PAWN---------------------------------------------------------------------------------//
		if( (row-1 >= 0) && (column-1 >= 0) )
		{
			if( (board[row-1][column-1] >= 21) && (board[row-1][column-1] <= 28) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		
		if( (row-1 >= 0) && (column+1 <= 7) )
		{
			if( (board[row-1][column+1] >= 21) && (board[row-1][column+1] <= 28) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		
		//------------------------------------------------------------------BISHOP OR QUEEN----------------------------------------------------------------------//
		
		//check for attack by bishop or queen -- forward right
		while( (row < 7) && (column < 7) )
		{
			row++;
			column++;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 31) || (board[row][column] == 34) || (board[row][column] == 32))
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by bishop or queen -- forward left
		while( (row < 7) && (column > 0) )
		{
			row++;
			column--;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 31) || (board[row][column] == 34) || (board[row][column] == 32))
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by bishop or queen -- backward right
		while( (row > 0) && (column < 7) )
		{
			row--;
			column++;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 31) || (board[row][column] == 34) || (board[row][column] == 32))
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by bishop or queen -- backward left
		while( (row > 0) && (column > 0) )
		{
			row--;
			column--;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 31) || (board[row][column] == 34) || (board[row][column] == 32))
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//-------------------------------------------------------ROOK OR QUEEN-----------------------------------------------------------------------------------//
		
		//check for attack by rook or queen -- forward
		while( (row < 7) )
		{
			row++;
			if( board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 29) || (board[row][column] == 36) || (board[row][column] == 32) )
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by rook or queen -- backward
		while( (row > 0) )
		{
			row--;
			if( board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 29) || (board[row][column] == 36) || (board[row][column] == 32) )
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by rook or queen -- leftward
		while(column > 0)
		{
			column--;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 29) || (board[row][column] == 36) || (board[row][column] == 32) )
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by rook or queen -- rightward
		while(column < 7)
		{
			column++;
			if(board[row][column] != 0)
			{
				break;
			}
		}
		
		if( (board[row][column] == 29) || (board[row][column] == 36) || (board[row][column] == 32) )
		{
			move[moveLabel].revert(pieceCaptured);
			return true;
		}
		row = temp_row;
		column = temp_col;
		
		//---------------------------------------------------------------------------KNIGHT----------------------------------------------------------------------//
		
		//check for attack by knight -- forward-right
		row = row+2;
		column = column+1;
		
		if( (row <= 7) && (column <= 7) )
		{
			if( (board[row][column] == 30) || (board[row][column] == 35) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- forward-left
		row = row+2;
		column = column-1;
		
		if( (row <= 7) && (column >= 0) )
		{
			if( (board[row][column] == 30) || (board[row][column] == 35) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- backward-right
		row = row-2;
		column = column+1;
		
		if( (row >= 0) && (column <= 7) )
		{
			if( (board[row][column] == 30) || (board[row][column] == 35) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- backward-left
		row = row-2;
		column = column-1;
		
		if( (row >= 0) && (column >= 0) )
		{
			if( (board[row][column] == 30) || (board[row][column] == 35) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- right-forward
		row = row+1;
		column = column+2;
		
		if( (row <= 7) && (column <= 7) )
		{
			if( (board[row][column] == 30) || (board[row][column] == 35) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- right-backward
		row = row-1;
		column = column+2;
		
		if( (row >= 0) && (column <= 7) )
		{
			if( (board[row][column] == 30) || (board[row][column] == 35) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- left-forward
		row = row+1;
		column = column-2;
		
		if( (row <= 7) && (column >= 0) )
		{
			if( (board[row][column] == 30) || (board[row][column] == 35) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//check for attack by knight -- left-backward
		row = row-1;
		column = column-2;
		
		if( (row >= 0) && (column >= 0) )
		{
			if( (board[row][column] == 30) || (board[row][column] == 35) )
			{
				move[moveLabel].revert(pieceCaptured);
				return true;
			}
		}
		row = temp_row;
		column = temp_col;
		
		//--------------------------------------------------------------END OF CHECKING--------------------------------------------------------------------------//
		move[moveLabel].revert(pieceCaptured);
		return false;
		
	}
	
}

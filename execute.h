void execute(int piece,pair <int,int> goTo)
{
	if(board[goTo.first][goTo.second] != 0)
	{
		location[board[goTo.first][goTo.second]].first = -1;
		location[board[goTo.first][goTo.second]].second = -1;
	}
	board[location[piece].first][location[piece].second] = 0;
	
	board[goTo.first][goTo.second] = piece;
	
	location[piece].first = goTo.first;
	location[piece].second = goTo.second;
	
}

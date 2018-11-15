class MOVE
{
	public:
		int piece,value;
		pair <int,int> goTo;
		void defineMove(int p,int row,int column)
		{
			piece = p;
			goTo.first = row;
			goTo.second = column;
		}
		
		void setToZero()
		{
			value = 0;
		}
		
		void details()
		{
			cout<<"PIECE: "<<piece<<" , ROW: "<<goTo.first<<" , COLUMN: "<<goTo.second<<endl;
		}
		
		int implement()
		{
			int capture = 0;
		/*	if( (location[piece].first+goTo.first < 0 || location[piece].first+goTo.first > 7) || (location[piece].second+goTo.second < 0 || location[piece].second+goTo.second > 7) )
			{
				cout << "IMPLEMENTATION SEGMENTATION FALULT: " << location[piece].first+goTo.first << " " << location[piece].second+goTo.second << " " << piece <<" "<< location[piece].first <<" "<< location[piece].second <<" "<<capture<<  endl;
			}
			cout << "IMPLEMENTATION "<<piece<<" "<<location[piece].first<<" "<<location[piece].second<<endl;*/
			if(goTo.first != 0 || goTo.second != 0)		//meaning -> not a null move
			{
				capture = board[location[piece].first+goTo.first][location[piece].second+goTo.second];
				if( capture != 0 )
				{
					location[capture].first = -1;
					location[capture].second = -1;
				}
			}
			
			board[location[piece].first][location[piece].second] = 0;
			board[location[piece].first+goTo.first][location[piece].second+goTo.second] = piece;
			location[piece].first += goTo.first;
			location[piece].second += goTo.second;
			
			return capture;
		}
		
		void revert(int capture)
		{
			//cout << "REVERTING "<<piece<<" "<<location[piece].first<<" "<<location[piece].second<<endl;
			if(goTo.first != 0 || goTo.second != 0)		//meaning -> not a null move
			{
				board[location[piece].first][location[piece].second] = capture;
				if(capture != 0)
				{
					location[capture] = location[piece];
				}
			}
			
		/*	if( (location[piece].first-goTo.first < 0 || location[piece].first-goTo.first > 7) || (location[piece].second-goTo.second < 0 || location[piece].second-goTo.second > 7) )
			{
				cout << "REVERTING SEGMENTATION FALULT: " << location[piece].first-goTo.first <<" "<< location[piece].second-goTo.second << " " << piece <<" "<< location[piece].first <<" "<< location[piece].second <<" "<<capture << endl;
			}*/
			board[location[piece].first-goTo.first][location[piece].second-goTo.second] = piece;
			location[piece].first -= goTo.first;
			location[piece].second -= goTo.second;
		}
};

void display()
{
	cout<<endl;
	int i,j;
	cout<<"  0  1  2  3  4  5  6  7"<<endl;
	for(i=0;i<8;i++)
	{
		cout<<i<<" ";
		for(j=0;j<8;j++)
		{
				cout<<numLetter[board[i][j]]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

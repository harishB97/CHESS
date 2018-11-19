


//----------------------------------------------------MOVES FOR WHIES----------------------------------------------------------------------//

defineAllMoves()
{

//NULL move
move[0].defineMove(13,0,0);		//moves the king nowhere

// pawn-1
move[1].defineMove(1,-1,0);		//one step forward
move[2].defineMove(1,-2,0);		//two step forward
move[3].defineMove(1,-1,-1);	// diagonal capture left
move[4].defineMove(1,-1,1);		// diagonal capture right

// pawn-2
move[5].defineMove(2,-1,0);
move[6].defineMove(2,-2,0);
move[7].defineMove(2,-1,-1);
move[8].defineMove(2,-1,1);

// pawn-3
move[9].defineMove(3,-1,0);
move[10].defineMove(3,-2,0);
move[11].defineMove(3,-1,-1);
move[12].defineMove(3,-1,1);

// pawn-4
move[13].defineMove(4,-1,0);
move[14].defineMove(4,-2,0);
move[15].defineMove(4,-1,-1);
move[16].defineMove(4,-1,1);

// pawn-5
move[17].defineMove(5,-1,0);
move[18].defineMove(5,-2,0);
move[19].defineMove(5,-1,-1);
move[20].defineMove(5,-1,1);

// pawn-6
move[21].defineMove(6,-1,0);
move[22].defineMove(6,-2,0);
move[23].defineMove(6,-1,-1);
move[24].defineMove(6,-1,1);

// pawn-7
move[25].defineMove(7,-1,0);
move[26].defineMove(7,-2,0);
move[27].defineMove(7,-1,-1);
move[28].defineMove(7,-1,1);

// pawn-8
move[29].defineMove(8,-1,0);
move[30].defineMove(8,-2,0);
move[31].defineMove(8,-1,-1);
move[32].defineMove(8,-1,1);


//rook-9 starts at: 33 Ends at: 60
int i;
//forward moves
for(i=1;i<8;i++)
{
	move[32+i].defineMove(9,-i,0);
}
//backward moves
for(i=1;i<8;i++)
{
	move[39+i].defineMove(9,i,0);
}
//left move
for(i=1;i<8;i++)
{
	move[46+i].defineMove(9,0,-i);
}
//right move
for(i=1;i<8;i++)
{
	move[53+i].defineMove(9,0,i);
}


//rook-16 starts at: 61 Ends at: 88
//forward moves
for(i=1;i<8;i++)
{
	move[60+i].defineMove(16,-i,0);
}
//backward moves
for(i=1;i<8;i++)
{
	move[67+i].defineMove(16,i,0);
}
//left move
for(i=1;i<8;i++)
{
	move[74+i].defineMove(16,0,-i);
}
//right move
for(i=1;i<8;i++)
{
	move[81+i].defineMove(16,0,i);
}


//bishop-11 starts at: 89 Ends at: 116
//forward-right moves
for(i=1;i<8;i++)
{
	move[88+i].defineMove(11,-i,i);
}
//forward-left moves
for(i=1;i<8;i++)
{
	move[95+i].defineMove(11,-i,-i);
}
//backward-right moves
for(i=1;i<8;i++)
{
	move[102+i].defineMove(11,i,i);
}
//backward-left moves
for(i=1;i<8;i++)
{
	move[109+i].defineMove(11,i,-i);
}


//bishop-14 starts at: 117 Ends at: 144
//forward-right moves
for(i=1;i<8;i++)
{
	move[116+i].defineMove(14,-i,i);
}
//forward-left moves
for(i=1;i<8;i++)
{
	move[123+i].defineMove(14,-i,-i);
}
//backward-right moves
for(i=1;i<8;i++)
{
	move[130+i].defineMove(14,i,i);
}
//backward-left moves
for(i=1;i<8;i++)
{
	move[137+i].defineMove(14,i,-i);
}


//knight-10 starts at: 145 Ends at: 152
//forward-right move
move[145].defineMove(10,-2,1);
//forward-left move
move[146].defineMove(10,-2,-1);
//backward-right move
move[147].defineMove(10,2,1);
//backward-left move
move[148].defineMove(10,2,-1);
//right-forward move
move[149].defineMove(10,-1,2);
//right-backward move
move[150].defineMove(10,1,2);
//left-foward move
move[151].defineMove(10,-1,-2);
//left-backward move
move[152].defineMove(10,1,-2);


//knight-15 starts at: 153 Ends at: 160
//forward-right move
move[153].defineMove(15,-2,1);
//forward-left move
move[154].defineMove(15,-2,-1);
//backward-right move
move[155].defineMove(15,2,1);
//backward-left move
move[156].defineMove(15,2,-1);
//right-forward move
move[157].defineMove(15,-1,2);
//right-backward move
move[158].defineMove(15,1,2);
//left-foward move
move[159].defineMove(15,-1,-2);
//left-backward move
move[160].defineMove(15,1,-2);


//queen-12 starts at: 161 Ends at: 216
//forward moves
for(i=1;i<8;i++)
{
	move[160+i].defineMove(12,-i,0);
}
//backward moves
for(i=1;i<8;i++)
{
	move[167+i].defineMove(12,i,0);
}
//left move
for(i=1;i<8;i++)
{
	move[174+i].defineMove(12,0,-i);
}
//right move
for(i=1;i<8;i++)
{
	move[181+i].defineMove(12,0,i);
}
//forward-right moves
for(i=1;i<8;i++)
{
	move[188+i].defineMove(12,-i,i);
}
//forward-left moves
for(i=1;i<8;i++)
{
	move[195+i].defineMove(12,-i,-i);
}
//backward-right moves
for(i=1;i<8;i++)
{
	move[202+i].defineMove(12,i,i);
}
//backward-left moves
for(i=1;i<8;i++)
{
	move[209+i].defineMove(12,i,-i);
}


//king-13 starts at: 217 Ends at: 224
move[217].defineMove(13,-1,0);	//forward
move[218].defineMove(13,1,0);	//backward
move[219].defineMove(13,0,1);	//right
move[220].defineMove(13,0,-1);	//left
move[221].defineMove(13,-1,1);	//forward-right
move[222].defineMove(13,1,-1);	//backward-left
move[223].defineMove(13,1,1);	//backward-right
move[224].defineMove(13,-1,-1);	//forward-left



//------------------------------------------------------MOVES FOR BLACK----------------------------------------------------------------------//

//NULL move
move[300].defineMove(33,0,0);	//moves the king nowhere

// pawn-21
move[1+300].defineMove(1+20,1,0);
move[2+300].defineMove(1+20,2,0);
move[3+300].defineMove(1+20,1,-1);
move[4+300].defineMove(1+20,1,1);

// pawn-22
move[5+300].defineMove(2+20,1,0);
move[6+300].defineMove(2+20,2,0);
move[7+300].defineMove(2+20,1,-1);
move[8+300].defineMove(2+20,1,1);

// pawn-23
move[9+300].defineMove(3+20,1,0);
move[10+300].defineMove(3+20,2,0);
move[11+300].defineMove(3+20,1,-1);
move[12+300].defineMove(3+20,1,1);

// pawn-24
move[13+300].defineMove(4+20,1,0);
move[14+300].defineMove(4+20,2,0);
move[15+300].defineMove(4+20,1,-1);
move[16+300].defineMove(4+20,1,1);

// pawn-25
move[17+300].defineMove(5+20,1,0);
move[18+300].defineMove(5+20,2,0);
move[19+300].defineMove(5+20,1,-1);
move[20+300].defineMove(5+20,1,1);

// pawn-26
move[21+300].defineMove(6+20,1,0);
move[22+300].defineMove(6+20,2,0);
move[23+300].defineMove(6+20,1,-1);
move[24+300].defineMove(6+20,1,1);

// pawn-27
move[25+300].defineMove(7+20,1,0);
move[26+300].defineMove(7+20,2,0);
move[27+300].defineMove(7+20,1,-1);
move[28+300].defineMove(7+20,1,1);

// pawn-28
move[29+300].defineMove(8+20,1,0);
move[30+300].defineMove(8+20,2,0);
move[31+300].defineMove(8+20,1,-1);
move[32+300].defineMove(8+20,1,1);


//rook-29 starts at: 333 Ends at: 360
//forward moves
for(i=1;i<8;i++)
{
	move[32+i+300].defineMove(9+20,-i,0);
}
//backward moves
for(i=1;i<8;i++)
{
	move[39+i+300].defineMove(9+20,i,0);
}
//left move
for(i=1;i<8;i++)
{
	move[46+i+300].defineMove(9+20,0,-i);
}
//right move
for(i=1;i<8;i++)
{
	move[53+i+300].defineMove(9+20,0,i);
}


//rook-36 starts at: 361 Ends at: 388
//forward moves
for(i=1;i<8;i++)
{
	move[60+i+300].defineMove(16+20,-i,0);
}
//backward moves
for(i=1;i<8;i++)
{
	move[67+i+300].defineMove(16+20,i,0);
}
//left move
for(i=1;i<8;i++)
{
	move[74+i+300].defineMove(16+20,0,-i);
}
//right move
for(i=1;i<8;i++)
{
	move[81+i+300].defineMove(16+20,0,i);
}


//boshop-31 starts at: 389 Ends at: 416
//forward-right moves
for(i=1;i<8;i++)
{
	move[88+i+300].defineMove(11+20,-i,i);
}
//forward-left moves
for(i=1;i<8;i++)
{
	move[95+i+300].defineMove(11+20,-i,-i);
}
//backward-right moves
for(i=1;i<8;i++)
{
	move[102+i+300].defineMove(11+20,i,i);
}
//backward-left moves
for(i=1;i<8;i++)
{
	move[109+i+300].defineMove(11+20,i,-i);
}


//bishop-34 starts at: 417 Ends at: 444
//forward-right moves
for(i=1;i<8;i++)
{
	move[116+i+300].defineMove(14+20,-i,i);
}
//forward-left moves
for(i=1;i<8;i++)
{
	move[123+i+300].defineMove(14+20,-i,-i);
}
//backward-right moves
for(i=1;i<8;i++)
{
	move[130+i+300].defineMove(14+20,i,i);
}
//backward-left moves
for(i=1;i<8;i++)
{
	move[137+i+300].defineMove(14+20,i,-i);
}


//knight-30 starts at: 445 Ends at: 452
//forward-right move
move[145+300].defineMove(10+20,-2,1);
//forward-left move
move[146+300].defineMove(10+20,-2,-1);
//backward-right move
move[147+300].defineMove(10+20,2,1);
//backward-left move
move[148+300].defineMove(10+20,2,-1);
//right-forward move
move[149+300].defineMove(10+20,-1,2);
//right-backward move
move[150+300].defineMove(10+20,1,2);
//left-foward move
move[151+300].defineMove(10+20,-1,-2);
//left-backward move
move[152+300].defineMove(10+20,1,-2);


//knight-35 starts at: 453 Ends at: 460
//forward-right move
move[153+300].defineMove(15+20,-2,1);
//forward-left move
move[154+300].defineMove(15+20,-2,-1);
//backward-right move
move[155+300].defineMove(15+20,2,1);
//backward-left move
move[156+300].defineMove(15+20,2,-1);
//right-forward move
move[157+300].defineMove(15+20,-1,2);
//right-backward move
move[158+300].defineMove(15+20,1,2);
//left-foward move
move[159+300].defineMove(15+20,-1,-2);
//left-backward move
move[160+300].defineMove(15+20,1,-2);


//queen-32 starts at: 461 Ends at: 516
//forward moves
for(i=1;i<8;i++)
{
	move[160+i+300].defineMove(12+20,-i,0);
}
//backward moves
for(i=1;i<8;i++)
{
	move[167+i+300].defineMove(12+20,i,0);
}
//left move
for(i=1;i<8;i++)
{
	move[174+i+300].defineMove(12+20,0,-i);
}
//right move
for(i=1;i<8;i++)
{
	move[181+i+300].defineMove(12+20,0,i);
}
//forward-right moves
for(i=1;i<8;i++)
{
	move[188+i+300].defineMove(12+20,-i,i);
}
//forward-left moves
for(i=1;i<8;i++)
{
	move[195+i+300].defineMove(12+20,-i,-i);
}
//backward-right moves
for(i=1;i<8;i++)
{
	move[202+i+300].defineMove(12+20,i,i);
}
//backward-left moves
for(i=1;i<8;i++)
{
	move[209+i+300].defineMove(12+20,i,-i);
}


//king-33 starts at: 517 Ends at: 524
move[217+300].defineMove(13+20,-1,0);	//forward
move[218+300].defineMove(13+20,1,0);	//backward
move[219+300].defineMove(13+20,0,1);	//right
move[220+300].defineMove(13+20,0,-1);	//left
move[221+300].defineMove(13+20,-1,1);	//forward-right
move[222+300].defineMove(13+20,1,-1);	//backward-left
move[223+300].defineMove(13+20,1,1);	//backward-right
move[224+300].defineMove(13+20,-1,-1);	//forward-left


}
















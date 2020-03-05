# CHESS
- Can play all basic moves.
  Special moves like en passant, castling and pawn promotion are yet to be done.
  
# About the implementation
- The program is implemented using mini-max algorithm with alpha beta pruning on top of it
- Initially a shallow search upto a depth of 3 without alpha beta pruning is done (each ply is considered as a level in search tree, so here depth 3 means black move - white move - black move), and the order of moves is changed based on the result obtained form the shallow search.
- Now with these obtained possible next moves, a search upto a depth of 5 is done, this time with alpha beta pruning.
- A move is considered worthy by the computer only if it lead to capture of a opponent piece or checkmate of the opponent.
- The pieces have the following values. (Inside the code computer is referred as black and human is referred as white)
-      White and Black pawn -> 1.
       White rook -> 5 and Black rook -> 6.
       White bishop -> 4 and Black bishop -> 5.
       White knight -> 3 and Black knight -> 4.
       White queen -> 12 and Black queen -> 13.
       White and Black king -> 1000.

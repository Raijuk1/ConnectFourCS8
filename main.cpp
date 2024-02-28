#include <iostream>


// vertically check if player connects 4
for(int j=0;j<7;j++)
{
for(int i=6;i>2;i--)
{
if( (board[i][j]+board[i-1][j]+board[i-2][j]+board[i-3][j]==8
||board[i][j]+board[i-1][j]+board[i-2][j]+board[i-3][j]==4)&&
(board[i][j]!=0&&board[i-1][j]!=0&&board[i-2][j]!=0&&board[i-3][j]!=0) )
{
if(board[i][j]+board[i-1][j]+board[i-2][j]+board[i-3][j]==8)// To check which                                                                                                                                         // player won
{
cout<<"player 2 won !\n";
return true;
}
else
{
cout<<"player 1 won !\n";
return true;
}
}
}

}


int main(){


return 0;
}

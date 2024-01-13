#define ROW 3
#define COL 3                  //行列的宏定义，看起来更直观
#include<stdlib.h>
#include<time.h> 
//函数声明 
void Initboard(char board[ROW][COL],int row,int col);
void Displayboard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);
char IsWin(char board[ROW][COL],int row,int col);
//return 'q'平局
//return '*'玩家获胜
//return '#'电脑获胜
//return 'c' 继续 

#include<stdio.h>
#include"game.h"
void menu()
{
printf("************************************\n");
printf("********* 1.play     0.exit ********\n");
printf("************************************\n");
}
void game()
{
	int ret=0;               //用于之后接受返回值 
	char board[ROW][COL];    //定义棋盘 同时运用宏定义，看起来更加直观
	//初始化棋盘 
	Initboard(board,ROW,COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
	//下棋
	while(1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL); 
		Displayboard(board,ROW,COL);
		//判断玩家是否获胜
		ret=IsWin(board,ROW,COL);
		if(ret !='c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		Displayboard(board,ROW,COL);
		//判断电脑是否获胜
		ret=IsWin(board,ROW,COL);
		if(ret !='c')
		{
			break;
		}  
	 }
	 if(ret=='*')
	 {
	 	printf("玩家获胜\n"); 
	 }
	 else if(ret=='#')
	 {
	 	printf("电脑获胜\n"); 
	 }
	 else
	 {
	 	printf("平局\n");
	 }
	   
	 
	  
	 
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));             //以时间戳来进行随机数的设置，便于电脑下棋  用unsigned int()对其进行强制类型转换得到无符号整型数据 
	do
	{
	menu();
	printf("请选择:>");
	scanf("%d",&input);
		switch(input)
		{
			case 1:
			printf("开始游戏"); 
			game();
			break;
			case 0:
			printf("退出游戏");
			default:
			printf("选择错误，请重新选择");
			break; 
		}		
	}while(input);
}
int main()
{ 
    test();
	return 0; 
}

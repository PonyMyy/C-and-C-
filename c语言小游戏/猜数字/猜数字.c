//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*****************************************");
	printf("***   1.paly           0.exit         ***");
	printf("*****************************************");
 } 
void game()
{
	int ret=0;  //电脑给的随机值 
	int guess=0; //接收猜的数字
	//拿时间戳来设置随机数的生成起始点
	ret=rand()%100+1;//生成1-100之间的随机数
	while(1)
	{
		printf("请猜数字：");
		scanf("%d",&guess);
		if(guess>ret)
		 {
		 	printf("猜大了\n"); 
		 }
		else if(guess<ret)
		 {
		 	printf("猜小了\n"); 
		 }
		else
		{
			printf("恭喜你，猜对了\n");
			break; 
		 } 
	 } 
 } 
 
 int main()
 {
 	int input=0;
 	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>：");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			  game();  //猜数字游戏 
			  break;
			case 0:
			  printf("退出游戏\n");
			  break;
			default:
			  printf("选择错误\n");
			  break;	
		}
	}while(input);
	return 0; 
 }

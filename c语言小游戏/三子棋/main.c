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
	int ret=0;               //����֮����ܷ���ֵ 
	char board[ROW][COL];    //�������� ͬʱ���ú궨�壬����������ֱ��
	//��ʼ������ 
	Initboard(board,ROW,COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
	//����
	while(1)
	{
		//�������
		PlayerMove(board,ROW,COL); 
		Displayboard(board,ROW,COL);
		//�ж�����Ƿ��ʤ
		ret=IsWin(board,ROW,COL);
		if(ret !='c')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		Displayboard(board,ROW,COL);
		//�жϵ����Ƿ��ʤ
		ret=IsWin(board,ROW,COL);
		if(ret !='c')
		{
			break;
		}  
	 }
	 if(ret=='*')
	 {
	 	printf("��һ�ʤ\n"); 
	 }
	 else if(ret=='#')
	 {
	 	printf("���Ի�ʤ\n"); 
	 }
	 else
	 {
	 	printf("ƽ��\n");
	 }
	   
	 
	  
	 
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));             //��ʱ�������������������ã����ڵ�������  ��unsigned int()�������ǿ������ת���õ��޷����������� 
	do
	{
	menu();
	printf("��ѡ��:>");
	scanf("%d",&input);
		switch(input)
		{
			case 1:
			printf("��ʼ��Ϸ"); 
			game();
			break;
			case 0:
			printf("�˳���Ϸ");
			default:
			printf("ѡ�����������ѡ��");
			break; 
		}		
	}while(input);
}
int main()
{ 
    test();
	return 0; 
}

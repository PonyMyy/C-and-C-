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
	char mine[ROWS][COLS]={0};//��Ų��úõ��׵���Ϣ 
	char show[ROWS][COLS]={0};//����Ų�õ��׵���Ϣ
	//��ʼ�����������Ϊָ��������
	//mine ������û�в����׵�ʱ�򣬶���'0'
	InitBoard(mine,ROWS,COLS,'0'); 
	//show ������û�в����׵�ʱ�򣬶���'*'
	InitBoard(show,ROWS,COLS,'*');
	
	//������
	SetMine(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	//�Ų���
	FindMine(mine,show,ROW,COL); 
	
}
int main()
{ 
    int input=0;
    //������������������
	srand((unsigned int)time(NULL)); 
    do
	{
	menu();
	printf("��ѡ��:>");
	scanf("%d",&input);
		switch(input)
		{
			case 1:
			printf("��ʼ��Ϸ\n");
			game(); 
			break;
			case 0:
			printf("�˳���Ϸ\n");
			break;
			default:
			printf("ѡ�����������ѡ��\n");
			break; 
		}		
	}while(input);
	return 0; 
}

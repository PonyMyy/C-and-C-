//��������Ϸ
//1.���Ի�����һ�������
//2.������ 

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
	int ret=0;  //���Ը������ֵ 
	int guess=0; //���ղµ�����
	//��ʱ����������������������ʼ��
	ret=rand()%100+1;//����1-100֮��������
	while(1)
	{
		printf("������֣�");
		scanf("%d",&guess);
		if(guess>ret)
		 {
		 	printf("�´���\n"); 
		 }
		else if(guess<ret)
		 {
		 	printf("��С��\n"); 
		 }
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("��ѡ��>��");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			  game();  //��������Ϸ 
			  break;
			case 0:
			  printf("�˳���Ϸ\n");
			  break;
			default:
			  printf("ѡ�����\n");
			  break;	
		}
	}while(input);
	return 0; 
 }

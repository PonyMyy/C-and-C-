#include<stdio.h>
int main() 
{
	int x;
	printf("������ٷ��Ƴɼ���");
	scanf("%d",&x);
	if(x<0||x>100)
	  printf("������Ч\n");
	else if(x>=90)
	  printf("�ɼ��ȼ���A\n");
	else if(x>=80)
	  printf("�ɼ��ȼ���B\n"); 
	 else if(x>=70)
	  printf("�ɼ��ȼ���C\n"); 
	else if(x>=60)
	  printf("�ɼ��ȼ���D\n"); 
	else
	  printf("�ɼ��ȼ���E\n");
	return 0;
 } 

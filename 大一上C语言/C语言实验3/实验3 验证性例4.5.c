#include<stdio.h>
int main()
{
	int x;
	printf("������ٷ��Ƴɼ�:\n");
	scanf("%d",&x);
	printf("ת��Ϊ�ȼ��Ƴɼ�;\n");
	if(x<0||x>100)
	   printf("������Ч\n");
	else if(x>=90)
	   printf("����\n");
	else if(x>=80)
	   printf("����\n");
	else if(x>=70)
	   printf("�е�\n");
	else if(x>=60)
	   printf("����\n");
	else
	   printf("������\n");
	return 0;
}

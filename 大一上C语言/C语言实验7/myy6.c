#include<stdio.h>
int main()
{
	char *p,c[1000];
	int num_space=0,num_big=0,num_small=0,num_figure=0,num_other=0,count=0,i; 
	p=c;
	printf("������һ���ַ��������֣�\n");
	gets(p);
	while(*p)
	{
		p++;
		count++;
	}
	for(i=0;i<count;i++)
	{
		if(c[i]==32)
		num_space++;
		else if(c[i]>=65&&c[i]<=90)
		num_big++;
		else if(c[i]>=97&&c[i]<=122)
		num_small++;
		else if(c[i]>=48&&c[i]<=57)
		num_figure++;
		else
		num_other++; 
	}
	printf("�����ַ����д�д��ĸ:%d\nСд��ĸ:%d\n�ո�:%d\n����:%d\n�Լ������ַ�:%d",
	     num_big,num_small,num_space,num_figure,num_other);
	     return 0;
 } 

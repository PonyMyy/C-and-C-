#include<stdio.h>
int strl(char *str)
{ 
    int count=0;
	while(*str)
	{
		str++;
		count++;
	}
	printf("������ַ�������Ϊ��%d",count); 
	
}
int main()
{
 char *string,c[100];
 string=c;
 printf("�������ַ���\n");
 gets(string);
 strl(string);
 return 0;
	
}

#include<stdio.h>
void strl(char *str,char c[])
{ 
    int count=0,m,i;
	while(*str)
	{
		str++;
		count++;
	}
	printf("������ַ�������Ϊ��%d\n",count);
	printf("������һ������m��ʹ�ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊһ���ַ�����\n");
	scanf("%d",&m);
	printf("���������ַ���Ϊ\n");
	for(i=m-1;i<count;i++)
	{
		c[i]=c[m-1];
	 } 
	printf("%s\n",c);
}
int main()
{
 char *string,c[100];
 string=c;
 printf("�������ַ���\n");
 gets(string);
 strl(string,c);
 return 0;	
}

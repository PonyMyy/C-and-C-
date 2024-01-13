#include<stdio.h>
int strl(char *str)
{ 
    int count=0;
	while(*str)
	{
		str++;
		count++;
	}
	printf("输入的字符串长度为：%d",count); 
	
}
int main()
{
 char *string,c[100];
 string=c;
 printf("请输入字符串\n");
 gets(string);
 strl(string);
 return 0;
	
}

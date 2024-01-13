#include<stdio.h>
void strl(char *str,char c[])
{ 
    int count=0,m,i;
	while(*str)
	{
		str++;
		count++;
	}
	printf("输入的字符串长度为：%d\n",count);
	printf("请输入一个数字m，使字符串中从第m个字符开始的全部字符复制成为一个字符串。\n");
	scanf("%d",&m);
	printf("经处理后的字符串为\n");
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
 printf("请输入字符串\n");
 gets(string);
 strl(string,c);
 return 0;	
}

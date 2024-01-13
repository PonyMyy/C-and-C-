#include<stdio.h>
int main()
{
	int a=18,b=-29;
	char c='c';
	printf("1:a=%d\n",a);                            //使用格式控制符d，输出十进制整数 
	printf("2:c=%d\n",c);                            //以十进制整数输出字符型数据 
	printf("3:a=%5d\n",a);                           //右端对齐，宽度5列，左补空格 
	printf("4:a=%-5d\n",a);                          //左端对齐，宽度5列，右补空格 
	printf("5:a=%ld\n",a);                           //以长整型输出十进制整数 
	printf("6:a=%5ld\n",a);                          //以长整型输出十进制整数，宽度5列，左补空格 
	printf("7:a=%+d\n",b);                           //使用标识符（+），输出整数的符号 
	printf("8:a=%+d\n",a);                           //使用标识符（+），输出整数的符号 
	return 0;
}

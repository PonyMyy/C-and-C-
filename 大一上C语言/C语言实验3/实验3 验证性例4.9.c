#include<stdio.h>
int main()
{
	int a,b,max;
	printf("请输入两个整数：\n");
	scanf("%d,%d",&a,&b);
	printf("二者中较大的整数是：\n%d\n",(max=(a>b)?a:b));
	return 0;
}

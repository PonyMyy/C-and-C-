#include<stdio.h>
int main()
{
	float F;
	float c;
	printf("请输入一个华氏温度：");
	scanf("%f",&F);
	c=5*(F-32)/9;
	printf("输出的摄氏温度为%5.2f",c);
	return 0;
}

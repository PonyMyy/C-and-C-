#include<stdio.h>
int main()  //主函数
{
	void comparing(int x);   //函数comparing声明 
	void max(int x,int y);   //函数max声明
	int a,b;                 //定义两个整数变量，存储加数与被加数
	int sum;
	printf("请输入第一个整数：");
	scanf("%d",&a);
	printf("请输入第二个整数：");
	scanf("%d",&b);
	sum=a+b;
	comparing(sum);           //函数调用，比较计算结果与0
	printf("\n");             //换行 
	max(a,b);                  //函数调用，判断哪个数字较大 
	return 0;                 //主函数成功执行 
}
//主函数结束
//函数comparing定义
void comparing(int x)
{
	if(x>0)                   //判断结果是否大于0
	printf("结果大于0"); 
	if(x==0)                  //判断结果是否等于0
	printf("结果等于0"); 
	if(x<0)                   //判断结果是否小于0
	printf("结果小于0"); 
 } 
 //函数comparing定义结束
 //函数max定义
 void max (int x, int y)
 {
 	if(x>y)
 	printf("函数%d较大",x);
 	if(x==y)
 	printf("两个整数相同"); 
    if(x<y)
 	printf("函数%d较大",y);
 }

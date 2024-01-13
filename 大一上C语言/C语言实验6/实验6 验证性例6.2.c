#include<stdio.h>

void start()
{
	printf("输入成绩：\n"); 
}

void end()
{
	
}

	
int sum(int x,int y)
{
	int z;
	z=x+y;
	return (z);
}

avg(float x,int y)
{
	return (x/y);
}
 

int main()
{
	int a,b,m;
	int max(int x,int y);
	void min(int,int);
	printf("***程序从main函数开始***\n");
	start();
	scanf("%d,%d",&a,&b);
	m=sum(a,b);
	printf("总分数为：\n%d\n",m);
	m=avg(sum(a,b),2);
	printf("平均分为： \n%d\n",m);
	printf("最高分为： \n%d\n",max(a,b));
	min(a,b);
	end();
	printf("***程序从main函数结束***\n");
	return 0;
}
int max(int x,int y)
{
	if(x>=y)
	  return x;
	  else
	  return y;
}

void min(int x,int y)
{
	int z;
	if(x<=y)
	 z=x;
	 else
	 z=y;
	 printf("最低分为：\n%d\n",z);
}

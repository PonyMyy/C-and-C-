#include<stdio.h>
float grade(float x,float y)
{
	float z;
	printf("\n形参x的初始值：%.1f\n",x);
	printf("形参y的初始值:%.1f\n\n",y);
	x=0.7*x;
	y=0.3*y;
	printf("\n形参x的更新值：%.1f\n",x);
	printf("形参y的的更新值：%.1f\n\n",y);
	z=x+y;
	return z;
}
int main()
{
	float a,b,m;
	printf("调用前实参a的值：");
	scanf("%f",&a);
	printf("调用前实参b的值：");
	scanf("%f",&b);
	m=grade(a,b);
	printf("\n调用后实参a的值：  %.1f\n",a);
	printf("调用后实参b的值：  %.1f\n\n",b);
	printf("总成绩为： %.1f\n",m);
	return 0; 
}

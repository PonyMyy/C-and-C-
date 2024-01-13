#include<stdio.h>
#include<math.h>     // 数学头文件 
int main()           //一个球从100m高度自由落下，每次落地后反跳回原高度的一半，再落下，再反弹。求它在第10次落地时，共经过多少米？第10次反弹多高？
{
	double s=100,x,i,k;
	for(i=0;i<=8;i++)
	{
		  s=s+100*pow(0.5,i);             //x的n次方代码pow(x,n)
	}
	printf("10次落地时，共经过：%10.6f米",s);
	x=100*pow(0.5,10);
	printf("\n");
	printf("第10次反弹：%10.8f米",x);
 return 0;
}

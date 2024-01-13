#include<stdio.h>
int main() 
{
	int a[5],i,sum=0,count=0;
	printf("请输入5个整数：\n");
	  for(i=0;i<5;i++)
	   scanf("%d",&a[i]);
	  for(i=0;i<5;i++)
	   if(a[i]>0)
	   {
	   	count++;
	   	sum+=a[i];
	   }
	printf("正整数个数为：%d\n",count);
	printf("正整数之和为：%d\n",sum);
	return 0;
}

#include<stdio.h>
int main() 
{
	int a[5],i,sum=0,count=0;
	printf("������5��������\n");
	  for(i=0;i<5;i++)
	   scanf("%d",&a[i]);
	  for(i=0;i<5;i++)
	   if(a[i]>0)
	   {
	   	count++;
	   	sum+=a[i];
	   }
	printf("����������Ϊ��%d\n",count);
	printf("������֮��Ϊ��%d\n",sum);
	return 0;
}

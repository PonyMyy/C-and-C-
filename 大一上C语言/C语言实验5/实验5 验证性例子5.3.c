#include<stdio.h>
#define N 10 
int main()
{
	long int i,a[N];
	printf("请输入十个整数：");
	for(i=0;i<N;i++);
	   scanf("%d",&a[i]);
	printf("按逆序输出：");
	for(i=N-1;i>=0;i--)
	printf("%d",a[i]);
	return 0;
}

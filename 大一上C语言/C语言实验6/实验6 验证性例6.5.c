#include<stdio.h>
int main()
{
	int fun(int);
	int n;
	scanf("%d",&n);
	if(n<0)
	  printf("ÊäÈëÓÐÎó£¡\n");
	  else
	     printf("%d!=%d\n",n,fun(n));
	     return 0;
}
int fun(int n)
{
	if(n<=1)
	return 1;
	else
	return n*fun(n-1);
}

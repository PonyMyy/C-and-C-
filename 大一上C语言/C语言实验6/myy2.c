#include<stdio.h>
int mcg(int x)
{
	int i=1;
	while(1)
	{
		i++;
		if((x%i)!=0)
		continue;
		else
		break;
		
	}
	if(x==i)
	printf("该数为素数");
	else
	printf("该数不为素数");
}
int main()
{
  int a;
  printf("请输入一个整数：\n");
  scanf("%d",&a);
  mcg(a);	
 } 

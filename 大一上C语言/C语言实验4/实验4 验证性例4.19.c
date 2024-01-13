#include<stdio.h>
int main()
{
	int i,sum=0;
	i=1;
	for( ; ; )
	{
		if(i>100)
		break;
		sum=sum+i;
		i++;
	}
	printf("计算结果是:%d",sum);
	return 0;
}

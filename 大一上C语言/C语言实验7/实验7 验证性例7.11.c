#include<stdio.h>
int main()
{
	int i,j,a[3][4]={11,12,13,14,15,16,17,18,19,20,21,22};
	int *p=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		   printf("%d  ",*(p+i*4+j));
		   printf("\n");
	}
}

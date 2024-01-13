#include<stdio.h>
int main()
{
	int usual[5]={80,90,85,80,85};
	int final[5]={83,87,78,73,92};
	int total(int,int);
	int i,grade;
	printf("×Ü³É¼¨Îª£º\n");
	for(i=0;i<5;i++)
	{
		grade=total(usual[i],final[i]);
		printf("%d     ",grade);
	}
	printf("\n");
	return 0;
}
int total(int a,int b)
{
	float z;
	z=a*0.3+b*0.7;
	return (int)(z+0.5);
}
 


#include<stdio.h>
int main()
{
	int arr[10][10];
	int i,j;
	for(i=0;i<10;i++)
	{
		arr[i][0]=1;
		arr[i][i]=1;
	}
	for(i=2;i<10;i++)                    //�ӵ����п�ʼ��� 
	{
		for(j=1;j<i;j++)
		{
		 arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
	    }
	}
	for(i=0;i<10;i++)
	 {
	 	for(j=0;j<=i;j++)
	 	{
	 		printf("%5d",arr[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
}

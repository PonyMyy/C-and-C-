#include<stdio.h>
int main()
{
	int a[2][3],b[3][2],c[2][2];
	int i,j,k;
	printf("输入的矩阵a为：\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		     scanf("%d",&a[i][j]);                  //从键盘输入1个2*3的矩阵 
		     
	}
	printf("输入的矩阵b为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		     scanf("%d",&b[i][j]);                  //从键盘输入一个3*2的矩阵 
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;                              //初始化矩阵c 
			for(k=0;k<3;k++)
			    c[i][j]+=a[i][k]*b[k][j];           //将对应位置的元素相乘，然后累加			
		}
	 } 
	 printf("矩阵的乘积c为：\n");
	 for(i=0;i<2;i++)
	 {
	 	for(j=0;j<2;j++)
	 	      printf("%d",c[i][j]);                 //输出2*3的矩阵
			printf("\n");    
	 }
	 return 0;
}

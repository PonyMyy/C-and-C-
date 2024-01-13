#include<stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j,A=0;
	for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	 printf("%d  ",a[i][j]);
	  	 printf("\n");
	  }
	  for(i=0;i<3;i++)
	    {
	    	for(j=0;j<3;j++)
	    	{
			if(i==j)
	    	A=A+a[i][j];
	        }
		}
		printf("对角线元素之和：%d",A);
		return 0;
}

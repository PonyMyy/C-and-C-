#include<stdio.h>
int main()
{
	int arr[3][4],i,j,k,max,maxj;
	printf("请输入二维数组:\n");
	  for(i=0;i<3;i++)
	    {
	    	for(j=0;j<4;j++)
	    	{
	    		scanf("%d",&arr[i][j]);
			}
		}
	for(i=0;i<3;i++)
	{
		max=arr[i][0];
		maxj=0;
		for(j=0;j<4;j++)
		  if(arr[i][j]>max)
		  {
		  	max=arr[i][j];
		  	maxj=j;
		  }
		  for(k=0;k<3;k++)
		  if(max>arr[k][maxj])
		  break;
		  if(k>=3)
		  {
		  	printf("该二维数组的鞍点为：arr[%d][%d]=%d",i,maxj,max);
		  	break;
		  }
		}	
		if(i>=3)
		printf("该二维数组没有鞍点。");
		return 0;
}

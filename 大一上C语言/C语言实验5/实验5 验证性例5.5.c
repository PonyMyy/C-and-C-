#include<stdio.h>
int main()
{
	int i,j,min,min_j,min_i;
	int a[3][4]={{12,21,34,32},{28,10,17,43},{19,54,38,27}};
	min=a[0][0];min_i=0,min_j=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]=%d ",i,j,a[i][j]);
			if(a[i][j]<min)
			{
				min=a[i][j];
				min_i=i;
				min_j=j;
	
			}
		}
		printf("\n");
	}
	printf("数值最小的元素是：a[%d][%d]=%d\n",min_i,min_j,min);
	return 0;
}

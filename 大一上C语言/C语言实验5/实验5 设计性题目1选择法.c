#include<stdio.h>
int main()
{
	int a[10];
	int i,j,k;
	printf("请输入十个整数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
    }  

	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])                                     //用a[i]来打擂台 
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;				
			}
		}
	}
	for(i=0;i<10;i++)
	{
	printf("%d ",a[i]);
    }
	return 0;
}

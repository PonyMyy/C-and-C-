#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf("请输入10个整数：\n");
	for(i=0;i<10;i++)
	{
	 scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)                                  //控制外层循环 
    {
    	for(j=0;j<9-i;j++)                            //控制内部数字比大小次数 
    	{
    		if(a[j]>a[j+1])
    		{
    		t=a[j];
    		a[j]=a[j+1];
    		a[j+1]=t;
    	    }
		}
    }
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	return 0;
 } 

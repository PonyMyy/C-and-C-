#include<stdio.h>        
int main()
{
	int a[4];
	int i,j,t;
	printf("�������ĸ�������\n");
	for(i=0;i<4;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)                                    //ð�ݷ� 
	
		for(j=0;j<3-i;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		    }
		}
    
	for(i=0;i<4;i++)
	printf("%d ",a[i]); 
	return 0;
}

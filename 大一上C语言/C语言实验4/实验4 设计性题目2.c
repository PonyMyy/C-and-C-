#include<stdio.h>
int main()
{
	int i,j=1,sum=0,n,k;
	printf("������n��ֵ��");
	scanf("%d",&n); 
     for(i=1;i<=n;i++)
	{
		k=1;
	    for(j=1;j<=i;j++)
	   {
		k=k*j;
	   }
	 sum=sum+k;  	  
    }
    printf("���ý׳����ֵΪ��%d",sum);
return 0;
}

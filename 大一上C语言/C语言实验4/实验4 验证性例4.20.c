#include<stdio.h>
int main()
{ int i,j,k;
  printf("��1��2��3��ɵĸ�λ��ͬ����λ���У�\n");
  for(i=1;i<=3;i++)
  {
  	j=1;
  	while(j<=3)
  	{
  		k=1;
  		do
  		{
  			if(i!=k&&i!=j&&j!=k)
  			  printf("%d%d%d ",i,j,k);
  			  k++;
		  }while(k<=3);
		  j++;
	  }
  }
	printf("\n");
	return 0;
}

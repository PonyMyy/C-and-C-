#include<stdio.h>
int main()
{
	int a[2][3],b[3][2],c[2][2];
	int i,j,k;
	printf("����ľ���aΪ��\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		     scanf("%d",&a[i][j]);                  //�Ӽ�������1��2*3�ľ��� 
		     
	}
	printf("����ľ���bΪ��\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		     scanf("%d",&b[i][j]);                  //�Ӽ�������һ��3*2�ľ��� 
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;                              //��ʼ������c 
			for(k=0;k<3;k++)
			    c[i][j]+=a[i][k]*b[k][j];           //����Ӧλ�õ�Ԫ����ˣ�Ȼ���ۼ�			
		}
	 } 
	 printf("����ĳ˻�cΪ��\n");
	 for(i=0;i<2;i++)
	 {
	 	for(j=0;j<2;j++)
	 	      printf("%d",c[i][j]);                 //���2*3�ľ���
			printf("\n");    
	 }
	 return 0;
}

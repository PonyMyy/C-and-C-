#include<stdio.h>
void average(int x,int y,int p,int l,int m)
{
	int k;
	k=(x+y+p+l+m)/5;
	printf("%d ",k);
}

int main()
{
	int i,j;
	int a[10][5];
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[0][j]);
	}
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[1][j]);
	}
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[2][j]);
	}
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[3][j]);
	}
    printf("�������һλͬѧ�����ſγɼ���\n");
    for(j=0;j<5;j++)
	{
	 scanf("%d",&a[4][j]);
	}
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[5][j]);
	}	
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[6][j]);
	}	
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[7][j]);
	}
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[8][j]);
	}
	printf("�������һλͬѧ�����ſγɼ���\n");
	for(j=0;j<5;j++)
	{
	 scanf("%d",&a[9][j]);
	}
	for(i=1;i<=10;i++)
	{
	 printf("��%d��ѧ��ƽ����:",i,i);
	 average(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
	 
    }
	return 0;
}

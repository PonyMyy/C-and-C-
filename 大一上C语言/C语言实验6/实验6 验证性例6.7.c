#include<stdio.h>
int main()
{
	void dbl(int [],int);
	int a[9]={1,2,3,4,5};
	int i;
	printf("�����Ӻ���ǰ��ʵ�������Ԫ�ص�ֵΪ��\n");
	for(i=0;i<5;i++)
	  printf("a[%d]=%d ",i,a[i]);
	dbl(a,5);
	printf("\n\n�����Ӻ�����ʵ�������Ԫ�ص�ֵΪ��\n");
	for(i=0;i<5;i++)
	      printf("a[%d]=%d ",i,a[i]);
		  printf("\n");
		  return 0;   
}
void dbl(int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	           b[i]=2*b[i];
}

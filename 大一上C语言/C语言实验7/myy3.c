#include<stdio.h>
void num(int a[])
{
	int i;
	printf("请输入十个整数\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 
}
void out(int a[])
{
	int i;
	printf("经处理后十个数字为\n");
	for(i=0;i<10;i++)	
	{
		printf("%d ",a[i]);
	}
}
void deal(int a[])
{
	int i,min,min_j,max,max_j,t;
	min=a[0];
	for(i=0;i<10;i++)
	{
	  if(min>a[i])
	  {
	  	min=a[i];
	  	min_j=i;	  	
	  }
    }
    t=a[min_j];
    a[min_j]=a[0];
	a[0]=t; 
	max=a[0];
	for(i=0;i<10;i++)
	{
	  if(max<a[i])
	  {
	  	max=a[i];
	  	max_j=i;
	  }
    } 
    t=a[max_j];
    a[max_j]=a[9];
	a[9]=t; 

}
int main()
{
	int a[10],*p;
	p=a;
	num(p);
	deal(p);
	out(p);
	return 0;
}

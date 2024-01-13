#include<stdio.h>
int main() 
{
  int min(int,int);
  int max(int,int);
  int a,b,q,e;
	printf("请输入两个正整数：\n");
	scanf("%d,%d",&a,&b);
	q=max(a,b);
	e=min(a,b);
	printf("最小公倍数：%d",e);
	printf("\n");
	printf("最大公约数：%d",q);
	return 0;
}

int min(int x,int y)
{
	int z;
	z=x;
	if(x<y)
	z=y;
	while(1)
	{
	  if(z%x==0&&z%y==0)	 
	 {
	    break;
     }
     z++;
    }	
    return z;
}
int max(int x,int y)
{
	int k;
	while(k=x&y)
	{
	x=y;
	y=k;
    }
	return y;
}

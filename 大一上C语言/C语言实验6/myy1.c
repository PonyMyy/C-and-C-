#include<stdio.h>
int main()
{
	int gcd(int,int);
	int lcm(int,int,int);
	int a,b,m,n;
	printf("请输入两个整数：\n");
	scanf("%d,%d",&a,&b);
	m=gcd(a,b);
	n=lcm(a,b,m);
	printf("最大公约数：\n%d\n",m);
	printf("最小公倍数：\n%d\n",n);
	return 0;
 } 
 int gcd(int x,int y)
 {
 	int t,r;
 	if(y>x)
 	{
 		t=y;
 		y=x;               //使得x为大的那个数 
 		x=t;
	}
	 while((r=x%y)!=0)
	 {
	 	x=y;
	 	y=r;
	 }
	 return y;
 }
 int lcm(int x,int y,int z)
 {
 	int w;
 	w=(x*y)/z;                  //相乘除以最大公约数即为最小公倍数 
 	return w;
 }

#include<stdio.h>
int main()
{
	int gcd(int,int);
	int lcm(int,int,int);
	int a,b,m,n;
	printf("����������������\n");
	scanf("%d,%d",&a,&b);
	m=gcd(a,b);
	n=lcm(a,b,m);
	printf("���Լ����\n%d\n",m);
	printf("��С��������\n%d\n",n);
	return 0;
 } 
 int gcd(int x,int y)
 {
 	int t,r;
 	if(y>x)
 	{
 		t=y;
 		y=x;               //ʹ��xΪ����Ǹ��� 
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
 	w=(x*y)/z;                  //��˳������Լ����Ϊ��С������ 
 	return w;
 }

#include<stdio.h>
int main()
{
	void change(int *,int *);
	int a=5,b=8,*pm1,*pm2;
	printf("交换前：\na=%d,b=%d\n",a,b);
	pm1=&a; pm2=&b;
	change(pm1,pm2);
	printf("交换后：\na=%d,b=%d\n",a,b);
	return 0; 
}
void change(int *pc1,int *pc2)
{
	int temp;
	temp=*pc1;
	*pc1=*pc2;
	*pc2=temp;
}

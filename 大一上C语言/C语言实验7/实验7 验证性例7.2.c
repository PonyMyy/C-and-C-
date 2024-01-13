#include<stdio.h>
int main()
{
	int a,b,temp;
	int *p1,*p2,*p;
	p1=&a;
	p2=&b;
	printf("输入两个整数：\n");
	scanf("a=%d,b=%d",p1,p2);
	
	
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("两数互换之后：\n");
	printf("a=%d\n",*p1);
	printf("b=%d\n",*p2);
	if(*p1<*p2)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("最大值为：%d\n",*p1);
	printf("最小值为：%d\n",*p2);
	return 0;
}

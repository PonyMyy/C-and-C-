#include<stdio.h>
int main()
{
	int a,b,temp;
	int *p1,*p2,*p;
	p1=&a;
	p2=&b;
	printf("��������������\n");
	scanf("a=%d,b=%d",p1,p2);
	
	
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("��������֮��\n");
	printf("a=%d\n",*p1);
	printf("b=%d\n",*p2);
	if(*p1<*p2)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("���ֵΪ��%d\n",*p1);
	printf("��СֵΪ��%d\n",*p2);
	return 0;
}

#include<stdio.h>

void start()
{
	printf("����ɼ���\n"); 
}

void end()
{
	
}

	
int sum(int x,int y)
{
	int z;
	z=x+y;
	return (z);
}

avg(float x,int y)
{
	return (x/y);
}
 

int main()
{
	int a,b,m;
	int max(int x,int y);
	void min(int,int);
	printf("***�����main������ʼ***\n");
	start();
	scanf("%d,%d",&a,&b);
	m=sum(a,b);
	printf("�ܷ���Ϊ��\n%d\n",m);
	m=avg(sum(a,b),2);
	printf("ƽ����Ϊ�� \n%d\n",m);
	printf("��߷�Ϊ�� \n%d\n",max(a,b));
	min(a,b);
	end();
	printf("***�����main��������***\n");
	return 0;
}
int max(int x,int y)
{
	if(x>=y)
	  return x;
	  else
	  return y;
}

void min(int x,int y)
{
	int z;
	if(x<=y)
	 z=x;
	 else
	 z=y;
	 printf("��ͷ�Ϊ��\n%d\n",z);
}

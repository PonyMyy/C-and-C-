#include<stdio.h>
float grade(float x,float y)
{
	float z;
	printf("\n�β�x�ĳ�ʼֵ��%.1f\n",x);
	printf("�β�y�ĳ�ʼֵ:%.1f\n\n",y);
	x=0.7*x;
	y=0.3*y;
	printf("\n�β�x�ĸ���ֵ��%.1f\n",x);
	printf("�β�y�ĵĸ���ֵ��%.1f\n\n",y);
	z=x+y;
	return z;
}
int main()
{
	float a,b,m;
	printf("����ǰʵ��a��ֵ��");
	scanf("%f",&a);
	printf("����ǰʵ��b��ֵ��");
	scanf("%f",&b);
	m=grade(a,b);
	printf("\n���ú�ʵ��a��ֵ��  %.1f\n",a);
	printf("���ú�ʵ��b��ֵ��  %.1f\n\n",b);
	printf("�ܳɼ�Ϊ�� %.1f\n",m);
	return 0; 
}

#include<stdio.h>
int main()  //������
{
	void comparing(int x);   //����comparing���� 
	void max(int x,int y);   //����max����
	int a,b;                 //�������������������洢�����뱻����
	int sum;
	printf("�������һ��������");
	scanf("%d",&a);
	printf("������ڶ���������");
	scanf("%d",&b);
	sum=a+b;
	comparing(sum);           //�������ã��Ƚϼ�������0
	printf("\n");             //���� 
	max(a,b);                  //�������ã��ж��ĸ����ֽϴ� 
	return 0;                 //�������ɹ�ִ�� 
}
//����������
//����comparing����
void comparing(int x)
{
	if(x>0)                   //�жϽ���Ƿ����0
	printf("�������0"); 
	if(x==0)                  //�жϽ���Ƿ����0
	printf("�������0"); 
	if(x<0)                   //�жϽ���Ƿ�С��0
	printf("���С��0"); 
 } 
 //����comparing�������
 //����max����
 void max (int x, int y)
 {
 	if(x>y)
 	printf("����%d�ϴ�",x);
 	if(x==y)
 	printf("����������ͬ"); 
    if(x<y)
 	printf("����%d�ϴ�",y);
 }

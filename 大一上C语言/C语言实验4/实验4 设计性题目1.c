#include<stdio.h>            //��������������m��n���������Լ������С������
int main()
{
	int x,y,k=0,s;
	printf("������������������");
	scanf("%d %d",&x,&y);
	while(k=x%y)
	{
		x=y;
		y=k;
	}
	printf("���Լ��Ϊ��%d",y);
	//ȷ�����������нϴ��
	scanf("%d %d",&x,&y);
	s=x;
	if(x<y)s=y;
	while(1)
	{
		if(s%x==0&&s%y==0)
		{
			printf("��С��������%d",s);
			break;
		}
		s++; 
	 }
	 return 0;
}

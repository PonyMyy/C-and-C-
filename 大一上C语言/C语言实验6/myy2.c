#include<stdio.h>
int mcg(int x)
{
	int i=1;
	while(1)
	{
		i++;
		if((x%i)!=0)
		continue;
		else
		break;
		
	}
	if(x==i)
	printf("����Ϊ����");
	else
	printf("������Ϊ����");
}
int main()
{
  int a;
  printf("������һ��������\n");
  scanf("%d",&a);
  mcg(a);	
 } 

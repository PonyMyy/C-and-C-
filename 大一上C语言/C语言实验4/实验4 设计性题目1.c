#include<stdio.h>            //输入两个正整数m和n，求其最大公约数和最小公倍数
int main()
{
	int x,y,k=0,s;
	printf("请输入两个正整数：");
	scanf("%d %d",&x,&y);
	while(k=x%y)
	{
		x=y;
		y=k;
	}
	printf("最大公约数为：%d",y);
	//确认两个数字中较大的
	scanf("%d %d",&x,&y);
	s=x;
	if(x<y)s=y;
	while(1)
	{
		if(s%x==0&&s%y==0)
		{
			printf("最小公倍数：%d",s);
			break;
		}
		s++; 
	 }
	 return 0;
}

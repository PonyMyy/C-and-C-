#include<stdio.h>
int main() 
{
	int x;
	printf("请输入百分制成绩：");
	scanf("%d",&x);
	if(x<0||x>100)
	  printf("输入无效\n");
	else if(x>=90)
	  printf("成绩等级：A\n");
	else if(x>=80)
	  printf("成绩等级；B\n"); 
	 else if(x>=70)
	  printf("成绩等级；C\n"); 
	else if(x>=60)
	  printf("成绩等级；D\n"); 
	else
	  printf("成绩等级；E\n");
	return 0;
 } 

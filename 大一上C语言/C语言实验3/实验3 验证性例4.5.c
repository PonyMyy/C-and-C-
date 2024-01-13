#include<stdio.h>
int main()
{
	int x;
	printf("请输入百分制成绩:\n");
	scanf("%d",&x);
	printf("转换为等级制成绩;\n");
	if(x<0||x>100)
	   printf("输入无效\n");
	else if(x>=90)
	   printf("优秀\n");
	else if(x>=80)
	   printf("良好\n");
	else if(x>=70)
	   printf("中等\n");
	else if(x>=60)
	   printf("及格\n");
	else
	   printf("不及格\n");
	return 0;
}

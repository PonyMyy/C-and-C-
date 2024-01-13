#include<stdio.h>
//主函数
int main()
{

	int a, b ,c;
	printf("请输入第一个整数:");
	scanf("%d",&a);
	printf("请输入第二个整数:");
	scanf("%d",&b);
	printf("请输入第三个整数:");
	scanf("%d",&c);
printf("最大值为：");
	
 	if(a>b)
 	if(a>c)
 	printf("%d\n",a);
 	else
 	printf("%d\n",c);
 	else
 	if(b>c)
 	printf("%d\n",b);
 	else
 	printf("%d\n",c); 
	return 0;
 } 
 

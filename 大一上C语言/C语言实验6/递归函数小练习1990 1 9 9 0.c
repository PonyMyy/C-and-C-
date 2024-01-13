#include<stdio.h>
void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
 } 
 
 int main()
 {
 	unsigned int num=0;
 	printf("请输入一个数字\n"); 
    scanf("%d",&num);
    print(num);
    return 0;
 }

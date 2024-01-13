#include<stdio.h>
void space(char x,char y,char q,char z)
{
	printf("输出的字符为：%c %c %c %c ",x,y,q,z) ;
}
int main()
{
 char a,b,c,d;
 printf("请输入四个字符：");
 scanf("%c%c%c%c",&a,&b,&c,&d);
 space(a,b,c,d);	
 return 0;	
}

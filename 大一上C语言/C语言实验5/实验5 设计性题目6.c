#include<stdio.h>
int main()
{
	char a[]="I am happy ";
	char b[]="Hello world";
	int i=0,j=0;
	while(a[i]!='\0')
	{
		i++;
}

	while(b[j]!='\0')
	{
		a[i++]=b[j++];
	}
	
	printf("输出的串联字符串结果为：\n%s",a);
	return 0;
}

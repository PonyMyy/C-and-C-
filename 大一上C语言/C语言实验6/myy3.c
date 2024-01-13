#include<stdio.h>
void link(char x[],char y[])
{
	int i=0,j=0;
	while(x[i]!='\0')
	{
		i++;
	}
	while(y[j]!=0)
	{
		x[i++]=y[j++];
	}
	printf("%s",x);
 } 

int main()
{
	char a[]="Hello world ";
	char b[]="I am happy";
	link(a,b);
	return 0;
}

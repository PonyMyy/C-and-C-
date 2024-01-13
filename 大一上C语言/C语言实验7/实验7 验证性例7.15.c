#include<stdio.h>
#include<string.h> 
int main()
{
	char str[20];
	void sub(char *,int);
	gets(str);
	sub(str,strlen(str));
	puts(str);
	return 0; 
	
}
void sub(char *p1,int n)
{
	char *p2=p1+n-1,temp;
	while(p1<p2)
	{
		temp=*p1;
		*p1++=*p2;
		*p2--=temp;
	}
}

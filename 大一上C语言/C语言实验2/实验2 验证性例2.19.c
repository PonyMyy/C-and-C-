#include<stdio.h>
int main()
{
	char a;
	int b;
	a=getchar();
	b=getchar();
	putchar(a);
	putchar(b);	
	putchar(getchar());
	putchar('\n');
	return 0;
}

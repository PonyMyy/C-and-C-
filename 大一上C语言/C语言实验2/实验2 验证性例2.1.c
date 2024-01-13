#include<stdio.h>
int main()
{
	short a=32767;
	short b=32768;
	short c,d;
	c=a+1;
	printf("c=%d\n",c);
	d=b-1;
	printf("d=%d\n",d);
	return 0;	
}

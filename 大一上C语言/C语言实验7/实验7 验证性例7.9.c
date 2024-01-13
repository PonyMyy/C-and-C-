#include<stdio.h>
int main()
{
	void change(int,int b[]);
	int i,a[4]={1,2,3,4},*pm=a;
	printf("调用前：\n");
	for(i=0;i<4;i++)
	 printf("a[%d]=%d  ",i,*(pm++));
	 printf("\n");
	 pm=a;
	 change(4,a);
	 printf("调用后：\n");
	 for(i=0;i<4;i++)
	  printf("a[%d]=%d  ",i,*(pm+1));
	  return 0;
	
}
void change(int n,int b[])
{
	int m;
	for(m=0;m<n;m++)
	    *b++=(*b)*2;
}

#include<stdio.h>
int main()
{
int *p1,*p2,*p3,a,b,c,t;
  p1=&a,p2=&b,p3=&c; 
  printf("请输入三个整数\n");
  scanf("%d %d %d",p1,p2,p3);
  if(*p1>*p2)
  {
  	t=*p1;
  	*p1=*p2;
  	*p2=t;
  }
  if(*p1>*p3)
  {
  	t=*p1;
  	*p1=*p3;
  	*p3=t;
  }
  if(*p2>*p3)
  {
  	t=*p2;
  	*p2=*p3;
  	*p3=t;
  }
  
  printf("%d %d %d",*p1,*p2,*p3);
  return 0;
}

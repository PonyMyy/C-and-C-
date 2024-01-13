#include<stdio.h>
int main()
{
	char a[26];
	char b[26];
	int i,j=0;
	for(i=0;i<26;i++)
	{
	scanf("%c",&a[i]);
	}
	printf("输入的密码为：%s",a);
	printf("\n");
	for(i=0,j=0;i<26;i++,j++)
	  { 
	   if(a[i]>='a'&&a[i]<='z')
	   	 b[j]=97+122-a[i];
	   else 
	   {
	      if(a[i]>='A'&&a[i]<='Z')
	      b[j]=65+90-a[i];
	      else
		  b[j]=a[i];
	   }
      }
	printf("输入的原码为: %s",b);
	return 0;	
}


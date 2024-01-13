#include<stdio.h>
#include<string.h>  
void swap(char *p,char *q)
{
	char t[50];
	strcpy(t,p);
	strcpy(p,q);
	strcpy(q,t);
				   }                   
int main()
{   
	char *str1,*str2,*str3,a[50],b[50],c[50]; 
	str1=a,str2=b,str3=c;                                           
	printf("请输入三个字符串\n");               
	gets(str1);								  
	gets(str2);								  
	gets(str3);								   
	if(strcmp(str1,str2)>0)
	swap(str1,str2);
	if(strcmp(str1,str3)>0)										  
	swap(str1,str3);									
	if(strcmp(str2,str3)>0)
	swap(str2,str3);											  
 printf("字符串由小到大的顺序为：\n");
 printf("%s\n%s\n%s",str1,str2,str3);
 return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20]={0};
	//shutdawn -s-t 60
	//system()-执行系统命令的
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入我是猪，就取消关机\n请输入>：");
	scanf("%s",input);
	if(strcmp(input,"我是猪")==0)  //比较两个字符串-strcmp（）//若相等则返回0，前大于后返回>0 ,前小于后返回<0w 
	{
		system("shutdown -a");   //停止执行 
	 } 
	 else
	 {
	 	goto again;                  //goto语句 
	 }
	 return 0;
}

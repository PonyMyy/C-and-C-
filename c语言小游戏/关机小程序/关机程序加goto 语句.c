#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20]={0};
	//shutdawn -s-t 60
	//system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ������������������ȡ���ػ�\n������>��");
	scanf("%s",input);
	if(strcmp(input,"������")==0)  //�Ƚ������ַ���-strcmp����//������򷵻�0��ǰ���ں󷵻�>0 ,ǰС�ں󷵻�<0w 
	{
		system("shutdown -a");   //ִֹͣ�� 
	 } 
	 else
	 {
	 	goto again;                  //goto��� 
	 }
	 return 0;
}

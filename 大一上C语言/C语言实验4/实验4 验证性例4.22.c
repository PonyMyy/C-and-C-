#include<stdio.h>
int main()
{
	char a=0;
	int num_space=0,num_e=0,num_i=0;
	for( ; ;scanf("%c",&a))
	{
		if(a==35)
		    break;
		 else if(a==32)
		    num_space++;
		 else if(a==101)
		    num_e++;
		 else if(a==105)
		    num_i++;
			   
	}
	printf("����Ŀո���ĸe����ĸi�ĸ����ֱ�Ϊ��%d,%d,%d",num_space,num_e,num_i);
	return 0;
}

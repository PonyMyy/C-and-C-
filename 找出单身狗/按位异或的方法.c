#include<stdio.h>
	int main()
	{
		//1^1^2^2^3^3^4^4^5=5
		int arr[]={1,2,3,4,5,1,2,3,4};
		int i=0;
		int ret=0;
		int sz=sizeof(arr)/sizeof(arr[0]);   //��������Ԫ�صĸ���
		for(i=0;i<sz;i++)
		{
			ret=ret^arr[i];
		 }
		 printf("����Ϊ%d",ret);	  
		return 0;
	}
	//3^3=0
	//5^5=0
	//a^a=0
	
	//0^3=3
	//0^5=5
	//0^a=a
	
	//3^3^5=5
	//3^5^3=5
	//^���㽻���� 


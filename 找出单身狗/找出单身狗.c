#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,1,2,3,4};
	int i=0,j=0; 
	int sz=sizeof(arr)/sizeof(arr[0]);  //��������Ԫ�ظ��� 
	for(i=0;i<sz;i++)
	{
	  //ͳ��arr[i]��arr�����г����˼���
	  int count=0;//������
	  for(j=0;j<sz;j++)
	  {
	  	if(arr[i]==arr[j])
	  	{
	  		count++;
		  }
	   }
	   if(count==1)
	   {
	   	printf("����:%d\n",arr[i]);
	    break;     //�����Ҫbreak ����Ҷ��������ֻ��ֻ����һ�� 
		} 
	}
	 return 0;
 } 
 //������� Ч�ʵ���  


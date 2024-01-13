#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,1,2,3,4};
	int i=0,j=0; 
	int sz=sizeof(arr)/sizeof(arr[0]);  //计算数组元素个数 
	for(i=0;i<sz;i++)
	{
	  //统计arr[i]在arr数组中出现了几次
	  int count=0;//计数器
	  for(j=0;j<sz;j++)
	  {
	  	if(arr[i]==arr[j])
	  	{
	  		count++;
		  }
	   }
	   if(count==1)
	   {
	   	printf("单身狗:%d\n",arr[i]);
	    break;     //如果不要break 则可找多个，否则只能只能找一个 
		} 
	}
	 return 0;
 } 
 //暴力求解 效率低下  


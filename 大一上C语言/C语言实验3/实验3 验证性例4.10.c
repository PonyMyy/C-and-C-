#include<stdio.h>
int main()
{
	int x,grade,five;
	printf("请输入百分制成绩：");
	scanf("%d",&x);
	grade=x/10;
	switch(grade)
	{
		case 10:
		     five=4;
		     break;
	    case 9:
		     five=4;
		     break;
		case 8:
		     five=3;
		     break;
		case 7:
		     five=2;
		     break;
		case 6:
		     five=1;
		     break;
			 	 
		default:
		      	five=0; 	      
	 } 
	 printf("五分制分数为；%d",five);
	 return 0;
}

#include<stdio.h>
int main()
{
	int x,grade,five;
	printf("������ٷ��Ƴɼ���");
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
	 printf("����Ʒ���Ϊ��%d",five);
	 return 0;
}

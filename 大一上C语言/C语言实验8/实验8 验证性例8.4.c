#include<stdio.h>
int main()
{
	 enum Color
	 {
	 	red,
	 	yellow,
	 	green
	 }lamp;
	for(lamp=red;lamp<=green;lamp++)
	     switch(lamp)
		 {
		 	case 0:   printf("ºìµÆ½ûÐÐ\n");break;
		 	case 1:   printf("»ÆµÆÂýÐÐ\n");break;
		 	case 2:   printf("ÂÌµÆÍ¨ÐÐ\n");break;
		 	default: break;
		  } 
		  return 0;
		  
}

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
		 	case 0:   printf("��ƽ���\n");break;
		 	case 1:   printf("�Ƶ�����\n");break;
		 	case 2:   printf("�̵�ͨ��\n");break;
		 	default: break;
		  } 
		  return 0;
		  
}

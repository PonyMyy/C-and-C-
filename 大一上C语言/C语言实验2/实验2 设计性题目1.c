#include<stdio.h>
#define PAI 3.14
int main()
{
	float r,h,C,S,D,V1,V2;     //rΪԲ�İ뾶��hΪԲ���ߣ�CΪԲ�ܳ���SΪԲ�������DΪԲ��������V1ΪԲ�������V2ΪԲ�������
	printf("������뾶r��ֵ��"); 
	scanf("%f",&r);
    printf("������Բ����h��ֵ��");
    scanf("%f",&h);
	C=2*PAI*r;                  //Բ�ܳ�
 	S=PAI*r*r;                  //Բ�����
	D=4*PAI*r*r;                //Բ������
	V1=(4/3)*PAI*r*r*r;         //Բ�����
	V2=S*h;                    //Բ�����
	printf("Բ�ܳ�:%5.2f\n",C);
	printf("Բ�����:%5.2f\n",S);
	printf("Բ������:%5.2f\n",D);
	printf("Բ�����:%5.2f\n",V1);
	printf("Բ�����:%5.2f\n",V2);
	return 0;
}


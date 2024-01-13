#include<stdio.h>
#define PAI 3.14
int main()
{
	float r,h,C,S,D,V1,V2;     //r为圆的半径，h为圆柱高，C为圆周长，S为圆的面积，D为圆球表面积，V1为圆球体积，V2为圆柱体积。
	printf("请输入半径r的值："); 
	scanf("%f",&r);
    printf("请输入圆柱高h的值：");
    scanf("%f",&h);
	C=2*PAI*r;                  //圆周长
 	S=PAI*r*r;                  //圆的面积
	D=4*PAI*r*r;                //圆球表面积
	V1=(4/3)*PAI*r*r*r;         //圆柱体积
	V2=S*h;                    //圆柱体积
	printf("圆周长:%5.2f\n",C);
	printf("圆的面积:%5.2f\n",S);
	printf("圆球表面积:%5.2f\n",D);
	printf("圆球体积:%5.2f\n",V1);
	printf("圆柱体积:%5.2f\n",V2);
	return 0;
}


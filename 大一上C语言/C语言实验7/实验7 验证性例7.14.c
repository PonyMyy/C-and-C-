#include<stdio.h>
int main()
{
	void sub(float(*p)[4],int);
	float a[3][4]={{90,92,87,83},{76,69,73,75},{90,95,92,88}};
	float(*p)[4]=a;
	int m;
	printf("输入学号：\n");
	scanf("%d",&m);
	sub(p,m-1);
	return 0;
}
void sub(float(*p)[4],int n)
{
	int i;
	float sum=0;
	printf("各科成绩：\n");
	for(i=0;i<4;i++)
	{
		printf("%.1f\n",*(*(p+n)+i));
		sum+=*(*(p+n)+i);
	}
	printf("总成绩为：%.1f\n",sum);
	printf("平均分为：%.1f\n",sum/4);
}

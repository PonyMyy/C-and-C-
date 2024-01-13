#include<stdio.h>
float average1(float x,float y,float p,float l,float m)
{
	float k;
	k=(x+y+p+l+m)/5;
	return k;
}

float average2(float x,float y,float c,float v,float b,float n,float m,float l,float a,float o)
{
	float u;
	u=(x+y+c+v+b+n+m+l+a+o)/10;
	return u;
}
float max(float a[10][5])
{
	int i,j,x,y; 
	float max;
	max=a[0][0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
		 if(max<a[i][j])
		 {
		 max=a[i][j];
		 x=i;
		 y=j;
	     }
		}
	}
	printf("所有50个分数中最高的分数为:%.2f,所对应的学生为%d，所对应的科目为%d",max,x+1,y+1);
}

float variance(float a[10][5])
{
	float k[10],u,sum,s;
	int i;
    for(i=0;i<10;i++)
	{
	 k[i]=average1(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]); 
    } 
     u=average2(k[0],k[1],k[2],k[3],k[4],k[5],k[6],k[7],k[8],k[9]);
     for(i=0;i<10;i++)
     {
      sum+=(k[i]-u)*(k[i]-u);
     }
     s=sum/10;
     printf("平均分方差为：%.2f",s);
}

int main()
{
   int i,j;
   float k,u;
   float a[10][5];
   for(i=0;i<10;i++)
   {
   	printf("请输入第%d位同学的五门课成绩：\n",i+1);
   	for(j=0;j<5;j++)
	{
	 scanf("%f",&a[i][j]);
    }
   }
   for(i=0;i<10;i++)
	{
	 k=average1(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
	 printf("第%d个学生平均分:%.2f",i+1,k);
	 printf("\n");	 
    }
    for(j=0;j<5;j++)
	{
	 u=average2(a[0][j],a[1][j],a[2][j],a[3][j],a[4][j],a[5][j],a[6][j],a[7][j],a[8][j],a[9][j]);
	 printf("第%d门科目平均分:%.2f",j+1,u);
	 printf("\n");
    }
    max(a);
    printf("\n");
    variance(a);
	return 0;	
}

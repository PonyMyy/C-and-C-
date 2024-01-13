#include "stdio.h"
#include "stdlib.h"
#define N 1
struct student
{
char num[6];
char name[8];
int score[4];
}stu[5];
void input(struct student *stu)//ÊäÈë
{
int i,j;
for(i=0;i <5;i++)
{
printf("\n please input %d of %d\n",i+1,N);
printf("num: ");
scanf("%s",stu[i].num);
printf("name: ");
scanf("%s",stu[i].name);
printf("please input 4 score: ");
for(j=0;j <4;j++)
{
scanf("%d",&stu[i].score[j]);
}
printf("\n");
}
}
void print(struct student *stu)
{
int i,j;
for(i=0;i <5;i++)
{
printf("The %dth students's num is: %s\n",i+1,stu[i].num);
printf("The %dth students's name is: %s\n",i+1,stu[i].name);
for(j=0;j <4;j++)
{
printf("The %dth student's score of %dth subject is: %d  \n",i+1,j+1,stu[i].score[j]);
}
printf("\n");
}
}
int main()
{
input(stu);
print(stu);
system("pause");
return 0;
}

#include<stdio.h>
struct Stu                                                               //结构体的声明要放在使用的前面 
	{
		int num;
		char name[20];
		int score[3];
	}student[5];
void Print(struct Stu *student) 
 {
 int i;
  printf("五名学生的信息为\n") ;
  for(i=0;i<5;i++)
	{
      printf("%d %s %d %d %d\n",student[i].num,student[i].name,student[i].score[0],student[i].score[1],student[i].score[2]);
	}	
 }

int main()
{
	int i;	
	printf("请依次输入5名学生的学号、姓名、三科成绩（语文、数学、英语)\n");
	for(i=0;i<5;i++)
	{
		scanf("%d %s %d %d %d",&student[i].num,&student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);
	 }
	  Print(student);
	 return 0; 
}


#include<stdio.h>
struct Stu
	{
		int num;
		char name[20];
		int score[3];
	}student[10];
void Print(struct Stu *student) 
 {
  int i;
  printf("十名学生的信息为\n") ;
  for(i=0;i<10;i++)
	{
      printf("%d %s %d %d %d\n",student[i].num,student[i].name,student[i].score[0],student[i].score[1],student[i].score[2]);
	}	
 }
void input(struct Stu *student)
{
    int i;	
	printf("请依次输入十名学生的学号、姓名、三科成绩（语文、数学、英语)\n");
	for(i=0;i<10;i++)
	{
		scanf("%d %s %d %d %d",&student[i].num,&student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);
	}	
}
void sumaverge(struct Stu *student)
{
	int i;
	float c=0,m=0,e=0,k=0;
	for(i=0;i<10;i++)
	 {
	 	c+=student[i].score[0];
	 	m+=student[i].score[1];
	 	e+=student[i].score[2];
	 	k+=student[i].score[0]+student[i].score[1]+student[i].score[2];
	 }
	printf("语文课程平均成绩为：%.2f\n数学课程平均成绩为：%.2f\n英语课程平均成绩为：%.2f\n三门课程总平均成绩为：%.2f\n",c/10,m/10,e/10,k/10);
 } 
 void best(struct Stu *student)
 {
 	int i,max,max_j,averge;
 	max=student[0].score[0]+student[0].score[1]+student[0].score[2];
 	 for(i=0;i<10;i++)
 	 {
 	 	if(max<student[i].score[0]+student[i].score[1]+student[i].score[2])
 	 	{
 	 		max=student[i].score[0]+student[i].score[1]+student[i].score[2];
 	 		max_j=i;
		  }
	  }
	  printf("最高分的学生的学号：%d\n姓名：%s\n语文、数学、英语三门课程成绩：%d %d %d\n平均分数：%d",
	          student[max_j].num,student[max_j].name,student[max_j].score[0],student[max_j].score[1],student[max_j].score[2],
			  (student[max_j].score[0]+student[max_j].score[1]+student[max_j].score[2])/3);
}
int main()
{
	  input(student);
	  Print(student);
	  sumaverge(student);
	  best(student);
	 return 0; 
}

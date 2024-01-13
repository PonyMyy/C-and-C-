#include<stdio.h>
int main()
{
	struct Student
	{
		char num[5];
		char name[10];
		char course;
		union
		{
			int score;
			char reason[5];
		}exam;
	}stu[2];
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%s %s %c",stu[i].num,stu[i].name,&stu[i].course);
		if(stu[i].course=='T')
		    scanf("%d",&stu[i].exam.score);
		else
		scanf("%s",stu[i].exam.reason);    
	}
	printf("\n");
	printf("num   name   course  exam");
	printf("\n");
	for(i=0;i<2;i++)
	   if(stu[i].course=='T')
	         printf("%-6s%-9s%-7c%d\n",stu[i].num,stu[i].name,
			       stu[i].course,stu[i].exam.score);
	   else
	         printf("%-6s%-9s%-7c%s\n",stu[i].num,stu[i].name,
			       stu[i].course,stu[i].exam.reason);
				   return 0;	       
}

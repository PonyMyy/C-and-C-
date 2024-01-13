#include<stdio.h>
int main()
{
	float sum;
	struct Student
	{
		char num[5];
		char name[20];
		char sex;
		int age;
		float score;
	};
	struct Student stu1={"1001","lin",'M',19,94.5},stu2;
	stu2=stu1;
	stu2.age=20;
	stu2.score=88;
	scanf("%s",stu2.num);
	scanf("%s",stu2.name);
	sum=stu1.score+stu2.score;
	printf("\nnum   name  sex   age    score\n");
	printf("%s  %s    %c   %d     %.1f\n",
	        stu1.num,stu1.name,stu1.sex,stu1.age,stu1.score);
	printf("%s  %s    %c   %d     %.1f\n",
	        stu2.num,stu2.name,stu2.sex,stu2.age,stu2.score);
	printf("\n×Ü·ÖÎª£º%.1f\n",sum);
	return 0;
 } 

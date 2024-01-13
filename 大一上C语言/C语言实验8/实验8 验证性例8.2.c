#include<stdio.h>
int main()
{
	struct Stu
	{
		int num;
		char name[20];
		char sex;
		float score;
	}boy[]={
	        {101,"Li ping",'M',45},
	        {102,"Zhang xing",'M',62.5},
	        {103,"He fang",'F',92.5},
	        {104,"Cheng ling",'F',87},
	        {105,"Wang ming",'M',58}
			};
   int i,c=0;
   float ave,s=0;
   printf("num      name           sex     score\n");
   for(i=0;i<5;i++)
     printf("%-9d%-16s%-7c%.1f\n",
	        boy[i].num,boy[i].name,boy[i].sex,boy[i].score);
			printf("\n");
    for(i=0;i<5;i++)
	{
		s+=boy[i].score;
		if(boy[i].score<60)
		{
			c+=1;
			printf("不及格学生：%s\n",boy[i].name);
		}		
	}	
	printf("\n");
	ave=s/5;
	printf("总成绩=%.1f\n平均分=%.1f\n不及格人数=%d\n",s,ave,c);
	return 0;		
}

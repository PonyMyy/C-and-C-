#include<stdio.h>
struct Stu                                                               //�ṹ�������Ҫ����ʹ�õ�ǰ�� 
	{
		int num;
		char name[20];
		int score[3];
	}student[5];
void Print(struct Stu *student) 
 {
 int i;
  printf("����ѧ������ϢΪ\n") ;
  for(i=0;i<5;i++)
	{
      printf("%d %s %d %d %d\n",student[i].num,student[i].name,student[i].score[0],student[i].score[1],student[i].score[2]);
	}	
 }

int main()
{
	int i;	
	printf("����������5��ѧ����ѧ�š����������Ƴɼ������ġ���ѧ��Ӣ��)\n");
	for(i=0;i<5;i++)
	{
		scanf("%d %s %d %d %d",&student[i].num,&student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);
	 }
	  Print(student);
	 return 0; 
}


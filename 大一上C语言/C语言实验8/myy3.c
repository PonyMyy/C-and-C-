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
  printf("ʮ��ѧ������ϢΪ\n") ;
  for(i=0;i<10;i++)
	{
      printf("%d %s %d %d %d\n",student[i].num,student[i].name,student[i].score[0],student[i].score[1],student[i].score[2]);
	}	
 }
void input(struct Stu *student)
{
    int i;	
	printf("����������ʮ��ѧ����ѧ�š����������Ƴɼ������ġ���ѧ��Ӣ��)\n");
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
	printf("���Ŀγ�ƽ���ɼ�Ϊ��%.2f\n��ѧ�γ�ƽ���ɼ�Ϊ��%.2f\nӢ��γ�ƽ���ɼ�Ϊ��%.2f\n���ſγ���ƽ���ɼ�Ϊ��%.2f\n",c/10,m/10,e/10,k/10);
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
	  printf("��߷ֵ�ѧ����ѧ�ţ�%d\n������%s\n���ġ���ѧ��Ӣ�����ſγ̳ɼ���%d %d %d\nƽ��������%d",
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

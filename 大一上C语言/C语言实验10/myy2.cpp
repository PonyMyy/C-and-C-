#include<iostream>
#include<string>
using namespace std;
class Teacher
{
	public:
		Teacher(string tit)
		{
			title=tit;
		}
	protected:
	  string title;	
};
class Level
{
   	public:
   		Level(string pos)
   		{
   			position=pos;
		}
	protected:
	string position;	
};
class Teacher_Level:public Teacher,public Level 
{
  public:
   Teacher_Level(string tit,string pos,int sa):  //�����๹�캯�� 
    Teacher(tit),Level(pos)
    {
    	salary=sa;
	}
   void Show()
   {
    cout<<"ְ��Ϊ��"<<title<<endl;
	cout<<"ְ��Ϊ��"<<position<<endl;
	cout<<"����Ϊ��"<<salary<<endl;
   }
   private:
   int salary;	
};
int main()
{
	Teacher_Level a("����","ϵ����",20000);
	a.Show();
	return 0; 
}

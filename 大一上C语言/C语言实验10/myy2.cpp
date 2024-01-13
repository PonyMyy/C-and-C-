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
   Teacher_Level(string tit,string pos,int sa):  //派生类构造函数 
    Teacher(tit),Level(pos)
    {
    	salary=sa;
	}
   void Show()
   {
    cout<<"职称为："<<title<<endl;
	cout<<"职务为："<<position<<endl;
	cout<<"工资为："<<salary<<endl;
   }
   private:
   int salary;	
};
int main()
{
	Teacher_Level a("教授","系主任",20000);
	a.Show();
	return 0; 
}

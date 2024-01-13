#include<iostream>
#include<string>
using namespace std; 
class  Student
{
public:
	Student(int n,string nam,char s)
	{
		num=n;
		name=nam;
		sex=s;
	}
	void display()
	{
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl;
	}
	protected:
		int num;
		string name;
		char sex;
};
class UniversityStudent:public Student
{
	public:
		UniversityStudent(int n,string nam,char s,int n1,string nam1,char s1,string mj,string dor):
		         Student(n,nam,s),roommate(n1,nam1,s1)
			{
				major=mj;
				dormitary=dor;
			}
		void show()
		{
		cout<<"This student is:"<<endl;
		display();
		cout<<"major:"<<major<<endl;
		cout<<"dormitary:"<<dormitary<<endl;	
		}
		void show_roomate()
		{
			cout<<"My roommate is:"<<endl;
			roommate.display();
		}
	private:
	   Student roommate;
	   string major;
	   string dormitary;	
};

int main()
{
	UniversityStudent ust(10086,"DuWei",'f',10000,"WangQiang",'m',"cs","5-220");
	ust.show();
	ust.show_roomate();
	return 0;
}

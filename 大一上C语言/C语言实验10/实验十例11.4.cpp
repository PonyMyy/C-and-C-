#include<iostream>
using namespace std; 
class  Student
{
public:
	void display()
	{
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl;
	}
	private:
		int num;
		string name;
		char sex;
};
class UniversityStudent:public Student
{
	public:
		void display_all()
		{
		cout<<"num:"<<num<<endl;              //´íÎó 
		cout<<"name:"<<name<<endl;            //´íÎó 
		cout<<"sex:"<<sex<<endl;              //´íÎó 
		cout<<"major:"<<major<<endl;
		cout<<"dormitary:"<<dormitary<<endl;	
		}
	private:
	   string major;
	   string dormitary;	
};
int main()
{
	UniversityStudent stu1;
	stu1.display_all();
	return 0;
}

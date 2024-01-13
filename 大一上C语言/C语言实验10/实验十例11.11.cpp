#include<iostream>
#include<string>
using namespace std;

class Student
{
	public:
		Student(int,string,char);
	virtual	void display();
	protected:
		int num;
		string name;
		char sex;
};
//Student类成员函数的实现
Student::Student(int n,string nam,char s)    //定义构造函数 
{
	num=n;
	name=nam;
	sex=s;
}

void Student::display()
{
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
}

class UniversityStudent:public Student
{
	public:
		UniversityStudent(int,string,char,string,string);
		void display();
	private:
	    string major;
		string dormitory;	
};

void UniversityStudent::display()
{
    cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"major:"<<major<<endl;
	cout<<"dormitary:"<<dormitory<<endl;	
}

UniversityStudent::UniversityStudent(int n,string nam,char s,string m,string d):
   Student(n,nam,s),major(m),dormitory(d)
   {}
   
int main()
{
	Student stud(1001,"Zhou",'m');        //定义Student类对象
	UniversityStudent uniStudent(2001,"Ma",'f',"cs","1-203");
	Student*pt=&stud;
	pt->display();
	pt=&uniStudent;
	pt->display();
	return 0; 
  }  

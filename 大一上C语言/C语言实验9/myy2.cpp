#include<iostream>  
using namespace std;
class CStudent{
public:
	char* getname()              //如果返回值为数组要加*用指针 
	{
	  return name;
	};
	char* getsex()
	{
	  return sex;
	};
	char* getgrade()
	{
	  return grade;
	}
	char* getClass()
	{
	  return Class;	
	}
	void SetInfor();
	void ShowInfor(CStudent& stu1);                //将对象作为函数的形参 
private:
	char name[10];
	char sex[10];
	char grade[10];
	char Class[10]; 
};
void CStudent::SetInfor(){
	cout<<"请输入该学生的姓名："<<endl;
	cin>>name;
	cout<<endl;
	cout<<"请输入该学生的性别："<<endl;
	cin>>sex;
	cout<<endl;
	cout<<"请输入该学生的年级："<<endl;
	cin>>grade;
	cout<<endl;
	cout<<"请输入该学生的班级："<<endl;
	cin>>Class;
	cout<<endl;
}
void CStudent::ShowInfor(CStudent& stu1){
	cout<<"该学生信息为："<<endl<<"姓名："<<stu1.getname()<<endl<<"性别："<<stu1.getsex()<<endl<<"年级："<<stu1.getgrade()<<endl<<"班级："<<stu1.getClass();
}
int main()
{
	CStudent stu1;
	stu1.SetInfor();
	stu1.ShowInfor(stu1);                              //将对象作为函数的实参 
	return 0;
}

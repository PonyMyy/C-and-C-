#include<iostream>  
using namespace std;
class CStudent{
public:
	void setname();
	void setsex();
	void setgrade();
	void setClass();
private:
	char name[10];
	char sex;
	char grade[5];
	char Class; 
};
void CStudent::setname(){
	int i;
	cout<<"请输入该学生的姓名："<<endl;
	cin>>name;
}
void CStudent::setsex(){
	cout<<"请输入该学生的性别："<<endl;
	cin>>sex;
}
void CStudent::setgrade(){
	cout<<"请输入该学生的年级："<<endl;
	cin>>grade;
}
void CStudent::setClass(){
	cout<<"请输入该学生的班级："<<endl;
	cin>>Class;
}
int main()
{
	
 } 



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
	cout<<"�������ѧ����������"<<endl;
	cin>>name;
}
void CStudent::setsex(){
	cout<<"�������ѧ�����Ա�"<<endl;
	cin>>sex;
}
void CStudent::setgrade(){
	cout<<"�������ѧ�����꼶��"<<endl;
	cin>>grade;
}
void CStudent::setClass(){
	cout<<"�������ѧ���İ༶��"<<endl;
	cin>>Class;
}
int main()
{
	
 } 



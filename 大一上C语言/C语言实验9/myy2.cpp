#include<iostream>  
using namespace std;
class CStudent{
public:
	char* getname()              //�������ֵΪ����Ҫ��*��ָ�� 
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
	void ShowInfor(CStudent& stu1);                //��������Ϊ�������β� 
private:
	char name[10];
	char sex[10];
	char grade[10];
	char Class[10]; 
};
void CStudent::SetInfor(){
	cout<<"�������ѧ����������"<<endl;
	cin>>name;
	cout<<endl;
	cout<<"�������ѧ�����Ա�"<<endl;
	cin>>sex;
	cout<<endl;
	cout<<"�������ѧ�����꼶��"<<endl;
	cin>>grade;
	cout<<endl;
	cout<<"�������ѧ���İ༶��"<<endl;
	cin>>Class;
	cout<<endl;
}
void CStudent::ShowInfor(CStudent& stu1){
	cout<<"��ѧ����ϢΪ��"<<endl<<"������"<<stu1.getname()<<endl<<"�Ա�"<<stu1.getsex()<<endl<<"�꼶��"<<stu1.getgrade()<<endl<<"�༶��"<<stu1.getClass();
}
int main()
{
	CStudent stu1;
	stu1.SetInfor();
	stu1.ShowInfor(stu1);                              //��������Ϊ������ʵ�� 
	return 0;
}

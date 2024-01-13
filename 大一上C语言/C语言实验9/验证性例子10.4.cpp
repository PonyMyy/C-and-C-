#include<iostream>
#include<string>
using namespace std;
class Student{
public:
		Student(int n,string nam,char s){
			num=n;name=nam;sex=s;
			cout<<"Constructor of "<<num<<" called."<<endl;
		}
		~Student(){
			cout<<"Destructor of "<<num<<" is called."<<endl;
		}
		void display(){
	    cout<<"num:"<<num<<" name:"<<name<<" sex: "<<sex<<endl;
		}
private:
	int num;
	string name;
	char sex;
}; 
int main(){
	Student stu1(10010,"Liming",'m');
	stu1.display();
	Student stu2(10011,"Wangli",'f');
	stu2.display();
	return 0;
}


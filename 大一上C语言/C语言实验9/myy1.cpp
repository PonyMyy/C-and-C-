#include<iostream>  
using namespace std; 
class Cylinder{
public:
    void setradius();
    void setheight();
    double getradius();
    double getheight();
    double getvolume();
private:
	double radius;
	double height;	
};
void Cylinder::setradius(){
 cout<<"������Բ����ĵ���뾶��";
 cin>>radius;
 cout<<endl;	
}
void Cylinder::setheight(){
 cout<<"������Բ����ĸߣ�";
 cin>>height;
 cout<<endl;	
}
double Cylinder::getradius(){
	return radius;
}
double Cylinder::getheight(){
	return height;
}
double Cylinder::getvolume(){
	return (3.14*radius*radius)*height;
}
int main(){
	Cylinder cy1;
	cy1.setradius();
	cy1.setheight();
	cout<<"��Բ�������Ϊ��" <<cy1.getvolume()<<endl; 
	cout<<"The volume of cylinder with radius "<<cy1.getradius()
	    <<" and height "<<cy1.getheight()
		<<" is ��"<<cy1.getvolume()<<endl; 
}


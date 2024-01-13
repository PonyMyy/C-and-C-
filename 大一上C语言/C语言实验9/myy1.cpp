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
 cout<<"请输入圆柱体的底面半径：";
 cin>>radius;
 cout<<endl;	
}
void Cylinder::setheight(){
 cout<<"请输入圆柱体的高：";
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
	cout<<"该圆柱体体积为：" <<cy1.getvolume()<<endl; 
	cout<<"The volume of cylinder with radius "<<cy1.getradius()
	    <<" and height "<<cy1.getheight()
		<<" is ："<<cy1.getvolume()<<endl; 
}


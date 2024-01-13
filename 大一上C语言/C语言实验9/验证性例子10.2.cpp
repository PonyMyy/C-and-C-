#include<iostream>
using namespace std;
class Rectangle{
public:
	Rectangle();
	Rectangle(double width,double height);
	void setwidth(double wid=2){width=wid;};
	void setheight(double heig=1){height=heig;};
	double getwidth();
	double getheight();
	double getArea();
	double getPerimeter();
private:
	double width,height;
};
Rectangle::Rectangle()
{
	width=1;
	height=1;
}
Rectangle::Rectangle(double wid,double heig)
{
	width=wid;
	height=heig;
}
int main()
{
	Rectangle rec1(10,20);
	Rectangle rec2;
	cout<<"The area of rec1 with width 10  and height 20 is 200 "<<endl;
    cout<<"The area of rec2 with width and height is 2"<<endl;
}
//cout<<"The area of rec1 with width 10  and height 20 is 200 "<<endl;
//cout<<"The area of rec2 with width and height is 2"<<endl;

//cout<<"The area of rec1 with width "<<rec1.getwidth()
//	<<" and height "<<rec1.getheight()<<" is "<<rec1.getArea()<<endl;
//cout<<"The area of rec2 with width "<<rec2.getwidth()
//	<<" and height "<<rec2.getheight()<<" is "<<rec2.getArea()<<endl;

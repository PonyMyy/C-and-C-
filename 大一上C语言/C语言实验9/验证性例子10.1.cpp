#include<iostream>
using namespace std;
class Rectangle{
public:
	void setwidth(double wid=2){width=wid;};
	void setheight(double heig=1){height=heig;};
	double getwidth();
	double getheight();
	double getArea();
	double getPerimeter();
private:
	double width;
	double height;
}; 
inline double Rectangle::getwidth()
{
	return width;
}
inline double Rectangle::getheight()
{
	return height;
}
double Rectangle::getArea()
{
	return width*height;
}
double Rectangle::getPerimeter()
{
	return 2*(width+height);
}

int main()
{
	Rectangle rec1,rec2;
	rec1.setwidth(10);
	rec1.setheight(20);
	rec2.setwidth();
	rec2.setheight();
	cout<<"The area of rec1 with width "<<rec1.getwidth()
	<<" and height "<<rec1.getheight()<<" is "<<rec1.getArea()<<endl;
	cout<<"The area of rec2 with width "<<rec2.getwidth()
	<<" and height "<<rec2.getheight()<<" is "<<rec2.getArea()<<endl;
}

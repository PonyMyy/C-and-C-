#include<iostream>
using namespace std; 
class  Timer{
public:
  	Timer(){hour=0;minute=0;second=0;}
  	Timer(int h,int m,int s);
  	Timer(Timer &t);
  	void setTimer(int newH,int newM,int newS);
  	void showTime();
  	Timer addASecond();
private:
	int hour,minute,second;
};

Timer::Timer(int h,int m,int s){
	hour=h;minute=m;second=s;
}
Timer::Timer(Timer &t){
	hour=t.hour;
	minute=t.minute;
	second=t.second;
	cout<<"Calling the copy constructor.";
}
void Timer::setTimer(int newH,int newM,int newS){
	hour=newH;minute=newM;second=newS;
}
void Timer::showTime(){
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
Timer Timer::addASecond(){
	second++;
	if(second>=60)
	{
		second=second-60;
		minute++;
		if(minute>=60)
		{
			minute=minute-60;
			hour++;
			hour=hour%24;
		}
	}
	return *this;
}
int main()
{
	Timer t1;
	t1.showTime();
	Timer t2(12,8,50);
	t2.showTime();
	Timer t3(t2);
	t3.showTime();
	t1=t2.addASecond();
	t1.showTime();
	Timer t4=t1;
	return 0;
}

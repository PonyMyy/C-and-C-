#include<iostream>
#include<string>
using namespace std;
class Sale
{
  public:
   	Sale(string good,int pri)
   	{
   		goods=good;      //�ββ������������һ����ֵ 
   		price=pri;
	}
   void display()
   {
   	cout<<"����ƷΪ��"<<goods<<endl;
	cout<<"����Ʒ�ۼ�Ϊ��"<<price<<"Ԫ";
   }
	private:
	string goods;
	int price;    
 };
 int main()
 {  
 	Sale sale1("ƻ��",10); 
	sale1.display();
	return 0;  
  } 

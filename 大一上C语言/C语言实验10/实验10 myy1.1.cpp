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
   void display(string goods)
   {
   	cout<<"����ƷΪ��"<<goods<<endl;
   }
	void display(int price)
   {
	cout<<"����Ʒ�ۼ�Ϊ��"<<price<<"Ԫ";
   }
   public:
	string goods;
	int price;    
 };
 int main()
 {  
 	Sale sale1("ƻ��",10); 
	sale1.display(sale1.goods);  //�������� ��� 
	sale1.display(sale1.price);
	return 0;  
  } 

#include<iostream>
#include<string>
using namespace std;
class Sale
{
  public:
   	Sale(string good,int pri)
   	{
   		goods=good;      //形参不能设置与变量一样的值 
   		price=pri;
	}
   void display(string goods)
   {
   	cout<<"该商品为："<<goods<<endl;
   }
	void display(int price)
   {
	cout<<"该商品售价为："<<price<<"元";
   }
   public:
	string goods;
	int price;    
 };
 int main()
 {  
 	Sale sale1("苹果",10); 
	sale1.display(sale1.goods);  //函数重载 输出 
	sale1.display(sale1.price);
	return 0;  
  } 

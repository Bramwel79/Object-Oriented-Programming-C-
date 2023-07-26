#include<iostream>

using namespace std;

const string CREAM = "cream";
const string MILK = "milk";
const string SUGAR = "sugar";
const string SWEETENER = "sweetener";
const int ORDERS = 4;
string order1;
string order2;
string order3;
string order4;


class CoffeeOrder
{
 private:
     static double price;
     int cream;
     int milk;
     int sugar;
     int sweetener;
     int flag;
     int getCream();
     int getMilk();
     int getSugar();
     int getSweetener();


 public:
     void dataEntry();
     void setValues(string c,string m,string s,string sw);
    //void setMilk(int m);
     //void setSugar(int s);
     //void setSweetener(int sw);


};

double CoffeeOrder::price = 1.25;

int CoffeeOrder::getCream()
{
    return cream;
}

int CoffeeOrder::getMilk()
{
    return milk;
}

int CoffeeOrder::getSugar()
{
    return sugar;
}

int CoffeeOrder::getSweetener()
{
    return sweetener;
}

/*void CoffeeOrder::setCream(int c)
{
    cream = c;
}

void CoffeeOrder::setMilk(int m)
{
    milk = m;
}

void CoffeeOrder::setSugar(int s)
{
    sugar = s;
}

void CoffeeOrder::setSweetener(int sw)
{
    sweetener = sw;
}
*/

void CoffeeOrder::setValues(string c,string m,string s,string sw)
{
  if(c == CREAM && m == CREAM)
  {
      cream = 1;
      milk = 0;

  }
  if(c == MILK && m == MILK)
  {
      milk = 1;
      cream = 0;

  }
  if(s == SUGAR && sw == SUGAR)
  {
      sugar = 1;
      sweetener = 0;

  }
  if(s == SWEETENER && sw == SWEETENER)
  {
      sweetener = 1;
      sugar = 0;

  }
  if((c == CREAM && m == MILK) || (c == MILK && m == CREAM))
  {
      milk = 0;
      cream = 1;
  }
  if((s == SUGAR && sw == SWEETENER) || (s == SWEETENER && sw == SUGAR))
  {
      sweetener = 0;
      sugar = 1;
  }
  cout <<"Cream status     :"<<getCream()<<endl;
  cout <<"Milk status      :"<<getMilk()<<endl;
  cout <<"Sugar status     :"<<getSugar()<<endl;
  cout <<"Sweetener status :"<<getSweetener()<<endl;
}
void CoffeeOrder::dataEntry()
{
    cout <<"Enter cream, milk, sugar or sweetener for your order"<<endl;
    cout <<"\n";
    cout <<"Enter order no 1 : ";
    cin >>order1;
    cout <<"Enter order no 2 : ";
    cin >>order2;
    cout <<"Enter order no 3 : ";
    cin >>order3;
    cout <<"Enter order no 4 : ";
    cin >>order4;
}

int main()
{

 CoffeeOrder co;
 co.dataEntry();
 co.setValues(order1,order2,order3,order4);

    return 0;
}



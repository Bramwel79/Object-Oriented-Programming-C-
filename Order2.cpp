#include<iostream>

using namespace std;

class Order
{
private:
    int tableNumber;
    string serverName;
    int patronNumbers;
    static double table_minimum_charge;
public:
     static void displayTableMinCharge();
     void displayData(Order o);
     void displayData();
     void setTableNumber(int no);
     void setServerName(string name);
     void setPatronNumbers(int no);
     int getTableNumber();
     string getServerName();
     int getPatronNumbers();

};

double Order::table_minimum_charge = 4.75;

void Order::setTableNumber(int no)
{
    tableNumber = no;
}

void Order::setServerName(string s)
{
    serverName = s;
}
void Order::setPatronNumbers(int no)
{
    patronNumbers = no;
}
int Order::getTableNumber()
{
    return tableNumber;
}

string Order::getServerName()
{
    return serverName;
}

int Order::getPatronNumbers()
{
    return patronNumbers;
}
void Order::displayTableMinCharge()
{
    cout <<"Table minimum charge is " <<table_minimum_charge<<endl;
}
void Order::displayData(Order o)
{
    cout <<"Table number is " << o.getTableNumber()<<endl;
    cout <<"Server's name is " <<o.getServerName()<<endl;
    cout <<"Patron numbers is "<<o.getPatronNumbers()<<endl;
    double minCharge = table_minimum_charge * patronNumbers;
    cout <<"Table minimum charge is "<<minCharge<<endl;
}
void Order::displayData()
{
    cout <<"Table number is " << getTableNumber()<<endl;
    cout <<"Server's name is " <<getServerName()<<endl;
    cout <<"Patron numbers is "<<getPatronNumbers()<<endl;
    double minCharge = table_minimum_charge * patronNumbers;
    cout <<"Table minimum charge is "<<minCharge<<endl;
}

int main()
{

    Order order ;
    order.setTableNumber(152);
    order.setServerName("Michael");
    order.setPatronNumbers(5);
    cout<<"Display using an instance of Order class as parameter:"<<endl;
    order.displayData(order);
    cout<<"\n";
    cout<<"Display without using an instance of Order class as parameter:"<<endl;
    order.displayData();


    return 0;
}

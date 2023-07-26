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

};

double Order::table_minimum_charge = 4.75;

void Order::displayTableMinCharge()
{
    cout <<"Table minimum charge is " <<table_minimum_charge<<endl;
}

int main()
{
    Order::displayTableMinCharge();

    return 0;
}

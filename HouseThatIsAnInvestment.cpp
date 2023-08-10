#include<iostream>
#include "Investment.cpp"
#include "House.cpp"

using namespace std;

class HouseThatIsAnInvestment: virtual public Investment, virtual public House
{
protected:


public:
   HouseThatIsAnInvestment(double,double,string,int);
   void displayHouseThatIsAnInvestment();


};
HouseThatIsAnInvestment::HouseThatIsAnInvestment(double d,double d2,string s,int x):
                                       Investment(d,d2),House(s,x)
                                       {

                                       }

void HouseThatIsAnInvestment::displayHouseThatIsAnInvestment()
{
    Investment::displayInvestment();
    House::displayHouse();
}


int main()
{
    HouseThatIsAnInvestment votre(45000.55,85000.50,"Adams",500);
    HouseThatIsAnInvestment notre(15000,65000,"George",100);
    votre.displayHouseThatIsAnInvestment();
    cout <<"\n";
    notre.displayHouseThatIsAnInvestment();

    return 0;
}

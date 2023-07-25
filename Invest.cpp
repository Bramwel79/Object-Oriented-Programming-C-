#include<iostream>
#include<iomanip>

using namespace std;

struct Investment
{
    int investmentYears;
    double initialInvestmentAmount;
    double finalInvestmentAmount;


};

int main()
{
   const double INTEREST_RATE = 0.08;
   Investment amarenyo;
   size_t x;
   double interestEarned;
   cout << "Enter Investment Years: ";
   cin >> amarenyo.investmentYears;
   cout << "Enter Initial Investment Amount: ";
   cin >> amarenyo.initialInvestmentAmount;
   cout <<"\n";

   for(x = 0;x < amarenyo.investmentYears;++x)
   {
       interestEarned = INTEREST_RATE * amarenyo.initialInvestmentAmount;
       cout <<fixed<<setprecision(2)<< "After year " << x+1 << " the investment amount of " << amarenyo.initialInvestmentAmount << " yields interest of " << interestEarned;
       cout << "\n";
       amarenyo.initialInvestmentAmount += interestEarned;
       amarenyo. finalInvestmentAmount = amarenyo.initialInvestmentAmount;
   }
       cout << "\n";
       cout << "After year " << x << " your final investment amount is " << amarenyo.finalInvestmentAmount;

    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  const double ANNUAL_RETURN = 0.08;
  double investmentAmount;
  double returnOnInvestment;
  int years;
  int x;
  cout << "Enter Investment Amount: ";
  cin >> investmentAmount;
  cout << "Enter number of years to invest: ";
  cin >> years;

  while(years < 1 || years > 30)
  {
      cout << "Enter number of years to invest: ";
      cin >> years;

  }
  for(x = 0 ; x< years;++x)
  {
     returnOnInvestment = investmentAmount * ANNUAL_RETURN;
     cout << fixed<< setprecision(2)<< "After year " << x+1 << " the Investment Amount is " << investmentAmount;
     cout << " and the return is " << returnOnInvestment<<endl;
     investmentAmount += returnOnInvestment;
  }
     cout <<"\n";
     cout << "After year " << x << " the investment amount is " << investmentAmount;

    return 0;
}

#include<iostream>

using namespace std;

int getDailySales();
double calculateCommission();
const double COMMISSION_ONE = 0.03;
const double COMMISSION_TWO = 0.035;
const double COMMISSION_THREE = 0.045;

int main()
{
    double comm = calculateCommission();
    cout <<"Commission is " << comm;

    return 0;
}

int getDailySales()
{
    int amount;
    cout <<"Enter Salesperson daily sales: ";
    cin >> amount;

    return amount;
}

double calculateCommission()
{
    double commission = 0;
    int sales = getDailySales();
    if (sales >=0 && sales <= 999)
    {
        commission = sales * COMMISSION_ONE;

    }
    else if(sales >= 1000 && sales <= 2999)
    {
        commission = sales * COMMISSION_TWO;
    }
    else
    {
        commission = sales * COMMISSION_THREE;
    }

  return commission;
}

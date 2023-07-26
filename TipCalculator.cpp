#include<iostream>

using namespace std;

double getLeastExpensiveBill();
double getMostExpensiveBill();
void tipTable();
const double PERCENT = 0.15;

int main()
{
    tipTable();

    return 0;
}

double getLeastExpensiveBill()
{
    double lBill;
    cout <<"Enter least expensive bill: ";
    cin >>lBill;

    return lBill;

}
double getMostExpensiveBill()
{
    double mBill;
    cout <<"Enter most expensive bill: ";
    cin >>mBill;

    return mBill;
}

void tipTable()
{
    int least;
    int most;
    least = (int)getLeastExpensiveBill();
    most = (int)getMostExpensiveBill();
    if(least > most)
    {
        cout <<"Least amount can not be less than most amount.";
    }
    else
    {
        for(int x = least; x <= most;++x)
        {
            double result = x * PERCENT;
            cout <<x <<" * " << PERCENT<< " = "<< result<<endl;
        }
    }

}

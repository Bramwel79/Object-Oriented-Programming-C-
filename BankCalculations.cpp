#include<iostream>
#include<iomanip>

using namespace std;

double getBeginningBalance();
void enterMonthlyAmounts();
double getMonthlyInterestRate();
void balanceAccount(double balance,int numberOfEntries,double amt[]);
void balanceAccount(double balance,int numberOfEntries,double amt[],double interestRate);

const int MAXIMUM_CHECKS = 50;
const double SENTINEL = -1;
int entries = 0;
double beginningBalance = 0;
double amount[MAXIMUM_CHECKS] = {0};
double interestRate = 0;



int main()
{
     beginningBalance = getBeginningBalance();
     enterMonthlyAmounts();
     interestRate = getMonthlyInterestRate();
     if(interestRate == 0)
     {
         balanceAccount(beginningBalance,entries,amount);
     }
     else
     {
         balanceAccount(beginningBalance,entries,amount,interestRate);
     }

    return 0;
}

/*
* method gets the beginning balance
*/
double getBeginningBalance()
{
    double bal;
    cout <<"Enter beginning balance: ";
    cin >>bal;

    return bal;
}

/*
* method gets the monthly check amounts up to a max
* of 50 and stores them in an array
*/
void enterMonthlyAmounts()
{
   double checkAmount;
   for(int x = 0; x < MAXIMUM_CHECKS;++x)
   {
       cout <<"Enter amount or "<<SENTINEL << " to quit : ";
       cin >> checkAmount;
       if(checkAmount == SENTINEL)
       {
           break;
       }
       else
       {
          amount[x] = checkAmount;
          ++entries;
       }

   }

}

/*
* method gets monthly interest rate
*/
double getMonthlyInterestRate()
{
    double rate = 0;
    cout <<"If account is interest bearing, enter the interest\n"
            "rate. If it is not enter 0 : ";
    cin >>rate;

    return rate;
}

/*
* method displays final balance after all checks have
* been subtracted from beginning balance
*/
void balanceAccount(double balance,int numberOfEntries,double amt[])
{

    for(int i = 0 ; i < numberOfEntries;++i)
    {
        balance = balance - amt[i];

    }

    cout <<fixed<<setprecision(2)<<"Final Balance is " << balance<<endl;

}

/*
* method displays final balance after all checks have
* been subtracted from beginning balance
*/
void balanceAccount(double balance,int numberOfEntries,double amt[],
                    double interestRate)
{

    for(int i = 0 ; i < numberOfEntries;++i)
    {
        balance = balance - amt[i];
    }
    balance = ((balance * interestRate) + balance);

    cout <<fixed<< setprecision(2)<<"Final Balance is " <<balance<<endl;

}


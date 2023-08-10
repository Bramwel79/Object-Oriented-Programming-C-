#include<iostream>

#include "BankAccount.cpp"

using namespace std;


class CheckingAccount: virtual public BankAccount
{
   friend ostream& operator<<(ostream&, const CheckingAccount&); //output or insertion operator

   protected:
   double monthlyFee;
   int numberOfChecks;

   public:
   CheckingAccount();
   CheckingAccount(int acct, double bal);

};

CheckingAccount::CheckingAccount():BankAccount()
{

}
CheckingAccount::CheckingAccount(int acct, double bal) :
     BankAccount(acct,bal)
{
    cout << "Enter a monthly fee: ";
    cin >> monthlyFee;
    cout << "Enter number of checks: ";
    cin >> numberOfChecks;
}

ostream& operator<<(ostream& out, const CheckingAccount& acct)
   {
       out<< "The checking account number is " << acct.accountNumber <<"\n"
             "The checking account balance is " << acct.accountBalance <<"\n"
             "The checking monthly fee is " << acct.monthlyFee <<"\n"
             "The checking number of checks is " <<acct.numberOfChecks <<endl;
      return out ;
   }

class SavingsAccount: virtual public BankAccount
{
   friend ostream& operator<<(ostream&, const SavingsAccount&); //output or insertion operator

   protected:
   double interestRate;

   public:
   SavingsAccount();
   SavingsAccount(int acct, double bal);
   SavingsAccount(int acct, double bal, double rate);

};

SavingsAccount::SavingsAccount():BankAccount()
{

}
SavingsAccount::SavingsAccount(int acct, double bal):
    BankAccount(acct,bal)
{

     interestRate = 0.03;
}

SavingsAccount::SavingsAccount(int acct, double bal,double rate):
    BankAccount(acct,bal)
{

     interestRate = rate;
}

ostream& operator<<(ostream& out, const SavingsAccount& acct)
   {
      out << "The savings account number is " << acct.accountNumber<< "\n"
             "The savings account balance is " << acct.accountBalance << "\n"
             "The savings interest rate is " << acct.interestRate<<endl;
      return out ;
   }


class CheckingWithInterest : virtual public CheckingAccount, virtual public SavingsAccount
{

 public:
    CheckingWithInterest();
    CheckingWithInterest(int,double,int ,double,int, double,double);
};

CheckingWithInterest::CheckingWithInterest():BankAccount(),CheckingAccount(),SavingsAccount()
{

};
CheckingWithInterest::CheckingWithInterest(int a, double b,int acct, double bal, int ac, double ball,double r):
    BankAccount(a,b),CheckingAccount(acct,bal), SavingsAccount(ac,ball,r){};

int main()
{
   int x;
   int accountNumber;
   double balance;
   CheckingWithInterest cwi[5];


   for(x = 0; x < 5;++x)
   {
       cout << "Enter account number: ";
       cin >> accountNumber;
       cout << "Enter account balance: ";
       cin >> balance;
       cwi[x] = CheckingWithInterest(accountNumber,balance,accountNumber,balance,
                                accountNumber,balance,0.02);

       cwi[x].displayAccount();

   }

    return 0;
}



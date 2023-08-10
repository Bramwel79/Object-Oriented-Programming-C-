#include<iostream>

using namespace std;

struct BankAccount
{
    friend ostream& operator<<(ostream&, const BankAccount&); //output or insertion operator
    friend istream& operator>>(istream&, BankAccount&); //input or extraction operator
    int accountNumber;
    double accountBalance;
    double annualInterestRate;
    double operator+=(double deposit);
    int operator+(int add);
    int operator==(const BankAccount& bc);
    int operator<(const BankAccount& bc);
    int operator>(const BankAccount& bc);
    BankAccount enterAccountData();
    void computeInterest(BankAccount ba);
    void displayAccount(BankAccount ba);
    int getAccountNumber();
    double getBalance();
    double getRate();

};struct BankAccount myAccount;


double BankAccount ::operator+=(double deposit)
{

   accountBalance += deposit;
   return accountBalance;

}

int BankAccount ::operator+(int add)
{
   accountNumber = accountNumber + add;
   return accountNumber;

}

int BankAccount::operator<(const BankAccount& bc)
{
    int lessThan = 0;
    if(accountBalance < bc.accountBalance)
    {
        lessThan = 1;
    }

    return lessThan;
}

int BankAccount::operator>(const BankAccount& bc)
{
    int greaterThan = 0;
    if(accountBalance > bc.accountBalance)
    {
        greaterThan = 1;
    }

    return greaterThan;
}

int BankAccount::operator==(const BankAccount& bc)
{
    int same = 0;
    if(accountBalance == bc.accountBalance)
    {
        same = 1;
    }

    return same;
}

int getAccountNumber()
{
    int savings;

    cout << "What is the account number for savings: ";
    cin >>savings ;
    while(savings < 1000 || savings > 9999)
    {
        cout << "Account number was invalid.It should be between 1000 and 9999."
                "\nRe-enter account number for savings: ";
        cin >>savings;
    }

    return savings;
}

double getBalance()
{
    double balance;
    cout << "What is the balance ";
    cin >>balance;
    while(balance < 0 ||
          balance > 100000)
    {
        cout << "Account balance should not be negative nor over 100,000. Re-enter balance: ";
        cin >> balance;
    }

    return balance;
}

double getRate()
{
    double rate;
    cout << "Enter interest Rate ";
    cin >> rate;
    while(rate < 0
          || rate > 0.15)
    {
        cout << "Re-enter interest rate between 0 and 0.15: ";
        cin >> rate;
    }

    return rate;
}
BankAccount enterAccountData()
{
    BankAccount savings;

    cout << "What is the account number for savings: ";
    cin >>savings.accountNumber ;
    while(savings.accountNumber < 1000 || savings.accountNumber > 9999)
    {
        cout << "Account number was invalid.It should be between 1000 and 9999."
                "\nRe-enter account number for savings: ";
        cin >>savings.accountNumber ;
    }

    //get savings balance
    cout << "What is the balance ";
    cin >>savings.accountBalance;
    while(savings.accountBalance < 0 ||
          savings.accountBalance > 100000)
    {
        cout << "Account balance should not be negative nor over 100,000. Re-enter balance: ";
        cin >> savings.accountBalance;
    }
     //get savings annual interest rate
    cout << "Enter interest Rate ";
    cin >> savings.annualInterestRate;
    while(savings.annualInterestRate < 0
          || savings.annualInterestRate > 0.15)
    {
        cout << "Re-enter interest rate between 0 and 0.15: ";
        cin >> savings.annualInterestRate;
    }

    return savings;
}

void computeInterest(BankAccount ba)
{
    double depositAmount;
    double balanceSavingsAccount;
    double withdrawalAmount;
    string monthNames[] = {"JANUARY","FEBRUARY","MARCH",
                           "APRIL","MAY","JUNE","JULY","AUGUST",
                           "SEPTEMBER","OCTOBER","NOVEMBER",
                           "DECEMBER"};

     int term;
     cout << "\n";
     cout << "Enter automatic deposit amount ";
     cin >> depositAmount;
     cout << "Enter automatic withdrawal amount " ;
     cin >> withdrawalAmount;
     cout << "Enter term of account in years ";
     cin >> term;
     while(term < 0 || term > 10)
     {
         cout << "Term must be between 1 and 10.Re-enter term ";
         cin >> term;
     }

     balanceSavingsAccount = (((ba.accountBalance * 1 * ba.annualInterestRate)/12) + depositAmount - withdrawalAmount);

     //display table
     double savingsStartingBalance = ba.accountBalance;
     for (int x = 0; x < term;++x)
     {
         cout << "Year number is " << x + 1<<endl;
         for(int y = 0; y < 12;++y)
         {
            cout << "Month is "<< monthNames[y]<< endl;
            cout << "Savings Month starting balance is "<<savingsStartingBalance<<endl;

            balanceSavingsAccount = (((savingsStartingBalance * 1 * ba.annualInterestRate)/12) + depositAmount - withdrawalAmount) + savingsStartingBalance;
            double savingsClosingBalance = balanceSavingsAccount;

            cout << "Savings Month closing balance is "<<savingsClosingBalance<<endl;
            cout << "\n";

            savingsStartingBalance = savingsClosingBalance;


         }
         cout <<"\n";

     }
}

void displayAccount(BankAccount ba)
{
    cout << "The account number is " << ba.accountNumber << endl;
    cout << "The annual interest is " << ba.annualInterestRate<< endl;
    cout << "The account balance is " << ba.accountBalance <<endl;
}

int main()
{
    BankAccount barclay[5];
    int acct;
    int x,y;

    //enter first entry
    barclay[0].accountNumber = getAccountNumber();
    barclay[0].accountBalance = getBalance();
    barclay[0].annualInterestRate = getRate();
    displayAccount(barclay[0]);
    computeInterest(barclay[0]);

    for(x = 1; x < 5; ++x)
    {
        barclay[x].accountNumber = getAccountNumber();

        for(y = 0; y < x;++y)
        {
            while(barclay[x].accountNumber == barclay[y].accountNumber)
            {
                 cout << "Account already exists.Re-enter account number for savings: ";
                 barclay[x].accountNumber = getAccountNumber();
            }

        }
        barclay[x].accountBalance = getBalance();
        barclay[x].annualInterestRate = getRate();
        displayAccount(barclay[x]);
        computeInterest(barclay[x]);
    }

    cout << "\n";

    return 0 ;

}

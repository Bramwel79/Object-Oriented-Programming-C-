#include<iostream>

using namespace std;

struct BankAccount
{
    int accountNumber;
    double accountBalance;
    double annualInterestRate;

};

BankAccount enterAccountData();
void computeInterest(BankAccount ba);
void displayAccount(BankAccount ba);

int main()
{
    //BankAccount savings;
    //BankAccount credit;
    //int checkDigit ;
    //double amountToTransfer;

   // double balanceCreditAccount;
   // int term;

    BankAccount barclay;
    barclay = enterAccountData();
    displayAccount(barclay);
    computeInterest(barclay);




   // checkDigit = savings.accountNumber % 5;

   /* cout << "The account number is "<<savings.accountNumber << checkDigit<< " and the balance is "
         <<savings.accountBalance<<endl;
   */
    //cout << "\n";
    /*
    //get credit account number
    cout << "What is the account number for credit ";
    cin >>credit.accountNumber ;
    while((credit.accountNumber == savings.accountNumber)
          ||(credit.accountNumber < 1000 || credit.accountNumber > 9999) )
    {
        //credit.accountNumber = 0;
        cout << "Account number was invalid.Enter an account number different from the fist one\n."
                "It should be between 1000 and 9999."
                "\nRe-enter account number for savings: ";
        cin >>credit.accountNumber ;
    }

    checkDigit = credit.accountNumber % 5;

    //get credit account balance
    cout << "What is the balance ";
    cin >>credit.accountBalance;
    while(credit.accountBalance < 0 ||
          credit.accountBalance > 100000)
    {
        cout << "Account balance should not be negative nor over 100,000. Re-enter balance: ";
        cin >> credit.accountBalance;
    }

    // get credit annual interest rate
    cout << "Enter interest Rate ";
    cin >> credit.annualInterestRate;
    while(credit.annualInterestRate < 0
          || credit.annualInterestRate > 0.15)
    {
        cout << "Re-enter interest rate between 0 and 0.15: ";
        cin >> credit.annualInterestRate;
    }
    // cout << "\n";
     //get term ,automatic deposit and withdrawal


    // cout << "\n";



   /*
    cout << "The account number is "<<credit.accountNumber << checkDigit<< " and the balance is "
         <<credit.accountBalance<<endl;
    */
    cout << "\n";

    // prompt user to transfer amount from first account to second account
    //cout << "Enter amount to transfer from account one to account two: ";
    //cin >> amountToTransfer;



    // stop transaction if both accounts have same number
    /*
    if(savings.accountNumber != credit.accountNumber)
    {
        cout << "After transfer Savings account balance is " <<balanceSavingsAccount;
        cout <<"\nand Credit account balance is " << balanceCreditAccount <<endl;

    }
    else
    {
        cout << "Both accounts have the same account number.";
        cout << "\nNo transfer of funds allowed." <<endl;


    }
       cout << "****************************************************************" << endl;
     */
    return 0 ;

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

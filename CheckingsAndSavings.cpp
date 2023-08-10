#include<iostream>

//#include "SavingsAccount.cpp"
#include "CheckingAccount.cpp"


using namespace std;

int main()
{
   //SavingsAccount sa(1000,55000);
   //sa.displayAccount();

   CheckingAccount ca(1001,45000);
   cout << ca;
}

#include<iostream>

using namespace std;

class Person
{
private:
    string lastName;
    string firstName;
    string zipCode;
public:
    Person(string lname, string fname,string code);
    void setLastName(string name);
    void setFirstName(string name);
    void setZipCode(string code);
    string getLastName();
    string getFirstName();
    string getZipCode();

};

Person::Person(string lname, string fname,string code)
{
    lastName = lname;
    firstName = fname;
    zipCode = code;
}
string Person::getFirstName()
{
    return firstName;
}
string Person::getLastName()
{
    return lastName;
}
string Person::getZipCode()
{
    return zipCode;
}
void Person::setFirstName(string name)
{
   firstName = name;
}
void Person::setLastName(string name)
{
    lastName = name;
}
void Person::setZipCode(string code)
{
    zipCode = code;
}


class SavingsAccount
{
    private:
       Person person;
       int accountNo;
       int balance;
       double interestRate;

   public:
       SavingsAccount(string lname,string fname, string code);
       SavingsAccount(string lname,string fname, string code,int acctNo);
       int getAccountNo();
       int getBalance();
       double getInterestRate();
       void displayAccountDetails();
};

int SavingsAccount::getAccountNo()
{
    return accountNo;
}

int SavingsAccount:: getBalance()
{
    return balance;
}

double SavingsAccount:: getInterestRate()
{

    return interestRate;
}
SavingsAccount::SavingsAccount(string lname,string fname, string code):
                 person(lname,fname,code)
{
  accountNo = 0;
  balance = 0;
  interestRate = 0;

}

SavingsAccount::SavingsAccount(string lname,string fname, string code,int acctNo):
                 person(lname,fname,code)
{
  accountNo = acctNo;
  balance = 100;
  interestRate = 0.03;

}

void SavingsAccount::displayAccountDetails()
{
    cout <<"Customer First Name: " <<person.getFirstName()<<endl;
    cout <<"Customer Last Name: " <<person.getLastName()<<endl;
    cout <<"Customer Zip Code: " <<person.getZipCode()<<endl;
    cout <<"Account No: "<<getAccountNo()<<endl;
    cout <<"Balance is: " <<getBalance()<<endl;
    cout <<"Interest Rate is: " <<getInterestRate()<<endl;
}
int main()
{
    SavingsAccount sa("Bramwel","Nawate","00505");
    sa.displayAccountDetails();
    cout <<"**********************************"<<endl;
    SavingsAccount sa2("Getray","Shijenje","46647",12345);
    sa2.displayAccountDetails();


    return 0;
}




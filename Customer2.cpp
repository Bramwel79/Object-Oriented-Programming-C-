#include<iostream>

using namespace std;
const int SIZE = 5;
class Customer
{
private:
    int idNumber;
    string lastName;
    string firstName;
    int creditLimit;
public:
    void setIdNumber(int);
    void setLastName(string);
    void setFirstName(string);
    void setCreditLimit(int);
    void displayCustomerData();

};

void Customer::setIdNumber(int no)
{
    idNumber = no;
}
void Customer::setLastName(string lastName)
{
    this->lastName = lastName;
}
void Customer::setFirstName(string firstName)
{
    this->firstName = firstName;
}
void Customer::setCreditLimit(int limit)
{
    if(limit <= 10000)
    {
      creditLimit = limit;
    }
    else
    {
        creditLimit = 10000;
    }

}
void Customer::displayCustomerData()
{
    cout << "Id no : "<<idNumber<<endl;
    cout <<"Last Name is : "<<lastName<<endl;
    cout <<"First Name is : "<<firstName<<endl;
    cout <<"Credit limit is :" <<creditLimit<<endl;
}
int main()
{
   Customer customer[SIZE];
   int id;
   string nameLast;
   string nameFirst;
   int cLimit;
   for(int x = 0; x < SIZE;++x)
   {
       cout <<"Enter id number for customer " <<(x+1)<< ": ";
       cin >> id;
       cout <<"Enter First Name for customer " <<(x+1)<< ": ";
       cin >> nameFirst;
       cout <<"Enter Last Name for customer " <<(x+1)<< ": ";
       cin >> nameLast;
       cout <<"Enter Credit Limit for customer " <<(x+1)<< ": ";
       cin >> cLimit;
       customer[x].setIdNumber(id);
       customer[x].setFirstName(nameFirst);
       customer[x].setLastName(nameLast);
       customer[x].setCreditLimit(cLimit);
       customer[x].displayCustomerData();
       cout <<"***********************************************"<<endl;
   }


}

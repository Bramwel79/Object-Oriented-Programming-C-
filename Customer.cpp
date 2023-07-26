#include<iostream>

using namespace std;

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
   Customer toi;
   toi.setIdNumber(999);
   toi.setLastName("Steve");
   toi.setFirstName("Robert");
   toi.setCreditLimit(50000);
   toi.displayCustomerData();
}

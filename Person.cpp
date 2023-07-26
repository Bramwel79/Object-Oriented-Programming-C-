#include<iostream>

using namespace std;

class Person
{
private:
    string lastName;
    string firstName;
    string zipCode;
public:
    Person();
    void setLastName(string name);
    void setFirstName(string name);
    void setZipCode(string code);
    string getLastName();
    string getFirstName();
    string getZipCode();

};

Person::Person()
{
    lastName = "X";
    firstName = "X";
    zipCode = "X";
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

int main()
{
    Person nate;
    Person getty;
    getty.setFirstName("Getray");
    getty.setLastName("Shijenje");
    getty.setZipCode("2882");
    cout <<"First Name: "<<nate.getFirstName()<<" Last Name: "<<nate.getLastName() <<" Zip Code: " <<nate.getZipCode()<<endl;
    cout <<"First Name: "<<getty.getFirstName()<<" Last Name: "<<getty.getLastName() <<" Zip Code: " <<getty.getZipCode()<<endl;

    return 0;
}

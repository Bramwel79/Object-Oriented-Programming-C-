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
    Person(string lName,string fName, string code);
    void setLastName(string name);
    void setFirstName(string name);
    void setZipCode(string code);
    string getLastName();
    string getFirstName();
    string getZipCode();
    void displayPerson();

};

Person::Person()
{

}

Person::Person(string lName,string fName, string code)
{
    lastName = lName;
    firstName = fName;
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
void Person::displayPerson()
{
    cout <<"First Name is " <<getFirstName()<<endl;
    cout <<"Last Name is  " <<getLastName()<<endl;
    cout <<"Zip Code is " <<getZipCode()<<endl;
}

class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date();
    Date(int m, int d, int y);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth();
    int getDay();
    int getYear();
    void display();
    static string slash;

};
string Date:: slash = "/";
Date::Date()
{
    month = 1;
    day = 1;
    year = 2000;

}

Date::Date(int m, int d , int y)
{
    month = m;
    day = d;
    year = y;
}

void Date::setMonth(int m)
{
   month  = m;
}

void Date::setDay(int d)
{
   day  = d;
}

void Date::setYear(int y)
{
   year  = y;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}

int Date::getYear()
{
    return year;
}
void Date::display()
{
    cout <<getDay()<<slash<<getMonth()<<slash<<getYear()<<endl;
}

class MagazineSubscription
{
private:
   Person person;
   Date startDate;
   Date expirationDate;


public:
   MagazineSubscription(string,string,string,int,int,int,int,int,int);
   MagazineSubscription(Person p, Date s,Date e);
   void display();



};

MagazineSubscription::MagazineSubscription(string lName,string fName,string code,
                                          int mon, int da, int yr,
                                          int m, int d, int y ): person(lName,fName,code),startDate(mon,da,yr),
                                          expirationDate(m,d,y)
{


}

MagazineSubscription::MagazineSubscription(Person p, Date s,Date e)
  {
      person = p;
      startDate = s;
      expirationDate = e;
  }
void MagazineSubscription::display()
{
    cout <<"Subscriber Details:"<<endl;
    person.displayPerson();
    cout <<"Start Date:"<<endl;
    startDate.display();
    cout<<"Expiration Date:"<<endl;
    expirationDate.display();

}

int main()
{

    Person pr("Bramwel","Nawate","00505");
    Date one(12,12,2009);
    Date two(31,12,2009);
    MagazineSubscription ms(pr,one,two);
    ms.display();

    return 0;
}

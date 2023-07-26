#include <iostream>
#define SIZE 3

using namespace std;
const int MINUTES = 59;
const int HOURS = 23;

class Time
{
private:
    int hours; //0 to 23
    int minutes;

public:
    Time(int,int = 0);
    void displayTime();
    void addTime(int mins);
    void setHours(int h);
    void setMinutes(int m);
    int getHours();
    int getMinutes();
    static string semicolon;

};
string Time::semicolon = ":";

Time::Time(int h,int m )
{
    hours = h;
    minutes = m;
    if( hours > HOURS)
    {
        hours = HOURS;
    }
    if(minutes > MINUTES)
    {
        minutes = MINUTES;
    }
}
int Time::getHours()
{
    return hours;
}
int Time::getMinutes()
{
    return minutes;
}
void Time::setHours(int h)
{
    hours = h;
}
void Time::setMinutes(int m)
{
    minutes = m;
}
void Time::addTime(int mins)
{
    int extraMins;
    int extraHours;
    int newMinute;
    int newHour;

    extraMins =  getMinutes() + mins;
    extraHours = extraMins / 60;
    extraMins %= 60;
    newHour = getHours() + extraHours;
    if(newHour > HOURS)
    {
        newHour -= HOURS;
        setHours(newHour-1); //2400hrs is 00:00
    }
    else
    {
        setHours(newHour);
    }

    if(extraMins > MINUTES)
    {
        newMinute = extraMins - MINUTES;
        setMinutes(newMinute-1); //60secs is 1 minutes. In application max is 59
    }
    else
    {
        setMinutes(extraMins);
    }


}
void Time::displayTime()
{
    int hrs = getHours();
    int mins = getMinutes();
    if(hrs < 10 && mins >= 10) //hours is less than 10
    {
        cout <<"0" <<getHours() << semicolon << getMinutes()<<endl;
    }
    if(hrs >= 10 && mins < 10) //minutes less than 10
    {
        cout <<getHours() << semicolon <<"0"<< getMinutes()<<endl;
    }
    if(hrs <10 && mins < 10) //both less than 10
    {
        cout <<"0"<<getHours() << semicolon <<"0"<< getMinutes()<<endl;
    }
    if(hrs >= 10 && mins >= 10) //both greater than 10
    {
        cout << getHours() << semicolon << getMinutes()<<endl;
    }

}


class Person
{
private:
    string lastName;
    string firstName;
    string zipCode;
public:
    Person();
    Person(string lName,string fName, string code);
    Person(string lName,string fName);
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

Person::Person(string lName,string fName)
{
    lastName = lName;
    firstName = fName;
    zipCode = "X";
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
    cout <<getFirstName()<<" "<<getLastName()<<" lives in Zip Code " <<getZipCode()<<endl;
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
    cout <<"Appointment date " <<getDay()<<slash<<getMonth()<<slash<<getYear()<<endl;
}


class DentalAppointment
{
private:
    Person person;
    Date date;
    Time endTime;
    Time startTime;
    int duration;

public:
    DentalAppointment(string,string,int,int,int,int,int,int = 30);
    void display();



};
DentalAppointment::DentalAppointment(string lName,string fName,int d,int m,int y,int hr,int mins,int dur)
                                       :person(lName,fName),date(d,m,y),endTime(hr,mins),startTime(hr,mins)
{

      duration = dur;
      if(duration > 240)
      {
          duration = 30;
      }

    endTime.addTime(duration);

}

void DentalAppointment::display()
{
     cout<<"Dental appointment scheduled:"<<endl;
     person.displayPerson();
     cout<< "Appointment date ";
     date.display();
     cout<<"Start time Time is ";
     startTime.displayTime();
     cout<<"End time Time is ";
     endTime.displayTime();



}


int main()
{
    string name1;
    string name2;
    int month;
    int day;
    int year;
    int hour;
    int mins;
    int durationMins;


  for(int x = 0; x < SIZE;++x)
  {
      cout <<"Enter last name for Patient "<<(x+1) << " : ";
      cin >> name1;
      cout <<"Enter first name for Patient "<<(x+1) << " : ";
      cin >> name2;
      cout <<"Enter Month of appointment for Patient "<<(x+1) << " : ";
      cin >> month;
      cout <<"Enter Day for Patient "<<(x+1) << " : ";
      cin >> day;
      cout <<"Enter Year for Patient "<<(x+1) << " : ";
      cin >> year;
      cout <<"Enter Hour for Patient "<<(x+1) << " : ";
      cin >> hour;
      cout <<"Enter Minutes for Patient "<<(x+1) << " : ";
      cin >> mins;
      cout <<"Enter length of appointment in minutes for Patient "<<(x+1) << " : ";
      cin >> durationMins;
      cout <<"\n"<<endl;

      DentalAppointment da(name1,name2,day,month,year,hour,mins,durationMins);
      Time t(hour,mins);
      da.display();
      cout <<"\n"<<endl;

  }


    return 0;
}

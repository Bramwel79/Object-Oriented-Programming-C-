#include<iostream>

using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    static string slash;
public:
    void setDate(int m,int d,int y);
    void showDate();
    int getMonth();
    int getDay();
    int getYear();

};
string Date::slash = "/";

void Date::setMonth(int month)
{
    if(month > 12)
    {
        this->month = 12;
    }
    else
    {
        this->month = month;
    }
}

void Date::setDay(int day)
{
    if(day > 31)
    {
        this->day = 31;
    }
    else
    {
        this->day = day;
    }
}

void Date::setYear(int year)
{

    this->year = year;

}

void Date::setDate(int m,int d,int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);
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

void Date::showDate()
{
    cout <<getDay()<<slash<<getMonth()<<slash<<getYear()<<endl;
}
int main()
{
   Date date1;
   Date date2;

   date1.setDate(13,32,2015);
   date2.setDate(10,20,1979);
   date1.showDate();
   date2.showDate();


    return 0;
}

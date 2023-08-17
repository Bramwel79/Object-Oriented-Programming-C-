#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

class DateException : public runtime_error //public runtime_error
{
    private:
        int month;
        int day;
        int year;
    public:
        DateException(string);
        int getMonth();
        int getDay();
        int getYear();
};

DateException::DateException(string s) :
runtime_error(s)
{

}

int DateException::getMonth()
{
   return month;
}

int DateException::getDay()
{
   return day;
}

int DateException::getYear()
{
   return year;
}

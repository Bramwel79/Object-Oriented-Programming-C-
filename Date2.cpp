#include<iostream>

using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;
    void setMonth(int month);
    void setDay(int month,int day,int year);
    void setYear(int year);
    static string slash;

public:
    void setDate(int m,int d,int y);
    void showDate();
    int getMonth();
    int getDay();
    int getYear();
    int isYearLeap(int year);


};
string Date::slash = "/";

int Date::isYearLeap(int year)
{
    int leap ; // leap == 1 , not leap == 0
    if(year%4 == 0)
      {
          if( year%100 == 0) /* Checking for a century year */
          {
              if ( year%400 == 0)
              {
                leap = 1;
              }
              else
              {
                leap = 0;
              }
          }
          else
          {
            leap = 1;
          }
      }
      else
      {
        leap = 0;
      }
   return leap;
}
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

void Date::setDay(int month,int day,int year)
{
    int leapYr = isYearLeap(year);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day > 31)
            {
               this->day = 31;
            }
            else
            {
              this->day = day;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(day > 30)
            {
               this->day = 30;
            }
            else
            {
               this->day = day;
            }
            break;
        case 2:
           if (leapYr == 0)
           {
               if(day > 28)
               {
                   this->day = 28;
               }
               else
               {
                   this->day = day;
               }
           }
           else
           {
               if(day > 29)
               {
                   this->day = 29;
               }
               else
               {
                   this->day = day;
               }
           }
            break;

       }


        /*To determine whether a year is a leap year, follow these steps:
         If the year is evenly divisible by 4, go to step 2. ...
         If the year is evenly divisible by 100, go to step 3. ...
         If the year is evenly divisible by 400, go to step 4. ...
         The year is a leap year (it has 366 days).
         The year is not a leap year (it has 365 days).*/


}

void Date::setYear(int year)
{

    this->year = year;

}

void Date::setDate(int m,int d,int y)
{
    setMonth(m);
    setDay(m,d,y);
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
   Date date3;
   Date date4;
   Date date5;
   Date date6;
   Date date7;
   Date t;


   //check february 28 days(1700,1800,1900,1971,2006)
   date1.setDate(2,45,1900);
   date2.setDate(2,33,1971);

   //check february 29 days(2012,2004,1968,1200,1600,2000,2400)
   date3.setDate(2,35,2004);

   //check months with 31 days
   date4.setDate(1,45,1980);
   date5.setDate(12,36,1985);

   //check months with 30 days
   date6.setDate(6,31,1990);
   date7.setDate(11,45,2010);

   cout <<"February with 28 days:"<<endl;
   date1.showDate();
   date2.showDate();
   cout <<"\n";

   cout <<"February with 29 days:"<<endl;
   date3.showDate();
   cout <<"\n";

   cout <<"Months with 31 days:"<<endl;
   date4.showDate();
   date5.showDate();
   cout <<"\n";

   cout <<"Months with 30 days:"<<endl;
   date6.showDate();
   date7.showDate();
   cout <<"\n";

    return 0;
}

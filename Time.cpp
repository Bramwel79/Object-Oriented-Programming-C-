#include<iostream>

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

int main()
{
   cout<<"Original Time"<<endl;
   Time time1(25,75);
   time1.displayTime();
   cout << "After addition of minutes"<<endl;
   time1.addTime(10);
   time1.displayTime();
   cout << "***************************"<<endl;
   cout<<"Original Time"<<endl;
   Time time2(12,30);
   time2.displayTime();
   cout << "After addition of minutes"<<endl;
   time2.addTime(15);
   time2.displayTime();
   cout << "***************************"<<endl;
   cout<<"Original Time"<<endl;
   Time time3(14,50);
   time3.displayTime();
   cout << "After addition of minutes"<<endl;
   time3.addTime(20);
   time3.displayTime();
   cout << "***************************"<<endl;
   cout<<"Original Time"<<endl;
   Time time4(23,59);
   time4.displayTime();
   cout << "After addition of minutes"<<endl;
   time4.addTime(2);
   time4.displayTime();
   cout << "***************************"<<endl;
   cout<<"Original Time"<<endl;
   Time time5(12,3);
   time5.displayTime();
   cout << "After addition of minutes"<<endl;
   time5.addTime(6);
   time5.displayTime();
   cout << "***************************"<<endl;
   cout<<"Original Time"<<endl;
   Time time6(23,40);
   time6.displayTime();
   cout << "After addition of minutes"<<endl;
   time6.addTime(260);
   time6.displayTime();
   cout << "***************************"<<endl;
   cout<<"Original Time"<<endl;
   Time time7(23,20);
   time7.displayTime();
   cout << "After addition of minutes"<<endl;
   time7.addTime(260);
   time7.displayTime();
   cout << "***************************"<<endl;
    return 0;
}

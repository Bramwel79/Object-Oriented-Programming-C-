#include<iostream>
#define SIZE 2

using namespace std;

class WeatherReport
{

private:
    int dayOfMonth;
    int highTemp;
    int lowTemp;
    int amountRain;
    int amountSnow;
public:

    WeatherReport(int=99,int=-9999,int=9999,int=0,int=0);
    void getData();
    void display();
    int getDayOfMonth();
    int getHighTemp();
    int getLowTemp();
    int getAmountOfRain();
    int getAmountOfSnow();
    void setHighTemp(int h);
    void setLowTemp(int l);
    void setRainAmount(int r);
    void setSnowAmount(int s);
    friend WeatherReport summary(WeatherReport,WeatherReport);


};

WeatherReport::WeatherReport(int d,int h,int l,int r,int s)
{
  dayOfMonth = d;
  highTemp = h;
  lowTemp = l;
  amountRain = r;
  amountSnow = s;
}

WeatherReport summary(WeatherReport sum,WeatherReport daily)
{
    if (daily.highTemp > sum.highTemp)

        sum.highTemp = daily.highTemp;


    if (daily.lowTemp < sum.lowTemp)

        sum.lowTemp = daily.lowTemp;

    sum.amountRain += daily.amountRain;
    sum.amountSnow += daily.amountSnow;

    return sum;
}

void WeatherReport::getData()
{
    int day,hTemp,lTemp,rain,snow;
    cout <<"Enter Day of Month: ";
    cin >>day;
    cout <<"Enter highest temperature: ";
    cin >>hTemp;
    cout <<"Enter lowest temperature: ";
    cin >>lTemp;
    cout <<"Enter amount of rain: ";
    cin >>rain;
    cout <<"Enter amount of snow: ";
    cin >>snow;

    dayOfMonth = day;
    highTemp = hTemp;
    lowTemp = lTemp;
    amountRain = rain;
    amountSnow = snow;

}
int WeatherReport::getAmountOfRain()
{
    return amountRain;
}
int WeatherReport::getAmountOfSnow()
{
    return amountSnow;
}
int WeatherReport::getDayOfMonth()
{
    return dayOfMonth;
}
int WeatherReport::getHighTemp()
{
    return highTemp;
}
int WeatherReport::getLowTemp()
{
    return lowTemp;
}

void WeatherReport::setHighTemp(int h)
{
    highTemp = h;
}
void WeatherReport::setLowTemp(int l)
{
    lowTemp = l;
}
void WeatherReport::setRainAmount(int r)
{
    amountRain = r;
}
void WeatherReport::setSnowAmount(int s)
{
    amountSnow = s;
}
void WeatherReport::display()
{
    cout <<"Day of Month: "<<getDayOfMonth()<<endl;;
    cout <<"High temp: "<<getHighTemp()<<endl;
    cout <<"Low temp: "<<getLowTemp()<<endl;
    cout <<"Amount of rain: "<<getAmountOfRain()<<endl;
    cout <<"Amount of snow: "<<getAmountOfSnow()<<endl;
}
int main()
{
    WeatherReport month;
    WeatherReport days[SIZE];
    for ( int i = 0; i < SIZE; ++i)
    {
        days[i].getData();
        cout <<"\n"<<endl;

    }

    for ( int j = 0; j < SIZE; j++)
    {
        month = summary(month,days[j]);
    }

    cout <<"\n"<<endl;
    month.display();

    return 0;
}

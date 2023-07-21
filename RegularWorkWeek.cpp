#include<iostream>

using namespace std;

int main()
{
    int hourlyWage;
    const int HOURS_PER_WEEK = 40;
    cout << "Enter Hourly Wage " ;
    cin >> hourlyWage;
    int standardWeeklyPay = hourlyWage * HOURS_PER_WEEK;
    cout << "The standard weekly pay is " << standardWeeklyPay << endl;
    return 0;
}

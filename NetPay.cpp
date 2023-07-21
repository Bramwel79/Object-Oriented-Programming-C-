#include<iostream>

using namespace std;

int main()
{
    int hourlyWage;
    int hoursWorked;
    double withholdingPercent;
    double netWeeklyPay;
    double grossPay;

    cout << "Enter the Hourly wage ";
    cin >> hourlyWage ;
    cout << "Enter number of hours worked ";
    cin >> hoursWorked  ;
    cout << "Enter withholding percent ";
    cin >> withholdingPercent  ;
    grossPay = hoursWorked * hourlyWage;
    netWeeklyPay = (grossPay - (grossPay * withholdingPercent));
    cout << "The Net Pay is " << netWeeklyPay << endl;
    return 0;

}

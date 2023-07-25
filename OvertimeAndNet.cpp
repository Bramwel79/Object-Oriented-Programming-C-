#include<iostream>

using namespace std;

int main()
{
    int hourlyWage;
    int hoursWorked;

    cout << "Enter hourly wage ";
    cin >> hourlyWage;
    cout << "Enter hours worked ";
    cin >> hoursWorked;


    double grossWeeklyPay = 0.0;
    // grossWeeklyPay = hourly wage  * hours worked
    hoursWorked < 40 ? grossWeeklyPay = hoursWorked * hourlyWage : (grossWeeklyPay = hoursWorked * (hourlyWage * 1.5)) ;
    cout << "The Gross Weekly Pay is $ "<< grossWeeklyPay;

   double netPay = 0.0;
   //if gross  > 1000 withholding is 28% of gross
   //else if gross > 600 but < 1000 withholding is 21% of gross
   //else withholding is 10% of gross
   grossWeeklyPay > 1000 ? netPay = (grossWeeklyPay - (grossWeeklyPay * 0.28)):grossWeeklyPay > 600 ?
                          netPay = (grossWeeklyPay - (grossWeeklyPay * 0.21)): netPay = (grossWeeklyPay - (grossWeeklyPay * 0.10));
   cout << "\nThe Net Pay is $ " << netPay;

   return 0;
}

#include<iostream>

using namespace std;

int main()
{
   int hours;
   const int COMPLETE_EIGHT_HOUR_WORK_DAY = 8;
   int completeDays;
   int remainingHours;
   int totalJobCost;
   cout << "Enter hours required to install hardwood floor ";
   cin >> hours;
   completeDays = hours / COMPLETE_EIGHT_HOUR_WORK_DAY;
   remainingHours = (hours - (completeDays * COMPLETE_EIGHT_HOUR_WORK_DAY));
   totalJobCost = ((completeDays * 200) + (remainingHours * 40));
   cout << "The number of complete eight-hour work day is " << completeDays;
   cout << "\nNumber of remaining hours " << remainingHours;
   cout << "\nTotal cost of job is " << totalJobCost;


   return 0;
}

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
   int semesterRate[4] = {300,450,520,590};
   int numberOfMeals;

  cout << "Riley Residence Hall Semester Room and Board Charges\n";
  cout << "****************************************************\n";
  cout << "Enter number of meals(1,2 or 3) desired per day: ";
  cin >> numberOfMeals;

  while(numberOfMeals < 0 || numberOfMeals > 3)
  {
   cout << "Enter an integer between 0 and 3\n";
   cout <<"Re-enter number of meals desired per day: ";
   cin >> numberOfMeals;
  }
  cout << "\n";
  cout <<fixed<<setprecision(2)<< "The semester room and board rate is "
        << semesterRate[numberOfMeals]<< endl;
return 0;
}

#include<iostream>

using namespace std;

int main()
{
  int numberOfMeals= 0;
  double mealPrice1 = 14.99;
  double mealPrice2 = 12.50;
  double mealPrice3 = 10.75;
  double mealPrice4 = 9.45;
  double totalBill = 0.0;

  cout << "*********Carthage Catering*****" <<endl;
  cout << "Enter number of meals desired: " ;
  cin >> numberOfMeals;

  //meals between 1 and 10
  if(numberOfMeals >= 1 && numberOfMeals <= 10)
  {
      cout << "Price per meal is " << mealPrice1 <<endl;
      totalBill = numberOfMeals * mealPrice1;
      cout << "Total Bill is " << totalBill <<endl;;
  }

  //meals between 11 and 20
  if(numberOfMeals >= 11 && numberOfMeals<= 20)
  {
       cout << "Price per meal is " << mealPrice2 <<endl;
      totalBill = numberOfMeals * mealPrice2;
      cout << "Total Bill is " << totalBill <<endl;;
  }

  //meals between 21 and 39
  if(numberOfMeals >= 21 && numberOfMeals <= 39)
  {
       cout << "Price per meal is " << mealPrice3 <<endl;
      totalBill = numberOfMeals * mealPrice3;
      cout << "Total Bill is " << totalBill <<endl;;
  }

  //meals above 40
  if(numberOfMeals >= 40)
  {
       cout << "Price per meal is " << mealPrice4 <<endl;
      totalBill = numberOfMeals * mealPrice4;
      cout << "Total Bill is " << totalBill <<endl;;
  }




  return 0;
}



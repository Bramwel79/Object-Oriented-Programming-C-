#include<iostream>

using namespace std;

struct Car
{
     int modelYear;
     double milesPerGallon;
};
int main()
{
   Car fiat;
   fiat.modelYear = 1967;
   fiat.milesPerGallon = 20500.55;
   cout << "Fiat's model year is ";
   cout <<fiat.modelYear;
   cout << "\nFiat's miles per gallon total is ";
   cout <<fiat.milesPerGallon << endl;
   return 0;



}


#include<iostream>

using namespace std;

int main()
{
    struct Apartment
{
    int numberOfBedrooms;
    int numberOfBaths;
    int monthlyRent;

};
Apartment buruburu;

  cout << "Enter number of Bedrooms desired: ";
  cin >> buruburu.numberOfBedrooms;
  while(buruburu.numberOfBedrooms <= 0)
  {
     cout << "Number of Bedrooms can not be zero or negative." << endl;
     cout << "Re-enter number of Bedrooms desired: ";
     cin >> buruburu.numberOfBedrooms;
  }
  cout << "Enter number of baths desired: ";
  cin >> buruburu.numberOfBaths;
  while(buruburu.numberOfBaths <= 0)
  {
      cout << "Number of Baths can not be zero or negative." << endl;
      cout << "Re-enter number of baths desired: ";
      cin >> buruburu.numberOfBaths;
  }
   //number of baths is 1
  if(buruburu.numberOfBaths == 1)
  {
     if(buruburu.numberOfBedrooms == 1)
     {
        buruburu.monthlyRent = 650;
     }

     else
        if(buruburu.numberOfBedrooms == 2)
        {
           buruburu.monthlyRent = 829;
        }

     else
     {
        cout << "Apartment not available" <<endl;
         buruburu.monthlyRent = 0;
     }


  }
  // number of baths is 2
   else
   {
       if(buruburu.numberOfBedrooms == 1)
       {
           cout << "Apartment not available" <<endl;
           buruburu.monthlyRent = 0;
       }

       else
        if(buruburu.numberOfBedrooms == 2)
        {
           buruburu.monthlyRent = 925;
        }

       else
          buruburu.monthlyRent = 1075;

   }
   cout << ""<<endl;
   cout << "Buruburu Apartments" << endl;
   cout << "*******************" <<endl;
   cout << "Number of bedrooms desired is " << buruburu.numberOfBedrooms <<endl;;
   cout << "Number of baths desired is " << buruburu.numberOfBaths <<endl;
   cout << "Monthly Rent is " << buruburu.monthlyRent <<endl;
   return 0;
}


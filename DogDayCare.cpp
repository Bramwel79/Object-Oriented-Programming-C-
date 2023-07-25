#include<iostream>

using namespace std;

int main()
{
    int dogWeight;
    int days;
    int dailyRate;
    int monthTotal = 0;

    cout << "Bone Jour Dog Day Care Centre";
    cout << "\n*****************************";
    cout << "\nEnter the weight of the dog: ";
    cin >> dogWeight;
    cout <<"\nEnter number of days per month needing care: ";
    cin >> days;
    if( dogWeight <= 10 && (days > 1 && days <= 10))
    {
       dailyRate = 12;
       monthTotal = days * dailyRate;
    }
     else
        if(dogWeight <= 10 && days > 10)
     {
         dailyRate = 10;
         monthTotal = days * dailyRate;
     }

    else
    if((dogWeight > 10 && dogWeight <= 35 )&& (days > 1 && days <= 10))
    {
       dailyRate = 16;
       monthTotal = days * dailyRate;
    }

    else
      if((dogWeight > 10 && dogWeight <= 35 )&& days > 11)
    {

          dailyRate = 13;
          monthTotal = days * dailyRate;


    }
    else
    if(dogWeight > 35 && (days > 1 && days <= 10))
    {
        dailyRate = 19;
        monthTotal = days * dailyRate;
    }

    else
     if(dogWeight > 35 && days > 11 )
    {

          dailyRate = 17;
          monthTotal = days * dailyRate;


    }
        cout << "The month total is " << monthTotal << endl;

      return 0;

}

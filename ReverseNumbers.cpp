#include<iostream>

using namespace std;

int main()
{
   const int SUBSCRIPT = 8;
   int numbers[SUBSCRIPT];
   int number;
   int x;

   //read values from client
   for(x = 0;x< SUBSCRIPT;++x)
   {
       cout <<"Enter value for # " << (x+1) << ": ";
       cin >> number;
       numbers[x] = number;
   }

   //display values in reverse order
   cout <<"\nThe numbers in reverse order are: ";
   cout <<"\n********************************\n";
   for(x = SUBSCRIPT-1;x >= 0 ;--x)
   {
       cout << numbers[x] << " ";
   }



    return 0;
}


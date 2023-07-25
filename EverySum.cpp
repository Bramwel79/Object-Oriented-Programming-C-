#include<iostream>

using namespace std;

int main()
{
    const int LOW_NUMBER = 1;
    const int HIGH_NUMBER = 10;
    int sum = 0;
    int x;
    int y ;

   /*to output 1+2+3...etc*/

    for(x = LOW_NUMBER; x <= HIGH_NUMBER ;++x)
    {
       sum = 1; // reset sum on every loop
       y = 1;
        cout << y;
        while( y < x)
       {
           ++y ; // to get the next y to add to sum
           sum += y;
           cout << " + "  << y ;

       }

       cout <<" = " << sum ;
       cout << "\n";
    }
    sum = 0; //reset to 0 for second method to work correctly
    cout << "************************************************\n";
  /* display 1(the sum of 1 alone),3(the sum of 1 and 2)...etc*/
  for(x = LOW_NUMBER; x <= HIGH_NUMBER ;++x)
    {
      sum += x; //sum is the addition of successive x's
      y = 1;
      cout << sum << "(the sum of " ;
      cout << y;
      while(y < x)
      {

          ++y; //to get the next y
          cout << " " << y  ;

      }
       cout << " )";
       cout << "\n";

    }

  return 0;
}

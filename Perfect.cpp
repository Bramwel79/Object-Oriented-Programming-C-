#include<iostream>

using namespace std;

int main ()
{
    const int MINIMUM_NUMBER = 1;
    const int MAXIMUM_NUMBER = 1000;
    size_t x;
    size_t y;
    int result = 0;
    int sum = 0;

    for( x = MINIMUM_NUMBER;x<= MAXIMUM_NUMBER;++x)
    {
        y = 1;  //reset divisor to 1
        sum = 0;  // reset sum to 0
        int maxDivisor = x /2;

       while((y <= (maxDivisor)))
        {
            result = x % y;

            if(result == 0)
            {

                sum +=y;
            }

           ++y;
        }

         if(x == sum )
         {
            cout << " " << x;

          }
      }


    return 0;
}

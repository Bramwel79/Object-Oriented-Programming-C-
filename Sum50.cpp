#include<iostream>

using namespace std;

int main()
{
    const int LOW_NUMBER = 1;
    const int HIGH_NUMBER = 50;
    int sum = 0;
    int x,y;

    for(x = LOW_NUMBER; x <= HIGH_NUMBER ;++x)
    {
       for(y = LOW_NUMBER; y <= x; ++y)
       {
           sum +=LOW_NUMBER;
       }

    }
     cout << "Sum of integers between " << LOW_NUMBER << " and " <<HIGH_NUMBER <<
            " is " << sum;
  return 0;
}

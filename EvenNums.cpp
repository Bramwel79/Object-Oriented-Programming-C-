#include<iostream>

using namespace std;

int main()
{
    const int LOW_NUMBER = 2;
    const int HIGH_NUMBER = 100;
    int x;
    int result;
    int count = 0;

    cout << "Even numbers between "<< LOW_NUMBER << " and " << HIGH_NUMBER << " are: " <<endl;
    cout << "************************************" <<endl;
    cout << "\n";
    for(x = LOW_NUMBER ; x <= HIGH_NUMBER;++x)
    {
       result = x % 10; //display 5 numbers per row
       if(result == 0)
       {
           cout << "\n";
       }
       if(x % 2 == 0)
       {
          cout << " " << x ;
          ++count;
       }


     }
     cout << "\n";
     cout <<"\nThere are " << count << " even numbers \n" <<
           "between " << LOW_NUMBER << " and " << HIGH_NUMBER << endl;
     return 0;

 }



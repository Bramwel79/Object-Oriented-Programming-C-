#include<iostream>

using namespace std;

int main()
{
    const int LOW_NUMBER = 1;
    const int HIGH_NUMBER = 20;
    int x;
    int squaredValue;

     cout << "Number" <<" Squared Value";
     cout << "\n";

    for(x = LOW_NUMBER ; x <= HIGH_NUMBER;++x)
    {
        cout << x << "      "<< x*x;
        cout << "\n";
    }

    return 0;

}

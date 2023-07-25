#include<iostream>

using namespace std;

int main()
{
    int one;
    int two;
    int inBetween;
    int x;

    cout << "Enter first integer: ";
    cin >> one;

    cout << "Enter second integer: ";
    cin >> two;

    for(x = one+1; x < two;++x)
    {
        cout  << x << " ";
    }


    return 0;
}

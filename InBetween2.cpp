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

    while(two <= one)
    {
        cout << "Second integer must be greater than first integer.";
        cout << "\nRe-enter second integer: ";
        cin >> two;
    }
    cout << " ";
    cout << "\nIntegers in between " << one << " and " << two << " are: ";
    for(x = one+1; x < two;++x)
    {
        cout  << x << " ";
    }


    return 0;
}

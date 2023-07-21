#include<iostream>

using namespace std;

int main()
{
    int cents;
    int dollars;
    const int CENTS_PER_DOLLAR = 100;
    cout << "Enter amount in cents ";
    cin >> cents;
    dollars = cents / CENTS_PER_DOLLAR;
    cout << "Give the customer " << dollars << " dollars";
    return 0;

}

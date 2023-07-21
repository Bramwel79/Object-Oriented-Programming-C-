#include<iostream>

using namespace std;

int main()
{
    int cents;
    int nickels;
    int quarters;
    int dollars;
    const int CENTS_PER_DOLLAR = 100;
    const int NICKELS_PER_CENT = 5;
    const int QUARTERS_PER_CENT = 25;
    cout << "Enter amount in cents ";
    cin >> cents;
    cout << "\nEnter amount in nickels ";
    cin >> nickels;
    cout << "\nEnter amount in quarters ";
    cin >> quarters;
    cents += ((nickels /NICKELS_PER_CENT) + (quarters /QUARTERS_PER_CENT));
    dollars = cents / CENTS_PER_DOLLAR;
    cout << "Give the customer " << dollars << " dollars";
    return 0;

}


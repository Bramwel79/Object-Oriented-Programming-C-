#include<iostream>

using namespace std;

int main()
{
    int input;
    const int LOW_NUMBER = 1;
    const int HIGH_NUMBER = 10;


    cout << "Enter a number between " << LOW_NUMBER << " and " << HIGH_NUMBER << " :";
    cin >> input;

    while(input <= LOW_NUMBER || input >= HIGH_NUMBER)
    {
       cout << "Re-enter a number between " << LOW_NUMBER << " and " << HIGH_NUMBER << ": ";
       cin >> input;
    }
    if(input)
    {
        cout <<" You input was correct.";
    }

    return 0;
}

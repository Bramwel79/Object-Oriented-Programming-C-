#include<iostream>

using namespace std;

int main()
{
    int input;
    const int LOW_NUMBER = 1;
    const int HIGH_NUMBER = 10;
    int x;


    cout << "Enter a number between " << LOW_NUMBER << " and " << HIGH_NUMBER << ": ";
    cin >> input;

    while(input <= LOW_NUMBER || input >= HIGH_NUMBER)
    {
       cout << "Re-enter a number between " << LOW_NUMBER << " and " << HIGH_NUMBER << ": ";
       cin >> input;
    }
    if(input)
    {
        cout << "Message will appear " << input << " times" <<endl;
        for(x =0 ; x < input; ++x)
        {
          cout << x+1 <<" You input was correct.";
          cout << "\n";
        }

    }

    return 0;
}


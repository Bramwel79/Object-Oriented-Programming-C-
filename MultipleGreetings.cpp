#include<iostream>

using namespace std;

int main()
{
    int times;
    int x;
    cout << "Enter the number of times you want message to display: " ;
    cin >> times;

    for(x = 0 ; x < times; ++x)
    {
        cout << x+1 << " " << "Looping in C++" ;
        cout << "\n";
    }
    return 0;
}

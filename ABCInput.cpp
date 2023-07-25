#include<iostream>

using namespace std;

int main()
{
    char a = 'A';
    char b = 'B';
    char c = 'C';
    char q = 'Q';
    char input;

    cout << "Enter Character A,B or C. Enter Q to quit: ";
    cin >> input;
    while(input != q)
    {
        if(input == a || input == b || input == c) // correct characters
        {
            cout << "Good job!" <<endl;
            cout << "Enter Character A,B or C. Enter Q to quit: ";
            cin >> input;
        }
        else
        if(input != a || input != b || input != c || input != q) // wrong characters
        {
            cout << "You input the wrong character" << endl;
            cout <<"Re-enter character. Enter Q to quit: ";
            cin >> input;

        }


    }

}

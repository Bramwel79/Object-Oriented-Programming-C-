#include<iostream>

using namespace std;

int main()
{
    char input;
    cout << "Enter a character: ";
    cin >> input;
    if(input == 'a' || input == 'A' || input == 'e' ||
        input == 'E' || input == 'i' || input == 'I' ||
        input == 'o' || input == 'O' || input == 'u' ||
        input == 'U')
        cout << "OK";
        else
            cout << "You entered a consonant";

    return 0;
}


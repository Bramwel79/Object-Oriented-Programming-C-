#include<iostream>

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;

    cout << "Enter the first number ";
    cin >> firstNumber;
    cout << "Enter the second number ";
    cin >> secondNumber;

    if(firstNumber > secondNumber)
        cout << "The first number you entered is larger" ;
        else
            cout << "The first number you entered is not larger";

}

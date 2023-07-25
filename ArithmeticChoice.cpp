#include<iostream>

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    char operation;
    int solution = 0;

    cout << "Enter the first number ";
    cin >> firstNumber;
    cout << "Enter the second number ";
    cin >> secondNumber;
    cout << "Choose  a for add\n\ts for subtract\n\tm for multiply or d for divide: ";
    cin >> operation;

    switch (operation)
    {
        case  'a' :
        solution = firstNumber + secondNumber;
        cout << " The answer is " << solution;
        break;

        case  's' :
        solution = firstNumber - secondNumber;
        cout << " The answer is " <<solution;
        break;

        case  'm' :
        solution = firstNumber * secondNumber;
        cout << " The answer is " <<solution;
        break;

        case  'd' :
        solution = firstNumber / secondNumber;
        cout << " The answer is " <<solution;
        break;

        default :
        cout << "Wrong selection" ;
    }
}

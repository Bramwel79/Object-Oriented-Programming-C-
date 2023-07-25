#include<iostream>

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    char operation;
    int solution = 0;
    string answer = "The answer is ";

    cout << "Enter the first number ";
    cin >> firstNumber;
    cout << "Enter the second number ";
    cin >> secondNumber;
    cout << "";
    cout << "*********Make a choice*******";
    cout << "\nChoose  a or A or + for add";
    cout << "\ns or S or _ for subtract";
    cout << "\nm or M or * for multiply";
    cout << "\nd or D or / for divide: "<<endl;
    cin >> operation;

    switch (operation)
    {
        case  'a' :
        case  'A' :
        case  '+' :
        solution = firstNumber + secondNumber;
        cout << answer << solution;
        break;

        case  's' :
        case  'S' :
        case  '-' :
        solution = firstNumber - secondNumber;
        cout << answer <<solution;
        break;

        case  'm':
        case  'M':
        case '*' :
        solution = firstNumber * secondNumber;
        cout << answer  <<solution;
        break;

        case  'd':
        case  'D':
        case  '/' :
        solution = firstNumber / secondNumber;
        cout << answer  <<solution;
        break;

        default :
        cout << "Wrong choice" ;
    }
    return 0 ;
}

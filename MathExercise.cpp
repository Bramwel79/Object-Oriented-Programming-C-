#include<iostream>

using namespace std;

int main()
{
    int firstValue;
    int secondValue;
    int add;
    int subtract;
    int multiply;
    int divide;
    cout << "Enter the first value ";
    cin >> firstValue;
    cout << "\nEnter the second value ";
    cin >> secondValue;
    add = firstValue + secondValue;
    subtract = firstValue - secondValue;
    multiply = firstValue * secondValue;
    divide = firstValue / secondValue;

    cout << "\n************************";
    cout << "\nThe addition result is " << add;
    cout << "\nThe subtraction result is " << subtract;
    cout << "\nThe multiplication result is " << multiply;
    cout << "\nThe division result is " << divide;
    return 0;

}

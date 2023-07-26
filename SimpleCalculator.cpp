#include<iostream>

using namespace std;

int getIntegerOne();
int getIntegerTwo();
char getFunctionCharacter();
void doAddition();
void doSubtraction();
void doMultiplication();


int main()
{
    getFunctionCharacter();
    return 0;
}

int getIntegerOne()
{
    int no;
    cout <<"Enter Integer one: ";
    cin >> no;

    return no;
}
int getIntegerTwo()
{
    int no;
    cout <<"Enter Integer two: ";
    cin >> no;

    return no;
}
char getFunctionCharacter()
{
    char c;
    cout <<"A for addition."<<endl;
    cout <<"S for subtraction."<<endl;
    cout <<"M for multiplication."<<endl;
    cout <<"\n";
    cout <<"Enter character: ";
    cin >>c;

    switch(c)
    {
       case 'A':
           doAddition();
           break;
       case 'S':
           doSubtraction();
           break;
       case 'M':
           doMultiplication();
           break;
       default:
           cout <<"Wrong character choice";

    }

}

void doAddition()
{
    int number1;
    int number2;
    int result;
    number1 = getIntegerOne();
    number2 = getIntegerTwo();
    result = number1 + number2;

    cout <<number1 <<" + " <<number2 << " = "<<result;


}

void doSubtraction()
{
    int number1;
    int number2;
    int result;
    number1 = getIntegerOne();
    number2 = getIntegerTwo();
    result = number1 - number2;

    cout <<number1 <<" - " <<number2 << " = "<<result;

}

void doMultiplication()
{
    int number1;
    int number2;
    int result;
    number1 = getIntegerOne();
    number2 = getIntegerTwo();
    result = number1 * number2;

    cout <<number1 <<" * " <<number2 << " = "<<result;
}

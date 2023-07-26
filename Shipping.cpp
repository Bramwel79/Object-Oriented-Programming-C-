#include<iostream>

using namespace std;

int main()
{
    const int SUBSCRIPT = 4;
    char shippingCode[SUBSCRIPT]= {'a','t','r','h'};
    double shippingRate[SUBSCRIPT]={14.95,10.25,8.75,25.99};
    char input;

    cout << "The shipping codes are:\n";
    cout << "a for air\n";
    cout << "t for truck\n";
    cout << "r for rail\n";
    cout << "h for hand delivery";

    cout << "\n";
    cout << "\nEnter your shipping code: ";
    cin >> input;

    switch(input)
    {
    case 'a':
        cout << "The shipping rate is " << shippingRate[0];
        break;
    case 't':
        cout << "The shipping rate is " << shippingRate[1];
        break;
    case 'r':
        cout << "The shipping rate is " << shippingRate[2];
        break;
    case 'h':
        cout << "The shipping rate is " << shippingRate[3];
        break;
    default:
        cout << "Wrong shipping code";


    }



    return 0;
}

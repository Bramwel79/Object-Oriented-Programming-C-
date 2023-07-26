#include<iostream>

using namespace std;

int main()
{
    const int SUBSCRIPT = 5;
    int addressArray[SUBSCRIPT] = {128,204,601,609,612};
    int rentArray[SUBSCRIPT] = {500,750,495,800,940};
    int address;


    cout << "Enter the address of the house: ";
    cin >> address;
    switch (address)
    {
    case 128:
        cout << "The rent of the house is $" << rentArray[0];
        break;
    case 204:
        cout << "The rent of the house is $" << rentArray[1];
        break;
    case 601:
        cout << "The rent of the house is $" << rentArray[2];
        break;
    case 609:
        cout << "The rent of the house is $" << rentArray[3];
        break;
    case 612:
        cout << "The rent of the house is $" << rentArray[4];
        break;
    default:
        cout << "Wrong house address";


    }



    return 0;
}

#include<iostream>

using namespace std;

int getNumberOfDrawers();
char getTypeOfWood();
int calculateCostOfDesk();
void displayPrice();
const int PINE_DESK_COST = 100;
const int OAK_DESK_COST = 140;
const int OTHERS = 180;
const int SURCHARGE = 30;


int main()
{
    displayPrice();
    return 0;
}

int getNumberOfDrawers()
{
    int no;
    cout <<"Enter number of Drawers: ";
    cin >> no;

    return no;
}

char getTypeOfWood()
{
    char c;
    cout <<"m for mahogany"<<endl;
    cout <<"o for oak"<<endl;
    cout <<"p for pine"<<endl;
    cout <<"\n";
    cout <<"Enter type of wood: ";
    cin >>c;

    return c;
}

int calculateCostOfDesk()
{
    int amount = 0;
    int drawers = getNumberOfDrawers();
    char woodType = getTypeOfWood();

    switch(woodType)
    {
       case 'm':
           amount = (OTHERS + (drawers * SURCHARGE));
           break;
       case 'o':
           amount = (OAK_DESK_COST + (drawers * SURCHARGE));
           break;
       case 'p':
           amount = (PINE_DESK_COST + (drawers * SURCHARGE));
           break;
       default:
           cout <<"Wrong wood type"<<endl;


    }

    return amount;
}

void displayPrice()
{
    int price = calculateCostOfDesk();
    cout <<"The total price is " <<price<<endl;
}

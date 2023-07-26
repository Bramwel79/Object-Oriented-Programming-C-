#include<iostream>

using namespace std;

int amount;
int drawers;
char woodType;
void getNumberOfDrawers();
void getTypeOfWood();
void calculateCostOfDesk(int&,char&);
void displayPrice();
const int PINE_DESK_COST = 100;
const int OAK_DESK_COST = 140;
const int OTHERS = 180;
const int SURCHARGE = 30;


int main()
{
    getNumberOfDrawers();
    getTypeOfWood();
    calculateCostOfDesk(drawers,woodType);
    displayPrice();
    return 0;
}

void getNumberOfDrawers()
{
    cout <<"Enter number of Drawers: ";
    cin >> drawers;

}

void getTypeOfWood()
{

    cout <<"m for mahogany"<<endl;
    cout <<"o for oak"<<endl;
    cout <<"p for pine"<<endl;
    cout <<"\n";
    cout <<"Enter type of wood: ";
    cin >>woodType;

}

void calculateCostOfDesk(int& drawers,char& woodType)
{
    amount = 0;
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
    cout <<"The cost of Desk is " <<amount<<endl;

}

void displayPrice()
{
    cout <<"The total price is " <<amount<<endl;
}

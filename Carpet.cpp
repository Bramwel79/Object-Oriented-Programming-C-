#include<iostream>


using namespace std;

struct Carpet
{
    int lengthInFeet;
    int widthInFeet;
};
void displayArea(Carpet c);

int main()
{
     Carpet cp;
     cout <<"Enter carpet length in feet: ";
     cin >>cp.lengthInFeet;
     cout <<"Enter carpet width in feet: ";
     cin >>cp.widthInFeet;

     displayArea(cp);

    return 0;
}

void displayArea(Carpet c)
{
    int area;
    area = c.lengthInFeet * c.widthInFeet;
    cout <<"The area is " <<area<<endl;
}

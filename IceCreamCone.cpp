#include<iostream>

using namespace std;
const int SCOOP_PRICE =75;
const int WAFFLE_ADDITION = 40;
const string WAFFLE = "waffle";

class IceCreamCone
{
private:
    string flavour;
    int numberOfScoops;
    string coneType;
    int price;

public:
    IceCreamCone(string="Vanilla",int=1,string="Sugar");
    int getPrice();
    void displayIceCreamDetails();
};

IceCreamCone::IceCreamCone(string flavour,int scoops,string coneType)
{
    this->flavour = flavour;
    numberOfScoops = scoops;
    this->coneType = coneType;
    if(coneType == WAFFLE)
    {
        price = ((numberOfScoops * SCOOP_PRICE) +
                WAFFLE_ADDITION);
    }
    else
    {
         price = numberOfScoops * SCOOP_PRICE;
    }

}
int IceCreamCone::getPrice()
{
    return price;
}

void IceCreamCone::displayIceCreamDetails()
{
    cout <<"Flavour is " <<flavour<<endl;
    cout <<"Number of scoops is " <<numberOfScoops<<endl;
    cout <<"Cone Type is " <<coneType<<endl;
    cout <<"Price is "<<getPrice();
}
int main()
{
   cout <<"Showing default settings"<<endl;
   IceCreamCone crema;
   crema.displayIceCreamDetails();
   cout <<"\n"<<endl;

   cout <<"Showing one with arguments"<<endl;
   IceCreamCone buona("Strawberry",10,WAFFLE);
   buona.displayIceCreamDetails();


    return 0;
}


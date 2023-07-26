#include<iostream>

using namespace std;

struct Shirt
{
    int collarSize;
    int sleeveLength;
};

struct Pants
{
    int waistSize;
    int inSeam;
};
void displayClothingFacts(Shirt shirt);
void displayClothingFacts(Pants pants);

int main()
{
    Shirt shirt;
    Pants pants;

    cout <<"Enter collar size of shirt: ";
    cin >>shirt.collarSize;
    cout <<"Enter sleeve length of shirt: ";
    cin >>shirt.sleeveLength;
    cout<<"\n";
    cout <<"Enter waist size of pants: ";
    cin >>pants.waistSize;
    cout <<"Enter in seam of pants: ";
    cin >>pants.inSeam;
    cout<<"\n";

    displayClothingFacts(shirt);
    displayClothingFacts(pants);


    return 0;
}

void displayClothingFacts(Shirt shirt)
{
    cout <<"Shirt details:"<<endl;
    cout <<"**************"<<endl;
    cout <<"Collar Size: "<<shirt.collarSize<<endl;
    cout <<"Sleeve Length: "<<shirt.sleeveLength<<endl;
}

void displayClothingFacts(Pants pants)
{
    cout <<"Pants details:"<<endl;
    cout <<"**************"<<endl;
    cout <<"Waist Size: "<<pants.waistSize<<endl;
    cout <<"In seam: "<<pants.inSeam<<endl;
}

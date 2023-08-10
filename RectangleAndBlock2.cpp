#include<iostream>

#include "Block.cpp"

using namespace std;

int main()
{

   Rectangle one(30,20);
   one.displayValues();

   cout <<"\n";

   one.setLength(45);
   one.setWidth(15);
   one.displayValues();
   int area = one.computeArea();
   cout <<"Area of rectangle is "<<area<<endl;

   cout <<"\n";

   Block b(45,15,10);
   b.displayValues();

   cout <<"\n";

    b.setHeight(20);
    b.displayValues();
    int volume = b.computeArea();
    cout <<"Volume of block  is "<<volume<<endl;

    return 0;
}

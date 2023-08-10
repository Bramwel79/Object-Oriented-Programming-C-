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

   cout <<"\n";

   Block b(65,13,10);
   b.displayValues();

   cout <<"\n";

   b.setHeight(25);
   b.displayValues();





    return 0;
}

#include<iostream>

#include "NationalAnthem.cpp"

using namespace std;

int main()
{
   MusicalComposition mc("Sweet Love","Anita Baker",1986);
   mc.display();
   cout <<"\n";
   NationalAnthem na("Caught up in the rupture","Anita Baker",1986,"USA");
   na.display();

    return 0;
}

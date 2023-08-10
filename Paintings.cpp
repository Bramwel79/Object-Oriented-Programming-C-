#include<iostream>

#include "FamousPainting.cpp"
#define SIZE 10

using namespace std;

int main()
{
   int x;
   string title;
   string artist;
   Painting paintings[SIZE];

   for(x = 0; x < SIZE;++x)
   {
       cout<<"Enter painting title no "<<(x+1) << ": " ;
       cin >> title;
       cout<<"Enter artist name no "<<(x+1) << ": " ;
       cin >> artist;
       cout<<"\n";
       if(artist == "Degas" || artist == "Monet" ||
          artist == "Picasso" || artist == "Rembrandt")
       {
           paintings[x] = FamousPainting(title,artist);
       }
       else
       {
           paintings[x] = Painting(title,artist);
       }

   }

   for(x = 0; x < SIZE; ++x)
   {
       paintings[x].displayPainting();
       cout<<"\n";
   }



    return 0;
}

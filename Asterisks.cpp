#include<iostream>
#define TIMES 10
using namespace std;

template<class T>
T asterisks(T ast)
{
   for(int x = 0 ;x < TIMES;++x)
   {
       cout<<"*";
   }

   cout << ast;

   for(int x = 0 ;x < TIMES;++x)
   {
       cout<<"*";
   }

   cout <<"\n"<<endl;

}

int main()
{

    asterisks("r");
    asterisks(5);
    asterisks(2.5);
    asterisks("testing");
    return 0;
}

#include<iostream>
#include "Employee.cpp"
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
    Employee alf("Alf",45,'M');
    asterisks(alf);
    return 0;
}

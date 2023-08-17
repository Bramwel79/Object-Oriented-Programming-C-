#include<iostream>
#include<string>
#include<stdexcept>
//#include "DateException.cpp"
#include "Date.cpp"
#define ARRAY_SIZE 5

using namespace std;


int main()
{
    Date dates[ARRAY_SIZE];
    int x;

        for(x = 0; x < ARRAY_SIZE;++x)
        {
           try
           {
               cin >> dates[x];
           }

           catch(DateException d)
           {
                cout << d.what();
                cout <<"\nEntered value = " << dates[x].getValue();
                dates[x].setDay(1);
                dates[x].setMonth(1);
                dates[x].setYear(2010);
           }

        }

        //print out
        cout <<"\n"<<endl;
        for(x = 0; x < ARRAY_SIZE;++x)
        {
            cout << dates[x] <<endl;
        }

    return 0;
}

#include<iostream>

using namespace std;

int getInteger();
void multiplicationTable();

int main()
{
    multiplicationTable();

    return 0;
}
 int getInteger()
 {
     int number;
     cout <<"Input integer: ";
     cin >> number;

     return number;

 }

 void multiplicationTable()
 {
     int no = getInteger();
     for(int x = 2 ; x <= 10;++x)
     {
         int result = no * x;
         cout <<no << " * " << x << " = "<<result;
         cout <<endl;
     }

 }

#include<iostream>
#include "BankAccount.cpp"

using namespace std;

template <class T>
T produceReport(string title, T elements[],int rows)
{
    int x;
    int y;
    cout << title <<endl;
    for( x = 0; x < sizeof(elements);++x)
    {
        cout <<elements[x]<<endl;
        for(y = sizeof(elements); y <= sizeof(elements) ;++y)
        {
            cout <<"---------------"<<endl;
        }

    }
    cout <<"End of report"<<endl;

}

int main()
{
    int integers[] = {1,2,3,4,5};
    produceReport("Integers",integers,5);

    return 0;
}
